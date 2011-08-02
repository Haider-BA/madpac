// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_BUILTIN_GEOMETRY_H_
#define _GEOMETRY_BUILTIN_GEOMETRY_H_

#include <bitset>
#include <string>
#include <vector>

#include "tarch/logging/Log.h"
#include "peano/utils/Globals.h"
#include "tarch/la/Vector.h"
#include "peano/geometry/Geometry.h"



namespace peano {
  namespace geometry {
    namespace builtin {
      class AbstractGeometry;
    }
  }
}

/**
 *
 * Interface for a number of (handcoded) domain classes. This interface defines
 * a component specific view onto the geometry and should not be used directly, but
 * using an adapter mapping the geometry specific view onto the view (data
 * types) required by the using component.
 *
 * As mentioned there's a bulk of predefined geometries implementing this
 * interface. For real world problems one could write your own stand alone
 * geometry class without virtual functions and write a corresponding adapter.
 * For most applications it is sufficient to implement this class or a subclass
 * for the number of geometry calls is negligible compared to the whole number
 * of operations required for any computation.
 *
 * @author Tobias Weinzierl, Tobias Neckel, Michael Lieb
 * @version $Revision: 2.00 $
 */
class peano::geometry::builtin::AbstractGeometry: public peano::geometry::GeometryObject {
  private:
  	 /**
     * Holds if the geometry is inverted. Is set in the constructor.
     */
    bool _isInverted;

  protected:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Abstract declaration. This method has to be implemented in concrete
     * geometries.
     */
    virtual bool isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) = 0;
    /**
     * Abstract declaration. This method has to be implemented in concrete
     * geometries.
     */
    virtual bool isCompletelyInsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) = 0;

    virtual bool isOutsideClosedDomainNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x ) = 0;

    /**
     * \brief This method computes the perpendicular point and the distance of a
     *        given point in space vis-a-vis a given straight line.
     *
     * The straight line g is defined in point-direction-form by the two
     * parameters origin (O) and direction (v). See the following image for a
     * survey:
     * @image html geometry_Geometry_computePerpendicularPointAndDistanceToStraightLine.gif
     *
     * First, the perpendicular point P is computed via the following
     * considerations: Let g be the straight line
     * \f$ g:\ Y=O+\lambda v, \ \lambda \in \mathbb{R} \f$
     * with \f$ \|v\|=1 \f$. The perpendicular straight line going through
     * the given point X may be stated as \f$ h: \ Y=X+\mu w,\ \mu \in \mathbb{R} \f$
     * with the direction vector \f$ w=P-X \f$. Now, two conditions have to hold
     * for this scenario:
     * \f{eqnarray*}
     *   g\perp h &\Leftrightarrow& \langle v,w \rangle = 0 \ \Leftrightarrow \
     *                              \langle v,P-X \rangle = 0\\
     *   P\in g &\Leftrightarrow& P=O+\lambda v.
     * \f}
     *
     * From this, we get the following solution formula for P:
     * \f{eqnarray*}
     *   \langle v, O+\lambda v - X \rangle = 0 &\Leftrightarrow&
     *            \langle v, O-X \rangle + \lambda \langle v, v \rangle= 0 \\
     *   &\Leftrightarrow& \lambda = -\frac{1}{\|v\|^2}\langle v, O-X \rangle
     *            \ \Rightarrow \ \fbox{$P = O+\lambda v$} \ .
     * \f}
     *
     * Considering the distance from x to the straight line, we simply have to
     * compute
     * \f{eqnarray*} \|w\| = \|P-X\| = \sqrt{\sum_{i=1}^D \left( P_i- X_i \right)^2} .
     * \f}
     *
     * Precondition: The direction vector v must not be the zero-vector.
     *
     * This method has originally been located in geometry::Tube. Since it is
     * more of general interest in the geometry component, we decided to put it
     * here. Since Geometry is a mere abstract class, we kept the original test
     * geometry::TubeTest::testComputePerpendicularPointAndDistanceToStraightLine().
     *
     * @param origin    Origin point of the straight line.
     * @param direction Axis direction vector of the straight line (does not
     *                  have to be normalised).
     * @param x         Point under consideration.
     * @param distance  Return reference for resulting distance to specified line.
     *
     * @return Perpendicular point on axis of specifiedstraight line.
     *
     * @todo Check ob das richtiger Ort ist ...
     */
     tarch::la::Vector<DIMENSIONS,double> computePerpendicularPointAndDistanceToStraightLine(
       const tarch::la::Vector<DIMENSIONS,double>& origin,
       const tarch::la::Vector<DIMENSIONS,double>& direction,
       const tarch::la::Vector<DIMENSIONS,double>& x,
       double&       distance
     ) const;
     /**
     * \brief This method computes the cosine (in rad) of the angle specified by
     *        two given tarch::la::Vector<DIMENSIONS,double>s.
     *
     * The method computes the angle \f$ \alpha \f$ between the two vectors a
     * and b according to the following formula (\f$ \| . \| \f$ beeing the
     * Euclidean norm and \f$ \langle .,. \rangle \f$ the standard scalar (or
     * dot) product):
     * \f{eqnarray*}
     *   \cos(\alpha) &=& \frac{\langle a,b \rangle}{\| a \| \ \| b \|}
     * \f}
     *
     * This method has originally been located in geometry::Tube. Since it is
     * more of general interest in the geometry component, we decided to put it
     * here. Since AbstractGeometry is a mere abstract class, we kept the original test
     * geometry::TubeTest::testComputeCosineOfAngleBetweentarch::la::Vector<DIMENSIONS,double>s().
     *
     * @param a Reference of the first vector of the angle.
     * @param b Reference of the second vector of the angle.
     *
     * @return \f$ \cos(alpha) \f$
     *
     * @todo Check ob das richtiger Ort ist ...
     */
     double computeCosineOfAngleBetweenVectors(const tarch::la::Vector<DIMENSIONS,double>& a, const tarch::la::Vector<DIMENSIONS,double>& b) const ;

  public:
    /**
     * Constructor checking via assertions if _maxMeshWidth >= _minMeshWidth in
     * each dimension.
     *
     * @param maxMeshWidth tarch::la::Vector<DIMENSIONS,double> of maximum mesh width h_max in each dimension.
     * @param minMeshWidth tarch::la::Vector<DIMENSIONS,double> of minimum mesh width h_max in each dimension.
     * @param velocity Translational velocity for this object.
     * @param rotationAxis d-dimensional vector defining the axis this object rotates around.
     * @param rotationVelocity Velocity of the rotation of this object.
     * @param offset tarch::la::Vector<DIMENSIONS,double> that holds the offset (i.e. translation from origin) for this geometry.
     * @param isInverted   Flag that holds if the geometry is inverted or not.
     */
    AbstractGeometry(
      bool          isInverted
    );

    /**
     * Standard destructor.
     */
    virtual ~AbstractGeometry();

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
     * The query is not const anymore, as PreCICE might want to change the
     * underlying spacetree structure.
     *
     */
    bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

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
     * The query is not const anymore, as PreCICE might want to change the
     * underlying spacetree structure.
     *
     */
    bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

};

#endif
