#include "peano/toolbox/solver/tests/InterpolationTest.h"

registerTest(peano::toolbox::solver::tests::InterpolationTest)
tarch::logging::Log peano::toolbox::solver::tests::InterpolationTest::_log( "peano::toolbox::solver::tests::InterpolationTest" );


peano::toolbox::solver::tests::InterpolationTest::InterpolationTest():
TestCase( "peano::toolbox::solver::tests::InterpolationTest" ),
    _vhh(50){
}

peano::toolbox::solver::tests::InterpolationTest::~InterpolationTest(){
}


void peano::toolbox::solver::tests::InterpolationTest::run() {
  testMethod(test4Dinterpolation)
  testMethod(test3Dinterpolation)
  testMethod(test2Dinterpolation)
}

void peano::toolbox::solver::tests::InterpolationTest::setUp() {
}


void peano::toolbox::solver::tests::InterpolationTest::test2Dinterpolation(){
#ifdef Dim2
  logTraceIn("test2Dinterpolation")
  peano::toolbox::stencil::ElementWiseVector input;
  input[0] = 0;
  input[1] = 1;
  input[2] = 1;
  input[3] = 0;

  peano::toolbox::solver::HyperCube expected5(5);
  expected5[0] = 0.0;
  expected5[1] = 0.25;
  expected5[2] = 0.5;
  expected5[3] = 0.75;
  expected5[4] = 1.0;

  expected5[5] = 0.25;
  expected5[6] = 6.0/16.0;
  expected5[7] = 0.5;
  expected5[8] = 10.0/16.0;
  expected5[9] = 0.75;

  expected5[10] = 0.5;
  expected5[11] = 0.5;
  expected5[12] = 0.5;
  expected5[13] = 0.5;
  expected5[14] = 0.5;

  expected5[15] = 0.75;
  expected5[16] = 10.0/16.0;
  expected5[17] = 0.5;
  expected5[18] = 6.0/16.0;
  expected5[19] = 0.25;

  expected5[20] = 1.0;
  expected5[21] = 0.75;
  expected5[22] = 0.5;
  expected5[23] = 0.25;
  expected5[24] = 0.0;

  peano::toolbox::solver::HyperCube actualResult = _vhh.refineGrid(input, 3);
  for( int i = 0; i<= 24; i++){
      logDebug("test2Dinterpolation()", i <<"\tac:"<< actualResult[i] << "\texp:"<<expected5[i])
      validateNumericalEquals(actualResult[i], expected5[i]);
  }

  peano::toolbox::solver::HyperCube expected2(2);
  expected2[0] = 0;
  expected2[1] = 1;
  expected2[2] = 1;
  expected2[3] = 0;
  peano::toolbox::solver::HyperCube actualResult2 = _vhh.refineGrid(input, 0);
  for( int i = 0; i<= 3; i++){
        logDebug("test2Dinterpolation()", i <<"\tac:"<< actualResult2[i] << "\texp:"<<expected2[i])
        validateNumericalEquals(actualResult2[i], expected2[i]);
    }
#endif
}

