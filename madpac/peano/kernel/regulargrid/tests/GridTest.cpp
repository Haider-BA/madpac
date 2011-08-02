#include "peano/kernel/regulargrid/tests/GridTest.h"
#include "peano/kernel/regulargrid/RegularGridVertexEnumerator.h"
#include "peano/kernel/regulargrid/tests/TestTypes.h"

#include "peano/kernel/regulargrid/GridContainer.h"
#include "peano/kernel/regulargrid/Grid.h"

#include "peano/kernel/regulargrid/tests/adapters/RegularGrid2Test.h"

#include "peano/geometry/builtin/Sphere.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::kernel::regulargrid::tests::GridTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif


peano::kernel::regulargrid::tests::GridTest::GridTest():
  TestCase( "peano::kernel::regulargrid::tests::GridTest" ) {
}


peano::kernel::regulargrid::tests::GridTest::~GridTest() {
}


void peano::kernel::regulargrid::tests::GridTest::run() {
}


void peano::kernel::regulargrid::tests::GridTest::setUp() {
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
