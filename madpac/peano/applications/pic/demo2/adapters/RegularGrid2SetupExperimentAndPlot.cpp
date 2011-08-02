#include "peano/applications/pic/demo2/adapters/RegularGrid2SetupExperimentAndPlot.h"

#include <sstream>

#include "peano/utils/Loop.h"

#include "tarch/multicore/Lock.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif


int peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::_snapshotCounter = 0;


tarch::logging::Log peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::_log( "peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot" );


peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::RegularGrid2SetupExperimentAndPlot():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  _vertexTypeWriter(0) {
}


peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::~RegularGrid2SetupExperimentAndPlot() {
}



void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createInnerVertex(x,h,vertex);
  _map2PlotSolution.createInnerVertex(x,h,vertex);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.createBoundaryVertex(x,h,vertex);
  _map2PlotSolution.createBoundaryVertex(x,h,vertex);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::pic::demo2::RegularGridVertex&  vertex
) {

  _map2SetupExperiment.destroyVertex(x,h,vertex);
  _map2PlotSolution.destroyVertex(x,h,vertex);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::createCell(
  peano::applications::pic::demo2::RegularGridVertex const * const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.createCell(vertices,cell,enumerator);
  _map2PlotSolution.createCell(vertices,cell,enumerator);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::destroyCell(
  peano::applications::pic::demo2::RegularGridVertex const * const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

  _map2SetupExperiment.destroyCell(vertices,cell,enumerator);
  _map2PlotSolution.destroyCell(vertices,cell,enumerator);

}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::handleCell(
  peano::applications::pic::demo2::RegularGridVertex* const vertices,
  peano::applications::pic::demo2::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell(...)", cell, enumerator.toString() );
  _map2SetupExperiment.handleCell(vertices,cell,enumerator);
  _map2PlotSolution.handleCell(vertices,cell,enumerator);

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
void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::mergeWithNeighbour(
  peano::applications::pic::demo2::RegularGridVertex& vertex,
  const peano::applications::pic::demo2::RegularGridVertex& neighbour, 
  int fromRank) {
   _map2SetupExperiment.mergeWithNeighbour(vertex, neighbour,fromRank);
   _map2PlotSolution.mergeWithNeighbour(vertex, neighbour,fromRank);

}
#endif

void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::touchVertexFirstTime(
  peano::applications::pic::demo2::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime(...)", vertex, x );
  _map2SetupExperiment.touchVertexFirstTime(vertex,x);
  _map2PlotSolution.touchVertexFirstTime(vertex,x);


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


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::touchVertexLastTime(
  peano::applications::pic::demo2::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {

  _map2SetupExperiment.touchVertexLastTime(vertex,x);
  _map2PlotSolution.touchVertexLastTime(vertex,x);

}

#ifdef Parallel
void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::prepareSendToNeighbour(
  peano::applications::pic::demo2::RegularGridVertex& vertex
) {
   _map2SetupExperiment.prepareSendToNeighbour(vertex);
   _map2PlotSolution.prepareSendToNeighbour(vertex);

}
#endif

void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::beginIteration(
  peano::applications::pic::demo2::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(...)", solverState );
  
  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  _vtkWriter.clear();
  
  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();
  _vertexTypeWriter = _vtkWriter.createVertexDataWriter(peano::applications::pic::demo2::RegularGridVertex::Records::getInsideOutsideDomainMapping() ,1);

  _map2SetupExperiment.beginIteration(solverState);
  _map2PlotSolution.beginIteration(solverState);


  logTraceOut( "beginIteration(...)" );
}


void peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot::endIteration(
  peano::applications::pic::demo2::RegularGridState&  solverState
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
  snapshotFileName << "vtk-grid-snapshot-RegularGrid2SetupExperimentAndPlot-"
                   << _snapshotCounter
                   #ifdef Parallel
                   << "-rank" << tarch::parallel::Node::getInstance().getRank()
                   #endif
                   << ".vtk";
  _vtkWriter.writeToFile( snapshotFileName.str() );
  
  _snapshotCounter++;                  
  
  _vertex2IndexMap.clear();

  _map2SetupExperiment.endIteration(solverState);
  _map2PlotSolution.endIteration(solverState);

 
  logTraceOut( "endIteration(...)" );
}

