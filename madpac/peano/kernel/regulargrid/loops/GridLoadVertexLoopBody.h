// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_LOOPS_GRID_LOAD_VERTEX_LOOP_BODY_H_
#define _PEANO_KERNEL_REGULARGRID_LOOPS_GRID_LOAD_VERTEX_LOOP_BODY_H_

#include "peano/kernel/regulargrid/RegularGridVertexEnumerator.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace loops {
        template <class Vertex,class Cell,class State,class EventHandle>
        class GridLoadVertexLoopBody;
      }
    }
  }
}




/**
 * Load Loop Body
 *
 * This loop body is responsible to fetch data from the vertex containers and
 * write them to the Cartesian grid data structure. See Grid::loadVertices()
 * for a detailed description of the loop body's semantics.
 *
 * @author Tobias Weinzierl
 */
template <class Vertex, class Cell, class State, class EventHandle>
class peano::kernel::regulargrid::loops::GridLoadVertexLoopBody {
  private:
    static tarch::logging::Log _log;

    peano::kernel::regulargrid::Grid<Vertex,Cell,State,EventHandle>&  _grid;

    Vertex * const              _vertices;

    RegularGridVertexEnumerator _enumerator;

    double _numberOfInnerVertices;
    double _numberOfBoundaryVertices;
    double _numberOfOuterVertices;
    bool   _changedVertexState;

    #ifdef CCA
    static int _iterationCounter; //Dirty (!) workaround for performance problems in DiParTS
    #endif
  public:
    GridLoadVertexLoopBody(
      peano::kernel::regulargrid::Grid<Vertex,Cell,State,EventHandle>&  grid,
      Vertex * const                                                    vertices
    );

    void operator() (const tarch::la::Vector<DIMENSIONS,int>& i);

    void updateGlobalValues();
};


#include "peano/kernel/regulargrid/loops/GridLoadVertexLoopBody.cpph"


#endif