void peano::toolbox::solver::tests::InterpolationTest::test3Dinterpolation(){

  logDebug("test3Dinterpolation", "dim " << DIMENSIONS)
#ifdef Dim3
  peano::toolbox::stencil::ElementWiseVector input;
  int i = 0;
  input[i++] = 0;
  input[i++] = 1;
  input[i++] = 2;
  input[i++] = 0;
  input[i++] = 1;
  input[i++] = 2;
  input[i++] = 0;
  input[i++] = 1;

  peano::toolbox::solver::HyperCube expected(5);
  i = 0;
  expected[i++] = 0.0;
  expected[i++] = 0.25;
  expected[i++] = 0.5;
  expected[i++] = 0.75;
  expected[i++] = 1.0;

  expected[i++] = 0.5;
  expected[i++] = 0.5625;
  expected[i++] = 0.625;
  expected[i++] = 0.6875;
  expected[i++] = 0.75;

  expected[i++] = 1;
  expected[i++] = 0.875;
  expected[i++] = 0.75;
  expected[i++] = 0.625;
  expected[i++] = 0.5;

  expected[i++] = 1.5;
  expected[i++] = 19.0/16.0;
  expected[i++] = 0.875;
  expected[i++] = 9.0/16.0;
  expected[i++] = 0.25;

  expected[i++] = 2;
  expected[i++] = 1.5;
  expected[i++] = 1;
  expected[i++] = 0.5;
  expected[i++] = 0;
  //end first slice

  expected[i++] = 0.25;
  expected[i++] = 0.5;
  expected[i++] = 0.75;
  expected[i++] = 1;
  expected[i++] = 1.25;

  expected[i++] = 9.0/16.0;
  expected[i++] = 43.0/64.0;
  expected[i++] = 25.0/32.0;
  expected[i++] = 57.0/64.0;
  expected[i++] = 1;

  expected[i++] = 14.0/16.0;
  expected[i++] = 27.0/32.0;
  expected[i++] = 26.0/32.0;
  expected[i++] = 25.0/32.0;
  expected[i++] = 24.0/32.0;

  expected[i++] = 19.0/16.0;
  expected[i++] = 65.0/64.0;
  expected[i++] = 27.0/32.0;
  expected[i++] = 43.0/64.0;
  expected[i++] = 0.5;

  expected[i++] = 1.5;
  expected[i++] = 19.0/16.0;
  expected[i++] = 7.0/8.0;
  expected[i++] = 9.0/16.0;
  expected[i++] = 0.25;
  //end second slice

  expected[i++] = 0.5;
  expected[i++] = 0.75;
  expected[i++] = 1;
  expected[i++] = 1.25;
  expected[i++] = 1.5;

  expected[i++] = 0.625;
  expected[i++] = 25.0/32.0;
  expected[i++] = 15.0/16.0;
  expected[i++] = 35.0/32.0;
  expected[i++] = 1.25;

  expected[i++] = 0.75;
  expected[i++] = 13.0/16.0;
  expected[i++] = 0.875;
  expected[i++] = 15.0/16.0;
  expected[i++] = 1;

  expected[i++] = 0.875;
  expected[i++] = 27.0/32.0;
  expected[i++] = 13.0/16.0;
  expected[i++] = 25.0/32.0;
  expected[i++] = 0.75;

  expected[i++] = 1;
  expected[i++] = 0.875;
  expected[i++] = 0.75;
  expected[i++] = 0.625;
  expected[i++] = 0.5;
  //end third slice

  expected[i++] = 0.75;
  expected[i++] = 1.0;
  expected[i++] = 1.25;
  expected[i++] = 1.5;
  expected[i++] = 1.75;

  expected[i++] = 0.6875;
  expected[i++] = 57.0/64.0;
  expected[i++] = 35.0/32.0;
  expected[i++] = 83.0/64.0;
  expected[i++] = 1.5;

  expected[i++] = 0.625;
  expected[i++] = 25.0/32.0;
  expected[i++] = 15.0/16.0;
  expected[i++] = 35.0/32.0;
  expected[i++] = 1.25;

  expected[i++] = 0.5625;
  expected[i++] = 43.0/64.0;
  expected[i++] = 25.0/32.0;
  expected[i++] = 57.0/64.0;
  expected[i++] = 1;

  expected[i++] = 0.5;
  expected[i++] = 0.5625;
  expected[i++] = 0.625;
  expected[i++] = 0.6875;
  expected[i++] = 0.75;
  //end fourth slice

  expected[i++] = 1;
  expected[i++] = 1.25;
  expected[i++] = 1.5;
  expected[i++] = 1.75;
  expected[i++] = 2;

  expected[i++] = 0.75;
  expected[i++] = 1;
  expected[i++] = 1.25;
  expected[i++] = 1.5;
  expected[i++] = 1.75;

  expected[i++] = 0.5;
  expected[i++] = 0.75;
  expected[i++] = 1;
  expected[i++] = 1.25;
  expected[i++] = 1.5;

  expected[i++] = 0.25;
  expected[i++] = 0.5;
  expected[i++] = 0.75;
  expected[i++] = 1;
  expected[i++] = 1.25;

  expected[i++] = 0;
  expected[i++] = 0.25;
  expected[i++] = 0.5;
  expected[i++] = 0.75;
  expected[i++] = 1;

  peano::toolbox::solver::HyperCube actual = _vhh.refineGrid(input, 3);
  for( i = 0; i<125; i++) {
    logDebug("test3Dinterpolation()", i <<"\tac:"<< actual[i] << "\texp:"<<expected[i])
    validateNumericalEquals(actual[i], expected[i]);
  }
  #endif
}

