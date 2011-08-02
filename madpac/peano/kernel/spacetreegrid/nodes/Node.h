// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_NODES_NODE_H_
#define _PEANO_KERNEL_SPACETREE_GRID_NODES_NODE_H_



#include "peano/kernel/spacetreegrid/SingleLevelEnumerator.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace nodes {
        template <
          class Vertex,
          class Cell,
          class State,
          class VertexStack,
          class CellStack,
          class EventHandle
        > class Node;

        /**
         * Forward declaration
         */
        template <
          class Vertex,
          class Cell,
          class State,
          class VertexStack,
          class CellStack,
          class EventHandle
        > class Leaf;

        /**
         * Forward declaration
         */
        template <
          class Vertex,
          class Cell,
          class State,
          class VertexStack,
          class CellStack,
          class EventHandle
        > class Refined;

        /**
         * Forward declaration
         */
        template <
          class Vertex,
          class Cell,
          class State,
          class VertexStack,
          class CellStack,
          class EventHandle
        > class Root;
      }
    }
  }
}


/**
 * Node
 *
 * While I do not rely on any inheritance mechanism for the cells, there's a
 * couple of operations and relations that are needed by any node. These
 * attributes and operations are collected in this very class.
 *
 * @author Tobias Weinzierl
 */
template <
  class Vertex,
  class Cell,
  class State,
  class VertexStack,
  class CellStack,
  class EventHandle
>
class peano::kernel::spacetreegrid::nodes::Node {
  private:

    static tarch::logging::Log _log;

  protected:
    /**
     * Holds the vertex stack associated to this event.
     */
    VertexStack& _vertexStack;

    /**
     * Holds the cell stack associated to this event. This is important for
     * all events events - even leaves need it as they might refine further.
     */
    CellStack&   _cellStack;

    /**
     * Holds the event handle associated to this event.
     */
    EventHandle&       _eventHandle;

    /**
     * Geometry handle.
     */
    peano::geometry::Geometry&  _geometry;

    Node(
      VertexStack&                vertexStack,
      CellStack&                  cellStack,
      EventHandle&                eventHandle,
      peano::geometry::Geometry&  geometry
    );

    /**
     * @see Standard constructor. There's nothing to do here.
     */
    ~Node();

    CellStack&    getCellStack() const;
    VertexStack&  getVertexStack() const;

    /**
     * Analyse counter Array and Load Vertices into Vertex Array
     *

     *
     * !!! Counter Array
     *
     * The identification of hanging nodes and the steering of the load and
     * store process is done using an integer - a counter array - and the
     * operation assumes that the counter array is initialised correctly.
     * This is usually done by AbstractStackBasedRefinedEvent's
     * prepareSubVerticesLoad().
     * prepareSubVerticesLoad() sets the counters for all the @f$ 4^d @f$
     * vertices at once.
     * The refined event then calls loadVerticesIntoArray() @f$ 3^d @f$ times,
     * i.e. once per subevent.
     *
     * The load process is rather simple. One could use a bool array set false
     * for every non-hanging vertex. After a vertex is loaded into the
     * destination array, this flag ist set true. Compared to this, the store
     * process is more complicated, since the store has to take place the last
     * time a vertex is accessed within one refined cell. This 'last time' is
     * not equal to the last time a vertex is accessed within the grid.
     *
     * One solution is to use a counter instead of a boolean array. During the
     * store operation the vertex's counter is compared to zero. If it is zero,
     * the vertex is loaded and incremented. In the end, the array holds the
     * number of access operations within the refined cell and the store
     * operation can decrease this counter again.
     *
     * For hanging nodes, the counter has to be set greater 0. This makes both
     * the store and the load operation ignore the vertex throughout the
     * process.
     *
     * Another important problem arises, if the counter is set -1. -1 equals a
     * point that has been a hanging point, but shall become a persistent one
     * now. This case arises, if a refined element's vertex without a refinement
     * flag is refined (a posteriori refinement). In this case, two different
     * cases have to be distinguished:
     *
     * - if the vertex has not been accessed before, i.e. it would be read from
     *   the input stream in the persistent case, it has to be created like
     *   any other new vertex. Afterwards, the counter is set 1.
     * - if the vertex belongs to a touched face, it has already been created by
     *   another adjacent element. Thus, set the counter 0 and proceed.
     *
     */
//    void loadVerticesIntoArray(
//      const TraversalAutomatonState&  state,
//      Cell&                           cell,
//      Vertex*                         vertices,
//      int*                            counter,
//      int                             firstIndex,
//      Vertex                          superLevelVertices[FOUR_POWER_D],
//      int                             superLevelFirstIndex,
//      const tarch::la::Vector<DIMENSIONS,int>&  discretePosition
//    );


