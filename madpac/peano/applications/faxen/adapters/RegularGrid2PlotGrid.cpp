#include "peano/applications/faxen/adapters/RegularGrid2PlotGrid.h"

#include <sstream>

#include "peano/utils/Loop.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif


int peano::applications::faxen::adapters::RegularGrid2PlotGrid::_snapshotCounter = 0;


tarch::logging::Log peano::applications::faxen::adapters::RegularGrid2PlotGrid::_log( "peano::applications::faxen::adapters::RegularGrid2PlotGrid" );


peano::applications::faxen::adapters::RegularGrid2PlotGrid::RegularGrid2PlotGrid():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  _vertexTypeWriter(0) {
}


peano::applications::faxen::adapters::RegularGrid2PlotGrid::~RegularGrid2PlotGrid() {
}



void peano::applications::faxen::adapters::RegularGrid2PlotGrid::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {


}


void peano::applications::faxen::adapters::RegularGrid2PlotGrid::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {


}


void peano::applications::faxen::adapters::RegularGrid2PlotGrid::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::RegularGridVertex&  vertex
) {


}


void peano::applications::faxen::adapters::RegularGrid2PlotGrid::createCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {


}


void peano::applications::faxen::adapters::RegularGrid2PlotGrid::destroyCell(
  peano::applications::faxen::RegularGridVertex const * const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {


}


void peano::applications::faxen::adapters::RegularGrid2PlotGrid::handleCell(
  peano::applications::faxen::RegularGridVertex* const vertices,
  peano::applications::faxen::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell(...)", cell, enumerator.toString() );
  

 
  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  assertionMsg( false, "here should be a critical section, but I don't know how to implement this. If you implement it, please add it to the templates, too." );
  #endif
 
  assertion( DIMENSIONS==2 || DIMENSIONS==3 );
  int vertexIndex[TWO_POWER_D];
  dfor2(i)
    tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = enumerator.getVertexPosition(i);
    assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
    vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
  enddforx
  
  if (DIMENSIONS==2) {
    _cellWriter->plotQuadrangle(vertexIndex);
  }
  if (DIMENSIONS==3) {
    _cellWriter->plotHexahedron(vertexIndex);
  }
  logTraceOut( "handleCell(...)" );
}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2PlotGrid::mergeWithNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex,
  const peano::applications::faxen::RegularGridVertex& neighbour, 
  int fromRank) {

}
#endif

void peano::applications::faxen::adapters::RegularGrid2PlotGrid::touchVertexFirstTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime(...)", vertex, x );
  


  #ifdef SharedTBB
  Vertex2IndexMapSemaphore::scoped_lock localLock(_vertex2IndexMapSemaphore);
  #elif SharedOMP
  assertionMsg( false, "here should be a critical section, but I don't know how to implement this. If you implement it, please add it to the templates, too." );
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


void peano::applications::faxen::adapters::RegularGrid2PlotGrid::touchVertexLastTime(
  peano::applications::faxen::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {


}

#ifdef Parallel
void peano::applications::faxen::adapters::RegularGrid2PlotGrid::prepareSendToNeighbour(
  peano::applications::faxen::RegularGridVertex& vertex
) {

}
#endif

void peano::applications::faxen::adapters::RegularGrid2PlotGrid::beginIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(...)", solverState );

  _vtkWriter.clear();
  
  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();
  _vertexTypeWriter = _vtkWriter.createVertexDataWriter(peano::applications::faxen::RegularGridVertex::Records::getInsideOutsideDomainMapping() ,1);



  logTraceOut( "beginIteration(...)" );
}


void peano::applications::faxen::adapters::RegularGrid2PlotGrid::endIteration(
  peano::applications::faxen::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration(...)", solverState );
  
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
  snapshotFileName << "vtk-grid-snapshot-RegularGrid2PlotGrid-"
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