void peano::toolbox::solver::tests::InterpolationTest::test4Dinterpolation(){
  logDebug("test4Dinterpolation", "start");
#ifdef Dim4
  peano::toolbox::stencil::ElementWiseVector input;
  int i = 0;
  input[i++] = 0;
  input[i++] = 3;
  input[i++] = 1;
  input[i++] = 2;
  input[i++] = 1;
  input[i++] = 2;
  input[i++] = 1;
  input[i++] = 3;

  input[i++] = 1;
  input[i++] = 2;
  input[i++] = 1;
  input[i++] = 0;
  input[i++] = 1;
  input[i++] = 0;
  input[i++] = 0;
  input[i++] = 2;

  peano::toolbox::solver::HyperCube expected(3);
  i = 0;
  expected[i++] = 0.0;
  expected[i++] = 1.5;
  expected[i++] = 3;
  expected[i++] = 0.5;
  expected[i++] = 1.5;
  expected[i++] = 2.5;
  expected[i++] = 1;
  expected[i++] = 1.5;
  expected[i++] = 2;
  //end first block

  expected[i++] =0.5;
  expected[i++] =1.5;
  expected[i++] =2.5;
  expected[i++] =0.75;
  expected[i++] =1.625;
  expected[i++] =2.5;
  expected[i++] =1;
  expected[i++] =1.75;
  expected[i++] =2.5;
  //end second block

  expected[i++] =1;
  expected[i++] =1.5;
  expected[i++] =2;
  expected[i++] =1;
  expected[i++] =1.75;
  expected[i++] =2.5;
  expected[i++] =1;
  expected[i++] =2;
  expected[i++] =3;
  //end third block

  expected[i++] =0.5;
  expected[i++] =1.5;
  expected[i++] =2.5;
  expected[i++] =0.75;
  expected[i++] =1.25;
  expected[i++] =1.75;
  expected[i++] =1;
  expected[i++] =1;
  expected[i++] =1;
  //end fourth block

  expected[i++] =0.75;
  expected[i++] =1.25;
  expected[i++] =1.75;
  expected[i++] =0.75;
  expected[i++] =1.25;
  expected[i++] =1.75;
  expected[i++] =0.75;
  expected[i++] =1.25;
  expected[i++] =1.75;
  //end fifth block

  expected[i++] =1;
  expected[i++] =1;
  expected[i++] =1;
  expected[i++] =0.75;
  expected[i++] =1.25;
  expected[i++] =1.75;
  expected[i++] =0.5;
  expected[i++] =1.5;
  expected[i++] =2.5;
  //end sixth block

  expected[i++] =1;
  expected[i++] =1.5;
  expected[i++] =2;
  expected[i++] =1;
  expected[i++] =1;
  expected[i++] =1;
  expected[i++] =1;
  expected[i++] =0.5;
  expected[i++] =0;
  //end seventh block

  expected[i++] =1;
  expected[i++] =1;
  expected[i++] =1;
  expected[i++] =0.75;
  expected[i++] =0.875;
  expected[i++] =1;
  expected[i++] =0.5;
  expected[i++] =0.75;
  expected[i++] =1;
  //end eighth block

  expected[i++] =1;
  expected[i++] =0.5;
  expected[i++] =0;
  expected[i++] =0.5;
  expected[i++] =0.75;
  expected[i++] =1;
  expected[i++] =0;
  expected[i++] =1;
  expected[i++] =2;
  //end nineth block

  peano::toolbox::solver::HyperCube actual = _vhh.refineGrid(input, 1);
  _vhh.refineGrid(input, 30);
  for( i = 0; i<81; i++) {
    //logDebug("test4Dinterpolation()", i <<"\tac:"<< actual[i] << "\texp:"<<expected[i])
    validateNumericalEquals(actual[i], expected[i])
  }
#endif
}