    #ifdef Parallel
    /**
     * Derive Data From Coarse Grid
     *
     * Derives inherited data (such as adjacency information) from the coarse
     * grid for every persistent vertex of the element passed if
     * state.hasToDeriveVertexDataFromCoarseGrid()
     * holds. One example for derived data are the parallel adjacency markers.
     * If hasToDeriveVertexDataFromCoarseGrid() does not hold, the operation
     * degenerates to nop (you are not allowed to call it). The actual
     * information derival is delegated to
     * derivePersistentVertexDataFromCoarseGrid(). This operation runs over all
     * @f$ 2^d @f$ element vertices, and checks
     *
     * - whether the vertex come from the input stack,
     * - whether it is a persistent vertex, and
     * - whether it is not adjacent to the current node.
     *
     * If the latter property holds, the vertex is already hold on the current
     * node, i.e. its state is consistent with the global data view.
     *
     * See Event::loadVertices() for a detailed description who should invoke
     * derivePersistentVertexDataFromCoarseGrid() when.
     */
    //TODO
//    void derivePersistentVertexDataFromCoarseGrid(
//      const TraversalAutomatonState&  state,
//      const Cell&                     cell,
//      Vertex                          vertices[FOUR_POWER_D],
//      int                             counter[FOUR_POWER_D],
//      int                             firstIndex,
//      Vertex                          superLevelVertices[FOUR_POWER_D],
//      int                             superLevelFirstIndex,
//      const tarch::la::Vector<DIMENSIONS,int>&                discretePosition
//    ) const;xxx

    /**
     * Derive Adjacency Information for Vertex
     *
     * Called by the other derivePersistentVertexDataFromCoarseGrid() within a
     * loop throughout the joins, or called by the new event for a new vertex.
     * For the latter call, the operation may not be private.
     */
    void derivePersistentVertexDataFromCoarseGrid(
      Vertex&                       vertex,
      Vertex                        superLevelVertices[FOUR_POWER_D],
      int                           superLevelFirstIndex,
      const tarch::la::Vector<DIMENSIONS,int>&              discretePosition
    ) const;//TODO xxx
    #endif

    /**
     * Validation Routines
     *
     * Validates all the vertex attributes that duplicate the information given
     * by the vertices. That is grid level and vertex's coordinates. If
     * information consistency isn't given, the method finished triggering an
     * assertion. This operation should be used by the load operations to
     * validate the data consistency.
     *
     * The operation becomes the nop operation if either the debug and assert
     * mode is switched off.
     */
    static void validatePositionOfVertices(
      Vertex                                    fineGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              fineGridVerticesEnumerator
    );

