// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_GRID_H_
#define _PEANO_KERNEL_REGULARGRID_GRID_H_

#include "peano/kernel/gridinterface/State.h"
#include "peano/kernel/regulargrid/GridContainer.h"

#include "tarch/logging/Log.h"

#include "peano/geometry/Geometry.h"

#include "peano/kernel/datatraversal/SingleLevelCellLoop.h"



namespace peano {
  namespace kernel {
    namespace regulargrid {
      template <class Vertex,class Cell,class State,class EventHandle>
      class Grid;

      tarch::la::Vector<DIMENSIONS,double> getH(
        const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
        const tarch::la::Vector<DIMENSIONS,int>&     gridPoints
      );

      namespace tests {
        /**
         * Forward declaration
         */
        class GridTest;
      }
      namespace loops {
        template <class Vertex,class Cell,class State,class EventHandle>
        class GridLoadVertexLoopBody;
        template <class Vertex,class Cell,class State,class EventHandle>
        class GridStoreVertexLoopBody;
        template <class Vertex,class Cell,class State,class EventHandle>
        class GridHandleCellsLoopBody;
      }
    }
  }
}


/**
 * Cartesian grid with degrees of freedom on
 * the vertices and cells of the grid.
 *
 * We now support periodic boundary conditions in all possible directions (but
 * always on the box boundaries of the domain!).
 * For a short visualisation of the periodic boundary setup, see the following
 * image:
 * @image html trivialgrid_periodicBoundaryPartners.gif
 *
 * Note that the periodicity is NOT stored in a checkpoint, as one might be
 * interested in changing those boundary conditions. The same holds for mesh
 * stretching.
 *
 * @author Tobias Weinzierl, Tobias Neckel
 */
template <class Vertex, class Cell, class State, class EventHandle>
class peano::kernel::regulargrid::Grid {
  private:
    friend class loops::GridLoadVertexLoopBody<Vertex,Cell,State,EventHandle>;
    friend class loops::GridStoreVertexLoopBody<Vertex,Cell,State,EventHandle>;
    friend class loops::GridHandleCellsLoopBody<Vertex,Cell,State,EventHandle>;

    /**
     * Corresponding unit test.
     */
    friend class tests::GridTest;

    typedef loops::GridLoadVertexLoopBody<Vertex,Cell,State,EventHandle>   LoadVerticesLoopBody;
    typedef loops::GridStoreVertexLoopBody<Vertex,Cell,State,EventHandle>  StoreVerticesLoopBody;
    typedef loops::GridHandleCellsLoopBody<Vertex,Cell,State,EventHandle>  HandleCellsLoopBody;

    /**
     * Log device.
     */
    static tarch::logging::Log _log;

    peano::kernel::datatraversal::SingleLevelCellLoop<HandleCellsLoopBody> _handleCellsLoop;

  #ifdef CompilerSettingsBaseClassProtectedAccepted
  protected:
  #else
  public:
  #endif
    /**
     * Make all template instances friend of the current template
     * specialisation. This is required by one of the constructors that has to
     * copy the state of an instance with other type parameters.
     */
    template <class AVertex, class ACell, class AState, class AnEventHandle>
    friend class Grid;

    State&  _state;

    /**
     * Size of computational domain.
     */
    tarch::la::Vector<DIMENSIONS,double> _domainSize;

    /**
     * Offset of the domain.
     */
    tarch::la::Vector<DIMENSIONS,double> _domainOffset;

    /**
     * Vertex and cell degrees of freedoms.
     */
    GridContainer<Vertex, Cell>& _dataContainer;

    /**
     * Reference of geometry/scenario adapter. Is set in the constructor.
     */
    peano::geometry::Geometry& _geometry;

    /**
     * Reference of purpose adapter. Is set in the (copy) constructor.
     */
    EventHandle  _eventHandle;

    /**
     * Loads the vertices.
     *
     * This operation fetches the vertices from the vertex container and writes
     * them to the global Cartesian grid data structure. For each vertex, this
     * implies the following activities:
     *
     * - Fill the array vertices with entries from the data container.
     * - Perform the updates due to state transitions (moving boundaries or
     *   initialisation).
     * - If a vertex is active and touched for the first time,
     *   - invoke touchFirstTime() event, and
     *   - merge it with the data from the adjacent remote nodes
     *     if vertex is on the domain boundary.
     *
     * The realisation of the concrete loop body is outsourced to
     * loop::GridLoadVertexLoopBody. Hence, the operation can run in parallel in
     * a shared memory environment. If the load process however runs on a
     * distributed memory node (-DParallel), the order of the boundary vertices
     * to be exchanged has to be fixed. To avoid the overhead to synchronise the
     * boundary exchange (or the overhead to resort the boundary vertices), I
     * thus switch off the multicore parallelisation in the parallel mode.
     *
     * The last activity from the list above (the merge process) may not be
     * triggered, if this is the very first time we run over the grid. In this
     * case, there's no other vertex data in the MPI pipeline. To avoid such a
     * stall, I decided to augment the restart process of the grid container:
     * When it inits the data structure, it sends a copy of all boundary
     * vertices to the neighbouring ranks. An alternative implementation would
     * be to decide within this operation whether this is the very first
     * iteration and to skip the vertex-receive process if this is the case.
     * However, that would mean two things: the algorithm has to know whether
     * this is the very first grid iteration, and the algorithm has to check a
     * boolean flag for each boundary vertex that tells it whether it should
     * already receive something. This doesn't make the code better readable.
     *
     * @see GridContainer::restart()
     */
    void loadVertices( Vertex * const vertices );

