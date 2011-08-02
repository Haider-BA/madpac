// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_GAUSSIANRANDOMNUMBERSERVICE_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_GAUSSIANRANDOMNUMBERSERVICE_H_

#include "tarch/services/Service.h"
#include "peano/applications/latticeboltzmann/GaussianRandomNumberGenerator.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace services {
          class GaussianRandomNumberService;
        }
      }
    }
  }
}



/** service for Gaussian random number generation
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GaussianRandomNumberService:
public tarch::services::Service {

  public:
    /** returns a Gaussian random number with zero mean and unit variance */
    double getGaussianRandomNumber();

    static GaussianRandomNumberService& getInstance();

    void receiveDanglingMessages(){}

  private:
    GaussianRandomNumberService();
    ~GaussianRandomNumberService();

    static peano::applications::latticeboltzmann::GaussianRandomNumberGenerator _generator;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_GAUSSIANRANDOMNUMBERSERVICE_H_
