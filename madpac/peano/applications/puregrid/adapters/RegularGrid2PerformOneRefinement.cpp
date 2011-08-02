#include "peano/applications/puregrid/adapters/RegularGrid2PerformOneRefinement.h"

#include <sstream>

#include "peano/utils/Loop.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif


int peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::_snapshotCounter = 0;


tarch::logging::Log peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::_log( "peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement" );


peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::RegularGrid2PerformOneRefinement():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  _vertexTypeWriter(0) {
}


peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::~RegularGrid2PerformOneRefinement() {
}



void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {

  _map2PerformOneRefinement.createInnerVertex(x,h,vertex);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {

  _map2PerformOneRefinement.createBoundaryVertex(x,h,vertex);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::puregrid::RegularGridVertex&  vertex
) {

  _map2PerformOneRefinement.destroyVertex(x,h,vertex);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::createCell(
  peano::applications::puregrid::RegularGridVertex const * const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformOneRefinement.createCell(vertices,cell,enumerator);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::destroyCell(
  peano::applications::puregrid::RegularGridVertex const * const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2PerformOneRefinement.destroyCell(vertices,cell,enumerator);

}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::handleCell(
  peano::applications::puregrid::RegularGridVertex* const vertices,
  peano::applications::puregrid::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell(...)", cell, enumerator.toString() );
  _map2PerformOneRefinement.handleCell(vertices,cell,enumerator);

  assertion( DIMENSIONS==2 || DIMENSIONS==3 );
  int vertexIndex[TWO_POWER_D];
  dfor2(i)
    tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = enumerator.getVertexPosition(i);
    assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
    vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
  enddforx
  
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif
  
  if (DIMENSIONS==2) {
    _cellWriter->plotQuadrangle(vertexIndex);
  }
  if (DIMENSIONS==3) {
    _cellWriter->plotHexahedron(vertexIndex);
  }
  logTraceOut( "handleCell(...)" );
}

#ifdef Parallel
void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::mergeWithNeighbour(
  peano::applications::puregrid::RegularGridVertex& vertex,
  const peano::applications::puregrid::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2PerformOneRefinement.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::touchVertexFirstTime(
  peano::applications::puregrid::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime(...)", vertex, x );
  _map2PerformOneRefinement.touchVertexFirstTime(vertex,x);


  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  #pragma omp critical
  #endif

  if ( _vertex2IndexMap.find(x) == _vertex2IndexMap.end() ) {
    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(x);
    #else
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(x.data()));
    #endif
    _vertexTypeWriter->plotVertex(_vertex2IndexMap[x],vertex.isBoundary() );
  }

  logTraceOutWith1Argument( "touchVertexFirstTime(...)", _vertex2IndexMap.size() );
}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::touchVertexLastTime(
  peano::applications::puregrid::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2PerformOneRefinement.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::prepareSendToNeighbour(
  peano::applications::puregrid::RegularGridVertex& vertex
) {
   _map2PerformOneRefinement.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::beginIteration(
  peano::applications::puregrid::RegularGridState&  solverState
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
  _vertexTypeWriter = _vtkWriter.createVertexDataWriter(peano::applications::puregrid::RegularGridVertex::Records::getInsideOutsideDomainMapping() ,1);

  _map2PerformOneRefinement.beginIteration(solverState);


  logTraceOut( "beginIteration(...)" );
}


void peano::applications::puregrid::adapters::RegularGrid2PerformOneRefinement::endIteration(
  peano::applications::puregrid::RegularGridState&  solverState
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
  
  delete _vertexWriter;
  delete _cellWriter;
  delete _vertexTypeWriter;
  
  _vertexWriter     = 0;
  _cellWriter       = 0;
  _vertexTypeWriter = 0;

  std::ostringstream snapshotFileName;
  snapshotFileName << "vtk-grid-snapshot-RegularGrid2PerformOneRefinement-"
                   << _snapshotCounter
                   #ifdef Parallel
                   << "-rank" << tarch::parallel::Node::getInstance().getRank()
                   #endif
                   << ".vtk";
  _vtkWriter.writeToFile( snapshotFileName.str() );
  
  _snapshotCounter++;                  
  
  _vertex2IndexMap.clear();

  _map2PerformOneRefinement.endIteration(solverState);

 
  logTraceOut( "endIteration(...)" );
}

