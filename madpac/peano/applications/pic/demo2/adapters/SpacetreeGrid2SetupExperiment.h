// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PIC_DEMO2_ADAPTERS_SpacetreeGrid2SetupExperiment_H_
#define PEANO_APPLICATIONS_PIC_DEMO2_ADAPTERS_SpacetreeGrid2SetupExperiment_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/pic/demo2/SpacetreeGridCell.h"
#include "peano/applications/pic/demo2/SpacetreeGridVertex.h"
#include "peano/applications/pic/demo2/SpacetreeGridState.h"

 #include "peano/applications/pic/demo2/mappings/SpacetreeGrid2SetupExperiment.h"



namespace peano { 
  namespace applications { 
    namespace pic { 
      namespace demo2 {
      namespace adapters {
        class SpacetreeGrid2SetupExperiment;
      } 
}
}
}
}


/**
 * This is a mapping from the regular grid events to your user-defined activities.
 * Please implement the operations you wish to implement.
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.10 $
 */
class peano::applications::pic::demo2::adapters::SpacetreeGrid2SetupExperiment {
  private:
    peano::applications::pic::demo2::mappings::SpacetreeGrid2SetupExperiment _map2SetupExperiment;

  public:
    SpacetreeGrid2SetupExperiment();

    virtual ~SpacetreeGrid2SetupExperiment();
  
    void createInnerVertex(
      peano::applications::pic::demo2::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    void createBoundaryVertex(
      peano::applications::pic::demo2::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    void createHangingVertex(
      peano::applications::pic::demo2::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    void destroyHangingVertex(
      const peano::applications::pic::demo2::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );


    void destroyVertex(
      const peano::applications::pic::demo2::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );


    void createCell(
      peano::applications::pic::demo2::SpacetreeGridCell&                 fineGridCell,
      peano::applications::pic::demo2::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );


    void destroyCell(
      const peano::applications::pic::demo2::SpacetreeGridCell&           fineGridCell,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );
        
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::pic::demo2::SpacetreeGridVertex& vertex, 
      const peano::applications::pic::demo2::SpacetreeGridVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::pic::demo2::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    void touchVertexLastTime(
      peano::applications::pic::demo2::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::pic::demo2::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );

    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::pic::demo2::SpacetreeGridVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::pic::demo2::SpacetreeGridState&  solverState
    );


    void endIteration(
      peano::applications::pic::demo2::SpacetreeGridState&  solverState
    );
    

    void enterCell(
      peano::applications::pic::demo2::SpacetreeGridCell&                 fineGridCell,
      peano::applications::pic::demo2::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::pic::demo2::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );


    void leaveCell(
      peano::applications::pic::demo2::SpacetreeGridCell&           fineGridCell,
      peano::applications::pic::demo2::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::pic::demo2::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
    );
};


#endif