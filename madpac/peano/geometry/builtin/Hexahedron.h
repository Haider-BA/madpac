// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _GEOMETRY_HEXAHEDRON_H_
#define _GEOMETRY_HEXAHEDRON_H_

#include "peano/geometry/builtin/AbstractGeometry.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      class Hexahedron;
    }
  }
}

/**
 *  A hexahedron.
 *
 * @author Tobias Weinzierl, Tobias Neckel, Philipp Neumann
 */
class peano::geometry::builtin::Hexahedron: public peano::geometry::builtin::AbstractGeometry {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Holds the offset of the hexahedron.
     */
    tarch::la::Vector<DIMENSIONS,double> _offset;

    /**
     * Width of the hexahedron.
     */
    tarch::la::Vector<DIMENSIONS,double> _width;

    /**
     * This method checks if a point (tarch::la::Vector<DIMENSIONS,double>) x lies inside the open hexahedron.
     *
     * @param x Point (tarch::la::Vector<DIMENSIONS,double>) to be checked.
     *
     * \see geometry::Tube::isInsideOpenMinkowskiBox()
     */
    bool isInsideOpenHexahedron( const tarch::la::Vector<DIMENSIONS,double>& x ) const;

    /**
     * This method checks if a point (tarch::la::Vector<DIMENSIONS,double>) x lies inside the closed
     * hexahedron.
     *
     * @param x Point (tarch::la::Vector<DIMENSIONS,double>) to be checked.
     */
    bool isInsideClosedHexahedron( const tarch::la::Vector<DIMENSIONS,double>& x ) const;

  protected:
    /**
     * A voxel is the intersection of 2*DIMENSIONS halfspaces. For each face two tests
     * have to be done. This tests tell the algorithm whether the hexahedron might be
     * inside the voxel. If one of this 2*DIMENSIONS tests returns false, the operation
     * has to return false. Here's the test for the right face that has a normal along
     * the @f$ x_0 @f$ normal: The voxel might intersect if: The voxel's right face has to
     * be right of the left hexahedron face and the right face is not allowed to be more
     * than a voxel's width right from the right hexahedron's face.
     */
    virtual bool isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    /**
     * If the query voxel is completely inside the hexahedron, all its vertices are
     * inside the voxel.
     */
    virtual bool isCompletelyInsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    virtual bool isOutsideClosedDomainNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x );

  public:
    /**
     * Constructor setting basic attributes of the hexahedron.
     *
     * This constructor should be used for test cases only!
     *
     * The two parameters width and offset are not optional any
     * longer in order to avoid misunderstandings.
     *
     * @param isInverted   Bool deciding if the geometry is inverted (true)
     *                     or not (false).
     * @param width        tarch::la::Vector<DIMENSIONS,double> of hexahedron dimensions (x0, x1, x2 directions).
     * @param offset       tarch::la::Vector<DIMENSIONS,double> of offset of the hexahedron origin.
     */
    Hexahedron(
      bool                                        isInverted,
      const tarch::la::Vector<DIMENSIONS,double>& width,
      const tarch::la::Vector<DIMENSIONS,double>& offset
    );

    /**
     * Standard destructor.
     */
    virtual ~Hexahedron();

    tarch::la::Vector<DIMENSIONS,double> getOffset() const;
    tarch::la::Vector<DIMENSIONS,double> getBoundingBox() const;
};

#endif
