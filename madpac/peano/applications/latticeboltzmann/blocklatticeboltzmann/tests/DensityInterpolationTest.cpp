#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/tests/DensityInterpolationTest.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest)


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest"
);

peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::DensityInterpolationTest():
tarch::tests::TestCase("peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest"),
_densityInterpolation(true){}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::run(){
  // vertex data TODO
  tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > inner;
  tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > boundary;
  tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > nonLocalStreamingFinished;
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > pdf;
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > density;
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>* > velocity;
  // parameters for testing all cells
  const tarch::la::Vector<2,int> start(LB_BLOCKSIZE/2, 0);
  const tarch::la::Vector<2,int> end  (  LB_BLOCKSIZE, (LB_BLOCKSIZE/2+(LB_BLOCKSIZE%2)));
  int cellNumber = 0;
  int vertexNumber = 0;
  tarch::la::Vector<DIMENSIONS,int> vertexCoords(0);
  tarch::la::Vector<DIMENSIONS,int> cellCoords(0);

  // initialise pointers
  for (int i = 0; i < TWO_POWER_D; i++){
    inner(i) = new std::bitset<LB_BLOCK_NUMBER_OF_CELLS>();
    boundary(i) = new std::bitset<LB_BLOCK_NUMBER_OF_CELLS>();
    nonLocalStreamingFinished(i) = new std::bitset<TWO_POWER_D>();
    pdf(i) = new tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>(0.0);
    density(i) = new tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>(0.0);
    velocity(i) = new tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>(0.0);
  }

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

              std::vector<int> elements;
              cellNumber = cellCoords(0) + cellCoords(1)*LB_BLOCKSIZE
#if (DIMENSIONS==3)
                         + cellCoords(2)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                         ;

              // find all element (non-streaming-finished)-combinations and store them in the vector
              determineRelevantElementCombinations(cellCoords,vertexCoords,elements);

              for (int n = 0; n < tarch::la::aPowI(elements.size(),2); n++){
                // initialise data
                initialiseData(
                  cellCoords,cellNumber,vertexCoords,vertexNumber,elements,n,nonLocalStreamingFinished,inner,boundary,pdf,density
                );

                // carry out interpolation
                // first vertexwise
                for (int v = 0; v < TWO_POWER_D; v++){
                  _densityInterpolation.interpolateDensityLocal(*inner(v),*boundary(v),*pdf(v),*density(v),*velocity(v));
                }
                // second elementwise
                _densityInterpolation.interpolateDensity(inner,boundary,nonLocalStreamingFinished,pdf,density,velocity);

                // validate result
                if (!tarch::la::equals((*density(vertexNumber))(cellNumber),((double) (THREE_POWER_D+1)/2),1e-10) ){
                  logInfo("run()", "Data for vertex/cell-number " << vertexNumber << "," << cellNumber  << ":" << std::endl);
#if (DIMENSIONS==2)
                  logInfo("run()",
                    "nonLocalStreamingFinished: " << (*nonLocalStreamingFinished(0))[0] << (*nonLocalStreamingFinished(0))[1] << (*nonLocalStreamingFinished(0))[2] << (*nonLocalStreamingFinished(0))[3] << \
                    " " << (*nonLocalStreamingFinished(1))[0] << (*nonLocalStreamingFinished(1))[1] << (*nonLocalStreamingFinished(1))[2] << (*nonLocalStreamingFinished(1))[3] << \
                    " " << (*nonLocalStreamingFinished(2))[0] << (*nonLocalStreamingFinished(2))[1] << (*nonLocalStreamingFinished(2))[2] << (*nonLocalStreamingFinished(2))[3] << \
                    " " << (*nonLocalStreamingFinished(3))[0] << (*nonLocalStreamingFinished(3))[1] << (*nonLocalStreamingFinished(3))[2] << (*nonLocalStreamingFinished(3))[3]);
#elif (DIMENSIONS==3)
                  logInfo("run()",
                    "nonLocalStreamingFinished: " << (*nonLocalStreamingFinished(0))[0] << (*nonLocalStreamingFinished(0))[1] << (*nonLocalStreamingFinished(0))[2] << (*nonLocalStreamingFinished(0))[3] << (*nonLocalStreamingFinished(0))[4] << (*nonLocalStreamingFinished(0))[5] << (*nonLocalStreamingFinished(0))[6] << (*nonLocalStreamingFinished(0))[7] << \
                    " "                           << (*nonLocalStreamingFinished(1))[0] << (*nonLocalStreamingFinished(1))[1] << (*nonLocalStreamingFinished(1))[2] << (*nonLocalStreamingFinished(1))[3] << (*nonLocalStreamingFinished(1))[4] << (*nonLocalStreamingFinished(1))[5] << (*nonLocalStreamingFinished(1))[6] << (*nonLocalStreamingFinished(1))[7] << \
                    " "                           << (*nonLocalStreamingFinished(2))[0] << (*nonLocalStreamingFinished(2))[1] << (*nonLocalStreamingFinished(2))[2] << (*nonLocalStreamingFinished(2))[3] << (*nonLocalStreamingFinished(2))[4] << (*nonLocalStreamingFinished(2))[5] << (*nonLocalStreamingFinished(2))[6] << (*nonLocalStreamingFinished(2))[7] << \
                    " "                           << (*nonLocalStreamingFinished(3))[0] << (*nonLocalStreamingFinished(3))[1] << (*nonLocalStreamingFinished(3))[2] << (*nonLocalStreamingFinished(3))[3] << (*nonLocalStreamingFinished(3))[4] << (*nonLocalStreamingFinished(3))[5] << (*nonLocalStreamingFinished(3))[6] << (*nonLocalStreamingFinished(3))[7]);
#endif
                  logInfo("run()", "inner/boundary: ");
                  for (int v = 0; v < TWO_POWER_D; v++){
                    for (int c = 0; c < LB_BLOCK_NUMBER_OF_CELLS; c++){
                      tarch::la::Vector<LB_CURRENT_DIR,double> localPdf(0.0);
                      for (int i = 0; i < LB_CURRENT_DIR; i++){
                        localPdf(i) = (*pdf(v))(c*LB_CURRENT_DIR+i);
                      }
                      logInfo("run()", "Vertex " << v << ", cell " << c << ": " << (*inner(v))[c] << "," << (*boundary(v))[c] << "," << (*density(v))[c] << "," << localPdf);
                    }
                  }
                } else {
                  logInfo("run()", "Data for vertex/cell-number " << vertexNumber << "," << cellNumber << ": OK");
                }
                validateNumericalEquals((*density(vertexNumber))(cellNumber),((double) (THREE_POWER_D+1)/2));
              }
              logInfo("run()", "Interpolation on Vertex/Cell " << vertexCoords << "/" << cellCoords << ": OK");
            } // cellCoords(0)
          } // cellCoords(1)
