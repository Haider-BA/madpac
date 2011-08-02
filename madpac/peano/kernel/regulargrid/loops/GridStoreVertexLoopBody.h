// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_LOOPS_GRID_STORE_VERTEX_LOOP_BODY_H_
#define _PEANO_KERNEL_REGULARGRID_LOOPS_GRID_STORE_VERTEX_LOOP_BODY_H_

#include "peano/kernel/regulargrid/RegularGridVertexEnumerator.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace loops {
        template <class Vertex,class Cell,class State,class EventHandle>
        class GridStoreVertexLoopBody;
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
class peano::kernel::regulargrid::loops::GridStoreVertexLoopBody {
  private:
    static tarch::logging::Log _log;

    peano::kernel::regulargrid::Grid<Vertex,Cell,State,EventHandle>&  _grid;

    Vertex * const              _vertices;

    RegularGridVertexEnumerator _enumerator;
  public:
    GridStoreVertexLoopBody(
      peano::kernel::regulargrid::Grid<Vertex,Cell,State,EventHandle>& grid,
      Vertex * const vertices
    );

    void updateGlobalValues();

    void operator() (const tarch::la::Vector<DIMENSIONS,int>& i);
};


#include "peano/kernel/regulargrid/loops/GridStoreVertexLoopBody.cpph"


#endif
