// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_BUILTIN_TUBE_H_
#define _PEANO_GEOMETRY_BUILTIN_TUBE_H_

#include "peano/geometry/Geometry.h"
#include "tarch/la/VectorOperations.h"
#include "tarch/la/VectorVectorOperations.h"
#include "peano/utils/Loop.h"
#include "tarch/logging/Log.h"

namespace peano {
  namespace geometry {
    namespace builtin {
      class Tube;
    }
  }
}

/** Tube geometry.
 *
 *  @author Philipp Neumann
 */
class peano::geometry::builtin::Tube: public peano::geometry::GeometryObject {
  public:
    Tube(
      const tarch::la::Vector<DIMENSIONS,double>& p1,
      const tarch::la::Vector<DIMENSIONS,double>& p2,
      double radius,
      bool isInverted
    );
    ~Tube();

    bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

  private:

    bool isCompletelyOutsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isCompletelyInsideNotInverted( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

    bool isOutsideClosedDomainInverted(const tarch::la::Vector<DIMENSIONS,double>&x);
    bool isOutsideClosedDomainNotInverted(const tarch::la::Vector<DIMENSIONS,double>&x);

    /** returns the coordinate axis index, if the rotational axis 'axis' of the tube is aligned
     *  with that coordinate axis and -1 otherwise.
     */
    int isAlignedAxis(tarch::la::Vector<DIMENSIONS,double> axis) const;

    /** end points of the middle line of the tube */
    tarch::la::Vector<DIMENSIONS,double> _p1;
    tarch::la::Vector<DIMENSIONS,double> _p2;
    /** vector point along the direction of the middle line of the tube.
     *  This vector is given by _p2 - _p1.
     */
    tarch::la::Vector<DIMENSIONS,double> _middleLine;

    /** radius of the tube */
    double _radius;

    bool _isInverted;

    /** index of the coordinate axis, that the tube runs parallel to. If the tube is not parallel to any
     *  of the axes, this number is -1.
     */
    int _isAlignedAxis;

    static tarch::logging::Log _log;
};

#endif // _PEANO_GEOMETRY_BUILTIN_TUBE_H_