#if (DIMENSIONS==3)
        } // cellCoords(2)
#endif
        // increment vertex counter
        vertexNumber++;
      } // vertexCoords(0)
    } // vertexCoords(1)
#if (DIMENSIONS==3)
  } // vertexCoords(2)
#endif

  // delete pointers
  for (int i = 0; i < TWO_POWER_D; i++){
    delete inner(i);
    delete boundary(i);
    delete nonLocalStreamingFinished(i);
    delete pdf(i);
    delete density(i);
    delete velocity(i);
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::setUp(){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::initialiseData(
  const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
  const int& cellNumber,
  const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
  const int& vertexNumber,
  const std::vector<int> &elements,
  const int &combination,
  tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
  tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
  tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &boundary,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > &pdf,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > &density
) const {
  initNonLocalStreamingFinished(elements,combination,nonLocalStreamingFinished);
  initInnerAndBoundary(cellCoords,cellNumber,vertexCoords,vertexNumber,inner,boundary);
  initPdfAndDensity(cellCoords,cellNumber,vertexCoords,vertexNumber,nonLocalStreamingFinished,inner,pdf,density);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::initInnerAndBoundary(
  const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
  const int& cellNumber,
  const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
  const int& vertexNumber,
  tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
  tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &boundary
) const {
  tarch::la::Vector<DIMENSIONS,int> neighbourCoords(0);
  tarch::la::Vector<DIMENSIONS,int> thisCell(0);
  tarch::la::Vector<DIMENSIONS,int> thisVertex(0);

  // reset boundary and inner information -> all cells are flagged "inner" and "not boundary"
  for (int v = 0; v < TWO_POWER_D; v++){
    for (int c = 0; c < LB_BLOCK_NUMBER_OF_CELLS; c++){
      (*inner(v))[c] = true;
      (*boundary(v))[c] = false;
    }
  }

  // loop over the whole neighbourhood
#if (DIMENSIONS==3)
  for (neighbourCoords(2) = cellCoords(2)-1; neighbourCoords(2) < cellCoords(2)+2; neighbourCoords(2)++){
    // determine vertex and cell coordinates of cell in neighbourhood
    if (neighbourCoords(2) > LB_BLOCKSIZE-1){
      thisCell(2) = 0;
      thisVertex(2) = 1;
    } else {
      if (neighbourCoords(2) < 0){
        thisCell(2) = LB_BLOCKSIZE-1;
        thisVertex(2) = 0;
      } else {
        thisCell(2) = neighbourCoords(2);
        thisVertex(2) = vertexCoords(2);
      }
    }
#endif
    for (neighbourCoords(1) = cellCoords(1)-1; neighbourCoords(1) < cellCoords(1)+2; neighbourCoords(1)++){
      if (neighbourCoords(1) > LB_BLOCKSIZE-1){
        thisCell(1) = 0;
        thisVertex(1) = 1;
      } else {
        if (neighbourCoords(1) < 0){
          thisCell(1) = LB_BLOCKSIZE-1;
          thisVertex(1) = 0;
        } else {
          thisCell(1) = neighbourCoords(1);
          thisVertex(1) = vertexCoords(1);
        }
      }
      for (neighbourCoords(0) = cellCoords(0)-1; neighbourCoords(0) < cellCoords(0)+2; neighbourCoords(0)++){
        int vNum;
        int cNum;
        if (neighbourCoords(0) > LB_BLOCKSIZE-1){
          thisCell(0) = 0;
          thisVertex(0) = 1;
        } else {
          if (neighbourCoords(0) < 0){
            thisCell(0) = LB_BLOCKSIZE-1;
            thisVertex(0) = 0;
          } else {
            thisCell(0) = neighbourCoords(0);
            thisVertex(0) = vertexCoords(0);
          }
        }

        // set boundary flag to true
        vNum = thisVertex(0) + 2*thisVertex(1)
#if (DIMENSIONS==3)
             + 4*thisVertex(2)
#endif
             ;
        cNum = thisCell(0) + LB_BLOCKSIZE*thisCell(1)
#if (DIMENSIONS==3)
             + LB_BLOCKSIZE*LB_BLOCKSIZE*thisCell(2)
#endif
             ;
        (*boundary(vNum))[cNum] = true;
      }
    }
#if (DIMENSIONS==3)
  }
#endif

  // set inner flag false for centered cell
  (*inner(vertexNumber))[cellNumber] = false;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::initNonLocalStreamingFinished(
  const std::vector<int> &elements,
  const int &combination,
  tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished
) const {
  bool *nonLocalStreamingCoordsElements = new bool[elements.size()];
  std::bitset<THREE_POWER_D-1> nonLocalStreamingCoords;
  if (nonLocalStreamingCoordsElements == NULL){
    logInfo("initNonLocalStreamingFinished()", "Null pointer!");
    assertion(false);
  }
  int help = combination;

  // compute coordinates -> either a certain cell in the neighbourhood is set to 1 or not
  // accordingly, set booleans (the centered cell is taken out as this one is always true)
  for (int i = ((int) elements.size())-1; i > -1; i--){
    nonLocalStreamingCoordsElements[i] = (help/tarch::la::aPowI(i,2) == 1);
    help = help - nonLocalStreamingCoordsElements[i]*tarch::la::aPowI(i,2);
  }

  // copy coords to long array containing information for all elements
  for (int i = 0; i < THREE_POWER_D-1; i++){
    nonLocalStreamingCoords[i] = false;
  }
  for (unsigned int i = 0; i < elements.size(); i++){
    assertion(elements[i] != THREE_POWER_D/2);

    // shift back for one element (as the vector nonLocalStreamingCoords leaves out the centered element)
    if (elements[i] > THREE_POWER_D/2){
      nonLocalStreamingCoords[elements[i]-1] = nonLocalStreamingCoordsElements[i];

    // leave it as it is, no shifting required for all elements before centered element
    } else {
      nonLocalStreamingCoords[elements[i]] = nonLocalStreamingCoordsElements[i];
    }
  }

  // set information in nonLocalStreamingFinished-bitsets of vertices
#if (DIMENSIONS==3)
  // vertex 0 (remember: as we only consider 3^d-1 cells (not the centered cell!), all indices after the centered cell
  // need to be shifted by one downwards (w.r.t. nonLocalStreamingCoords))
  (*nonLocalStreamingFinished(0))[0] = nonLocalStreamingCoords[0];
  (*nonLocalStreamingFinished(0))[1] = nonLocalStreamingCoords[1];
  (*nonLocalStreamingFinished(0))[2] = nonLocalStreamingCoords[3];
  (*nonLocalStreamingFinished(0))[3] = nonLocalStreamingCoords[4];
  (*nonLocalStreamingFinished(0))[4] = nonLocalStreamingCoords[9];
  (*nonLocalStreamingFinished(0))[5] = nonLocalStreamingCoords[10];
  (*nonLocalStreamingFinished(0))[6] = nonLocalStreamingCoords[12];
  (*nonLocalStreamingFinished(0))[7] = false;

  // vertex 1
  (*nonLocalStreamingFinished(1))[0] = nonLocalStreamingCoords[1];
  (*nonLocalStreamingFinished(1))[1] = nonLocalStreamingCoords[2];
  (*nonLocalStreamingFinished(1))[2] = nonLocalStreamingCoords[4];
  (*nonLocalStreamingFinished(1))[3] = nonLocalStreamingCoords[5];
  (*nonLocalStreamingFinished(1))[4] = nonLocalStreamingCoords[10];
  (*nonLocalStreamingFinished(1))[5] = nonLocalStreamingCoords[11];
  (*nonLocalStreamingFinished(1))[6] = false;
  (*nonLocalStreamingFinished(1))[7] = nonLocalStreamingCoords[13];

  // vertex 2
  (*nonLocalStreamingFinished(2))[0] = nonLocalStreamingCoords[3];
  (*nonLocalStreamingFinished(2))[1] = nonLocalStreamingCoords[4];
  (*nonLocalStreamingFinished(2))[2] = nonLocalStreamingCoords[6];
  (*nonLocalStreamingFinished(2))[3] = nonLocalStreamingCoords[7];
  (*nonLocalStreamingFinished(2))[4] = nonLocalStreamingCoords[12];
  (*nonLocalStreamingFinished(2))[5] = false;
  (*nonLocalStreamingFinished(2))[6] = nonLocalStreamingCoords[14];
  (*nonLocalStreamingFinished(2))[7] = nonLocalStreamingCoords[15];

  // vertex 3
  (*nonLocalStreamingFinished(3))[0] = nonLocalStreamingCoords[4];
  (*nonLocalStreamingFinished(3))[1] = nonLocalStreamingCoords[5];
  (*nonLocalStreamingFinished(3))[2] = nonLocalStreamingCoords[7];
  (*nonLocalStreamingFinished(3))[3] = nonLocalStreamingCoords[8];
  (*nonLocalStreamingFinished(3))[4] = false;
  (*nonLocalStreamingFinished(3))[5] = nonLocalStreamingCoords[13];
  (*nonLocalStreamingFinished(3))[6] = nonLocalStreamingCoords[15];
  (*nonLocalStreamingFinished(3))[7] = nonLocalStreamingCoords[16];

  // vertex 4
  (*nonLocalStreamingFinished(4))[0] = nonLocalStreamingCoords[9];
  (*nonLocalStreamingFinished(4))[1] = nonLocalStreamingCoords[10];
  (*nonLocalStreamingFinished(4))[2] = nonLocalStreamingCoords[12];
  (*nonLocalStreamingFinished(4))[3] = false;
  (*nonLocalStreamingFinished(4))[4] = nonLocalStreamingCoords[17];
  (*nonLocalStreamingFinished(4))[5] = nonLocalStreamingCoords[18];
  (*nonLocalStreamingFinished(4))[6] = nonLocalStreamingCoords[20];
  (*nonLocalStreamingFinished(4))[7] = nonLocalStreamingCoords[21];

  // vertex 5
  (*nonLocalStreamingFinished(5))[0] = nonLocalStreamingCoords[10];
  (*nonLocalStreamingFinished(5))[1] = nonLocalStreamingCoords[11];
  (*nonLocalStreamingFinished(5))[2] = false;
  (*nonLocalStreamingFinished(5))[3] = nonLocalStreamingCoords[13];
  (*nonLocalStreamingFinished(5))[4] = nonLocalStreamingCoords[18];
  (*nonLocalStreamingFinished(5))[5] = nonLocalStreamingCoords[19];
  (*nonLocalStreamingFinished(5))[6] = nonLocalStreamingCoords[21];
  (*nonLocalStreamingFinished(5))[7] = nonLocalStreamingCoords[22];

  // vertex 6
  (*nonLocalStreamingFinished(6))[0] = nonLocalStreamingCoords[12];
  (*nonLocalStreamingFinished(6))[1] = false;
  (*nonLocalStreamingFinished(6))[2] = nonLocalStreamingCoords[14];
  (*nonLocalStreamingFinished(6))[3] = nonLocalStreamingCoords[15];
  (*nonLocalStreamingFinished(6))[4] = nonLocalStreamingCoords[20];
  (*nonLocalStreamingFinished(6))[5] = nonLocalStreamingCoords[21];
  (*nonLocalStreamingFinished(6))[6] = nonLocalStreamingCoords[23];
  (*nonLocalStreamingFinished(6))[7] = nonLocalStreamingCoords[24];

  // vertex 7
  (*nonLocalStreamingFinished(7))[0] = false;
  (*nonLocalStreamingFinished(7))[1] = nonLocalStreamingCoords[13];
  (*nonLocalStreamingFinished(7))[2] = nonLocalStreamingCoords[15];
  (*nonLocalStreamingFinished(7))[3] = nonLocalStreamingCoords[16];
  (*nonLocalStreamingFinished(7))[4] = nonLocalStreamingCoords[21];
  (*nonLocalStreamingFinished(7))[5] = nonLocalStreamingCoords[22];
  (*nonLocalStreamingFinished(7))[6] = nonLocalStreamingCoords[24];
  (*nonLocalStreamingFinished(7))[7] = nonLocalStreamingCoords[25];
#elif (DIMENSIONS==2)
  // vertex 0
  (*nonLocalStreamingFinished(0))[0] = nonLocalStreamingCoords[0];
  (*nonLocalStreamingFinished(0))[1] = nonLocalStreamingCoords[1];
  (*nonLocalStreamingFinished(0))[2] = nonLocalStreamingCoords[3];
  (*nonLocalStreamingFinished(0))[3] = false;

  // vertex 1
  (*nonLocalStreamingFinished(1))[0] = nonLocalStreamingCoords[1];
  (*nonLocalStreamingFinished(1))[1] = nonLocalStreamingCoords[2];
  (*nonLocalStreamingFinished(1))[2] = false;
  (*nonLocalStreamingFinished(1))[3] = nonLocalStreamingCoords[4];

  // vertex 2
  (*nonLocalStreamingFinished(2))[0] = nonLocalStreamingCoords[3];
  (*nonLocalStreamingFinished(2))[1] = false;
  (*nonLocalStreamingFinished(2))[2] = nonLocalStreamingCoords[5];
  (*nonLocalStreamingFinished(2))[3] = nonLocalStreamingCoords[6];

  // vertex 3
  (*nonLocalStreamingFinished(3))[0] = false;
  (*nonLocalStreamingFinished(3))[1] = nonLocalStreamingCoords[4];
  (*nonLocalStreamingFinished(3))[2] = nonLocalStreamingCoords[6];
  (*nonLocalStreamingFinished(3))[3] = nonLocalStreamingCoords[7];
#endif

  // delete array
  if (nonLocalStreamingCoordsElements!= NULL){
    delete [] nonLocalStreamingCoordsElements;
    nonLocalStreamingCoordsElements = NULL;
  }
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::initPdfAndDensity(
  const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
  const int& cellNumber,
  const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
  const int& vertexNumber,
  const tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
  const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > &pdf,
  tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > &density
) const {

  const peano::applications::latticeboltzmann::LatticeWeights<LB_CURRENT_DIR> weights(
    createLatticeWeights<LB_CURRENT_MODEL,LB_CURRENT_DIR>()
  );
  tarch::la::Vector<DIMENSIONS,int> neighbourCoords(0);
  tarch::la::Vector<DIMENSIONS,int> thisCell(0);
  tarch::la::Vector<DIMENSIONS,int> thisVertex(0);
  int cellCounter = 1;

  // initialise all pdfs and densities with zero first
  for (int v = 0; v < TWO_POWER_D; v++){
    for (int c = 0; c < LB_BLOCK_NUMBER_OF_CELLS; c++){
      (*density(v))(c) = 0.0;
      for (int i = 0; i < LB_CURRENT_DIR; i++){
        (*pdf(v))(c*LB_CURRENT_DIR+i) = 0.0;
      }
    }
  }

  // loop over the whole neighbourhood
#if (DIMENSIONS==3)
  for (neighbourCoords(2) = cellCoords(2)-1; neighbourCoords(2) < cellCoords(2)+2; neighbourCoords(2)++){
    // determine vertex and cell coordinates of cell in neighbourhood
    if (neighbourCoords(2) > LB_BLOCKSIZE-1){
      thisCell(2) = 0;
      thisVertex(2) = 1;
    } else {
      if (neighbourCoords(2) < 0){
        thisCell(2) = LB_BLOCKSIZE-1;
        thisVertex(2) = 0;
      } else {
        thisCell(2) = neighbourCoords(2);
        thisVertex(2) = vertexCoords(2);
      }
    }
#endif
    for (neighbourCoords(1) = cellCoords(1)-1; neighbourCoords(1) < cellCoords(1)+2; neighbourCoords(1)++){
      if (neighbourCoords(1) > LB_BLOCKSIZE-1){
        thisCell(1) = 0;
        thisVertex(1) = 1;
      } else {
        if (neighbourCoords(1) < 0){
          thisCell(1) = LB_BLOCKSIZE-1;
          thisVertex(1) = 0;
        } else {
          thisCell(1) = neighbourCoords(1);
          thisVertex(1) = vertexCoords(1);
        }
      }
      for (neighbourCoords(0) = cellCoords(0)-1; neighbourCoords(0) < cellCoords(0)+2; neighbourCoords(0)++){
        int vNum;
        int cNum;
        int vertexNumberOfPdf;
        int pdfNumber;

        if (neighbourCoords(0) > LB_BLOCKSIZE-1){
          thisCell(0) = 0;
          thisVertex(0) = 1;
        } else {
          if (neighbourCoords(0) < 0){
            thisCell(0) = LB_BLOCKSIZE-1;
            thisVertex(0) = 0;
          } else {
            thisCell(0) = neighbourCoords(0);
            thisVertex(0) = vertexCoords(0);
          }
        }

        // if this is not the centered cell...
        if ( (neighbourCoords(0)+LB_BLOCKSIZE*neighbourCoords(1)
#if (DIMENSIONS==3)
              + LB_BLOCKSIZE*LB_BLOCKSIZE*neighbourCoords(2)
#endif
              != cellNumber) ){

          // for blocksizes smaller than 6, the density values shall be used for interpolation. Therefore,
          // set density values to respective cell number
          cNum = thisCell(0) + thisCell(1)*LB_BLOCKSIZE
#if (DIMENSIONS==3)
                 + thisCell(2)*LB_BLOCKSIZE*LB_BLOCKSIZE
#endif
                 ;
          vNum = thisVertex(0) + 2*thisVertex(1)
#if (DIMENSIONS==3)
                 + 4*thisVertex(2)
#endif
                 ;
          (*density(vNum))(cNum) = (double) cellCounter;

          // for blocksizes bigger than/equal 6, the pdfs are used for the reconstruction of the density
          for (int i = 0; i < LB_CURRENT_DIR; i++){
            // find original vertex- and pdf number where this pdf has been stored (either the current one or the one,
            // where the pdf has been before streaming)
            _densityInterpolation.getPdfIndex(
              thisVertex,vNum,thisCell,cNum,i,nonLocalStreamingFinished,inner,vertexNumberOfPdf,pdfNumber
            );

            // set pdf including weight (since the weights sum up to one, we obtain exactly the cell number of neighbourCoords
            // if we finally sum up all pdfs which should be part of this cell after the iteration)
            (*pdf(vertexNumberOfPdf))(pdfNumber) = weights._entries[i] * cellCounter;
          }

        // if centered cell: set density to something...
        } else {
          (*density(vertexNumber))(cellNumber) = 0.0;
        }

        cellCounter++;

      } // neighbourCoords(0)
    } // neighbourCoords(1)
#if (DIMENSIONS==3)
  } // neighbourCoords(2)
#endif
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest::
determineRelevantElementCombinations(
  const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
  const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
  std::vector<int> &elements
) const {
  tarch::la::Vector<DIMENSIONS,int> neighbourCoords;
  tarch::la::Vector<DIMENSIONS,int> neighbourVertexCoords;
  tarch::la::Vector<DIMENSIONS,int> neighbourCellCoords;
  int neighbourCellIndex;
  const tarch::la::Vector<2,int> start(LB_BLOCKSIZE/2, 0);
  const tarch::la::Vector<2,int> end  (  LB_BLOCKSIZE, (LB_BLOCKSIZE/2+(LB_BLOCKSIZE%2)));
  std::map<int,int> elementMap;

  // clear vector
  elements.clear();

  // setup map
#if (DIMENSIONS==2)
  elementMap[0 + TWO_POWER_D*0] = 0;
  elementMap[0 + TWO_POWER_D*1] = 1;
  elementMap[0 + TWO_POWER_D*2] = 3;
  elementMap[0 + TWO_POWER_D*3] = 4;

  elementMap[1 + TWO_POWER_D*0] = 1;
  elementMap[1 + TWO_POWER_D*1] = 2;
  elementMap[1 + TWO_POWER_D*2] = 4;
  elementMap[1 + TWO_POWER_D*3] = 5;

  elementMap[2 + TWO_POWER_D*0] = 3;
  elementMap[2 + TWO_POWER_D*1] = 4;
  elementMap[2 + TWO_POWER_D*2] = 6;
  elementMap[2 + TWO_POWER_D*3] = 7;

  elementMap[3 + TWO_POWER_D*0] = 4;
  elementMap[3 + TWO_POWER_D*1] = 5;
  elementMap[3 + TWO_POWER_D*2] = 7;
  elementMap[3 + TWO_POWER_D*3] = 8;
#elif (DIMENSIONS==3)
  elementMap[0 + TWO_POWER_D*0] = 0;
  elementMap[0 + TWO_POWER_D*1] = 1;
  elementMap[0 + TWO_POWER_D*2] = 3;
  elementMap[0 + TWO_POWER_D*3] = 4;
  elementMap[0 + TWO_POWER_D*4] = 9;
  elementMap[0 + TWO_POWER_D*5] = 10;
  elementMap[0 + TWO_POWER_D*6] = 12;
  elementMap[0 + TWO_POWER_D*7] = 13;

  elementMap[1 + TWO_POWER_D*0] = 1;
  elementMap[1 + TWO_POWER_D*1] = 2;
  elementMap[1 + TWO_POWER_D*2] = 4;
  elementMap[1 + TWO_POWER_D*3] = 5;
  elementMap[1 + TWO_POWER_D*4] = 10;
  elementMap[1 + TWO_POWER_D*5] = 11;
  elementMap[1 + TWO_POWER_D*6] = 13;
  elementMap[1 + TWO_POWER_D*7] = 14;

  elementMap[2 + TWO_POWER_D*0] = 3;
  elementMap[2 + TWO_POWER_D*1] = 4;
  elementMap[2 + TWO_POWER_D*2] = 6;
  elementMap[2 + TWO_POWER_D*3] = 7;
  elementMap[2 + TWO_POWER_D*4] = 12;
  elementMap[2 + TWO_POWER_D*5] = 13;
  elementMap[2 + TWO_POWER_D*6] = 15;
  elementMap[2 + TWO_POWER_D*7] = 16;

  elementMap[3 + TWO_POWER_D*0] = 4;
  elementMap[3 + TWO_POWER_D*1] = 5;
  elementMap[3 + TWO_POWER_D*2] = 7;
  elementMap[3 + TWO_POWER_D*3] = 8;
  elementMap[3 + TWO_POWER_D*4] = 13;
  elementMap[3 + TWO_POWER_D*5] = 14;
  elementMap[3 + TWO_POWER_D*6] = 16;
  elementMap[3 + TWO_POWER_D*7] = 17;

  elementMap[4 + TWO_POWER_D*0] = 9;
  elementMap[4 + TWO_POWER_D*1] = 10;
  elementMap[4 + TWO_POWER_D*2] = 12;
  elementMap[4 + TWO_POWER_D*3] = 13;
  elementMap[4 + TWO_POWER_D*4] = 18;
  elementMap[4 + TWO_POWER_D*5] = 19;
  elementMap[4 + TWO_POWER_D*6] = 21;
  elementMap[4 + TWO_POWER_D*7] = 22;

  elementMap[5 + TWO_POWER_D*0] = 10;
  elementMap[5 + TWO_POWER_D*1] = 11;
  elementMap[5 + TWO_POWER_D*2] = 13;
  elementMap[5 + TWO_POWER_D*3] = 14;
  elementMap[5 + TWO_POWER_D*4] = 19;
  elementMap[5 + TWO_POWER_D*5] = 20;
  elementMap[5 + TWO_POWER_D*6] = 22;
  elementMap[5 + TWO_POWER_D*7] = 23;

  elementMap[6 + TWO_POWER_D*0] = 12;
  elementMap[6 + TWO_POWER_D*1] = 13;
  elementMap[6 + TWO_POWER_D*2] = 15;
  elementMap[6 + TWO_POWER_D*3] = 16;
  elementMap[6 + TWO_POWER_D*4] = 21;
  elementMap[6 + TWO_POWER_D*5] = 22;
  elementMap[6 + TWO_POWER_D*6] = 24;
  elementMap[6 + TWO_POWER_D*7] = 25;

  elementMap[7 + TWO_POWER_D*0] = 13;
  elementMap[7 + TWO_POWER_D*1] = 14;
  elementMap[7 + TWO_POWER_D*2] = 16;
  elementMap[7 + TWO_POWER_D*3] = 17;
  elementMap[7 + TWO_POWER_D*4] = 22;
  elementMap[7 + TWO_POWER_D*5] = 23;
  elementMap[7 + TWO_POWER_D*6] = 25;
  elementMap[7 + TWO_POWER_D*7] = 26;
#endif


  // loop over all cells that have distance 1 of the current cell and find the elements that are involved in non-local
  // streaming operations to and from these cells. These elements are stored in the vector 'elements'.
#if (DIMENSIONS==3)
  for (neighbourCoords(2) = cellCoords(2)-1; neighbourCoords(2) < cellCoords(2)+2; neighbourCoords(2)++){
    neighbourVertexCoords(2) = vertexCoords(2);
    neighbourCellCoords(2) = neighbourCoords(2);
    if (neighbourCoords(2) < 0){
      neighbourVertexCoords(2) = 0;
      neighbourCellCoords(2) = LB_BLOCKSIZE-1;
    } else {
      if (neighbourCoords(2) > LB_BLOCKSIZE-1){
        neighbourCellCoords(2) = 0;
        neighbourVertexCoords(2) = 1;
      }
    }
#endif
    for (neighbourCoords(1) = cellCoords(1)-1; neighbourCoords(1) < cellCoords(1)+2; neighbourCoords(1)++){
      neighbourVertexCoords(1) = vertexCoords(1);
      neighbourCellCoords(1) = neighbourCoords(1);
      if (neighbourCoords(1) < 0){
        neighbourVertexCoords(1) = 0;
        neighbourCellCoords(1) = LB_BLOCKSIZE-1;
      } else {
        if (neighbourCoords(1) > LB_BLOCKSIZE-1){
          neighbourCellCoords(1) = 0;
          neighbourVertexCoords(1) = 1;
        }
      }
      for (neighbourCoords(0) = cellCoords(0)-1; neighbourCoords(0) < cellCoords(0)+2; neighbourCoords(0)++){
        tarch::la::Vector<2,int> elementVertices;
        neighbourVertexCoords(0) = vertexCoords(0);
        neighbourCellCoords(0) = neighbourCoords(0);
        if (neighbourCoords(0) < 0){
          neighbourVertexCoords(0) = 0;
          neighbourCellCoords(0) = LB_BLOCKSIZE-1;
        } else {
          if (neighbourCoords(0) > LB_BLOCKSIZE-1){
            neighbourCellCoords(0) = 0;
            neighbourVertexCoords(0) = 1;
          }
        }

        // determine vertex and cell index -> zeroth vector index: coordinates of this cell's vertex
        elementVertices(0)   = neighbourVertexCoords(0) + 2*neighbourVertexCoords(1)
#if (DIMENSIONS==3)
                             + 4*neighbourVertexCoords(2)
#endif
                             ;

        neighbourCellIndex = neighbourCellCoords(0) + LB_BLOCKSIZE*neighbourCellCoords(1)
#if (DIMENSIONS==3)
                             + LB_BLOCKSIZE*LB_BLOCKSIZE*neighbourCellCoords(2)
#endif
                             ;

        //logInfo("determineRelevantElementCombinations()", "Neighbour: " << neighbourVertexCoords << " / " << neighbourCellCoords);
        // check if one of this cell's pdfs is handled in nonlocalstreaming
        for (int pdf = 0; pdf < LB_CURRENT_DIR; pdf++){
          // check if this pdf is handled in the non-local streaming by looking at its pre-streaming position
          for (unsigned int i = 0; i < _densityInterpolation._indexForNonLocalStreaming.size(); i++){
            // either outgoing pdf...
            bool cellFound = false;
            if ( (_densityInterpolation._indexForNonLocalStreaming[i][2] == neighbourCellIndex) && (_densityInterpolation._indexForNonLocalStreaming[i][4]==pdf) ){
              elementVertices(1) = _densityInterpolation._indexForNonLocalStreaming[i][0];
              cellFound = true;

            // or incoming pdf
            } else if ( (_densityInterpolation._indexForNonLocalStreaming[i][3] == neighbourCellIndex) && (_densityInterpolation._indexForNonLocalStreaming[i][4]==LB_CURRENT_DIR-1-pdf) ){
              elementVertices(1) = _densityInterpolation._indexForNonLocalStreaming[i][1];
              cellFound = true;
            }

            if (cellFound){
              // check if this element is already contained in vector (only, if this is not the centered element; this one
              // will be set to be already streamed (as this needs to have happened before interpolation on that element!))
              if ( elementMap[elementVertices(0)+(TWO_POWER_D-1-elementVertices(1))*TWO_POWER_D] != (THREE_POWER_D/2)){
                bool isContained = false;
                for (unsigned int e = 0; e < elements.size(); e++){
                  // TODO check
                  if (elements[e] == elementMap[elementVertices(0) + (TWO_POWER_D-1-elementVertices(1))*TWO_POWER_D]){
                    isContained = true;
                  }
                }
                // if this element has not been added, do so
                if (!isContained){
                  elements.push_back(elementMap[elementVertices(0) + (TWO_POWER_D-1-elementVertices(1))*TWO_POWER_D]);
                }
              }
            }
          } // i
        } // pdf

      }
    }
#if (DIMENSIONS==3)
  }
#endif

#ifdef Debug
  // print elements
  logInfo("determineRelevantElementCombinations()", "Elements for vertex/cell " << vertexCoords << " / " << cellCoords << ":");
  for (unsigned int e = 0; e < elements.size(); e++){
    logInfo("determineRelevantElementCombinations()", elements[e]);
  }
#endif
}
