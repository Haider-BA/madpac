// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREEGRID_NODES_LOOPS_STORE_VERTEX_LOOP_BODY_H_
#define _PEANO_KERNEL_SPACETREEGRID_NODES_LOOPS_STORE_VERTEX_LOOP_BODY_H_


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
          class StoreVertexLoopBody;
        }
      }
    }
  }
}




/**
 * Store Loop Body
 *
 * t.b.d.
 *
 * @author Tobias Weinzierl
 */
template <class Vertex, class Cell, class State, class VertexStack, class EventHandle>
class peano::kernel::spacetreegrid::nodes::loops::StoreVertexLoopBody {
  private:
    static tarch::logging::Log _log;

    State&                                    _state;
    Vertex*                                   _fineGridVertices;
    const SingleLevelEnumerator&              _fineGridVerticesEnumerator;
    Cell&                                     _coarseGridCell;
    Vertex*                                   _coarseGridVertices;
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

    /**
     *
     * t.b.d.
     *
     * !!! Thread-safety
     *
     * This operation is invoked for vertices fetched from the input stack.
     * The access to the output stack is already serialised, i.e. there's
     * never two simultaneous accesses to the output stack. Consequently, this
     * operation also is serialised and there's no need to make it thread-safe
     * explicitly.
     */
    void updateRefinementFlagsAndStoreVertexToOutputStream(int positionInArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell);
    void destroyHangingNode(int positionInArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell);
    void destroyPersistentNode(int positionInArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell);

    void invokeStoreVertexEvent(int positionInArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell);

    /**
     * In debug mode, this operation compares the vertex's position and level
     * to the cell data.
     */
    void validateVertexInArray( int positionInVertexArray, const tarch::la::Vector<DIMENSIONS,int>& positionInLocalCell ) const;
  public:
    StoreVertexLoopBody(
      State&                                    state,
      Vertex*                                   fineGridVertices,
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      Cell&                                     coarseGridCell,
      Vertex*                                   coarseGridVertices,
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
|| InOut            |  store(-1)                         |  destroy hanging node              |  store(-1)                         |  destroy persistent vertex         |  nop (vertex is still needed)
|| Temporary        |  store(stack number)               |  store(stack number)               |  store(stack number)               |  store(stack number)               |  nop (vertex is still needed)
     */
    void operator() (const peano::kernel::datatraversal::Action& action);

    /**
     * Is NOP.
     */
    void updateGlobalValues();
};


#include "peano/kernel/spacetreegrid/nodes/loops/StoreVertexLoopBody.cpph"


#endif
