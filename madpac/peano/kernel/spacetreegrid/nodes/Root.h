// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_NODES_ROOT_H_
#define _PEANO_KERNEL_SPACETREE_GRID_NODES_ROOT_H_


#include "peano/utils/Globals.h"
#include "peano/kernel/spacetreegrid/nodes/Node.h"
#include "peano/geometry/Geometry.h"

/**
 * Root Node
 *
 * The root node basically is a refined node with an important difference
 * concerning:
 * Its @f$ 4^d@f$ vertices and its @f$ 3^d @f$ cells are not stored on any
 * stack
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
class peano::kernel::spacetreegrid::nodes::Root: public peano::kernel::spacetreegrid::nodes::Node<Vertex,Cell,State,VertexStack,CellStack,EventHandle> {
  private:
    typedef peano::kernel::spacetreegrid::nodes::Node<Vertex,Cell,State,VertexStack,CellStack,EventHandle>     Base;
    typedef peano::kernel::spacetreegrid::nodes::Leaf<Vertex,Cell,State,VertexStack,CellStack,EventHandle>     LeafNode;
    typedef peano::kernel::spacetreegrid::nodes::Refined<Vertex,Cell,State,VertexStack,CellStack,EventHandle>  RefinedNode;

    static tarch::logging::Log _log;

    /**
     * Vertices passed to sub elements. Note that it is a @f$ 4^d @f$ array
     * altough root event would need @f$ 2^d @f$ vertices only. The reason is
     * a standard refined event is used.
     */
    Vertex  _coarseGridVertices[FOUR_POWER_D];
    Cell    _coarseGridCell;

    tarch::la::Vector<DIMENSIONS,double>  _sizeOfEnclosingCoarseCell;
    tarch::la::Vector<DIMENSIONS,double>  _offsetOfEnclosingCoarseCell;
    int                                   _levelOfEnclosingCell;

    /**
     * Holds a sequence of integers representing in which order the @f$ 3^d @f$
     * fine grid cells are processed.
     */
    tarch::la::Vector<DIMENSIONS,int>   _cellTraversal[THREE_POWER_D];

    LeafNode&                           _leafNode;
    RefinedNode&                        _refinedNode;

    /**
     * Create the level 1 data, i.e. the fine grid data from the root's point
     * of view, and stream these data to the output stream. This operation
     * shall not be invoked by the constructor if the stacks are not empty.
     * In the latter case, another root event has already initialised the
     * data and there's no need to initialise it twice.
     */
    void initialiseFineGridData( State&  state );
  public:
    /**
     * Constructor
     */
    Root(
      VertexStack&                                 vertexStack,
      CellStack&                                   cellStack,
      EventHandle&                                 eventHandle,
      peano::geometry::Geometry&                   geometry,
      LeafNode&                                    leafNode,
      RefinedNode&                                 refinedNode
    );

    /**
     * @see Standard constructor
     */
    virtual ~Root();

    /**
     * Initialises the root.
     *
     * The operation takes the state and sets the vertices of the state
     * accordingly. Furthermore, it might initialise the cells of the
     * first level (see implementation).
     *
     * !!! Implementation
     *
     * restart() is called for each root element, i.e. each adapter that is
     * defined for a repository. As the coarse cell, i.e. the global root
     * cell, and the adjacent vertices are held by each root element, these
     * data exist several times. This ain't a consistency problem as the level
     * zero data do not hold any information.
     *
     * The level one data is a different story. Level one is to be set up once
     * at the construction of the repository. And all the data of level one has
     * to be shared by all the root instances. Consequently, these data are
     * shared among all the root instances. The root instances check whether
     * the stacks are empty. If they are not, another root object already has
     * initialised level one. If they are empty, the root event sets up the
     * @f$ 3^d @f$ cells and the @f$ 4^d @f$ vertices of level one. Set up
     * means to stream them to the stacks and to switch the stacks afterwards.
     * As a consequence, traverse() has to re-load them from the stacks before
     * it starts.
     *
     * @see traverse()
     *
     */
    void restart(
      State&                                       state,
      const tarch::la::Vector<DIMENSIONS,double>&  sizeOfCentralElement,
      const tarch::la::Vector<DIMENSIONS,double>&  offsetOfCentralElement,
      int                                          levelOfCentralElement
    );

    /**
     *
     * !!! Activities
     *
     * - Load the level one data (cells and vertices) into appropriate data
     *   structures. These objects are needed to descend.
     * - Reset the state data (resetStateAtBeginOfIteration()).
     * - t.b.d.
     * - Store the level one data to the output stacks in reverse order.
     * - Switch in and out stacks.
     * - Invert the traversal direction flag of the state.
     */
    void traverse(State& state);
};


#include "peano/kernel/spacetreegrid/nodes/Root.cpph"


#endif
