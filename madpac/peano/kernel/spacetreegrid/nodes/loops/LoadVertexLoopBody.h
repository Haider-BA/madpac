// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREEGRID_NODES_LOOPS_LOAD_VERTEX_LOOP_BODY_H_
#define _PEANO_KERNEL_SPACETREEGRID_NODES_LOOPS_LOAD_VERTEX_LOOP_BODY_H_


#include "tarch/logging/Log.h"

#include "peano/utils/Globals.h"
#include "peano/kernel/datatraversal/Action.h"
#include "peano/geometry/Geometry.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace nodes {
        namespace loops {
          template <class Vertex,class Cell,class State,class VertexStack,class EventHandle>
          class LoadVertexLoopBody;
        }
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
template <class Vertex, class Cell, class State, class VertexStack, class EventHandle>
class peano::kernel::spacetreegrid::nodes::loops::LoadVertexLoopBody {
  private:
    static tarch::logging::Log _log;

    State&                                    _state;
    Vertex*                                   _fineGridVertices;
    const SingleLevelEnumerator&              _fineGridVerticesEnumerator;
    const Cell&                               _coarseGridCell;
    Vertex const * const                      _coarseGridVertices;
    const SingleLevelEnumerator&              _coarseGridVerticesEnumerator;
    const tarch::la::Vector<DIMENSIONS,int>&  _fineGridPositionOfCell;
    int*                                      _counter;
    VertexStack&                              _vertexStack;
    EventHandle&                              _eventHandle;
    /**
     * Usually, the geometry should be const. See getters of geometry for a
     * description.
     */
    peano::geometry::Geometry&                _geometry;


    double _numberOfInnerVertices;
    double _numberOfBoundaryVertices;
    double _numberOfOuterVertices;
    bool   _hasRefinened;
    bool   _hasCoarsened;
    bool   _hasChangedVertexState;

    void loadVertexFromInputStream(int positionInArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell);
    void createHangingNode(int positionInArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell);

    /**
     *
     * Invokes switchRefinementTriggeredToRefining() and
     * switchCoarseningTriggeredToCoarsening() on the loaded vertex.
     *
     * !!! Thread-safety
     *
     * This operation is invoked for vertices fetched from the input stack.
     * The access to the input stack is already serialised, i.e. there's
     * never two simultaneous accesses to the input stack. Consequently, this
     * operation also is serialised and there's no need to make it thread-safe
     * explicitly.
     */
    void updateRefinementFlagsOfVertexAfterLoad(int positionInArray, bool counterIsDelete);

    /**
     *  Create New Vertex
     *
     *  Creates a new vertex, switch it to non-hanging, and analyse its
     *  adjacency flags (in the parallel mode). This operation does not
     *  invoke the create vertex event as it creates an outer vertex.
     *  Later, the vertex's state will be analysed by
     *  updateGeometryAndInvokeLoadVertexEvents() and this operation will
     *  call the create event, i.e. the vertex creation process is the same as
     *  the process for moving geometries: An outer vertex just becomes an
     *  inner/boundary vertex.
     */
    void createNewVertex(int positionInArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell);

    void updateGeometryAndInvokeLoadVertexEvents(int positionInArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell);

    /**
     * In debug mode, this operation compares the vertex's position and level
     * to the cell data.
     */
    void validateVertexInArray( int positionInVertexArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell ) const;
  public:
    LoadVertexLoopBody(
      State&                                    state,
      Vertex*                                   fineGridVertices,
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      const Cell&                               coarseGridCell,
      Vertex const * const                      coarseGridVertices,
      const SingleLevelEnumerator&              coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&  fineGridPositionOfCell,
      int*                                      counter,
      VertexStack&                              vertexStack,
      EventHandle&                              eventHandle,
      peano::geometry::Geometry&                geometry
    );

    /**
     *
     *
     *
|| Stack \\ Counter || persistent                        || hanging                           || new                               || delete                            || none
|| InOut            |  load(-1)                          |  create hanging node               |  create persistent node            |  load(-1)                          |  nop (vertex is already loaded)
||                  |  counter->CounterNodeAlreadyLoaded |  counter->CounterNodeAlreadyLoaded |  counter->CounterNodeAlreadyLoaded |  counter->CounterNodeAlreadyLoaded |  inc counter
|| Temporary        |  load(stack number)                |  load(stack number)                |  load(stack number)                |  load(stack number)                |  nop (vertex is already loaded)
     */
    void operator() (const peano::kernel::datatraversal::Action& action);

    void updateGlobalValues();
};


#include "peano/kernel/spacetreegrid/nodes/loops/LoadVertexLoopBody.cpph"


#endif
