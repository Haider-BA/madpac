// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_GRID_H_
#define _PEANO_KERNEL_SPACETREE_GRID_GRID_H_


#include "peano/utils/Globals.h"
#include "peano/geometry/Geometry.h"


#include "peano/kernel/spacetreegrid/nodes/Leaf.h"
#include "peano/kernel/spacetreegrid/nodes/Refined.h"
#include "peano/kernel/spacetreegrid/nodes/Root.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      template <
        class Vertex,
        class Cell,
        class State,
        class VertexStack,
        class CellStack,
        class EventHandle
      >
      class Grid;
    }
  }
}


/**
 * The root element manages the @f$ 2^d @f$ vertices of the super element that
 * encloses the unit square (if the program is configured to have the domain
 * contained within the unit square). Therefore, the event next to the root
 * element always is a refined element.
 *
 * Furthermore, the root event holds the state corresponding to the whole grid
 * and is responsible for inverting the state.
 *
 * @image html grid_RootElement.gif
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.55 $
 */
template <class Vertex, class Cell, class State, class VertexStack, class CellStack, class EventHandle>
class peano::kernel::spacetreegrid::Grid {
  private:
    typedef peano::kernel::spacetreegrid::nodes::Leaf<Vertex,Cell,State,VertexStack,CellStack,EventHandle>     LeafNode;
    typedef peano::kernel::spacetreegrid::nodes::Root<Vertex,Cell,State,VertexStack,CellStack,EventHandle>     RootNode;
    typedef peano::kernel::spacetreegrid::nodes::Refined<Vertex,Cell,State,VertexStack,CellStack,EventHandle>  RefinedNode;

    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    /**
     * Holds the event handle associated to this event.
     */
    EventHandle   _eventHandle;

    /**
     * Nodes of the spacetree (flyweight pattern)
     */
    LeafNode     _leafNode;
    RefinedNode  _refinedNode;
    RootNode     _root;

  public:
    /**
     * Create new grid
     *
     * Construct a new grid with the given parameters. You have to init
     * the geometry and the stacks before you call any further operations on
     * the grid.
     */
    Grid(
      VertexStack&                                  vertexStack,
      CellStack&                                    cellStack,
      peano::geometry::Geometry&                    geometry,
      State&                                        state,
      const tarch::la::Vector<DIMENSIONS,double>&   domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&   domainOffset
    );

    /**
     * If you use this constructor, you have to call restart afterwards, i.e.
     * this constructor does not set up the grid completely
     */
    Grid(
      VertexStack&                                  vertexStack,
      CellStack&                                    cellStack,
      peano::geometry::Geometry&                    geometry,
      State&                                        state
    );

    void iterate(State& state);

    void restart(
      const tarch::la::Vector<THREE_POWER_D,int>&   traversalOrderOfNeighbours,
      State&                                        state,
      const tarch::la::Vector<DIMENSIONS,double>&   domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&   domainOffset,
      int                                           domainLevel
    );

    void terminate();
};


#include "peano/kernel/spacetreegrid/Grid.cpph"


#endif
