// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PUREGRID_MAPPINGS_SpacetreeGrid2PerformOneRefinement_H_
#define PEANO_APPLICATIONS_PUREGRID_MAPPINGS_SpacetreeGrid2PerformOneRefinement_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/puregrid/SpacetreeGridCell.h"
#include "peano/applications/puregrid/SpacetreeGridVertex.h"
#include "peano/applications/puregrid/SpacetreeGridState.h"


namespace peano { 
  namespace applications { 
    namespace puregrid {
      namespace mappings {
        class SpacetreeGrid2PerformOneRefinement;
      } 
}
}
}


/**
 * Perform One Refinement Mapping
 *
 * This mapping performs one (or no) refinement per iteration. For this, it
 * holds an internal flag indicating that a refinement has taken place. This
 * flag is reset at the begin of the iteration. In touchVertexLastTime(), the
 * mapping then compares (if this flag ain't set yet) the vertex's position to
 * the geometry and refines if necessary. That is all the mapping does.
 *
 * The refinement check could either be implemented by touchVertexLastTime() or
 * touchVertexFirstTime(), but it may not be implemented in the create event.
 * If we trigger a refinement in throughout the creation, the grid will refine
 * immediately, i.e. we will refine more than one level per iteration.
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.10 $
 */
class peano::applications::puregrid::mappings::SpacetreeGrid2PerformOneRefinement {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    int _numberOfAllowedRefinements;
  
  public:
    /**
     * nop
     */
    SpacetreeGrid2PerformOneRefinement();

    /**
     * nop
     */
    virtual ~SpacetreeGrid2PerformOneRefinement();
  
    /**
     * nop
     */
    void createInnerVertex(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
    );

    
    /**
     * nop
     */
    void createBoundaryVertex(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
    );
    

    /**
     * nop
     */
    void createHangingVertex(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
    );


    /**
     * nop
     */
    void destroyVertex(
      const peano::applications::puregrid::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
    );


    /**
     * nop
     */
    void destroyHangingVertex(
      const peano::applications::puregrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                 fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                 fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&       coarseGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                    fineGridPositionOfVertex
    );
    

    /**
     * nop
     */
    void createCell(
      peano::applications::puregrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfCell
    );


    /**
     * nop
     */
    void destroyCell(
      const peano::applications::puregrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfCell
    );

    #ifdef Parallel
    /**
     * Merge vertex with the incoming vertex from a neighbouring computation node.
     * 
     * When Peano is running in parallel the data exchange is done vertex-wise 
     * between two grid iterations. Thus, before the touchVertexFirstTime-event
     * the vertex, sent by the computation node, which shares this vertex, is 
     * merged with the local copy of this vertex.
     *
     * @param vertex Local copy of the vertex.
     * @param neighbour Remote copy of the vertex.
     * @param fromRank rank of the neighbouring computation node
     */
    void mergeWithNeighbour(
      peano::applications::puregrid::SpacetreeGridVertex& vertex, 
      const peano::applications::puregrid::SpacetreeGridVertex& neighbour, 
      int fromRank);
    #endif 


    /**
     * nop
     */
    void touchVertexFirstTime(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                       fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfVertex
    );


    /**
     * If the vertex's environment intersects with the geometry and if
     * _haveTriggeredRefinement isn't set yet, I trigger a refinement and set
     * the trigger. Obviously, the access to _haveTriggeredRefinement is not
     * thread-safe, but that is not an issue: If the code refines two or three
     * vertices in one rush instead of only one, I really don't care.
     */
    void touchVertexLastTime(
      peano::applications::puregrid::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                 fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                 fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&       coarseGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                    fineGridPositionOfVertex
    );

    #ifdef Parallel
    /**
     * Merge vertex with the incoming vertex from a neighbouring computation node.
     * 
     * When Peano is running in parallel the data exchange is done vertex-wise 
     * between two grid iterations. Thus, after the touchVertexLastTime-event
     * has been called the current vertex can be prepared for being sent to
     * the neighbouring computation node in this method. 
     *
     * @param vertex Local copy of the vertex.
     */
    void prepareSendToNeighbour(peano::applications::puregrid::SpacetreeGridVertex& vertex);
    #endif    

    /**
     * Begin the iteration
     *
     * Sets _haveTriggeredRefinement to false.
     */
    void beginIteration(
      peano::applications::puregrid::SpacetreeGridState&  solverState
    );


    /**
     * nop besides an assertion that checks that the grid is instationary if
     * the mapping is triggered a refinement.
     */
    void endIteration(
      peano::applications::puregrid::SpacetreeGridState&  solverState
    );

    
    /**
     * nop
     */
    void enterCell(
      peano::applications::puregrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&             coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                          fineGridPositionOfCell
    );


    /**
     * nop
     */
    void leaveCell(
      peano::applications::puregrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&       fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&       coarseGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                    fineGridPositionOfCell
    );
};


#endif
