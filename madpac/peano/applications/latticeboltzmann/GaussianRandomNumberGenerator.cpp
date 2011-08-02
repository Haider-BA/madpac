#include "peano/applications/latticeboltzmann/GaussianRandomNumberGenerator.h"

tarch::logging::Log peano::applications::latticeboltzmann::GaussianRandomNumberGenerator::_log("peano::applications::latticeboltzmann::GaussianRandomNumberGenerator");


peano::applications::latticeboltzmann::GaussianRandomNumberGenerator::GaussianRandomNumberGenerator():
_randomNumbers(0.0), _isFirstRandomNumber(true){

  // initialise random numbers
  srand(time(NULL));

}



peano::applications::latticeboltzmann::GaussianRandomNumberGenerator::~GaussianRandomNumberGenerator(){}



double peano::applications::latticeboltzmann::GaussianRandomNumberGenerator::getGaussianRandomNumber(){

  // if the first random number is going to be called, create Gaussian random numbers
  if (_isFirstRandomNumber){

    // in this case: generate new numbers
    double s = 2.0;
    tarch::la::Vector<2,double> v(0.0);

    while (s >= 1.0){
      _randomNumbers(0) = ((double) rand())/((double) RAND_MAX);
      _randomNumbers(1) = ((double) rand())/((double) RAND_MAX);
      v(0) = (2.0*_randomNumbers(0)-1.0);
      v(1) = (2.0*_randomNumbers(1)-1.0);
      s = v(0)*v(0) + v(1)*v(1);
    }
    _randomNumbers(0) = v(0)*sqrt( (-2.0*log(s))/s);
    _randomNumbers(1) = v(1)*sqrt( (-2.0*log(s))/s);

    // change to the other variable in the next call
    _isFirstRandomNumber = false;
    return _randomNumbers(0);

  // otherwise: change to the other random number
  } else {
    _isFirstRandomNumber = true;
    return _randomNumbers(1);
  }
}
