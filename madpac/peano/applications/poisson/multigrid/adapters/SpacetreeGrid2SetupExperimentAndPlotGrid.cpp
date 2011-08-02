#include "peano/applications/poisson/multigrid/adapters/SpacetreeGrid2SetupExperimentAndPlotGrid.h"

#include <sstream>

#include "peano/utils/Loop.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif


int peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::_snapshotCounter = 0;


tarch::logging::Log peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::_log( "peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid" );


peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::SpacetreeGrid2SetupExperimentAndPlotGrid():
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


peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::~SpacetreeGrid2SetupExperimentAndPlotGrid() {
}



void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::plotVertex(
  const peano::applications::poisson::multigrid::SpacetreeGridVertex& fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                  fineGridX
) {
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif

  if ( 
    fineGridVertex.getRefinementControl() != peano::applications::poisson::multigrid::SpacetreeGridVertex::Records::Refined &&
    fineGridVertex.getRefinementControl() != peano::applications::poisson::multigrid::SpacetreeGridVertex::Records::Refining &&
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


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::createInnerVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SetupExperiment.createInnerVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

 
}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::createBoundaryVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SetupExperiment.createBoundaryVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

 
}



void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::createHangingVertex(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {

  _map2SetupExperiment.createHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

 
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif
 
  plotVertex( fineGridVertex, fineGridX );
 
}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::destroyHangingVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SetupExperiment.destroyHangingVertex(fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::destroyVertex(
      const peano::applications::poisson::multigrid::SpacetreeGridVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SetupExperiment.destroyVertex( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::createCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2SetupExperiment.createCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::destroyCell(
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {

  _map2SetupExperiment.destroyCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}

#ifdef Parallel
void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::mergeWithNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex,
  const peano::applications::poisson::multigrid::SpacetreeGridVertex& neighbour, 
  int fromRank) {
   _map2SetupExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::touchVertexFirstTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );

  _map2SetupExperiment.touchVertexFirstTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );


  plotVertex( fineGridVertex, fineGridX );

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", _vertex2IndexMap.size() );
}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::touchVertexLastTime(
      peano::applications::poisson::multigrid::SpacetreeGridVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {

  _map2SetupExperiment.touchVertexLastTime( fineGridVertex, fineGridX, fineGridH, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfVertex );

}

#ifdef Parallel
void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::prepareSendToNeighbour(
  peano::applications::poisson::multigrid::SpacetreeGridVertex& vertex
) {
   _map2SetupExperiment.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::beginIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
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
  
  _vertexTypeWriter               = _vtkWriter.createVertexDataWriter(peano::applications::poisson::multigrid::SpacetreeGridVertex::Records::getInsideOutsideDomainMapping() ,1);
  _vertexRefinementControlWriter  = _vtkWriter.createVertexDataWriter(peano::applications::poisson::multigrid::SpacetreeGridVertex::Records::getRefinementControlMapping() ,1);
  _vertexMaximumSubtreeWriter     = _vtkWriter.createVertexDataWriter("max-subtree" ,1);

  _map2SetupExperiment.beginIteration(solverState);



  logTraceOut( "beginIteration(...)" );
}


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::endIteration(
  peano::applications::poisson::multigrid::SpacetreeGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(...)", solverState );

  _map2SetupExperiment.endIteration( solverState );

 
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
  snapshotFileName << "vtk-grid-snapshot-SpacetreeGrid2SetupExperimentAndPlotGrid-"
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


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::enterCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&                 fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::poisson::multigrid::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith5Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );

  _map2SetupExperiment.enterCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

 
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


void peano::applications::poisson::multigrid::adapters::SpacetreeGrid2SetupExperimentAndPlotGrid::leaveCell(
      peano::applications::poisson::multigrid::SpacetreeGridCell&           fineGridCell,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::poisson::multigrid::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {

  _map2SetupExperiment.leaveCell( fineGridCell, fineGridVertices, fineGridVerticesEnumerator, coarseGridVertices, coarseGridVerticesEnumerator, coarseGridCell, fineGridPositionOfCell );

}
