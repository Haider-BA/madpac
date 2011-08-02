// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_ASPECTS_CELL_LOCAL_PEANO_CURVE_H_
#define _PEANO_KERNEL_SPACETREE_GRID_ASPECTS_CELL_LOCAL_PEANO_CURVE_H_


#include <bitset>

#include "peano/kernel/datatraversal/ActionSetTraversal.h"

namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace aspects {
        class CellLocalPeanoCurve;
      }
      namespace tests {
        class CellLocalPeanoCurveTest;
      }
    }
  }
}


/**
 * Refinement Aspect
 *
 * @todo Die Getter hier sind all die Operationen, bei denen es wirklich auf Laufzeit ankommt und die man eigentlich vorberechnen muesste
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::spacetreegrid::aspects::CellLocalPeanoCurve {
  private:
    /**
     * To access the vertex array of a geometric element you use an integer.
     * This integer corresponds to a bitfield, that indicates for every axis
     * weather the coordinate is 0 or 1 on the unit element.
     */
    typedef std::bitset<DIMENSIONS> Coordinates;

    friend class peano::kernel::spacetreegrid::tests::CellLocalPeanoCurveTest;

    /**
     * @todo There should be many of them so that getTraversal() does not have
     * to regenerate them all the time.
     */
    peano::kernel::datatraversal::ActionSetTraversal _actionTraversal;

    template <class Cell>
    static Coordinates getFirstVertexIndex( const Cell& cell, const bool& isTraversalInverted );

    /**
     * Forwards to createSequentialReadVertexSequence(), then resorts, and
     * finally returns the result.
     */
    template <class Cell>
    static peano::kernel::datatraversal::ActionSetTraversal createParallelReadVertexSequence( const Cell& cell, const bool& isTraversalInverted);

    template <class Cell>
    static peano::kernel::datatraversal::ActionSetTraversal createSequentialReadVertexSequence( const Cell& cell, const bool& isTraversalInverted);

    template <class Cell>
    static peano::kernel::datatraversal::ActionSetTraversal createParallelWriteVertexSequence( const Cell& cell, const bool& isTraversalInverted);

    template <class Cell>
    static peano::kernel::datatraversal::ActionSetTraversal createSequentialWriteVertexSequence( const Cell& cell, const bool& isTraversalInverted);

    template <class Cell>
    static int getReadStackIdentifier( const Cell& cell, const Coordinates& coordinates, const bool& isTraversalInverted );

    template <class Cell>
    static int getWriteStackIdentifier( const Cell& cell, const Coordinates& coordinates, const bool& isTraversalInverted );

    CellLocalPeanoCurve();

    static tarch::la::Vector<DIMENSIONS,int> toIntVector(const Coordinates& coordinates);
  public:
    /**
     * This operation is not const as it might create the action traversal on-the-fly.
     */
    template <class Cell>
    static const peano::kernel::datatraversal::ActionSetTraversal& getReadVertexSequence( const Cell& cell, const bool& isTraversalInverted);

    /**
     * This operation is not const as it might create the action traversal on-the-fly.
     */
    template <class Cell>
    static const peano::kernel::datatraversal::ActionSetTraversal& getWriteVertexSequence( const Cell& cell, const bool& isTraversalInverted);
};


#include "peano/kernel/spacetreegrid/aspects/CellLocalPeanoCurve.cpph"


#endif