    /**
     * This little helper is called by the load operation as soon as both the
     * vertices and the cell object are loaded. It analyses the current cell
     * state, the geometry, resets the cell, triggers the creational events,
     * and updates the state. You don't have to call it if the cell's state
     * doesn't change.
     *
     * There is no general-case counterpart. However, there's a counterpart in
     * the standard refined event, where a refined cell might become a leaf due
     * to a deletion of subtrees.
     */
    void updateCellAfterLoad(
      State&                                    state,
      Cell&                                     fineGridCell,
      Vertex                                    fineGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      Cell&                                     coarseGridCell,
      Vertex                                    coarseGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&  fineGridPositionOfCell
    );
  public:
    /**
     * Load the vertices into the array vertices according to counter. Depending
     * on the type of the event, different operations are performed. The
     * following table lists the operations chronologically and annotates for
     * which event types operations are performed.
     *
|| required compiler flags  || event type || action
|  debug    |  all          |  validate event attributes' level
|           |  all          |  validate event attributes' state
|           |  new          |  create the vertices
|           |  leaf,refined |  load loadVerticesIntoArray()
|           |  leaf,refined |  call validateVertices()
|           |  leaf,refined |  call derivePersistentVertexDataFromCoarseGrid()
|  parallel |  leaf,refined |  call postprocessLoadVerticesIntoArrayForPartitionJoin()
     *
     * !!! Counter Array
     *
     * The identification of hanging nodes and the steering of the load and
     * store process is done using an integer - a counter array - and the
     * operation assumes that the counter array is initialised correctly.
     * This is usually done by AbstractStackBasedRefinedEvent's
     * prepareSubVerticesLoad().
     * prepareSubVerticesLoad() sets the counters for all the @f$ 4^d @f$
     * vertices at once.
     * The refined event then calls loadVerticesIntoArray() @f$ 3^d @f$ times,
     * i.e. once per subevent.
     *
     * The load process is rather simple. One could use a bool array set false
     * for every non-hanging vertex. After a vertex is loaded into the
     * destination array, this flag ist set true. Compared to this, the store
     * process is more complicated, since the store has to take place the last
     * time a vertex is accessed within one refined cell. This 'last time' is
     * not equal to the last time a vertex is accessed within the grid.
     *
     * One solution is to use a counter instead of a boolean array. During the
     * store operation the vertex's counter is compared to zero. If it is zero,
     * the vertex is loaded and incremented. In the end, the array holds the
     * number of access operations within the refined cell and the store
     * operation can decrease this counter again.
     *
     * For hanging nodes, the counter has to be set greater 0. This makes both
     * the store and the load operation ignore the vertex throughout the
     * process.
     *
     * Another important problem arises, if the counter is set -1. -1 equals a
     * point that has been a hanging point, but shall become a persistent one
     * now. This case arises, if a refined element's vertex without a refinement
     * flag is refined (a posteriori refinement). In this case, two different
     * cases have to be distinguished:
     *
     * - if the vertex has not been accessed before, i.e. it would be read from
     *   the input stream in the persistent case, it has to be created like
     *   any other new vertex. Afterwards, the counter is set 1.
     * - if the vertex belongs to a touched face, it has already been created by
     *   another adjacent element. Thus, set the counter 0 and proceed.
     *
     *
     * !! Remarks
     *
     * - If a join is active for the event attributes, the event attributes are
     *   either sent or received. This holds for the vertices, too.
     * - If the automaton's flag _deriveVertexDataFromCoarseGrid is set (see
     *   hasToDeriveVertexDataFromCoarseGrid()) the parallel flag for every
     *   vertex has to be set. Please note, that every node's flag has to be
     *   derived, as the state's flag might be set during a join. If it is set
     *   during a grid refinement process, updating the vertices from the input
     *   stream would be sufficient, but we do not take this reasoning into
     *   account. The deriving has to be done before the postprocessing is invoked.
     * - The whole parallel flag deriving is steered by the automaton's properties.
     *
     * @param state            State of the automaton
     * @param cell             Attributes corresponding to the event
     * @param vertices         Array of all the vertices of the refined cell
     * @param firstIndex       Index of the very first cell's vertex, i.e.
     *                         vertex at local position (0,0,...)
     * @param counter          @see loadVerticesIntoArray()
     */
//    void loadVertices(
//      const TraversalAutomatonState&  state,
//      const Cell&                     cell,
//      Vertex                          vertices[FOUR_POWER_D],
//      int                             counter[FOUR_POWER_D],
//      int                             firstIndex
//    );

//    void traverse(...);

    /**
     * Store the vertices into the array vertices.
     *
     * @param state            State of the automaton
     * @param cell             Attributes corresponding to the event
     * @param vertices         Array of all the vertices of the refined cell
     * @param firstIndex       Index of the very first cell's vertex, i.e.
     *                         vertex at local position (0,0,...)
     * @param stored           @see loadVerticesIntoArray()
     */
//    void storeVertices(
//      const TraversalAutomatonState&  state,
//      const Cell&                     cell,
//      Vertex                          vertices[FOUR_POWER_D],
//      int                             counter[FOUR_POWER_D],
//      int                             firstIndex
//    );
};



#include "peano/kernel/spacetreegrid/nodes/Node.cpph"

#endif
