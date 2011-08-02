#include "peano/applications/puregrid/adapters/SpacetreeGrid2PerformOneRefinement.h"

#include <sstream>

#include "peano/utils/Loop.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif


int peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::_snapshotCounter = 0;


tarch::logging::Log peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::_log( "peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement" );


peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::SpacetreeGrid2PerformOneRefinement():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  #ifdef Parallel
  _cellDeltaWriter(0),
  _cellWeightWriter(0),
  #endif
  _vertexTypeWriter(0),
  _vertexRefinementControlWriter(0),
  _vertexMaximumSubtreeWriter(0) {
}


peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::~SpacetreeGrid2PerformOneRefinement() {
}



void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::plotVertex(
  const peano::applications::puregrid::SpacetreeGridVertex& fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                  fineGridX
) {
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif

  if ( 
    fineGridVertex.getRefinementControl() != peano::applications::puregrid::SpacetreeGridVertex::Records::Refined &&
    fineGridVertex.getRefinementControl() != peano::applications::puregrid::SpacetreeGridVertex::Records::Refining &&
    _vertex2IndexMap.find(fineGridX) == _vertex2IndexMap.end() 
  ) {  
    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(fineGridX);
    #else
    _vertex2IndexMap[fineGridX] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(fineGridX.data()));
    #endif
    _vertexTypeWriter->plotVertex             (_vertex2IndexMap[fineGridX],fineGridVertex.isBoundary() );
    _vertexRefinementControlWriter->plotVertex(_vertex2IndexMap[fineGridX],fineGridVertex.getRefinementControl() );
    _vertexMaximumSubtreeWriter->plotVertex   (_vertex2IndexMap[fineGridX],fineGridVertex.getMaximumSubtreeHeight() );
  }
}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::createInnerVertex(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2PerformOneRefinement.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

 
}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::createBoundaryVertex(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2PerformOneRefinement.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

 
}



void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::createHangingVertex(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2PerformOneRefinement.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

 
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif
 
  plotVertex( fineGridVertex, fineGridX );
 
}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::destroyHangingVertex(
      const peano::applications::puregrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2PerformOneRefinement.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::destroyVertex(
      const peano::applications::puregrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2PerformOneRefinement.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::createCell(
      peano::applications::puregrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2PerformOneRefinement.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::destroyCell(
      const peano::applications::puregrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2PerformOneRefinement.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::mergeWithNeighbour(
  peano::applications::puregrid::SpacetreeGridVertex& vertex,
  const peano::applications::puregrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
   _map2PerformOneRefinement.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::touchVertexFirstTime(
      peano::applications::puregrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  _map2PerformOneRefinement.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );


  plotVertex( fineGridVertex, fineGridX );

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", _vertex2IndexMap.size() );
}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::touchVertexLastTime(
      peano::applications::puregrid::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2PerformOneRefinement.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::prepareSendToNeighbour(
  peano::applications::puregrid::SpacetreeGridVertex& vertex
) {
   _map2PerformOneRefinement.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::beginIteration(
  peano::applications::puregrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(...)", solverState );


  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif
  
  _vtkWriter.clear();
  
  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();
  
  #ifdef Parallel
  _cellDeltaWriter  = _vtkWriter.createCellDataWriter( "delta" ,1);
  _cellWeightWriter = _vtkWriter.createCellDataWriter( "weight" ,1);
  #endif
  
  _vertexTypeWriter               = _vtkWriter.createVertexDataWriter(peano::applications::puregrid::SpacetreeGridVertex::Records::getInsideOutsideDomainMapping() ,1);
  _vertexRefinementControlWriter  = _vtkWriter.createVertexDataWriter(peano::applications::puregrid::SpacetreeGridVertex::Records::getRefinementControlMapping() ,1);
  _vertexMaximumSubtreeWriter     = _vtkWriter.createVertexDataWriter("max-subtree" ,1);

  _map2PerformOneRefinement.beginIteration(solverState);



  logTraceOut( "beginIteration(...)" );
}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::endIteration(
  peano::applications::puregrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(...)", solverState );

  _map2PerformOneRefinement.endIteration( solverState );

 
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif
 
  _vertexWriter->close();
  _cellWriter->close();
  
  _vertexTypeWriter->close();
  _vertexRefinementControlWriter->close();
  _vertexMaximumSubtreeWriter->close();
  
  #ifdef Parallel
  _cellDeltaWriter->close();
  _cellWeightWriter->close();
  #endif
  
  delete _vertexWriter;
  delete _cellWriter;
  delete _vertexTypeWriter;
  delete _vertexRefinementControlWriter;
  delete _vertexMaximumSubtreeWriter;
   #ifdef Parallel
  delete _cellDeltaWriter;
  delete _cellWeightWriter;
  #endif
  
  _vertexWriter     = 0;
  _cellWriter       = 0;
  _vertexTypeWriter = 0;
  _vertexRefinementControlWriter = 0;
  _vertexMaximumSubtreeWriter = 0;
   #ifdef Parallel
  _cellDeltaWriter = 0;
  _cellWeightWriter = 0;
  #endif
  
  std::ostringstream snapshotFileName;
  snapshotFileName << "vtk-grid-snapshot-SpacetreeGrid2PerformOneRefinement-"
                   << _snapshotCounter
                   #ifdef Parallel
                   << "-rank" << tarch::parallel::Node::getInstance().getRank()
                   #endif
                   << ".vtk";
  _vtkWriter.writeToFile( snapshotFileName.str() );
  
  _snapshotCounter++;                  
  
  _vertex2IndexMap.clear();
 
  logTraceOut( "endIteration(...)" ); 
}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::enterCell(
      peano::applications::puregrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::puregrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith5Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );

  _map2PerformOneRefinement.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

 
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif

  if ( fineGridCell.isLeaf() ) { 
    assertion( DIMENSIONS==2 || DIMENSIONS==3 );
    int vertexIndex[TWO_POWER_D];
     dfor2(i)
      tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = fineGridVerticesEnumerator.getVertexPosition(i);
      assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
      vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
    enddforx
  
    int cellIndex;
    if (DIMENSIONS==2) {
      cellIndex = _cellWriter->plotQuadrangle(vertexIndex);
    }
    if (DIMENSIONS==3) {
      cellIndex = _cellWriter->plotHexahedron(vertexIndex);
    }

    #ifdef Parallel
    _cellDeltaWriter->plotCell( cellIndex,fineGridCell.getDelta() );
    _cellWeightWriter->plotCell( cellIndex,fineGridCell.getWeight() );
    #endif
  }
  
  logTraceOut( "enterCell(...)" );
}


void peano::applications::puregrid::adapters::SpacetreeGrid2PerformOneRefinement::leaveCell(
      peano::applications::puregrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::puregrid::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::puregrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2PerformOneRefinement.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
