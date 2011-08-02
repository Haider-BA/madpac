#include "peano/applications/navierstokes/prototype1/mappings/RegularGrid2PlotSolutionVTK.h"


tarch::logging::Log peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::_log( "peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK" );


#include "tarch/Assertions.h"
#include "peano/utils/Loop.h"
#include "tarch/multicore/Lock.h"
#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif


peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::RegularGrid2PlotSolutionVTK():
          _vertex2IndexMap()
{
  logTraceIn( "RegularGrid2PlotSolution()" );
  logTraceOut( "RegularGrid2PlotSolution()" );
}

peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::~RegularGrid2PlotSolutionVTK() {
  logTraceIn( "~RegularGrid2PlotSolutionVTK()" );

  logTraceOut( "~RegularGrid2PlotSolutionVTK()" );
}

  
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );

  /**
   * The following lines are copied from poisson/jacobi
   */

  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  assertion( DIMENSIONS==2 || DIMENSIONS==3 );
  int vertexIndex[TWO_POWER_D];
  dfor2(i)
    tarch::la::Vector<DIMENSIONS,double> currentVertexPosition = enumerator.getVertexPosition(i);
    assertion1 ( _vertex2IndexMap.find(currentVertexPosition) != _vertex2IndexMap.end(), currentVertexPosition );
    vertexIndex[iScalar] = _vertex2IndexMap[currentVertexPosition];
  enddforx

  int number = -1;
  if (DIMENSIONS==2) {
    number = _cellWriter->plotQuadrangle(vertexIndex);
  }
  if (DIMENSIONS==3) {
    number = _cellWriter->plotHexahedron(vertexIndex);
  }
  _cellRHSWriter->plotCell(number,cell.getRhsPPE());
  _cellPressureWriter->plotCell(number,cell.getP());
  _cellTypeWriter->plotCell(number,cell.getFluidCellType());

  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex, 
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  /**
   * The following lines are copied from poisson/jacobi
   */
  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  if ( _vertex2IndexMap.find(x) == _vertex2IndexMap.end() ) {
    assertion(_vertexWriter.get()!=NULL);
    #if defined(Dim2) || defined(Dim3)
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(x);
    #else
    _vertex2IndexMap[x] = _vertexWriter->plotVertex(tarch::la::Vector<3,double>(x.data()));
    #endif

    assertion(_vertexVelocityVectorWriter.get()!=NULL);
    _vertexVelocityVectorWriter->plotVertex(_vertex2IndexMap[x], vertex.getU());
    _vertexTypeWriter->plotVertex(_vertex2IndexMap[x],vertex.getFluidVertexType());
  }

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  /**
   * --- inserted manually ---
   */
  _log.info("beginIteration()","start iteration for plot VTK mapping ...");

  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  _vtkWriter.clear();
  _vertex2IndexMap.clear();

  _vertexWriter     = std::auto_ptr<tarch::plotter::griddata::unstructured::UnstructuredGridWriter::VertexWriter>
  (_vtkWriter.createVertexWriter());
  _cellWriter       = std::auto_ptr<tarch::plotter::griddata::unstructured::UnstructuredGridWriter::CellWriter>
  (_vtkWriter.createCellWriter());

  _cellPressureWriter         = std::auto_ptr<tarch::plotter::griddata::Writer::CellDataWriter>
  (_vtkWriter.createCellDataWriter("pressure",1));
  _cellRHSWriter         = std::auto_ptr<tarch::plotter::griddata::Writer::CellDataWriter>
  (_vtkWriter.createCellDataWriter("rhs",1));
  _cellTypeWriter         = std::auto_ptr<tarch::plotter::griddata::Writer::CellDataWriter>
  (_vtkWriter.createCellDataWriter("cell-types",1));
  _vertexVelocityVectorWriter = std::auto_ptr<tarch::plotter::griddata::Writer::VertexDataWriter>
  (_vtkWriter.createVertexDataWriter("velocities",3));
  _vertexTypeWriter = std::auto_ptr<tarch::plotter::griddata::Writer::VertexDataWriter>
  (_vtkWriter.createVertexDataWriter("vertex-types",1));

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotSolutionVTK::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );

  /**
   * --- inserted manually ---
   */
  tarch::multicore::Lock localLock(_vertex2IndexMapSemaphore);

  std::ostringstream newFilename;
  #ifdef Parallel
  newFilename << "test3x3_" << "rank" << tarch::parallel::Node::getInstance().getRank() << "_" << solverState.getOdeTimestepnumber() << ".vtk";
  #else
  newFilename << "./testoutput/test3x3_" << solverState.getOdeTimestepnumber() << ".vtk";
  #endif

  _vertexWriter->close();
  _cellWriter->close();
  _cellTypeWriter->close();
  _cellPressureWriter->close();
  _cellRHSWriter->close();
  _vertexVelocityVectorWriter->close();
  _vertexTypeWriter->close();

  _vtkWriter.writeToFile( newFilename.str() );

  logTraceOutWith1Argument( "endIteration()", solverState );
}

