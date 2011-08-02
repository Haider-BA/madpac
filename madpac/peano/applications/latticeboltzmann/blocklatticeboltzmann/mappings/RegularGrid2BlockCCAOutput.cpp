#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/RegularGrid2BlockCCAOutput.h"
#include "peano/integration/dataqueries/QueryServer.h"

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput" );


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::RegularGrid2BlockCCAOutput() {
  logTraceIn( "RegularGrid2BlockCCAOutput()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2BlockCCAOutput()" );
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::~RegularGrid2BlockCCAOutput() {
  logTraceIn( "~RegularGrid2BlockCCAOutput()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2BlockCCAOutput()" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  vertex.createVertex(x,h);
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  vertex.createVertex(x,h);
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  vertex.destroyVertex();
  logTraceOut( "destroyVertex()" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::createCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::destroyCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::handleCell(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex* const vertices,
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& neighbour,
  int fromRank) {
  // @todo Insert your code here
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::touchVertexFirstTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(vertex.getVertexNumber());

  //std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double >& velocity(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
  tarch::la::Vector<DIMENSIONS,double> velocityBuffer(0.0);
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
  tarch::la::Vector<DIMENSIONS,double> position(0.0);
  tarch::la::Vector<DIMENSIONS,double> currentVertexPosition(0.0);
  int vertexIndex[TWO_POWER_D];
  int cellCounter = 0;
  int vertexCounter = 0;
  //int cellNumber;

#if (DIMENSIONS == 3)
  for (int zc = 0; zc < LB_BLOCKSIZE; zc++){
    position(2) = x(2) - 0.5*LB_BLOCKSIZE*_h(2) + zc*_h(2);
#endif
    for (int yc= 0; yc < LB_BLOCKSIZE; yc++){
      position(1) = x(1) - 0.5*LB_BLOCKSIZE*_h(1) + yc*_h(1);
      for (int xc=0; xc < LB_BLOCKSIZE; xc++){
        position(0) = x(0) - 0.5*LB_BLOCKSIZE*_h(0) + xc*_h(0);

        // if the current cell is inner, plot it and its vertices
       // if (inner[cellCounter]){
          logDebug("touchVertexFirstTime()", "Cell " << cellCounter << " at position " << position << "," << _h << " is an inner cell");
          // vertex plotting
          vertexCounter = 0;
#if (DIMENSIONS == 3)
          for (int zv = 0; zv < 2; zv++){
            currentVertexPosition(2) = position(2) + _h(2)*zv;
#endif
            for (int yv = 0; yv < 2; yv++){
              currentVertexPosition(1) = position(1) + _h(1)*yv;
              for (int xv = 0; xv < 2; xv++){
                currentVertexPosition(0) = position(0) + _h(0)*xv;
                // if this vertex is not already in map, put it in and plot it
                if (_vertex2IndexMap.find(currentVertexPosition) == _vertex2IndexMap.end()){
//                  //int vertexNumber = _vertexWriter->plotVertex(currentVertexPosition);
//                  _vertex2IndexMap[currentVertexPosition] = vertexNumber;
//                  vertexIndex[vertexCounter] = vertexNumber;
                // otherwise: just get its number
                } else {
                  vertexIndex[vertexCounter] = _vertex2IndexMap.find(currentVertexPosition)->second;
                }
                vertexCounter++;
              }
            }
#if (DIMENSIONS == 3)
          }
#endif
          for (int d = 0; d < DIMENSIONS; d++){
            velocityBuffer[d] = velocity[cellCounter*DIMENSIONS+d];
          }
          for (int i=0; i<peano::integration::dataqueries::QueryServer::getInstance().getNumberOfPendingQueries();i++) {
                   switch (peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDescription(i).getScope()) {
                   case Velocity:


                         peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDataWriter(i).plotVertex(
                             peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDataWriter(i).getVertexIndex(currentVertexPosition),
                             velocityBuffer
                         );

                     break;
                   case Density:



                         peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDataWriter(i).plotVertex(
                             peano::integration::dataqueries::QueryServer::getInstance().getPendingQueryDataWriter(i).getVertexIndex(currentVertexPosition),
                             density[cellCounter]
                         );

                     break;
                   }

               }
//          _densityWriter->plotCell(cellNumber,density[cellCounter]);
//          _velocityWriter->plotCell(cellNumber,velocityBuffer);


        //} // end is inner cell

        cellCounter++;
      }
    }
#if (DIMENSIONS == 3)
  }
#endif



  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::touchVertexLastTime(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  // set multi-level simulation data
  _multiLevelSimData = std::auto_ptr<peano::applications::latticeboltzmann::MultiLevelSimData>(
                         new peano::applications::latticeboltzmann::MultiLevelSimData(solverState)
                       );
  // determine meshsize
  _h = tarch::la::Vector<DIMENSIONS,double>(
         _multiLevelSimData->getSimData(_multiLevelSimData->getSimData(0).getLevel()).getDx()
         *tarch::la::Vector<DIMENSIONS,double>(1.0)
       );

//  _vtkWriter.clear();
//  _vertex2IndexMap.clear();
//
//  _vertexWriter     = _vtkWriter.createVertexWriter();
//  _cellWriter       = _vtkWriter.createCellWriter();
//
//  _densityWriter = _vtkWriter.createCellDataWriter("density",1);
//  _velocityWriter    = _vtkWriter.createCellDataWriter("velocity",3);

#if defined(Debug) && (!defined(Parallel))
//  _blockCounter = 0;
//  _blockIdWriter = _vtkWriter.createCellDataWriter("block-id",1);
#endif

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  peano::integration::dataqueries::QueryServer::getInstance().commitQueries();
  logTraceOutWith1Argument( "endIteration()", solverState );
}

