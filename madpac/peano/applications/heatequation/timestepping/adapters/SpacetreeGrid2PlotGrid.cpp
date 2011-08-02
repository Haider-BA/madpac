#include "peano/applications/heatequation/timestepping/adapters/SpacetreeGrid2PlotGrid.h"

#include <sstream>

#include "peano/utils/Loop.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif


int peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::_snapshotCounter = 0;


tarch::logging::Log peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::_log( "peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid" );


peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::SpacetreeGrid2PlotGrid():
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


peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::~SpacetreeGrid2PlotGrid() {
}



void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::plotVertex(
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                  fineGridX
) {
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif

  if ( 
    fineGridVertex.getRefinementControl() != peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Refined &&
    fineGridVertex.getRefinementControl() != peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Refining &&
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


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {


 
}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {


 
}



void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::createHangingVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {


 
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif
 
  plotVertex( fineGridVertex, fineGridX );
 
}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {


}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {


}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {


}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {


}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::mergeWithNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex,
  const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
  int fromRank) {

}
#endif

void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::touchVertexFirstTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );



  plotVertex( fineGridVertex, fineGridX );

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", _vertex2IndexMap.size() );
}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::touchVertexLastTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {


}

#ifdef Parallel
void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::prepareSendToNeighbour(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex
) {

}
#endif

void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::beginIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
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
  
  _vertexTypeWriter               = _vtkWriter.createVertexDataWriter(peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::getInsideOutsideDomainMapping() ,1);
  _vertexRefinementControlWriter  = _vtkWriter.createVertexDataWriter(peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::getRefinementControlMapping() ,1);
  _vertexMaximumSubtreeWriter     = _vtkWriter.createVertexDataWriter("max-subtree" ,1);




  logTraceOut( "beginIteration(...)" );
}


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::endIteration(
  peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(...)", solverState );


 
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
  snapshotFileName << "vtk-grid-snapshot-SpacetreeGrid2PlotGrid-"
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


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith5Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );


 
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


void peano::applications::heatequation::timestepping::adapters::SpacetreeGrid2PlotGrid::leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {


}
