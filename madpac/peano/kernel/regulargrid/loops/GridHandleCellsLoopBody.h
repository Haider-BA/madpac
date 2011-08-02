// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_LOOPS_GRID_HANDLE_CELLS_LOOP_BODY_H_
#define _PEANO_KERNEL_REGULARGRID_LOOPS_GRID_HANDLE_CELLS_LOOP_BODY_H_

#include "peano/kernel/regulargrid/RegularGridVertexEnumerator.h"
#include "peano/kernel/datatraversal/Action.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace loops {
        template <class Vertex,class Cell,class State,class EventHandle>
        class GridHandleCellsLoopBody;
      }
    }
  }
}




/**
 * t.b.d.
 *
 * @author Tobias Weinzierl
 */
template <class Vertex, class Cell, class State, class EventHandle>
class peano::kernel::regulargrid::loops::GridHandleCellsLoopBody {
  private:
    static tarch::logging::Log _log;

    peano::kernel::regulargrid::Grid<Vertex,Cell,State,EventHandle>&  _grid;

    Vertex * const              _vertices;

    RegularGridVertexEnumerator _enumerator;

    double _numberOfInnerCells;
    double _numberOfOuterCells;
    bool   _changedCellState;

    #ifdef CCA
    static int _iterationCounter; //Dirty (!) workaround for performance problems in DiParTS
    #endif
  public:
    GridHandleCellsLoopBody(
      peano::kernel::regulargrid::Grid<Vertex,Cell,State,EventHandle>& grid,
      Vertex * const vertices
    );

    void operator() (const peano::kernel::datatraversal::Action& action);

    void updateGlobalValues();
};


#include "peano/kernel/regulargrid/loops/GridHandleCellsLoopBody.cpph"


#endif
