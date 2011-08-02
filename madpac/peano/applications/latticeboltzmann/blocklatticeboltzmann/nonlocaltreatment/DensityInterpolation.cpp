#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/DensityInterpolation.h"


peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
DensityInterpolation::DensityInterpolation(bool dynamicGeometry):
_dynamicGeometry(dynamicGeometry),
_indexForNonLocalStreaming(createIndexForNonLocalStreaming()),
_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::DensityInterpolation")
{
#if ( (DIMENSIONS==3) || (DIMENSIONS==2))
#if ( LB_BLOCKSIZE < 6)
  logWarning("DensityInterpolation()", "Warning: Blocksize " << LB_BLOCKSIZE << \
    " is smaller than 6!" << \
    " Interpolation and dynamic geometries are not supported in this version!");
#endif
#else
#error "Only 2D/3D supported!"
#endif
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
DensityInterpolation::interpolateDensityLocal(
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &boundary,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> &pdf,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity
) const {
  // only do interpolation, if dynamic geometry is detected
  if (!_dynamicGeometry){
    return;
  }

#if (DIMENSIONS==3)
  for (int z = 2; z < LB_BLOCKSIZE-2; z++){
#endif
    for (int y = 2; y < LB_BLOCKSIZE-2; y++){
      for (int x = 2; x < LB_BLOCKSIZE-2; x++){
        int cellNumber = x + LB_BLOCKSIZE*y
#if (DIMENSIONS==3)
                       + z*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                       ;

        if ( (!inner[cellNumber]) && boundary[cellNumber]){
          // reset all variables
          int interpolationCounter = 0;
          assertion1(tarch::la::equals(density(cellNumber),0.0),density(cellNumber));
          for (int i = 0; i < LB_CURRENT_DIR; i++){
            pdf(cellNumber*LB_CURRENT_DIR+i) = 0.0;
          }

#if (DIMENSIONS==3)
          for (int zz = z-1; zz < z+2; zz++){
#endif
            for (int yy = y-1; yy < y+2; yy++){
              for (int xx = x-1; xx < x+2; xx++){
                int cellNumber2 = xx + yy*LB_BLOCKSIZE
#if (DIMENSIONS==3)
                                + zz*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                                ;
                if (inner[cellNumber2] && (cellNumber2 != cellNumber)){
                  for (int i = 0; i < LB_CURRENT_DIR; i++){
                    pdf(cellNumber*LB_CURRENT_DIR+i) += pdf(cellNumber2*LB_CURRENT_DIR+i);
                  }
                  interpolationCounter++;
                }
              }
            }
#if (DIMENSIONS==3)
          }
#endif

          // set density and normalise pdfs
          if (interpolationCounter != 0){
            for (int i = 0; i < LB_CURRENT_DIR; i++){
              pdf(cellNumber*LB_CURRENT_DIR+i) = pdf(cellNumber*LB_CURRENT_DIR+i)/interpolationCounter;
              density(cellNumber) += pdf(cellNumber*LB_CURRENT_DIR+i);
              // reset pdf to zero (-> should be set in next timestep, if cell changes to inner)
              pdf(cellNumber*LB_CURRENT_DIR+i) = 0.0;
            }
          // if there are no neighbour cells available, set density value to zero (will be set to 1.0,
          // if cell changes to inner in next timestep)
          } else {
            logWarning("interpolateDensityLocal()", "No cell available for interpolation of cell " << cellNumber << "! Will use values most suitable close to structure!");
            density(cellNumber) = 0.0;
            for (int i = 0; i < LB_CURRENT_DIR; i++){
              pdf(cellNumber*LB_CURRENT_DIR+i) = 0.0;
            }
          }
        } // if interpolation necessary
      }
    }
#if (DIMENSIONS==3)
  }
#endif
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
DensityInterpolation::interpolateDensity(
  const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
  const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &boundary,
  const tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > &pdf,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > &density,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>* > &velocity
) const {
  // only do interpolation, if dynamic geometry is detected
  if (!_dynamicGeometry){
    return;
  }

  const tarch::la::Vector<2,int> start(LB_BLOCKSIZE/2, 0);
  const tarch::la::Vector<2,int> end  (  LB_BLOCKSIZE, (LB_BLOCKSIZE/2+(LB_BLOCKSIZE%2)));
  int vertexNumber = 0;
  int cellNumber = 0;
  tarch::la::Vector<DIMENSIONS,int> vertexCoords(0);
  tarch::la::Vector<DIMENSIONS,int> cellCoords(0);

  // loop over vertices
#if (DIMENSIONS==3)
  for (vertexCoords(2) = 0; vertexCoords(2) < 2; vertexCoords(2)++){
#endif
    for (vertexCoords(1) = 0; vertexCoords(1) < 2; vertexCoords(1)++){
      for (vertexCoords(0) = 0; vertexCoords(0) < 2; vertexCoords(0)++){

#if (DIMENSIONS==3)
        for (cellCoords(2) = start(vertexCoords(2)); cellCoords(2) < end(vertexCoords(2)); cellCoords(2)++){
#endif
          for (cellCoords(1) = start(vertexCoords(1)); cellCoords(1) < end(vertexCoords(1)); cellCoords(1)++){
            for (cellCoords(0) = start(vertexCoords(0)); cellCoords(0) < end(vertexCoords(0)); cellCoords(0)++){

              if (   (cellCoords(0) < 2) || (cellCoords(0) > LB_BLOCKSIZE-3)
                  || (cellCoords(1) < 2) || (cellCoords(1) > LB_BLOCKSIZE-3)
#if (DIMENSIONS==3)
                  || (cellCoords(2) < 2) || (cellCoords(2) > LB_BLOCKSIZE-3)
#endif
              ){
                cellNumber = cellCoords(0) + cellCoords(1)*LB_BLOCKSIZE
#if (DIMENSIONS==3)
                           + cellCoords(2)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                           ;

                // if this cell needs a density interpolation, do so
                if ( (!(*inner(vertexNumber))[cellNumber]) && (*boundary(vertexNumber))[cellNumber] ){

                  logDebug("interpolateDensity()", "Interpolate density at " << vertexNumber << "," << cellNumber);
                  assertion(tarch::la::equals((*density(vertexNumber))(cellNumber),0.0));
                  interpolateDensityValueForSingleCell(vertexCoords,vertexNumber,cellCoords,cellNumber,inner,nonLocalStreamingFinished,pdf,density);
                }
              } // if cell on boundary layers
            } // cellCoords(0)
          } // cellCoords(1)
#if (DIMENSIONS==3)
        } // cellCoords(2)
#endif

        // increase vertex counter
        vertexNumber++;
      } // vertexCoords(0)
    } // vertexCoords(1)
#if (DIMENSIONS==3)
  } // vertexCoords(2)
#endif
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
DensityInterpolation::interpolateDensityValueForSingleCell(
  const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
  const int& vertexNumber,
  const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
  const int& cellNumber,
  const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
  const tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > &pdf,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > &density
) const {
  int interpolationCounter = 0;
  tarch::la::Vector<DIMENSIONS,int> vertexNeighbour(0);
  tarch::la::Vector<DIMENSIONS,int> cellNeighbour(0);

  // reset pdfs, density
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    (*pdf(vertexNumber))(cellNumber*LB_CURRENT_DIR+i) = 0.0;
  }
  (*density(vertexNumber))(cellNumber) = 0.0;

  // loop over possible neighbour cells in z-direction
#if (DIMENSIONS==3)
  for (int zn = cellCoords(2)-1; zn < cellCoords(2)+2; zn++){
    // initialise coordinates of neighbour cell with current expected values
    vertexNeighbour(2) = vertexCoords(2);
    cellNeighbour(2) = zn;

    // determine vertex/cell-coordinates of neighbour cell (this cell might belong to another vertex?)
    if (zn < 0){
      vertexNeighbour(2) = 0;
      cellNeighbour(2) = LB_BLOCKSIZE-1;
    }
    if (zn > LB_BLOCKSIZE-1){
      vertexNeighbour(2) = 1;
      cellNeighbour(2) = 0;
    }
#endif
    // loop over neighbour cells (y-direction)
    for (int yn = cellCoords(1)-1; yn < cellCoords(1)+2; yn++){
      // vertex coordinate of neighbour cell
      vertexNeighbour(1) = vertexCoords(1);
      cellNeighbour(1) = yn;
      if (yn < 0){
        vertexNeighbour(1) = 0;
        cellNeighbour(1) = LB_BLOCKSIZE-1;
      }
      if (yn > LB_BLOCKSIZE-1){
        vertexNeighbour(1) = 1;
        cellNeighbour(1) = 0;
      }

      // loop over neighbour cells (x-direction)
      for (int xn = cellCoords(0)-1; xn < cellCoords(0)+2; xn++){
        // vertex coordinate of neighbour cell
        vertexNeighbour(0) = vertexCoords(0);
        cellNeighbour(0) = xn;
        if (xn < 0){
          vertexNeighbour(0) = 0;
          cellNeighbour(0) = LB_BLOCKSIZE-1;
        }
        if (xn > LB_BLOCKSIZE-1){
          vertexNeighbour(0) = 1;
          cellNeighbour(0) = 0;
        }

        // if this is not the centered cell itself...
        if ( !((xn == cellCoords(0)) && (yn == cellCoords(1))
#if (DIMENSIONS==3)
            && (zn == cellCoords(2))
#endif
        ) ){
          int neighbourVertexNumber = vertexNeighbour(0) + 2*vertexNeighbour(1)
#if (DIMENSIONS==3)
                                    + 4*vertexNeighbour(2)
#endif
                                    ;
          int neighbourCellNumber = cellNeighbour(0) + LB_BLOCKSIZE*cellNeighbour(1)
#if (DIMENSIONS==3)
                                  + LB_BLOCKSIZE*LB_BLOCKSIZE*cellNeighbour(2)
#endif
                                  ;

          // if this cell can be used for interpolation, add its respective pdf-values to the density
          if ((*inner(neighbourVertexNumber))[neighbourCellNumber]){

            logDebug("interpolateDensityValueForSingleCell()", "Use " << neighbourVertexNumber << "," << neighbourCellNumber << " for interpolation...");
            interpolationCounter++;
            // for blocksizes that are bigger than 5: find out the position of the post-streaming pdf (that is the position after
            // streaming has finished for this timestep!) and use these values for the density interpolation. Doing so,
            // the density value is interpolated using the correct density values of the next timestep.
            for (int i = 0; i < LB_CURRENT_DIR; i++){
              // find out indices for the current pdf (this additional search is needed since it might be possible that a certain pdf has already been
              // streamed or not; thus it might already be in the current cell or in its neighbouring cell which is one step further away from the centered
              // cell!)
              int newVertex,pdfIndex;
              getPdfIndex(vertexNeighbour,neighbourVertexNumber,cellNeighbour,neighbourCellNumber,i,nonLocalStreamingFinished,inner,newVertex,pdfIndex);

              logDebug("interpolateDensityValueForSingleCell()", "Pdf " << i << " is at " << newVertex << "," << pdfIndex);
              // add value to current pdf (on inverse position as the pdfs will be switched by the AABlockStreaming anyway)
              (*pdf(vertexNumber))(cellNumber*LB_CURRENT_DIR+LB_CURRENT_DIR-1-i) += (*pdf(newVertex))(pdfIndex);
            }
          }
        }
      } // xn
    } // yn
#if (DIMENSIONS==3)
  } // zn
#endif

  // divide density values by number of inner cells used for interpolation
  if (interpolationCounter != 0){
    // average pdf values and initialise density; afterwards, reset pdfs
    for (int i = 0; i < LB_CURRENT_DIR; i++){
      (*pdf(vertexNumber))(cellNumber*LB_CURRENT_DIR+i) = (*pdf(vertexNumber))(cellNumber*LB_CURRENT_DIR+i) / interpolationCounter;
      (*density(vertexNumber))(cellNumber) += (*pdf(vertexNumber))(cellNumber*LB_CURRENT_DIR+i);
      (*pdf(vertexNumber))(cellNumber*LB_CURRENT_DIR+i) = 0.0;
    }
    logDebug("interpolateDensityValueForSingleCell()", "Density value: " << (*density(vertexNumber))(cellNumber));

  // if no neighbouring fluid cell is available, set a value of density to 0.0 (will be set to 1.0, if cell changes
  // to inner state in next timestep)
  } else {
    logWarning("interpolateDensityValueForSingleCell()", "No cell available for interpolation of cell " << cellNumber << "! Will use values most suitable close to structure!");
    (*density(vertexNumber))(cellNumber) = 0.0;
    for (int i = 0; i < LB_CURRENT_DIR; i++){
      (*pdf(vertexNumber))(cellNumber*LB_CURRENT_DIR+i) = 0.0;
    }
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::
DensityInterpolation::getPdfIndex(
  const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,const int& vertex,
  const tarch::la::Vector<DIMENSIONS,int> &cellCoords,const int&cell,
  const int& pdf,const tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
  const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
  int &newVertex, int &pdfIndex
) const {

  int elementVertex = -1;

  // compute pdf-position before streaming
  int cellPreStreaming = 0;
  int vertexPreStreaming = 0;
  for (int d = 0; d < DIMENSIONS; d++){
    int cellBuf = cellCoords(d) - (int)peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[pdf][d];
    int vertexBuf = vertexCoords(d);
    if (cellBuf < 0){
      cellBuf = LB_BLOCKSIZE-1;
      vertexBuf = 0;
    } else {
      if (cellBuf > LB_BLOCKSIZE-1){
        cellBuf = 0;
        vertexBuf = 1;
      }
    }

    cellPreStreaming += cellBuf*tarch::la::aPowI(d,LB_BLOCKSIZE);
    vertexPreStreaming += vertexBuf*tarch::la::aPowI(d,2);
  }

  // check if this pdf is handled in the non-local streaming by looking at its pre-streaming position
  for (unsigned int i = 0; i < _indexForNonLocalStreaming.size(); i++){
    // either outgoing pdf...
    if (   ((_indexForNonLocalStreaming[i][2] == cellPreStreaming) && (_indexForNonLocalStreaming[i][4]==pdf))  ){
      elementVertex = _indexForNonLocalStreaming[i][1];
      break;
    } else {
      // or incoming pdf
      if ((_indexForNonLocalStreaming[i][3] == cellPreStreaming) && (_indexForNonLocalStreaming[i][4]==LB_CURRENT_DIR-1-pdf)){
        elementVertex = _indexForNonLocalStreaming[i][0];
        break;
      }
    }
  }

  // if the pdf is not found at all, it is treated in the local streaming; this streaming has been finished, however,
  // the new pdf is located on its inverse position
  if (elementVertex == -1){
    pdfIndex = cell*LB_CURRENT_DIR + LB_CURRENT_DIR-1-pdf;
    newVertex = vertex;
    return;
  }

  // otherwise: find out, if the pdf has already been streamed
  if ((*nonLocalStreamingFinished(vertex))[TWO_POWER_D-1-elementVertex]){
    // if the pdf has already been streamed, return its current (inverse) index and vertex
    pdfIndex = cell*LB_CURRENT_DIR + LB_CURRENT_DIR-1-pdf;
    newVertex = vertex;
  } else {
    // if the pdf has not been streamed yet...

    // ... consider the cell state of its previous position. If this cell is an outer cell, there will not be any streaming;
    // use the bounced-back pdf in this case
    if (!(*inner(vertexPreStreaming))[cellPreStreaming]){
      pdfIndex = cell*LB_CURRENT_DIR + LB_CURRENT_DIR-1-pdf;
      newVertex = vertex;

    // If the pre-streaming cell is an inner cell, take the post-collision pdf of this cell
    } else {
      pdfIndex = cellPreStreaming*LB_CURRENT_DIR + pdf;
      newVertex = vertexPreStreaming;
    }
  }
}
