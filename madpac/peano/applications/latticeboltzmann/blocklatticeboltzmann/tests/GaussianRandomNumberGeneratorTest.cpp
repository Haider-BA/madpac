#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/tests/GaussianRandomNumberGeneratorTest.h"


#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::GaussianRandomNumberGeneratorTest)


peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::
GaussianRandomNumberGeneratorTest::GaussianRandomNumberGeneratorTest():
tarch::tests::TestCase("peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::GaussianRandomNumberGeneratorTest"){}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::GaussianRandomNumberGeneratorTest::run(){

  GaussianRandomNumberGenerator generator;
  int forLoops = 10000;   // number of generated random numbers in this test
  double mean = 0.0;      // mean value of the random numbers
  double variance = 0.0;  // variance

  // generate many random numbers, compute their mean and variance and print it to the screen
  for (int k = 0; k < forLoops; k++){
    double randomNumber = generator.getGaussianRandomNumber();

    mean += randomNumber;
    variance += randomNumber*randomNumber;

  }
  mean      = mean     /( (double) forLoops);
  variance  = variance /( (double) forLoops);

  // check whether the values are in a certain tolerance
  validateWithMessage( tarch::la::smaller(std::fabs(mean),0.05), "Mean Value differs more than 0.05 from expected value (0.0)!");
  validateWithMessage( tarch::la::smaller(std::fabs(variance-1.0),0.05), "Variance differs more than 0.05 from its theoretical value (1.0)!");
}
