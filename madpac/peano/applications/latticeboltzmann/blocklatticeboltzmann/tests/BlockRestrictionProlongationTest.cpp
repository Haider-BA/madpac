#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/tests/BlockRestrictionProlongationTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockRestrictionProlongationTest)


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
BlockRestrictionProlongationTest::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockRestrictionProlongationTest"
);



peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
BlockRestrictionProlongationTest::BlockRestrictionProlongationTest():
tarch::tests::TestCase("peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockRestrictionProlongationTest" ){}


peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
BlockRestrictionProlongationTest::~BlockRestrictionProlongationTest(){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
BlockRestrictionProlongationTest::run() {
  logInfo("run()", "Run BlockRestrictionProlongation tests...");

  logInfo("run()", "Test prolongation...");
  testProlongation();

  logInfo("run()", "Test findFineOverlapCells...");

  testFindFineOverlapCells();
  logInfo("run()", "BlockRestrictionProlongation tests finished...");

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
BlockRestrictionProlongationTest::testProlongation(){

  peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockRestrictionProlongation blockRestrictionProlongation;

  tarch::la::Vector<DIMENSIONS,int> discretePosition;
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> coarsePdf(1.0);
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> finePdf(-1.0);
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> hasMinusOneEntries(false);


  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> density(1.0);
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> velocity(0.05);



#if defined(Dim3)
    for (int z = 0; z < 3; z++){
#endif
      for (int y = 0; y < 3; y++){
        for (int x = 0; x < 3; x++){
          int index = x + LB_BLOCKSIZE*y
#if defined(Dim3)
                    + LB_BLOCKSIZE*LB_BLOCKSIZE*z
#endif
                    ;
          hasMinusOneEntries(index) = true;
        }
      }
#if defined(Dim3)
    }
#endif
    discretePosition = tarch::la::Vector<DIMENSIONS,int>(1,1
#if defined(Dim3)
                         , 1
#endif
                       );


    // test prolongation
    blockRestrictionProlongation.prolongateToFineLevel(
      discretePosition,
      coarsePdf,
      finePdf,
      density,
      velocity,
      hasMinusOneEntries
    );


#if defined(Dim3)
    for (int z = 0; z < LB_BLOCKSIZE; z++){
#endif
      for (int y = 0; y < LB_BLOCKSIZE; y++){
        for (int x = 0; x < LB_BLOCKSIZE; x++){
          int index = x + LB_BLOCKSIZE*y
#if defined(Dim3)
                    + LB_BLOCKSIZE*LB_BLOCKSIZE*z
#endif
                    ;

          // for overlap cells -> check for coarse values
          if ( (x < 3) && (y < 3)
#if defined(Dim3)
              && (z < 3)
#endif
          ){
            assertion(tarch::la::equals(density(index), ((double) LB_CURRENT_DIR)));

            double velMag = velocity(DIMENSIONS*index)*velocity(DIMENSIONS*index)
                          + velocity(DIMENSIONS*index+1)*velocity(DIMENSIONS*index+1)
#if defined(Dim3)
                          + velocity(DIMENSIONS*index+2)*velocity(DIMENSIONS*index+2)
#endif
                          ;

            assertion( tarch::la::equals(velMag,0.0) );
            velMag = 0.0;

            for (int i = 0; i < LB_CURRENT_DIR; i++){
              assertion( tarch::la::equals(finePdf(LB_CURRENT_DIR*index+i),1.0) );
            }

          // for non-overlap cells -> check for old (fine) values
          } else {
            assertion(tarch::la::equals(density(index), 1.0) );
            double velMag = velocity(DIMENSIONS*index)*velocity(DIMENSIONS*index)
                          + velocity(DIMENSIONS*index+1)*velocity(DIMENSIONS*index+1)
#if defined(Dim3)
                          + velocity(DIMENSIONS*index+2)*velocity(DIMENSIONS*index+2)
#endif
                          ;

            assertion( tarch::la::equals(velMag,0.0025*DIMENSIONS) );
            velMag = 0.0;

            for (int i = 0; i < LB_CURRENT_DIR; i++){
              assertion( tarch::la::equals(finePdf(LB_CURRENT_DIR*index+i),-1.0) );
            }
          }
        }
      }
#if defined(Dim3)
    }
#endif
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
BlockRestrictionProlongationTest::testFindFineOverlapCells(){

  peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockRestrictionProlongation blockRestrictionProlongation;

  // plot map
  for (int i = 0; i < THREE_POWER_D/2; i++){
    for (unsigned int j = 0; j < blockRestrictionProlongation._minusOneEntriesFromNeighbourBlock.find(i)->second.size(); j++){
      logInfo("testFindFineOverlapCells()", "NB Cell " << i << ": " << \
          (blockRestrictionProlongation._minusOneEntriesFromNeighbourBlock.find(i)->second)[j](0) << "," << \
          (blockRestrictionProlongation._minusOneEntriesFromNeighbourBlock.find(i)->second)[j](1));
    }
  }
  for (int i =  THREE_POWER_D/2+1; i < THREE_POWER_D; i++){
    for (unsigned int j = 0; j < blockRestrictionProlongation._minusOneEntriesFromNeighbourBlock.find(i)->second.size(); j++){
      logInfo("testFindFineOverlapCells()", "NB Cell " << i << ": " << \
          (blockRestrictionProlongation._minusOneEntriesFromNeighbourBlock.find(i)->second)[j](0) << "," << \
          (blockRestrictionProlongation._minusOneEntriesFromNeighbourBlock.find(i)->second)[j](1));
    }
  }
}
