// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_DRIFT_RATCHET_H_
#define _GEOMETRY_DRIFT_RATCHET_H_

#include "peano/geometry/builtin/AbstractGeometry.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      class DriftRatchet;

      namespace tests {
        /**
         * Forward declaration for test.
         */
        class DriftRatchetTest;
      }
    }
  }
}

/**
 * Represents the built in drift ratchet geometry from Schindler.
 *
 * A drift ratchet geometry is infinitely long. Thus, one always has to
 * intersect it with a box in order to specify the inlet and outlet (left/right)
 * borders. Thus, the former attributes _length, _leftGeometryIndex, and
 * _rightGeometryIndex are not needed any longer. Therefore, we only have one
 * constructor left now.
 *
 * The offset, nevertheless, is still needed, since we have to be able to
 * translate the drift ratchet in all directions.
 *
 * The rotation axis currently is fixed to the x-axis. The drift ratchet has
 * infinite length, i.e. it has to be cut with a hexahedron to end up with a
 * finite computational domain.
 *
 * @author Tobias Weinzierl, Tobias Neckel
 * @version $Revision: 1.12 $
 */
class peano::geometry::builtin::DriftRatchet: public peano::geometry::builtin::AbstractGeometry {
  private:
    /**
     * Friend declaration for DriftRatchetTest.
     */
    friend class tests::DriftRatchetTest;

    /**
     * Log device.
     */
    static tarch::logging::Log _log;

    /**
     * Default cPore parameter (equal to 0.61). Is currently used for _CPore.
     */
    static double DefaultCPore;

    /**
     * The radius at a given depth z has to be computed recursively. This
     * constant determines the number of recursive steps.
     */
    static const int _MAX_RECURSION_DEPTH;

    /**
     * Holds the maximum radius of the drift ratchet (set in the constructor).
     */
    double _maxRadius;
    /**
     * Holds the minimum radius of the drift ratchet (set in the constructor).
     */
    double _minRadius;

    /**
     * Holds the offset of the drift ratchet, i.e. the translation of the center of the geometry.
     *
     * @todo: Correct comment
     */
    const tarch::la::Vector<DIMENSIONS,double> _offset;

    /**
     * Parameter necessary for the computation of the sine function in getG().
     */
    double _CPore;

    /**
     * This method decides if a given point x is in the closed drift ratchet.
     * Only the distance to the rotation axis in the plane normal to the x0-axis
     * is compared to the corresponding radius value.
     *
     * It is used by isCompletelyOutsideNotInverted() and
     * isCompletelyInsideNotInverted().
     *
     * @see isInsideOpenDriftRatchet()
     */
    bool isInsideClosedDriftRatchet( const tarch::la::Vector<DIMENSIONS,double>& x ) const;
    /**
     * This method decides if a given point x is in the open drift ratchet.
     * Only the distance to the rotation axis in the plane normal to the x0-axis
     * is compared to the corresponding radius value.
     *
     * It is used by isCompletelyOutsideNotInverted() and
     * isCompletelyInsideNotInverted().
     *
     * @see isInsideClosedDriftRatchet()
     */
    bool isInsideOpenDriftRatchet( const tarch::la::Vector<DIMENSIONS,double>& x ) const;

    /**
     * This method uses the y-z-coordinates of the offset in order to compute
     * the distance to the rotation axis (i.e. x-axis).
     */
    double getDistanceFromRotationAxis(
      const tarch::la::Vector<DIMENSIONS,double>& x
    ) const;
    /**
     * This method is used to compute g (?).
     *
     * It is used in getRadius().
     */
    double getG( double z, int remainingIterations ) const;

    /**
     * This method computes iteratively the radius (with parameter z). It uses
     * getG().
     *
     * Here, the shift of the axis coordinate due to the normalisation (i.e. the
     * minimum radius position at the offset) and due to the offset is included.
     *
     * For the normalisation, we use the method
     * getExtremeCoordinateInAxisDirection().
     *
     * @return The radius computed.
     */
    double getRadius( double z ) const;

    /**
     * This method returns the hard coded characteristic length L from the
     * formula @f$ \frac{r_{\textrm{max}}}{2.40} \cdot 8.4 @f$.
     */
    double getCharacteristicLength() const;

