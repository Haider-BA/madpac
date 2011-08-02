#include "peano/applications/poisson/jacobitutorial/mappings/RegularGrid2PlotSolution.h"

#include "peano/utils/Loop.h"

#include "tarch/multicore/Lock.h"

tarch::logging::Log peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::_log( "peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution" );


peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::RegularGrid2PlotSolution():
  _vertex2IndexMap(),
  _vtkWriter(),
  _vertexWriter(0),
  _cellWriter(0),
  _vertexResidualWriter(0),
  _vertexValueWriter(0),
  _vertexRhsWriter(0) {
  logTraceIn( "RegularGrid2PlotSolution()" );
  logTraceOut( "RegularGrid2PlotSolution()" );
}


peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::~RegularGrid2PlotSolution() {
}

  
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
) {
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::createCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::destroyCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::handleCell(
  peano::applications::poisson::jacobitutorial::RegularGridVertex* const vertices,
  peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  /**
   * --- inserted manually ---
   *
   * This is just cell plot mechanics. As the cells have no properties, it is
   * exactly the same what the grid plotter which is generated does.
   */
  tarch::multicore::Lock localLock( _outputStreamSemaphore );

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

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::mergeWithNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex, 
  const peano::applications::poisson::jacobitutorial::RegularGridVertex& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::touchVertexFirstTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  /**
   * --- inserted manually ---
   *
   * This is now the interesting part. The first few lines in the block resemble
   * the one inserted by the generated grid plotter. It brings the vertex to
   * your screen (or vtk file respectively. The lines afterwards then set
   */
  tarch::multicore::Lock localLock( _outputStreamSemaphore );

  if ( _vertex2IndexMap.find(x) == _vertex2IndexMap.end() ) {
    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(x);
    #else
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(x.data()));
    #endif

    _vertexResidualWriter->plotVertex(_vertex2IndexMap[x],vertex.getResidual());
    _vertexValueWriter->plotVertex(_vertex2IndexMap[x],vertex.getU());
    _vertexRhsWriter->plotVertex(_vertex2IndexMap[x],vertex.getRhs());
  }

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::touchVertexLastTime(
  peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::prepareSendToNeighbour(
  peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::beginIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );

  /**
   * --- inserted manually ---
   *
   * The second part of this implementation again is straightforward and very
   * technical. We just create the different writers we need.
   */
  _vtkWriter.clear();
  _vertex2IndexMap.clear();

  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();

  _vertexResidualWriter = _vtkWriter.createVertexDataWriter("residual",1);
  _vertexValueWriter    = _vtkWriter.createVertexDataWriter("value",1);
  _vertexRhsWriter      = _vtkWriter.createVertexDataWriter("rhs",1);

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::poisson::jacobitutorial::mappings::RegularGrid2PlotSolution::endIteration(
  peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );

  /**
   * --- inserted manually ---
   *
   * Whenever we startup a plotter iteration, we take the output file name and
   * add a counter. The counter is stored in the state as we have to keep track
   * of it throughout the whole program execution, and mappings should not have
   * a persistent state themselves.
   */
  std::ostringstream newFilename;
  newFilename << "jacobi-solution-on-regular-grid-"
              << solverState.getFilenameCounterAndIncrementIt()
              << ".vtk";

  /**
   * --- inserted manually ---
   *
   * Close the data writers, pipe the data to a file, and destroy all the
   * objects we won't need anymore. This is again technical stuff.
   */
  _vertexWriter->close();
  _cellWriter->close();

  _vertexResidualWriter->close();
  _vertexValueWriter->close();
  _vertexRhsWriter->close();

  delete _vertexWriter;
  delete _cellWriter;
  delete _vertexResidualWriter;
  delete _vertexValueWriter;
  delete _vertexRhsWriter;

  _vertexWriter         = 0;
  _cellWriter           = 0;
  _vertexResidualWriter = 0;
  _vertexValueWriter    = 0;
  _vertexRhsWriter      = 0;

  _vtkWriter.writeToFile( newFilename.str() );

  /**
   * --- inserted manually ---
   *
   * Lets finally tell the user that we've created a file.
   */
  logInfo( "endIteration()", "wrote solution to " << newFilename.str() );

  logTraceOutWith1Argument( "endIteration()", solverState );
}

