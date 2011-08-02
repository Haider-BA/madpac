// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_ASPECTS_CELL_REFINEMENT_H_
#define _PEANO_KERNEL_SPACETREE_GRID_ASPECTS_CELL_REFINEMENT_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace aspects {
        class CellRefinement;
      }
    }
  }
}


/**
 * Refinement Aspect
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::spacetreegrid::aspects::CellRefinement {
  private:
	  static tarch::logging::Log _log;


    template <class Cell>
    static void refine(
      const Cell&                        coarseGridCell,
      Cell                               fineGridCells[THREE_POWER_D],
      tarch::la::Vector<DIMENSIONS,int>  fineGridPosition,
      int                                axis
    );

  public:
    /**
     * The refine does not take into account whether the curve is inverted or
     * not. This is possible, as it writes the cells to the array anyway and
     * the cell state does not depend on the inversion, too. However, as soon
     * as you stream the cell array to a stack, you have to take into account
     * the traversal direction.
     */
    template <class Cell>
	  static void refine(Cell& coarseGridCell, Cell fineGridCells[THREE_POWER_D] );
};


#include "peano/kernel/spacetreegrid/aspects/CellRefinement.cpph"


#endif