    /**
     * This method computes the nth extreme point coordinate in (x-) axis
     * direction of the drift ratchet (usually n is 0 or 1).
     *
     * The value is calculate according to the formula
     * @f$ x_n = ((-1)^n \frac{C_{pore}}{2\pi} + \frac{1}{4} + \frac{n}{2}) \cdot L @f$.
     * where L is the characteristic length (i.e. return of
     * getCharacteristicLength()) and @f$ C_{pore} @f$ is _CPore (0.61
     * by default).
     *
     * The return value of this method for n=0 is used in order to fix the drift
     * ratchet minimum radius part to the offset coordinates (see also
     * getRadius() ). n=1 would give the maximum radius.
     *
     * The decision if n is even or odd for the sign decision is done by the
     * following bitwise AND with one:
\code
(n & 1)!=0
\endcode
     * If the above statement is true, we have an odd value of n (i.e. sign=-1).
     *
     * @param n Number of extreme point (usually 0).
     *
     * @return  xn: nth extreme point coordinate in axis direction.
     */
    double getExtremeCoordinateInAxisDirection(const int n) const;

    /**
     * This method always returns maxRadius / 2.40 * 1.25.
     */
    static double getDefaultMinRadius(double maxRadius);

  protected:
    /**
     * This method decides if a given point x with a certain resolution lies
     * completely outside the computational (fluid) domain.
     *
     * We encountered a strange refinement behaviour (see image below) at the
     * inlet of an intersection with a unit square. This mus be the case
     * (currently) due to periodicity of the DriftRatchet that does not know
     * anything about its length/cutting.
     *
     * @image html geometry_DriftRatchet_refinementProblem.png
     *
     * @param x          Point coordinate
     * @param resolution Half length of voxel faces (i.e. h of cells).
     *
     * @return Flag if voxel is completely outside or not.
     */
    virtual bool isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    /**
     * A voxel is completely inside, if all the @f$ 2^d @f$ vertices are inside
     * the drift ratchet. This holds as both geometric objects are convex.
     */
    virtual bool isCompletelyInsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    virtual bool isOutsideClosedDomainNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x );

  public:
    /**
     * Constructor setting several attributes with config data.
     *
     * Currently, the CPore is hard-coded to the default value (0.61). Note that
     * the dr is always oriented in x-direction. There is no axis specification!
     *
|| attribute || corr. config. attr. || meaning
| _maxRadius | radius | Maximum radius of the drift ratchet.
| _minRadius | -      | Maximum radius of the drift ratchet computed via getDefaultMinRadius(_maxRadius).
| _offset    | offset | Center of minimum radius face of the drift ratchet.
     *
     * @param configuration Geometry configuration in use.
     */
//     DriftRatchet(
//      const configurations::GeometryConfiguration& configuration
//    );
    /**
     * Constructor setting several member variables.
     *
     * This constructor should be used for test cases only!
     *
     * @param isInverted   Flag if the drift ratchet shall be inverted.
     * @param maxRadius    Maximum radius of the pore (determines the scaling
     *                     of the whole drift ratchet).
     * @param minRadius    Minimum radius of the pore (should be set by using
     *                     getDefaultMinRadius(maxRadius) to preserve scaling).
     * @param offset       Offset of the drift ratchet (i.e. the coordinates of the left
     * (inlet) center points for an eventually translated drift ratchet). Often,
     * this vector will be equal to tarch::la::Vector<DIMENSIONS,double>(0.0).
     * @param offset tarch::la::Vector<DIMENSIONS,double> that holds the offset (i.e. translation from origin) for this geometry.
     * @param CPore        (Optional) parameter for g-computation.
     */
    DriftRatchet(
      bool          isInverted,
      double        maxRadius,
      double        minRadius,
      const tarch::la::Vector<DIMENSIONS,double>& offset,
      double        CPore=DefaultCPore
    );

    /** constructor for default pore */
    DriftRatchet(
      bool isInverted,
      double        maxRadius,
      const tarch::la::Vector<DIMENSIONS,double>& offset,
      double CPore=DefaultCPore
    );

    /**
     * Standard destructor.
     */
    virtual ~DriftRatchet();

};

#endif
