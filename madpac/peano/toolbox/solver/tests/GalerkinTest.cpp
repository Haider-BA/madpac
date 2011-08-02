#include "peano/toolbox/solver/tests/GalerkinTest.h"

registerTest(peano::toolbox::solver::tests::GalerkinTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif


peano::toolbox::solver::tests::GalerkinTest::GalerkinTest():
  tarch::tests::TestCase("peano::applications::poisson::multigrid::tests::GalerkinTest"){
}


peano::toolbox::solver::tests::GalerkinTest::~GalerkinTest(){
}


void peano::toolbox::solver::tests::GalerkinTest::run(){
  testMethod(testCalculateRAPInnerVertex);
  testMethod(testCalculateRAPEdgeVertex);
  testMethod(testCalculateRAPCornerVertex);
  testMethod(testCalculateAP2d);
}


void peano::toolbox::solver::tests::GalerkinTest::setUp(){
}


void peano::toolbox::solver::tests::GalerkinTest::testCalculateRAPInnerVertex(){
  #ifdef Dim2

    tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>  rap;

    tarch::la::Vector<TWO_POWER_D, double> fineGridVertexTempAP;
    tarch::la::assignList(fineGridVertexTempAP) = 1, 2, 3, 4;

    tarch::la::Vector<DIMENSIONS, int> fineGridPositionOfVertex;
    tarch::la::assignList(fineGridPositionOfVertex) = 2, 2;

    tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>  coarseGridVerticesR;
    tarch::la::assignList(coarseGridVerticesR) =
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0;

    rap = _galerkin.calculateRAP(fineGridVertexTempAP, coarseGridVerticesR, fineGridPositionOfVertex);

    tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double> result;
    tarch::la::assignList(result) =
        0.0, 0.0, 0.0, 0.0, 1.0*1.0/9.0, 1.0*2.0/9.0, 0.0, 1.0*2.0/9.0, 1.0*4.0/9.0,
        0.0, 0.0, 0.0, 2.0*1.0/9.0, 2.0*2.0/9.0, 0.0, 2.0*2.0/9.0, 2.0*4.0/9.0, 0.0,
        0.0, 3.0*1.0/9.0, 3.0*2.0/9.0, 0.0, 3.0*2.0/9.0, 3.0*4.0/9.0, 0.0, 0.0, 0.0,
        4.0*1.0/9.0, 4.0*2.0/9.0, 0.0, 4.0*2.0/9.0, 4.0*4.0/9.0, 0.0, 0.0, 0.0, 0.0;

    validateNumericalVectorEquals( rap, result );

  #endif
}

void peano::toolbox::solver::tests::GalerkinTest::testCalculateRAPEdgeVertex(){
  #ifdef Dim2

    tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>  rap;

    tarch::la::Vector<TWO_POWER_D, double> fineGridVertexTempAP;
    tarch::la::assignList(fineGridVertexTempAP) = 1, 2, 3, 4;

    tarch::la::Vector<DIMENSIONS, int> fineGridPositionOfVertex;
    tarch::la::assignList(fineGridPositionOfVertex) = 2, 0;

    tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>  coarseGridVerticesR;
    tarch::la::assignList(coarseGridVerticesR) =
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0;

    rap = _galerkin.calculateRAP(fineGridVertexTempAP, coarseGridVerticesR, fineGridPositionOfVertex);

    tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double> result;
    tarch::la::assignList(result) =
        0.0, 0.0, 0.0, 0.0, 1.0*3.0/9.0, 1.0*6.0/9.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 2.0*3.0/9.0, 2.0*6.0/9.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0;

    validateNumericalVectorEquals( rap, result );

  #endif
}

void peano::toolbox::solver::tests::GalerkinTest::testCalculateRAPCornerVertex(){
  #ifdef Dim2

    tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>  rap;

    tarch::la::Vector<TWO_POWER_D, double> fineGridVertexTempAP;
    tarch::la::assignList(fineGridVertexTempAP) = 1, 2, 3, 4;

    tarch::la::Vector<DIMENSIONS, int> fineGridPositionOfVertex;
    tarch::la::assignList(fineGridPositionOfVertex) = 0, 0;

    tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>  coarseGridVerticesR;
    tarch::la::assignList(coarseGridVerticesR) =
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,

         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         3.0/9.0, 6.0/9.0, 9.0/9.0, 6.0/9.0, 3.0/9.0,
         2.0/9.0, 4.0/9.0, 6.0/9.0, 4.0/9.0, 2.0/9.0,
         1.0/9.0, 2.0/9.0, 3.0/9.0, 2.0/9.0, 1.0/9.0;

    rap = _galerkin.calculateRAP(fineGridVertexTempAP, coarseGridVerticesR, fineGridPositionOfVertex);

    tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double> result;
    tarch::la::assignList(result) =
        0.0, 0.0, 0.0, 0.0, 1.0*9.0/9.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
        0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0;

    validateNumericalVectorEquals( rap, result );

  #endif
}

void peano::toolbox::solver::tests::GalerkinTest::testCalculateAP2d(){
  #ifdef Dim2
  tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D, double>  tempPInUpperCell;
  tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D, double>  tempPInLowerCell;

  tarch::la::assignList(tempPInUpperCell)
                   = 2.1, 2.2, 2.3, 2.4,
                     3.1, 3.2, 3.3, 3.4,
                     0.1, 0.2, 0.3, 0.4,
                     1.1, 1.2, 1.3, 1.4;
  tarch::la::assignList(tempPInLowerCell)
                   = 4.1, 4.2, 4.3, 4.4,
                     5.1, 5.2, 5.3, 5.4,
                     2.1, 2.2, 2.3, 2.4,
                     3.1, 3.2, 3.3, 3.4;

  tarch::la::Matrix<TWO_POWER_D, TWO_POWER_D, double>  assemblyMatrix;
  tarch::la::assignList(assemblyMatrix)
                   =  1.0, -0.5, -0.5,  0.0,
                     -0.5,  1.0,  0.0, -0.5,
                     -0.5,  0.0,  1.0, -0.5,
                      0.0, -0.5, -0.5,  1.0;

  tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D, double> result;

  result = _galerkin.calculateTempAP( tempPInUpperCell, assemblyMatrix );

  validateNumericalEquals( result(0),   1.0*4.1 - 0.5*5.1 - 0.5*2.1 );
  validateNumericalEquals( result(1),   1.0*4.2 - 0.5*5.2 - 0.5*2.2 );
  validateNumericalEquals( result(2),   1.0*4.3 - 0.5*5.3 - 0.5*2.3 );
  validateNumericalEquals( result(3),   1.0*4.4 - 0.5*5.4 - 0.5*2.4 );

  validateNumericalEquals( result(4),  -0.5*4.1 + 1.0*5.1 - 0.5*3.1 );
  validateNumericalEquals( result(5),  -0.5*4.2 + 1.0*5.2 - 0.5*3.2 );
  validateNumericalEquals( result(6),  -0.5*4.3 + 1.0*5.3 - 0.5*3.3 );
  validateNumericalEquals( result(7),  -0.5*4.4 + 1.0*5.4 - 0.5*3.4 );

  validateNumericalEquals( result(8),  -0.5*4.1 + 1.0*2.1 - 0.5*3.1 );
  validateNumericalEquals( result(9),  -0.5*4.2 + 1.0*2.2 - 0.5*3.2 );
  validateNumericalEquals( result(10), -0.5*4.3 + 1.0*2.3 - 0.5*3.3 );
  validateNumericalEquals( result(11), -0.5*4.4 + 1.0*2.4 - 0.5*3.4 );

  validateNumericalEquals( result(12), -0.5*5.1 - 0.5*2.1 + 1.0*3.1 );
  validateNumericalEquals( result(13), -0.5*5.2 - 0.5*2.2 + 1.0*3.2 );
  validateNumericalEquals( result(14), -0.5*5.3 - 0.5*2.3 + 1.0*3.3 );
  validateNumericalEquals( result(15), -0.5*5.4 - 0.5*2.4 + 1.0*3.4 );

  result = _galerkin.calculateTempAP( tempPInLowerCell, assemblyMatrix );

  validateNumericalEquals( result(0),   1.0*2.1 - 0.5*3.1 - 0.5*0.1 );
  validateNumericalEquals( result(1),   1.0*2.2 - 0.5*3.2 - 0.5*0.2 );
  validateNumericalEquals( result(2),   1.0*2.3 - 0.5*3.3 - 0.5*0.3 );
  validateNumericalEquals( result(3),   1.0*2.4 - 0.5*3.4 - 0.5*0.4 );
  #endif
}



#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
