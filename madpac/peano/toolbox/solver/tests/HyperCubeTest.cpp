// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#include "peano/toolbox/solver/tests/HyperCubeTest.h"
#include <algorithm>

registerTest(peano::toolbox::solver::tests::HyperCubeTest)
tarch::logging::Log peano::toolbox::solver::tests::HyperCubeTest::_log( "peano::toolbox:solver::tests::HyperCubeTest" );


peano::toolbox::solver::tests::HyperCubeTest::HyperCubeTest():
TestCase( "peano::toolbox::solver::tests::HyperCubeTest" ){
}

peano::toolbox::solver::tests::HyperCubeTest::~HyperCubeTest(){
}


void peano::toolbox::solver::tests::HyperCubeTest::run() {
  testMethod(testBorder2D)
  testMethod(testBorder3D)
  testMethod(testBorder4D)
  testMethod(testApplyStencil)
  testMethod(testAssignOperator)
  testMethod(testGetColors)
}

void peano::toolbox::solver::tests::HyperCubeTest::testBorder2D() {
#ifdef Dim2
  int i = 0;
  HyperCube h(4);
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
#endif
}

void peano::toolbox::solver::tests::HyperCubeTest::testBorder3D(){
#ifdef Dim3
  int i = 0;
  HyperCube h(4);
  // first slice
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  // second slice
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  // third slice
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  // last slice
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
#endif
  }

void peano::toolbox::solver::tests::HyperCubeTest::testBorder4D(){
#ifdef Dim4
  int i = 0;
  HyperCube h(3);
  // first cube
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  //second cube

  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(!h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  //last cube

  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))

  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
  validate(h.isBorder(i++))
#endif
}

void peano::toolbox::solver::tests::HyperCubeTest::testApplyStencil()
{
#ifdef Dim2
  HyperCube h(7);
  h[7] = 1;
  h[8] = 2;
  h[9] = 1;
  h[14] = 0;
  h[15] = 1;
  h[16] = 1;
  h[21] = 0;
  h[22] = 2;
  h[23] = 0;
  peano::toolbox::stencil::Stencil s;
  int i = 0;
  s[i++] = 0;
  s[i++] = 0.125;
  s[i++] = 0;
  s[i++] = 0.125;
  s[i++] = 0.5;
  s[i++] = 0.125;
  s[i++] = 0;
  s[i++] = 0.125;
  s[i++] = 0;
  validateNumericalEquals(h.applyStencil(15, s), 1.125);
#endif

#ifdef Dim3
  HyperCube h(5);
  int i = 0;
  peano::toolbox::stencil::Stencil s;

  h[7] = 1;  s[i++] = 0;
  h[8] = 2;  s[i++] = 0;
  h[9] = 1;  s[i++] = 0;
  h[12] = 0; s[i++] = 0;
  h[13] = 1; s[i++] = 0.125;
  h[14] = 1; s[i++] = 0;
  h[17] = 0; s[i++] = 0;
  h[18] = 2; s[i++] = 0;
  h[19] = 0; s[i++] = 0;

  h[32] = 1; s[i++] = 0;
  h[33] = 2; s[i++] = 0.125;
  h[34] = 1; s[i++] = 0;
  h[37] = 0; s[i++] = 0.125;
  h[38] = 1; s[i++] = 0.25;
  h[39] = 0; s[i++] = 0.125;
  h[42] = 1; s[i++] = 0;
  h[43] = 0; s[i++] = 0.125;
  h[44] = 2; s[i++] = 0;

  h[57] = 1; s[i++] = 0;
  h[58] = 2; s[i++] = 0;
  h[59] = 1; s[i++] = 0;
  h[62] = 0; s[i++] = 0;
  h[63] = 1; s[i++] = 0.125;
  h[64] = 1; s[i++] = 0;
  h[67] = 0; s[i++] = 0;
  h[68] = 2; s[i++] = 0;
  h[69] = 0; s[i++] = 0;
  double result = h.applyStencil(38, s);
  validateNumericalEquals(result, 0.75);
#endif
}

void peano::toolbox::solver::tests::HyperCubeTest::testAssignOperator()
{
  HyperCube h1(4);
  HyperCube h2(2);
  for(int i = 0; i<h1.elementsCount(); i++){
      h1[i] = rand();
  }
  for(int i = 0; i<h2.elementsCount(); i++){
      h2[i] = rand();
  }
  validate(h1.size() != h2.size());
  validate(h1.elementsCount() != h2.elementsCount())

  h2 = h1;

  validate(h1.size() == h2.size())
  validate(h1.elementsCount() == h2.elementsCount())
  for(int i = 0; i<h1.elementsCount(); i++){
        validate(h1[i] == h2[i])
  }
}

void peano::toolbox::solver::tests::HyperCubeTest::testcopyConstructor()
{

}

void peano::toolbox::solver::tests::HyperCubeTest::setUp() {
}

