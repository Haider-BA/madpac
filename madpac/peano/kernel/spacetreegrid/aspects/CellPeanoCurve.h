// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_ASPECTS_CELL_PEANO_CURVE_H_
#define _PEANO_KERNEL_SPACETREE_GRID_ASPECTS_CELL_PEANO_CURVE_H_


#include "peano/utils/Globals.h"
#include "peano/utils/Loop.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace aspects {
        class CellPeanoCurve;
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
class peano::kernel::spacetreegrid::aspects::CellPeanoCurve {
  private:
    /**
     * True defines it is an even row, column etc.
     */
    typedef std::bitset<DIMENSIONS> EvenFlags;

    template <class Cell>
    static void removeFaceAccessNumber(Cell& cell, int face);

    template <class Cell>
    static void setFaceAccessNumber(Cell& cell, int face, int value);

  public:
    template <class Cell>
    static bool isTraversePositiveAlongAxis(const Cell& cell, int axis, const bool& isTraversalInverted);

    template <class Cell>
    static peano::utils::LoopDirection getLoopDirection(const Cell& cell, const bool&  isTraversalInverted);

    template <class Cell>
    static void setExitFace(Cell& cell, int axis);

    template <class Cell>
    static void setEntryFace(Cell& cell, int axis);

    template <class Cell>
    static void invertEvenFlag(Cell& cell, int axis);
};


#include "peano/kernel/spacetreegrid/aspects/CellPeanoCurve.cpph"


#endif
