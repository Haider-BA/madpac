#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/SpacetreeGrid2BlockVTKOutput.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::_log( "peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput" );


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::SpacetreeGrid2BlockVTKOutput():
_multiLevelSimData(NULL),
_vertex2IndexMap(),
_vtkWriter(),
_vertexWriter(NULL),
_cellWriter(NULL),
_densityWriter(NULL),
_velocityWriter(NULL),
_collisionModelWriter(NULL),
_vertexNumberWriter(NULL)
{
  logTraceIn( "SpacetreeGrid2BlockVTKOutput()" );
  logTraceOut( "SpacetreeGrid2BlockVTKOutput()" );
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::~SpacetreeGrid2BlockVTKOutput() {
  logTraceIn( "~SpacetreeGrid2BlockVTKOutput()" );
  logTraceOut( "~SpacetreeGrid2BlockVTKOutput()" );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::
plotVertex(
const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex &fineVertex,
const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex &coarseVertex,
const tarch::la::Vector<DIMENSIONS,int> &subBlock,
const tarch::la::Vector<DIMENSIONS,double>& position,
const tarch::la::Vector<DIMENSIONS,double>& h,
int fineLevel
) {
  // get vertex data for fine vertex
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(fineVertex.getVertexNumber());
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
  const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& inner(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf());

  // get vertex data for coarse vertex
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  loadVertex(coarseVertex.getVertexNumber());
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &coarseDensity(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity());
  const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& coarseVelocity(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVelocity());
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& coarseInner(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner());

  // position of the first sub-vertex of the block that is stored on this vertex
  tarch::la::Vector<DIMENSIONS,double> positionFirstVertex(0.0);

  // is set to the position of each sub-vertex
  tarch::la::Vector<DIMENSIONS,double> positionEachVertex(0.0);
  // position of the first sub-vertex of each LB sub-cell stored on this grid vertex
  tarch::la::Vector<DIMENSIONS,double> positionFirstVertexOfCell(0.0);

  // size of a sub-cell
  double sizeOfSubcell = h[0]/((double) LB_BLOCKSIZE);
  assertion(fineLevel >= _multiLevelSimData->getSimData(0).getLevel());

  int cellNumber = 0;
  int help = 0;
  int subVertexIndex[TWO_POWER_D];
  int subVertexCounter = 0;

  // determine position of first subcell included in this vertex
  // = position of supervertex - 0.5*sizeof-Cell-around-SuperVertex + 0.5*sizeof-small-subcell
  positionFirstVertex = position - (h[0]/2.0)*tarch::la::Vector<DIMENSIONS,double>(1.0);
  logDebug("plotVertex()","Position first cell: " << positionFirstVertex);

  // plot all subcells
#if defined(Dim3)
  for (int z = 0; z < LB_BLOCKSIZE/3; z++){
#endif
    for (int y = 0; y < LB_BLOCKSIZE/3; y++){
      for (int x = 0; x < LB_BLOCKSIZE/3; x++){

        // find out, if this is a sub-block (of size 3^D) that is from a new
        // persistent subvertex or in the overlap
        bool ignoreBlock =false;
#if defined(Dim3)
        for (int zz = 0; zz < 3; zz++){
#endif
          for (int yy = 0; yy < 3; yy++){
            for (int xx = 0; xx < 3; xx++){
              help = 3*x + xx
                   + (3*y + yy)*LB_BLOCKSIZE
#if defined(Dim3)
                   + (3*z + zz)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                   ;
              for (int i = 0; i < LB_CURRENT_DIR; i++){
                ignoreBlock = ignoreBlock || (pdf(help*LB_CURRENT_DIR+i)==-1.0);
              }
            }
          }
#if defined(Dim3)
        }
#endif


        // if it is no overlap block, do plotting of all sub-cells
        if (!ignoreBlock){
#if defined(Dim3)
          for (int zz = 0; zz < 3; zz++){
#endif
            for (int yy = 0; yy < 3; yy++){
              for (int xx = 0; xx < 3; xx++){
                help = 3*x + xx
                     + (3*y + yy)*LB_BLOCKSIZE
#if defined(Dim3)
                     + (3*z + zz)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                     ;

                positionFirstVertexOfCell = positionFirstVertex;
                positionFirstVertexOfCell(0) += (3*x+xx)*sizeOfSubcell;
                positionFirstVertexOfCell(1) += (3*y+yy)*sizeOfSubcell;
#if defined(Dim3)
                positionFirstVertexOfCell(2) += (3*z+zz)*sizeOfSubcell;
#endif

                if (inner[help]){

                  subVertexCounter = 0;
#if defined(Dim3)
                  for (int zzz = 0; zzz < 2; zzz++){
#endif
                    for (int yyy = 0; yyy < 2; yyy++){
                      for (int xxx = 0; xxx < 2; xxx++){
                        positionEachVertex(0) = xxx*sizeOfSubcell;
                        positionEachVertex(1) = yyy*sizeOfSubcell;
#if defined(Dim3)
                        positionEachVertex(2) = zzz*sizeOfSubcell;
#endif
                        positionEachVertex = positionEachVertex+positionFirstVertexOfCell;
                        // if this vertex is not already in map, put it in and plot it
                        if (_vertex2IndexMap.find(positionEachVertex) == _vertex2IndexMap.end()){
                          int vertexNumber = _vertexWriter->plotVertex(positionEachVertex);
                          _vertex2IndexMap[positionEachVertex] = vertexNumber;
                          subVertexIndex[subVertexCounter] = vertexNumber;
                          // otherwise: just get its number
                        } else {
                          subVertexIndex[subVertexCounter] = _vertex2IndexMap.find(positionEachVertex)->second;
                        }
                        subVertexCounter++;
                      } // xxx
                    } // yyy
#if defined(Dim3)
                  } // zzz
#endif

                  logDebug("plotVertex()","Plot cell at position " << positionFirstVertexOfCell);
#if defined(Dim2)
                  cellNumber = _cellWriter->plotQuadrangle(subVertexIndex);
#elif defined(Dim3)
                  cellNumber = _cellWriter->plotHexahedron(subVertexIndex);
#endif

                  _densityWriter->plotCell(cellNumber,density(help));
                  tarch::la::Vector<DIMENSIONS,double> velocityHelp(0.0);
                  for (int d = 0; d < DIMENSIONS; d++){
                    velocityHelp(d) = velocity(DIMENSIONS*help+d);
                  }
                  _velocityWriter->plotCell(cellNumber,velocityHelp);

                  _collisionModelWriter->plotCell(
                    cellNumber,
                    _multiLevelSimData->getSimData(0).getCollisionModelId(fineLevel)
                  );
                  _vertexNumberWriter->plotCell(cellNumber,fineVertex.getVertexNumber());
                } // inner cell
              } // xx
            } // yy
#if defined(Dim3)
          }  // zz
#endif
        // if it is an overlap block, plot the part of the coarse vertex
        } else {
          int coarseCellIndex =
#if defined(Dim3)
              (subBlock(2)*(LB_BLOCKSIZE/3)+z)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
            + (subBlock(1)*(LB_BLOCKSIZE/3)+y)*LB_BLOCKSIZE
            + subBlock(0)*(LB_BLOCKSIZE/3)+x;
          if (coarseInner[coarseCellIndex]){
            subVertexCounter = 0;
            positionFirstVertexOfCell = positionFirstVertex
              + tarch::la::Vector<DIMENSIONS,double>(
                  3.0*x*sizeOfSubcell,
                  3.0*y*sizeOfSubcell
#if defined(Dim3)
                 ,3.0*z*sizeOfSubcell
#endif
                );
#if defined(Dim3)
            for (int zzz = 0; zzz < 2; zzz++){
#endif
              for (int yyy = 0; yyy < 2; yyy++){
                for (int xxx = 0; xxx < 2; xxx++){
                  positionEachVertex(0) = xxx*3.0*sizeOfSubcell;
                  positionEachVertex(1) = yyy*3.0*sizeOfSubcell;
#if defined(Dim3)
                  positionEachVertex(2) = zzz*3.0*sizeOfSubcell;
#endif
                  positionEachVertex = positionEachVertex+positionFirstVertexOfCell;
                  // if this vertex is not already in map, put it in and plot it
                  if (_vertex2IndexMap.find(positionEachVertex) == _vertex2IndexMap.end()){
                    int vertexNumber = _vertexWriter->plotVertex(positionEachVertex);
                    _vertex2IndexMap[positionEachVertex] = vertexNumber;
                    subVertexIndex[subVertexCounter] = vertexNumber;
                    // otherwise: just get its number
                  } else {
                    subVertexIndex[subVertexCounter] = _vertex2IndexMap.find(positionEachVertex)->second;
                  }
                  subVertexCounter++;
                } // xxx
              } // yyy
#if defined(Dim3)
            } // zzz
#endif

            logDebug("plotVertex()","Plot cell at position " << positionFirstVertexOfCell);
#if defined(Dim2)
            cellNumber = _cellWriter->plotQuadrangle(subVertexIndex);
#elif defined(Dim3)
            cellNumber = _cellWriter->plotHexahedron(subVertexIndex);
#endif

            _densityWriter->plotCell(cellNumber,coarseDensity(help));
            tarch::la::Vector<DIMENSIONS,double> velocityHelp(0.0);
            for (int d = 0; d < DIMENSIONS; d++){
              velocityHelp(d) = coarseVelocity(DIMENSIONS*help+d);
            }
            _velocityWriter->plotCell(cellNumber,velocityHelp);
            _collisionModelWriter->plotCell(
              cellNumber,
              _multiLevelSimData->getSimData(0).getCollisionModelId(fineLevel-1)
            );
            _vertexNumberWriter->plotCell(cellNumber,coarseVertex.getVertexNumber());
          }
        }
      } // x
    } // y
#if defined(Dim3)
  } // z
#endif
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::createInnerVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createInnerVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  assertion(false);
  logTraceOutWith1Argument( "createInnerVertex(...)", fineGridVertex );
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::createHangingVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  fineGridVertex.createHangingVertex();
  logTraceOutWith1Argument( "createHangingVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::destroyHangingVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyHangingVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "destroyHangingVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::createBoundaryVertex(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "createBoundaryVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  assertion(false);
  logTraceOutWith1Argument( "createBoundaryVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::destroyVertex(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "destroyVertex(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  assertion(false);
  logTraceOutWith1Argument( "destroyVertex(...)", fineGridVertex );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::createCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "createCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "createCell(...)", fineGridCell );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::destroyCell(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "destroyCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "destroyCell(...)", fineGridCell );
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::touchVertexFirstTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexFirstTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  logTraceOutWith1Argument( "touchVertexFirstTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::mergeWithNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex,
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& neighbour,
  int fromRank) {
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::touchVertexLastTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
) {
  logTraceInWith6Arguments( "touchVertexLastTime(...)", fineGridVertex, fineGridX, fineGridH, coarseGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfVertex );
  // if the persistent vertex is not further refined -> do plotting
  if (!(fineGridVertex.getRefinementControl() == peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::Records::Refined)){
    // local cell coordinates of the coarse vertex closest to the fine vertex "vertex"
    tarch::la::Vector<DIMENSIONS,int> coarseVertex = _blockRestrictionProlongation.getFatherVertex(fineGridPositionOfVertex);

    // index of this coarse vertex in the array
    int coarseVertexIndex = coarseGridVerticesEnumerator(coarseVertex);

    // coordinates of the sub-block covering the region of the (fine) vertex
    tarch::la::Vector<DIMENSIONS,int> subBlock = _blockRestrictionProlongation.getSubBlock(fineGridPositionOfVertex);
    plotVertex(
      fineGridVertex,coarseGridVertices[coarseVertexIndex],subBlock,
      fineGridX,fineGridH,coarseGridVerticesEnumerator.getLevel()
    );
  }
  logTraceOutWith1Argument( "touchVertexLastTime(...)", fineGridVertex );
}

#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::prepareSendToNeighbour(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& vertex
) {
}
#endif

void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::beginIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {
  logTraceInWith1Argument( "beginIteration(State)", solverState );
  // set multi-level simulation data
  _multiLevelSimData = std::auto_ptr<peano::applications::latticeboltzmann::MultiLevelSimData>(
                         new peano::applications::latticeboltzmann::MultiLevelSimData(solverState)
                       );

  _referenceLevel = solverState.getLevel();
  _referenceMeshsize = solverState.getDx();

  _vtkWriter.clear();
  _vertex2IndexMap.clear();

  _vertexWriter     = _vtkWriter.createVertexWriter();
  _cellWriter       = _vtkWriter.createCellWriter();

  _densityWriter = _vtkWriter.createCellDataWriter("density",1);
  _velocityWriter    = _vtkWriter.createCellDataWriter("velocity",3);
  _collisionModelWriter = _vtkWriter.createCellDataWriter("collision-model",1);
  _vertexNumberWriter = _vtkWriter.createCellDataWriter("vertex-number",1);

  logTraceOutWith1Argument( "beginIteration(State)", solverState);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::endIteration(
  peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState&  solverState
) {
  logTraceInWith1Argument( "endIteration(State)", solverState );

  std::ostringstream newFilename;
  // add timestep-1 to the name (the timestep has already been incremented in triggerPlotting() of the state)
  newFilename << solverState.getVTKFilename() << "_"
#ifdef Parallel
          << tarch::parallel::Node::getInstance().getRank() << "_"
#endif
              << solverState.getTimestep()-1
              << ".vtk";

  _vertexWriter->close();
  _cellWriter->close();

  _densityWriter->close();
  _velocityWriter->close();
  _collisionModelWriter->close();
  _vertexNumberWriter->close();

  delete _vertexWriter;
  delete _cellWriter;
  delete _densityWriter;
  delete _velocityWriter;
  delete _collisionModelWriter;
  delete _vertexNumberWriter;

  _vertexWriter         = NULL;
  _cellWriter           = NULL;
  _densityWriter = NULL;
  _velocityWriter    = NULL;
  _collisionModelWriter = NULL;
  _vertexNumberWriter = NULL;

  _vtkWriter.writeToFile( newFilename.str() );

  logTraceOutWith1Argument( "endIteration(State)", solverState);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::enterCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&                 fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "enterCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "enterCell(...)", fineGridCell );
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::SpacetreeGrid2BlockVTKOutput::leaveCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           fineGridCell,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
) {
  logTraceInWith4Arguments( "leaveCell(...)", fineGridCell, fineGridVerticesEnumerator.toString(), coarseGridCell, fineGridPositionOfCell );
  logTraceOutWith1Argument( "leaveCell(...)", fineGridCell );
}
