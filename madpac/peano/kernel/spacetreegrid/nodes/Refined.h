// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_NODES_REFINED_H_
#define _PEANO_KERNEL_SPACETREE_GRID_NODES_REFINED_H_


#include "peano/utils/Globals.h"
#include "peano/kernel/spacetreegrid/SingleLevelEnumerator.h"
#include "peano/kernel/spacetreegrid/nodes/Node.h"


/**
 * Refined Node
 *
 * t.b.d. This is the former RefinedEvent
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
class peano::kernel::spacetreegrid::nodes::Refined: public peano::kernel::spacetreegrid::nodes::Node<Vertex,Cell,State,VertexStack,CellStack,EventHandle> {
  private:
    typedef peano::kernel::spacetreegrid::nodes::Node<Vertex,Cell,State,VertexStack,CellStack,EventHandle>     Base;
    typedef peano::kernel::spacetreegrid::nodes::Leaf<Vertex,Cell,State,VertexStack,CellStack,EventHandle>     LeafNode;

    static tarch::logging::Log _log;

    LeafNode&  _leafNode;

    /**
     * Set Counter, create hanging nodes and new nodes
     *
     * @param coarseGridVertices That is the coarse grid vertices throughout
     *                           the descend process, i.e. it is the fine grid
     *                           vertices of the refined event.
     */
    void setCounter(
      Vertex                        coarseGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&  coarseGridVerticesEnumerator,
      int                           fineGridCounter[FOUR_POWER_D]
    );

    /**
     * @see Node::updateCellAfterLoad()
     */
    void updateRefinedCellBeforeStore(
      State&                                    state,
      Cell&                                     fineGridCell,
      Vertex                                    fineGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      Cell&                                     coarseGridCell,
      Vertex                                    coarseGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&  fineGridPositionOfCell
    );

    void validateRefinementStateOfVertices(
      Vertex const * const          fineGridVertices,
      const SingleLevelEnumerator&  fineGridVerticesEnumerator
   );

  public:
    Refined(
      VertexStack&                vertexStack,
      CellStack&                  cellStack,
      EventHandle&                eventHandle,
      peano::geometry::Geometry&  geometry,
      LeafNode&                   leafNode
    );

    /**
     * @see Standard constructor
     */
    virtual ~Refined();

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
      Vertex                                    fineGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      Cell&                                     coarseGridCell,
      Vertex                                    coarseGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&  fineGridPositionOfCell
    );

    void descend(
      State&                                    state,
      Cell&                                     fineGridCell,
      Vertex                                    fineGridVertices[FOUR_POWER_D],
      const SingleLevelEnumerator&              fineGridVerticesEnumerator,
      Cell                                      newFineGridCells[THREE_POWER_D],
      bool                                      destroySubLevelsFinally
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


#include "peano/kernel/spacetreegrid/nodes/Refined.cpph"

#endif
