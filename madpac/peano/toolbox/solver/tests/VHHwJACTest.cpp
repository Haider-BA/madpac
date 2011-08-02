#include "peano/toolbox/solver/tests/VHHwJACTest.h"

registerTest(peano::toolbox::solver::tests::VHHwJACTest)
tarch::logging::Log peano::toolbox::solver::tests::VHHwJACTest::_log( "peano::toolbox:solver::tests::VHHwJACTest" );


peano::toolbox::solver::tests::VHHwJACTest::VHHwJACTest():
TestCase( "peano::toolbox::solver::tests::VHHwJACTest" ){
}


void peano::toolbox::solver::tests::VHHwJACTest::run()
{
  testMethod(testWriter)
}
peano::toolbox::solver::tests::VHHwJACTest::~VHHwJACTest()
{
}



void peano::toolbox::solver::tests::VHHwJACTest::setUp()
{
}

void peano::toolbox::solver::tests::VHHwJACTest::testWriter()
{
#ifdef Dim2
  VirtualHierarchicalHRefinement vhh(200);
  peano::toolbox::stencil::ElementWiseVector input;
  input[0] = 0;
  input[1] = 1;
  input[2] = 1;
  input[3] = 2;
  peano::toolbox::stencil::Stencil s;
  s[0] = 0;
  s[1] = -1;
  s[2] = 0;
  s[3] = -1;
  s[4] = 4;
  s[5] = -1;
  s[6] = 0;
  s[7] = -1;
  s[8] = 0;

  peano::toolbox::stencil::ElementWiseVector rhs;
  rhs[0] = 1;
  rhs[1] = 0;
  rhs[2] = 0;
  rhs[3] = 2;
  vhh.computeVirtualHierarchicalHRefinement(input, s, rhs, 0.7);
  logDebug("testWriter()","computeVirtualHierarchicalHRefinement(input, 10, s, rhs, 0.8); was successful")
  vhh.visualize("myOutputfile.vtk");
#endif
#ifdef Dim3
  VirtualHierarchicalHRefinement vhh(30);
  peano::toolbox::stencil::ElementWiseVector input;
  input[0] = 0;
  input[1] = 1;
  input[2] = 0;
  input[3] = 1;
  input[4] = 0;
  input[5] = 1;
  input[6] = 0;
  input[7] = 1;
  peano::toolbox::stencil::Stencil s;
  s[0] = 0;
  s[1] = 0;
  s[2] = 0;
  s[3] = 0;
  s[4] = -1;
  s[5] = 0;
  s[6] = 0;
  s[7] = 0;
  s[8] = 0;

  s[9] = 0;
  s[10] = -1;
  s[11] = 0;
  s[12] = -1;
  s[13] = 6;
  s[14] = -1;
  s[15] = 0;
  s[16] = -1;
  s[17] = 0;

  s[18] = 0;
  s[19] = 0;
  s[20] = 0;
  s[21] = 0;
  s[22] = -1;
  s[23] = 0;
  s[24] = 0;
  s[25] = 0;
  s[26] = 0;

  peano::toolbox::stencil::ElementWiseVector rhs;
  rhs[0] = 1;
  rhs[1] = 1;
  rhs[2] = 1;
  rhs[3] = 1;
  rhs[4] = 0;
  rhs[5] = 1;
  rhs[6] = 0;
  rhs[7] = 0;
  vhh.computeVirtualHierarchicalHRefinement(input, s, rhs, 0.8);
  logDebug("testWriter()","computeVirtualHierarchicalHRefinement(input, s, rhs, 0.8); was successful")
  vhh.visualize("myOutputfile.vtk");
#endif
}
