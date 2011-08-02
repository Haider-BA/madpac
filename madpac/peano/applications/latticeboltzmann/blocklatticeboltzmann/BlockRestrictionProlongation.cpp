#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockRestrictionProlongation.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockRestrictionProlongation::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockRestrictionProlongation"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::BlockRestrictionProlongation():
_subBlockVector(createSubBlockVector()),
_minusOneEntriesFromNeighbourBlock(createMinusOneEntriesFromNeighbourBlock()){}



tarch::la::Vector<DIMENSIONS,int>
peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::getFatherVertex(
const tarch::la::Vector<DIMENSIONS,int>&     discretePosition) const {
  tarch::la::Vector<DIMENSIONS,int> fatherIndex(0);

  for (int d = 0; d < DIMENSIONS; d++){
    fatherIndex(d) = discretePosition(d)/2;
  }

  logDebug("getFatherVertex()", "Father vertex for child position " << discretePosition << ": " << fatherIndex);
  return fatherIndex;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::findFineOverlapCells(
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries
) const {

  hasMinusOneEntries = false;

  for (int c = 0; c < THREE_POWER_D/2; c++){
    bool isTemporaryVertex = neighbourIsTemporaryVertex(c,finePdf);

    // if the neighbour is a temp. vertex, set all minus one entries, as given by the MinusOne-map
    if (isTemporaryVertex){
      for (unsigned int i = 0; i < _minusOneEntriesFromNeighbourBlock.find(c)->second.size(); i++){
        hasMinusOneEntries((_minusOneEntriesFromNeighbourBlock.find(c)->second)[i](0)) = true;
      }
    }
  }
  for (int c = THREE_POWER_D/2+1; c < THREE_POWER_D; c++){
    bool isTemporaryVertex = neighbourIsTemporaryVertex(c,finePdf);

    // if the neighbour is a temp. vertex, set all minus one entries, as given by the MinusOne-map
    if (isTemporaryVertex){
      for (unsigned int i = 0; i < _minusOneEntriesFromNeighbourBlock.find(c)->second.size(); i++){
        hasMinusOneEntries((_minusOneEntriesFromNeighbourBlock.find(c)->second)[i](0)) = true;
      }
    }
  }
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::neighbourIsTemporaryVertex(
const int &neighbourBlock,
const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf
) const {
  bool isTemporaryVertex = false;
  for (unsigned int i = 0; i < _minusOneEntriesFromNeighbourBlock.find(neighbourBlock)->second.size(); i++){
    isTemporaryVertex = isTemporaryVertex
      || (finePdf(
            (_minusOneEntriesFromNeighbourBlock.find(neighbourBlock)->second)[i](0)*LB_CURRENT_DIR
            + (_minusOneEntriesFromNeighbourBlock.find(neighbourBlock)->second)[i](1) ) == -1.0);
  }

  return isTemporaryVertex;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::prolongateToFineLevel(
  const tarch::la::Vector<DIMENSIONS,int>&     discretePosition,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& coarsePdf,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool>& hasMinusOneEntries
) const {
  // sub-block covering the fine vertex
  tarch::la::Vector<DIMENSIONS,int> subBlock = getSubBlock(discretePosition);

  logDebug("prolongateToFineLevel()", "Do prolongation (check) for sub-block " << subBlock);

  // index for a coarse cell (on a coarse vertex)
  int coarseCellIndex = 0;
  // index for a fine cell (on a fine vertex)
  int fineCellIndex = 0;

  // buffer for velocity
  tarch::la::Vector<DIMENSIONS,double> velocityBuffer(0.0);

  // loop over all coarse cells of the sub-block
#if defined(Dim3)
  for (int z = 0; z < LB_BLOCKSIZE/3; z++){
#endif
    for (int y = 0; y < LB_BLOCKSIZE/3; y++){
      for (int x = 0; x < LB_BLOCKSIZE/3; x++){
      coarseCellIndex =  subBlock(0)*(LB_BLOCKSIZE/3)+x
                      + (subBlock(1)*(LB_BLOCKSIZE/3)+y)*LB_BLOCKSIZE
#if defined(Dim3)
                        + (subBlock(2)*(LB_BLOCKSIZE/3)+z)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                        ;
      logDebug("prolongateToFineLevel()", "Look at coarse cell no. " << coarseCellIndex);
#if (!defined(Dim3))
      logDebug("prolongateToFineLevel()", "This corresponds to the coords " << x << "," << y);
#else
      logDebug("prolongateToFineLevel()", "This corresponds to the coords " << x << "," << y << "," << z);
#endif

#if defined(Dim3)
        for (int zz = 0; zz < 3; zz++){
#endif
          for (int yy = 0; yy < 3; yy++){
            for (int xx = 0; xx < 3; xx++){
              fineCellIndex =  x*3 + xx
                          + (y*3 + yy)*LB_BLOCKSIZE
#if defined(Dim3)
                          + (z*3 + zz)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                          ;
               if(hasMinusOneEntries(fineCellIndex)){
                 logDebug("prolongateToFineLevel()", "Cell " << fineCellIndex << " is fine overlap cell");

                 // reset velocity,density
                 density(fineCellIndex) = 0.0;
                 velocityBuffer = 0.0;
                 for (int i = 0; i < LB_CURRENT_DIR; i++){
                 finePdf(fineCellIndex*LB_CURRENT_DIR+i) = coarsePdf(coarseCellIndex*LB_CURRENT_DIR+i);

                 density(fineCellIndex) += coarsePdf(coarseCellIndex*LB_CURRENT_DIR+i);
                 velocityBuffer += coarsePdf(coarseCellIndex*LB_CURRENT_DIR+i)*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i];
                 }
                 for (int d = 0; d < DIMENSIONS; d++){
                   velocity(fineCellIndex*DIMENSIONS+d) = velocityBuffer(d)/density(fineCellIndex);
                 }
               }
             }
           }
#if defined(Dim3)
        }
#endif
      }
    }
#if defined(Dim3)
  }
#endif
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::restrictToCoarseLevel(
  const tarch::la::Vector<DIMENSIONS,int>&     discretePosition,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& coarsePdf,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf
) const {
  // sub-block covering the fine vertex
  tarch::la::Vector<DIMENSIONS,int> subBlock = getSubBlock(discretePosition);

  logDebug("restrictToCoarseLevel()", "Do restriction (check) for sub-block " << subBlock);

  // index for a coarse cell (on a coarse vertex)
  int coarseCellIndex = 0;
  // index for a fine cell (on a fine vertex)
  int fineCellIndex = 0;

  // buffer for the restricted pdf values
  tarch::la::Vector<LB_CURRENT_DIR,double> restrictedPdf(0.0);

  // true if at least one fine cell has a pdf no. i which is equal -1.0
  tarch::la::Vector<LB_CURRENT_DIR,bool> hasMinusOneEntries(false);

  // loop over all coarse cells of the sub-block
#if defined(Dim3)
  for (int z = 0; z < LB_BLOCKSIZE/3; z++){
#endif
    for (int y = 0; y < LB_BLOCKSIZE/3; y++){
      for (int x = 0; x < LB_BLOCKSIZE/3; x++){
        coarseCellIndex =  subBlock(0)*(LB_BLOCKSIZE/3)+x
                        + (subBlock(1)*(LB_BLOCKSIZE/3)+y)*LB_BLOCKSIZE
  #if defined(Dim3)
                        + (subBlock(2)*(LB_BLOCKSIZE/3)+z)*LB_BLOCKSIZE*LB_BLOCKSIZE
  #endif
                        ;
        // reset flags and buffer
        hasMinusOneEntries = false;
        restrictedPdf = 0.0;

        logDebug("restrictToCoarseLevel()", "Look at coarse cell no. " << coarseCellIndex);
  #if (!defined(Dim3))
        logDebug("restrictToCoarseLevel()", "This corresponds to the coords " << x << "," << y);
  #else
        logDebug("restrictToCoarseLevel()", "This corresponds to the coords " << x << "," << y << "," << z);
  #endif

        // loop over fine vertex sub-block and find out if a prolongation is needed
  #if defined(Dim3)
        for (int zz = 0; zz < 3; zz++){
  #endif
          for (int yy = 0; yy < 3; yy++){
            for (int xx = 0; xx < 3; xx++){
              fineCellIndex =  x*3 + xx
                            + (y*3 + yy)*LB_BLOCKSIZE
  #if defined(Dim3)
                            + (z*3 + zz)*LB_BLOCKSIZE*LB_BLOCKSIZE
  #endif
                            ;
              logDebug("restrictToCoarseLevel()", "Look at fine cell no. " << fineCellIndex);

              // determine if a fine cell contains (-1) entries
              for (int i = 0; i < LB_CURRENT_DIR;i++){
                hasMinusOneEntries(i) = hasMinusOneEntries(i) || (finePdf(LB_CURRENT_DIR*fineCellIndex+i) == -1.0);
                restrictedPdf(i) += finePdf(LB_CURRENT_DIR*fineCellIndex+i);
  #if Debug
                if (finePdf(LB_CURRENT_DIR*fineCellIndex+i) == -1.0){
                  logDebug("prolongateToFineLevel()", "The pdf " << i << " is -1.0!");
                }
  #endif
              }


            }
          }
  #if defined(Dim3)
        }
  #endif

        restrictedPdf = (1.0/((double) THREE_POWER_D))*restrictedPdf;
        // restrict the values which are definitely not coming from coarse cells (i.e. all values where the flag of
        // hasMinusOneEntries is false; for these, the fine grid populations are all coming either from fine overlap
        // cells or real fine cells and not from temporary cells on temporary vertices)
        for (int i = 0; i < LB_CURRENT_DIR; i++){

          // assign new value to the coarse grid pdf-field
          coarsePdf(LB_CURRENT_DIR*coarseCellIndex+i) =
               hasMinusOneEntries(i) *coarsePdf(LB_CURRENT_DIR*coarseCellIndex+i)
            + (1-hasMinusOneEntries(i))*restrictedPdf(i);
  #if Debug
          if (hasMinusOneEntries(i)){
            logDebug("restrictToCoarseLevel()", "No restriction for pdf " << i);
          } else {
            logDebug("restrictToCoarseLevel()", "Restriction for pdf " << i);
          }
  #endif
        }

      }
    }
#if defined(Dim3)
  }
#endif
}



tarch::la::Vector<DIMENSIONS,int>
peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::getSubBlock(
  const tarch::la::Vector<DIMENSIONS,int>& discretePosition
) const {
  return tarch::la::Vector<DIMENSIONS,int>(
           _subBlockVector(discretePosition(0)),
           _subBlockVector(discretePosition(1))
#if defined(Dim3)
           ,_subBlockVector(discretePosition(2))
#endif
         );
}



tarch::la::Vector<4,int>
peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::createSubBlockVector() const {
  tarch::la::Vector<4,int> subBlockVector(1,2,0,1);
  return subBlockVector;
}



std::map<int,std::vector<tarch::la::Vector<2,int> > >
peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::createMinusOneEntriesFromNeighbourBlock() const{
  std::map<int,std::vector<tarch::la::Vector<2,int> > > minusOneEntriesFromNeighbourBlock;


  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*THREE_POWER_D*LB_CURRENT_DIR,double> domain(0.0);
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*THREE_POWER_D*LB_CURRENT_DIR,double> buffer(0.0);

  // loop over all direct neighbouring blocks
#if defined(Dim3)
  for (int z = 0; z < 3; z++){
#endif
    for (int y = 0; y < 3; y++){
      for (int x = 0; x < 3; x++){

        // only look at relation to neighbours (not at the centered cell itself!)
        if ( !((x==1) && (y==1)
#if defined(Dim3)
            && (z == 1)
#endif
            )){

#if (!defined(Dim3))
          logDebug("createMinusOneEntriesFromNeighbourBlock()","Regard neighbour cell " << x << "," << y);
#else
          logDebug("createMinusOneEntriesFromNeighbourBlock()","Regard neighbour cell " << x << "," << y << "," << z);
#endif

          // set up new std vector
          std::vector< tarch::la::Vector<2,int> > indexNeighbourBlock;

          // initialise neighbour block with -1.0 and rest with 0.0
          domain = 0.0;
          buffer = 0.0;
#if defined(Dim3)
          for (int zz=0; zz < LB_BLOCKSIZE; zz++){
#endif
            for (int yy = 0; yy < LB_BLOCKSIZE; yy++){
              for (int xx = 0; xx < LB_BLOCKSIZE; xx++){
                for (int i = 0; i < LB_CURRENT_DIR; i++){
                  // neighbour block
                  domain(getDomainPdf(x*LB_BLOCKSIZE+xx,y*LB_BLOCKSIZE+yy,
#if defined(Dim3)
                    z*LB_BLOCKSIZE+zz,
#endif
                    i)
                  ) = -1.0;
                }
              }
            }
#if defined(Dim3)
          }
#endif
          logDebug("createMinusOneEntriesFromNeighbourBlock()","Initialised domain: " << domain);


          // do three streaming steps copying data to the neighbour
          for (int t = 0; t < 3; t++){

            // loop over domain and pdfs
#if defined(Dim3)
            for (int zz = 0; zz < 3*LB_BLOCKSIZE; zz++){
#endif
              for (int yy = 0; yy < 3*LB_BLOCKSIZE; yy++){
                for (int xx = 0; xx < 3*LB_BLOCKSIZE; xx++){
                  for (int i = 0; i < LB_CURRENT_DIR; i++){
                    // determine new position of pdf
                    int b0 = xx + (int)peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](0);
                    int b1 = yy + (int)peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](1);
#if defined(Dim3)
                    int b2 = zz + (int)peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](2);
#endif

                    // if new position is inside our domain, stream
                    if (   (b0 > -1) && (b0 < 3*LB_BLOCKSIZE)
                        && (b1 > -1) && (b1 < 3*LB_BLOCKSIZE)
#if defined(Dim3)
                        && (b2 > -1) && (b2 < 3*LB_BLOCKSIZE)
#endif
                        ){
                      buffer(getDomainPdf(b0,b1,
#if defined(Dim3)
                        b2,
#endif
                        i)
                      ) = domain(getDomainPdf(xx,yy,
#if defined(Dim3)
                            zz,
#endif
                            i)
                          );
                    }
                  } // pdfs
                } // xx
              } // yy
#if defined(Dim3)
            } // zz
#endif

            // copy back buffer block to domain and reset it
            domain = buffer;
            buffer = 0.0;

            logDebug("createMinusOneEntriesFromNeighbourBlock()","Streaming no. " << t << ":" << domain);
          } // time loop for streaming


          // from here, the domain should contain all -1.0 entries in the inner block caused
          // by streaming operations on the 3x3x3-block domain
          // -> loop over inner block and detect overlap cells caused by this neighbour block
#if defined(Dim3)
          for (int zz = 0; zz < LB_BLOCKSIZE; zz++){
#endif
            for (int yy = 0; yy < LB_BLOCKSIZE; yy++){
              for (int xx = 0; xx < LB_BLOCKSIZE; xx++){
                for (int i = 0; i < LB_CURRENT_DIR; i++){
                  bool isOverlapCell = (domain(getDomainPdf(LB_BLOCKSIZE+xx,LB_BLOCKSIZE+yy,
#if defined(Dim3)
                                       LB_BLOCKSIZE+zz,
#endif
                                       i)) == -1.0);

                  // if this cell shall be an overlap cell...
                  if (isOverlapCell){

#if (!defined(Dim3))
                    logDebug("createMinusOneEntriesFromNeighbourBlock()","Inner cell " << xx << "," << yy << " is overlap cell");
#else
                    logDebug("createMinusOneEntriesFromNeighbourBlock()","Inner cell " << xx << "," << yy << "," << zz << " is overlap cell");
#endif
                    // create the cell,pdf index
                    tarch::la::Vector<2,int> overlapIndex(0);
                    overlapIndex(0) = xx + LB_BLOCKSIZE*yy
  #if defined(Dim3)
                      + LB_BLOCKSIZE*LB_BLOCKSIZE*zz
  #endif
                      ;
                    overlapIndex(1) = i;

                    indexNeighbourBlock.push_back(overlapIndex);
                  }
                } // pdfs i
              } // xx
            } // yy
#if defined(Dim3)
          } // zz
#endif

          // now, the complete (cell,pdf) overlap-index is set up -> put it into map
#if (!defined(Dim3))
          assertion(minusOneEntriesFromNeighbourBlock[x+3*y].size() == 0);
#else
          assertion(minusOneEntriesFromNeighbourBlock[x+3*y+ 9*z].size() == 0);
#endif
          minusOneEntriesFromNeighbourBlock[x+3*y
#if defined(Dim3)
                                            + 9*z
#endif
          ] = indexNeighbourBlock;

        } // if not inner block
      } // x
    } // y

#if defined(Dim3)
  } // z
#endif

  return minusOneEntriesFromNeighbourBlock;
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::
BlockRestrictionProlongation::getDomainPdf(int x, int y,
#if defined(Dim3)
  int z,
#endif
  int pdf
) const {
  // block number
  int xx = x / LB_BLOCKSIZE;
  // x-coord inside block
  int xo = x - xx*LB_BLOCKSIZE;
  int yy = y / LB_BLOCKSIZE;
  int yo = y - yy*LB_BLOCKSIZE;
#if defined(Dim3)
  int zz = z / LB_BLOCKSIZE;
  int zo = z - zz*LB_BLOCKSIZE;
#endif

  // index of pdf
  int index =
#if defined(Dim3)
    zz * (LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR)*9
#endif
    + yy * (LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR)*3
    + xx * (LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR)
#if defined(Dim3)
    + zo * LB_BLOCKSIZE * LB_BLOCKSIZE * LB_CURRENT_DIR
#endif
    + yo * LB_BLOCKSIZE * LB_CURRENT_DIR
    + xo * LB_CURRENT_DIR
    + pdf;

  return index;
}
