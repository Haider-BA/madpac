#include "peano/applications/navierstokes/prototype1/mappings/RegularGrid2PlotRegularSolutionVTK.h"
#include "peano/integration/dataqueries/QueryServer.h"
#include <limits>
#include "tarch/la/Vector.h"
tarch::logging::Log peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::_log( "peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK" );


peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::RegularGrid2PlotRegularSolutionVTK() {
  logTraceIn( "RegularGrid2PlotRegularSolutionVTK()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2PlotRegularSolutionVTK()" );
}


peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::~RegularGrid2PlotRegularSolutionVTK() {
  logTraceIn( "~RegularGrid2PlotRegularSolutionVTK()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2PlotRegularSolutionVTK()" );
}

  
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {

    for (int i=0; i<peano::integration::dataqueries::QueryServer::getInstance().getNumberOfPendingQueries();i++) {
        tarch::la::Vector<2,double> value (0.0);
        switch (peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDescription(i).getScope()) {
        case Velocity:
          for(int k=0;k<4;k++){

              peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDataWriter(i).plotVertex(
                  peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDataWriter(i).getVertexIndex(enumerator.getVertexPosition(k)),
                  vertices[enumerator(i)].getU()
              );
          }
                      break;
        case Pressure:

          for(int k=0;k<4;k++){

              peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDataWriter(i).plotVertex(
                  peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDataWriter(i).getVertexIndex(enumerator.getVertexPosition(k)),
                  cell.getP()
              );
          }
          break;
        }

    }
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex, 
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // @todo Insert your code here
  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  peano::integration::dataqueries::QueryServer::getInstance().commitQueries();
  logTraceOutWith1Argument( "endIteration()", solverState );
}

