// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_NODES_LEAF_H_
#define _PEANO_KERNEL_SPACETREE_GRID_NODES_LEAF_H_


#include "peano/kernel/spacetreegrid/nodes/Node.h"


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
class peano::kernel::spacetreegrid::nodes::Leaf: public peano::kernel::spacetreegrid::nodes::Node<Vertex,Cell,State,VertexStack,CellStack,EventHandle> {
  private:
    typedef peano::kernel::spacetreegrid::nodes::Node<Vertex,Cell,State,VertexStack,CellStack,EventHandle>     Base;
    typedef peano::kernel::spacetreegrid::nodes::Refined<Vertex,Cell,State,VertexStack,CellStack,EventHandle>  RefinedNode;

    static tarch::logging::Log _log;

    RefinedNode& _refinedNode;

    static void validateRefinementStateOfVertices(
      Vertex const * const          fineGridVertices,
      const SingleLevelEnumerator&  fineGridVerticesEnumerator
    );
  public:
    Leaf(
      VertexStack&                vertexStack,
      CellStack&                  cellStack,
      EventHandle&                eventHandle,
      peano::geometry::Geometry&  geometry,
      RefinedNode&                refinedNode
    );

    /**
     * @see Standard constructor. There's nothing to do here.
     */
    ~Leaf();

    void load(
      State&                                    state,
      Cell&                                     fineGridCell,
      Vertex                                    fineGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      Cell&                                     coarseGridCell,
      Vertex                                    coarseGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&  fineGridPositionOfCell,
      int                                       counter[FOUR_POWER_D]
    );

    void traverse(
      State&                                    state,
      Cell&                                     fineGridCell,
      Vertex* const                             fineGridVertices,
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      Cell&                                     coarseGridCell,
      Vertex* const                             coarseGridVertices,
      const SingleLevelEnumerator&              coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&  fineGridPositionOfCell
    );

    void store(
      State&                                    state,
      Cell&                                     fineGridCell,
      Vertex                                    fineGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      Cell&                                     coarseGridCell,
      Vertex                                    coarseGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&  fineGridPositionOfCell,
      int                                       counter[FOUR_POWER_D]
    );
};


#include "peano/kernel/spacetreegrid/nodes/Leaf.cpph"


#endif
