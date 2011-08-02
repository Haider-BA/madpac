#include "peano/applications/heatequation/timestepping/tests/HierarchicalTransformTest.h"
#include "peano/toolbox/solver/Multigrid.h"
#include "peano/applications/heatequation/timestepping/SpacetreeGridSingleStepVertex.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest)


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",off)
#endif


peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest::HierarchicalTransformTest():
  tarch::tests::TestCase( "peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest" ) {
}


peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest::~HierarchicalTransformTest() {
}


void peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest::run() {
  testMethod( testComputeHierarchicalTransform );
  testMethod( testRestrictHierarchicalResidual );
}


void peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest::setUp() {
}


void peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest::testRestrictHierarchicalResidual() {
  #ifdef Dim2
//  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex coarseGridVertex;
//  const double thermalDiffusivity = 1.0;
//  const double temperature        = 3.0;
//  const double rhs                = 0.0;
//  coarseGridVertex.initialiseInnerVertex(thermalDiffusivity,temperature,rhs,1.0);
  #endif
}


void peano::applications::heatequation::timestepping::tests::HierarchicalTransformTest::testComputeHierarchicalTransform() {
  #ifdef Dim2
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex coarseGridVertex;
  const double thermalDiffusivity = 1.0;
  const double temperature        = 3.0;
  const double rhs                = 0.0;
  coarseGridVertex.initialiseInnerVertex(thermalDiffusivity,temperature,rhs,1.0);

  tarch::la::Vector<TWO_POWER_D,double> coarseGridValues;
  coarseGridValues(0) =  12.0;
  coarseGridValues(1) = -22.0;
  coarseGridValues(2) =  31.0;
  coarseGridValues(3) = -42.0;

  peano::toolbox::solver::Multigrid    multigrid;
  tarch::la::Vector<DIMENSIONS,int>    k;
  tarch::la::Vector<DIMENSIONS,int>    fineGridPositionOfVertex;

  fineGridPositionOfVertex(0) = 0;
  fineGridPositionOfVertex(1) = 0;
  k(0) = 0;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(0) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(0)
  );
  k(0) = 1;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(1) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );
  k(0) = 0;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(2) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );
  k(0) = 1;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(3) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );

  fineGridPositionOfVertex(0) = 1;
  fineGridPositionOfVertex(1) = 0;
  k(0) = 0;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(0) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(0) * 2.0/3.0
  );
  k(0) = 1;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(1) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(1) * 1.0/3.0
  );
  k(0) = 0;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(2) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );
  k(0) = 1;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(3) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );

  fineGridPositionOfVertex(0) = 2;
  fineGridPositionOfVertex(1) = 0;
  k(0) = 0;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(0) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(0) * 1.0/3.0
  );
  k(0) = 1;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(1) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(1) * 2.0/3.0
  );
  k(0) = 0;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(2) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );
  k(0) = 1;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(3) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );

  fineGridPositionOfVertex(0) = 3;
  fineGridPositionOfVertex(1) = 0;
  k(0) = 0;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(0) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );
  k(0) = 1;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(1) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(1)
  );
  k(0) = 0;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(2) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );
  k(0) = 1;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(3) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    0.0
  );

  fineGridPositionOfVertex(0) = 1;
  fineGridPositionOfVertex(1) = 2;
  k(0) = 0;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(0) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(0) * 1.0/3.0 * 2.0 / 3.0
  );
  k(0) = 1;
  k(1) = 0;
  validateNumericalEquals(
    coarseGridValues(1) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(1) * 1.0/3.0 * 1.0 / 3.0
  );
  k(0) = 0;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(2) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(2) * 2.0/3.0 * 2.0 / 3.0
  );
  k(0) = 1;
  k(1) = 1;
  validateNumericalEquals(
    coarseGridValues(3) *
    multigrid.computeContributionWeightOfInterGridTransfer(
      k,
      coarseGridVertex.getProlongationStencil(),
      fineGridPositionOfVertex
    ),
    coarseGridValues(3) * 2.0/3.0 * 1.0 / 3.0
  );
  #endif
}


#ifdef UseTestSpecificCompilerSettings
#pragma optimize("",on)
#endif
