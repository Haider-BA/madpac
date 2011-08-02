// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_ADAPTERS_SpacetreeGrid2PlotRegularSolutionVTK_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_ADAPTERS_SpacetreeGrid2PlotRegularSolutionVTK_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit.h"

 #include "peano/applications/navierstokes/prototype1/mappings/SpacetreeGrid2PlotRegularSolutionVTK.h"



namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype1 {
      namespace adapters {
        class SpacetreeGrid2PlotRegularSolutionVTK;
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
class peano::applications::navierstokes::prototype1::adapters::SpacetreeGrid2PlotRegularSolutionVTK {
  private:
    peano::applications::navierstokes::prototype1::mappings::SpacetreeGrid2PlotRegularSolutionVTK _map2PlotRegularSolutionVTK;

  public:
    SpacetreeGrid2PlotRegularSolutionVTK();

    virtual ~SpacetreeGrid2PlotRegularSolutionVTK();
  
    void createInnerVertex(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    void createBoundaryVertex(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    void createHangingVertex(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    void destroyHangingVertex(
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );


    void destroyVertex(
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );


    void createCell(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&                 fineGridCell,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );


    void destroyCell(
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           fineGridCell,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );
        
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& vertex, 
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    void touchVertexLastTime(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );

    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& vertex);
    #endif

    void beginIteration(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
    );


    void endIteration(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
    );
    

    void enterCell(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&                 fineGridCell,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );


    void leaveCell(
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           fineGridCell,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::navierstokes::prototype1::SpacetreeGridFluidCellEnhancedDivFreeEulerExplicit&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
    );
};


#endif