void peano::toolbox::solver::tests::HyperCubeTest::testGetColors()
{

    HyperCube h1(5);
    HyperCube h2(6);
    std::vector<std::vector<int> > colors1 = h1.getColorIndices();
    std::vector<std::vector<int> > colors2 = h2.getColorIndices();
    std::map<int, int> m;

#ifdef Dim2
    // map colors to indices
    for(unsigned int i = 0; i<colors2.size(); i++){
        for(unsigned int j = 0; j<colors2[i].size(); j++){
            m[colors2[i][j]] = i;
        }
    }
    //14, 16, 26, 28 must have the same color
    //13, 15, 25, 27           -"-
    // 8, 10, 20, 22           -"-
    // 7,  9, 19, 21           -"-
    // but all these blocks must have different colors
    int color = m[14];
    validate(color == m[16]);
    validate(color == m[26]);
    validate(color == m[28]);
    validate(color != m[13]);
    validate(color != m[8]);
    validate(color != m[7]);

    color = m[13];
    validate(color == m[15]);
    validate(color == m[25]);
    validate(color == m[27]);
    validate(color != m[8]);
    validate(color != m[7]);

    color = m[8];
    validate(color == m[10]);
    validate(color == m[20]);
    validate(color == m[22]);
    validate(color != m[7]);

    color = m[7];
    validate(color == m[9]);
    validate(color == m[19]);
    validate(color == m[21]);

    // map colors to indices
    for(unsigned int i = 0; i<colors1.size(); i++){
        for(unsigned int j = 0; j<colors1[i].size(); j++){
            m[colors1[i][j]] = i;
        }
    }
    // 12 | 11, 13 | 7, 17 | 6, 8, 16, 18
    validate(m[12] != m[11]);
    validate(m[12] != m[7]);
    validate(m[12] != m[6]);

    validate(m[11] != m[7]);
    validate(m[11] != m[6]);
    validate(m[11] == m[13]);

    validate(m[7] != m[6]);
    validate(m[7] == m[17]);

    validate(m[6] == m[8]);
    validate(m[6] == m[16]);
    validate(m[6] == m[18]);
#endif
#ifdef Dim3
    // map colors to indices
    for(unsigned int i = 0; i<colors1.size(); i++){
        for(unsigned int j = 0; j<colors1[i].size(); j++){
            m[colors1[i][j]] = i;
        }
    }
    // 31, 33, 41, 43, 81, 83, 91, 93
    // 32, 42, 82, 92
    // 36, 38, 86, 88
    // 37, 87
    // 56, 58, 66, 68
    // 57, 67
    // 61, 63
    // 62
    validate(m[31] == m[33]);
    validate(m[31] == m[41]);
    validate(m[31] == m[43]);
    validate(m[31] == m[81]);
    validate(m[31] == m[83]);
    validate(m[31] == m[91]);
    validate(m[31] == m[93]);
    validate(m[31] != m[32]);
    validate(m[31] != m[36]);
    validate(m[31] != m[37]);
    validate(m[31] != m[56]);
    validate(m[31] != m[57]);
    validate(m[31] != m[61]);
    validate(m[31] != m[62]);

    validate(m[32] == m[42]);
    validate(m[32] == m[82]);
    validate(m[32] == m[92]);
    validate(m[32] != m[36]);
    validate(m[32] != m[37]);
    validate(m[32] != m[56]);
    validate(m[32] != m[57]);
    validate(m[32] != m[61]);
    validate(m[32] != m[62]);

    validate(m[36] == m[38]);
    validate(m[36] == m[86]);
    validate(m[36] == m[88]);
    validate(m[36] != m[37]);
    validate(m[36] != m[56]);
    validate(m[36] != m[57]);
    validate(m[36] != m[61]);
    validate(m[36] != m[62]);

    validate(m[37] == m[87]);
    validate(m[37] != m[56]);
    validate(m[37] != m[57]);
    validate(m[37] != m[61]);
    validate(m[37] != m[62]);

    validate(m[56] == m[58]);
    validate(m[56] == m[66]);
    validate(m[56] == m[68]);
    validate(m[56] != m[57]);
    validate(m[56] != m[61]);
    validate(m[56] != m[62]);

    validate(m[57] == m[67]);
    validate(m[57] != m[61]);
    validate(m[57] != m[62]);


    validate(m[61] == m[63]);
    validate(m[61] != m[62]);



#endif
    //print out which index belongs to which color
//    for(int i = 0; i<TWO_POWER_D; i++){
//        logDebug("testGetColors()", "Color number " << i);
//        for(std::vector<int>::iterator it = colors1[i].begin(); it != colors1[i].end(); it++){
//            logDebug("testGetColors()", *it)
//        }

//    }
//    for(int i = 0; i<TWO_POWER_D; i++){
//        logDebug("testGetColors()", "Color number " << i);
//        for(std::vector<int>::iterator it = colors2[i].begin(); it != colors2[i].end(); it++){
//            logDebug("testGetColors()", *it)
//        }

//    }


}