    /**
     * Stores the vertices. This implies the following activities:
     *
     * - Write back the vertices to the vertex container.
     * - If a vertex is active and touched for the last time,
     *   - invoke touchLastTime() event and
     *   - send it to adjacent remote nodes if vertex is on the domain boundary.
     */
    void storeVertices( Vertex * const vertices );

    void handleCells( Vertex * const vertices );

    /**
     * Releases all messages.
     *
     * Should be the last method of an iteration.
     */
    void releaseMessages();

    /**
     * Merge all the states pending around
     *
     * This operation becomes nop if the code is not compiled with $-DParallel$.
     * It takes the parallel state, and sends it to the master. On the master,
     * all the parallel states are merged.
     */
    void reduceParallelState();

    /**
     * Counterpart of reduceParallelStateAndReleaseMessages().
     */
    void distributeParallelState();
  public:
    /**
     * Create new grid
     *
     * Construct a new grid with the given parameters. You have to initialise
     * the geometry and the data container before you call any further
     * operations on the grid.
     *
     * @param domainSize                Size of computational domain
     * @param computationalDomainOffset Offset of computational domain, i.e. position of left bottom vertex
     * @param dataContainer             Data container holding the vertices and cells.
     * @param geometry                  Geometry
     */
    Grid(
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset,
      GridContainer<Vertex,Cell>&                  dataContainer,
      peano::geometry::Geometry&                   geometry,
      State&                                       state
    );

    /**
     * Reduced constructor. If you use this constructor, call restart() before
     * you use the grid.
     */
    Grid(
      GridContainer<Vertex,Cell>&                  dataContainer,
      peano::geometry::Geometry&                   geometry,
      State&                                       state
    );

    void restart(
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
    );

    /**
     * Tell the grid to terminate.
     */
    void terminate();

    /**
     * Destructor. Free all memory.
     */
    virtual ~Grid();

    /**
     * Performs one traversal on the Cartesian grid.
     *
     * This operation has to be called using the event handler _eventHandle. The
     * event handler's signature has to equal
     * peano::trivialgrid::TrivialgridEventHandle. The adapter handles the calls
     * of touchVertexFirstTime(), touchVertexLastTime() and handleElement(), as
     * well as beginIteration() and endIteration().
     *
     * Due to observed lost digits when using the old version of incrementing
     * the positions (x=x+h), we changed to absolute calculation (x=nodeNr*h).
     * We do this calculation at the same position in the loop as before
     * (namely at the end); this means that we have to add 1 to the current
     * value of the loop indices because they are incremented only after this
     * last call.
     *
     * A somewhat tricky part is how to determine for which vertices
     * touchVertexFirstTime() and  touchVertexLastTime(). If you write down the
     * access scheme, it is rather easy:
     *
     * @image html trivialgrid_Trivialgrid_touchFirstTime.png
     * @image html trivialgrid_Trivialgrid_touchLastTime.png
     *
     * I wrote down the rationale for touchFirstTime(). The rules for
     * touchLastTime() are the same, but the coordinate axes' direction have to
     * be switched. For both directions the following observation holds: The
     * traversal direction, i.e. order of the coordinate axes, has no influence.
     *
     * - At the beginning, each vertex holds the touchFirstTime flag for each
     *   element. But,
     * - if @f$ x_0 \not= 0 @f$ then all the vertices' flag of the face with
     *   normal @f$ x_0 @f$ near to the @f$ x_0 @f$ axis have to be deleted.
     * - if @f$ x_1 \not= 0 @f$ then all the vertices' flag of the face with
     *   normal @f$ x_0 @f$ near to the @f$ x_1 @f$ axis have to be deleted.
     * - @f$ \dots @f$
     *
     * @param reduceState For performance-optimizations it can be useful to
     * suppress the global reduction of the state. By this flag the actual
     * behaviour of the grid can be set.
     */
    void iterate(bool reduceState);

    tarch::la::Vector<DIMENSIONS,double> getH() const;
};


#include "peano/kernel/regulargrid/Grid.cpph"


#endif
