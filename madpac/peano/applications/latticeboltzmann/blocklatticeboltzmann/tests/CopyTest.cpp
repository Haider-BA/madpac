#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/tests/CopyTest.h"

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest)

const int peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest::NUMBER_TESTS = 1000;

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest");


peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest::CopyTest():
tarch::tests::TestCase("peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest::CopyTest"){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest::CopyTest::run(){

  CopyTestClass a[NUMBER_TESTS];

  tarch::utils::Watch watch(tarch::utils::Watch("","",false));
  double cpuTimeCopy(0.0);
  double cpuTimeRef(0.0);

  watch.startTimer();

  for (int i = 0; i < NUMBER_TESTS; i++){
    tarch::la::Vector<V_SIZE,double> v = a[i].getVCopy();
    work(v);
    a[i].setV(v);
  }
  watch.stopTimer();
  cpuTimeCopy = watch.getCPUTime(),

  watch.startTimer();
  for (int i = 0; i < NUMBER_TESTS; i++){
    work(a[i].getVRef());
  }
  watch.stopTimer();
  cpuTimeRef = watch.getCPUTime();

  logInfo("run()", "Copy time: " << cpuTimeCopy << ", ref. time: " << cpuTimeRef);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::CopyTest::CopyTest::work(
  tarch::la::Vector<V_SIZE,double> &v
) const {
  double rho = 0.0;
  for (int i = 0; i < LB_BLOCKSIZE; i++){
    rho = 0.0;
    for (int j = 0; j < LB_CURRENT_DIR; j++){
      rho += v[i*LB_CURRENT_DIR+j];
    }
    v[i*LB_CURRENT_DIR] = rho;
  }
}
