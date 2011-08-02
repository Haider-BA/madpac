#include "peano/applications/faxen/lbf/adapters/RegularGrid2PlotGrid.h"

#include <sstream>

#include "peano/utils/Loop.h"

#include "tarch/multicore/Lock.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif


int peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::_snapshotCounter = 0;


tarch::logging::Log peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::_log( "peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid" );


peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::RegularGrid2PlotGrid():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  _vertexTypeWriter(0) {
}


peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::~RegularGrid2PlotGrid() {
}



void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {


}


void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {


}


void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex
) {


}


void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::createCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {


}


void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::destroyCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex const * const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {


}


void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::handleCell(
  peano::applications::faxen::lbf::RegularGridBlockVertex* const vertices,
  peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell(...)", cell, enumerator.toString() );

  assertion( DIMENSIONS==2 || DIMENSIONS==3 );
  int vertexIndex[TWO_POWER_D];
  dfor2(i)
    tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = enumerator.getVertexPosition(i);
    assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
    vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
  enddforx
  
  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);
  
  if (DIMENSIONS==2) {
    _cellWriter->plotQuadrangle(vertexIndex);
  }
  if (DIMENSIONS==3) {
    _cellWriter->plotHexahedron(vertexIndex);
  }
  logTraceOut( "handleCell(...)" );
}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::mergeWithNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex,
  const peano::applications::faxen::lbf::RegularGridBlockVertex& neighbour, 
  int fromRank) {

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::touchVertexFirstTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime(...)", vertex, x );


  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

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


void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::touchVertexLastTime(
  peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {


}

#ifdef Parallel
void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::prepareSendToNeighbour(
  peano::applications::faxen::lbf::RegularGridBlockVertex& vertex
) {

}
#endif

void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::beginIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(...)", solverState );
  
  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  _vtkWriter.clear();
  
  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();
  _vertexTypeWriter = _vtkWriter.createVertexDataWriter(peano::applications::faxen::lbf::RegularGridBlockVertex::Records::getInsideOutsideDomainMapping() ,1);



  logTraceOut( "beginIteration(...)" );
}


void peano::applications::faxen::lbf::adapters::RegularGrid2PlotGrid::endIteration(
  peano::applications::faxen::lbf::RegularGridBlockState&  solverState
) {
  logTraceInWith1Argument( "endIteration(...)", solverState );
  
  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);
  
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

