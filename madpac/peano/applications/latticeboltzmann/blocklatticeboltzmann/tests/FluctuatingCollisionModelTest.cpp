#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/tests/FluctuatingCollisionModelTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::FluctuatingCollisionModelTest)


peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
FluctuatingCollisionModelTest::FluctuatingCollisionModelTest(){}


peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
FluctuatingCollisionModelTest::~FluctuatingCollisionModelTest(){}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
FluctuatingCollisionModelTest::run(){
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState state;
  tarch::la::Vector<LB_CURRENT_DIR,double> gamma(1.0);
  for (int d = 0; d < DIMENSIONS+1; d++){
    gamma(d) = 0.0;
  }
  state.setMu(1.0);
  state.setGamma(gamma);
  peano::applications::latticeboltzmann::blocklatticeboltzmann::
  collisionmodels::BlockFluctuatingCollisionModel collisionModel(state);

#if ((LB_CURRENT_MODEL==LB_D2Q9) || (LB_CURRENT_MODEL==LB_D3Q19) )
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    for (int j = 0; j < LB_CURRENT_DIR; j++){
      double multi = 0.0;
      for (int k = 0; k < LB_CURRENT_DIR; k++){
        multi += collisionModel._M(j,k)*collisionModel._MTranspose(k,i);
      }

      multi = multi - (double)(i==j);

      std::cout << i << "," << j << ": " << multi << std::endl;
      validate( fabs(multi) < 1.0e-15);
    }
  }
#endif
}

