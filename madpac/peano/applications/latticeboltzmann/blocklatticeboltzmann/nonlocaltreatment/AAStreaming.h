// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_AASTREAMING_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_AASTREAMING_H_

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/Swapping.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace nonlocaltreatment {
          class AAStreaming;
        }
      }
    }
  }
}

/** carries out the swapping of particle distribution functions between neighbouring fluid cells.
 *
 * @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::AAStreaming:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping {
  public:
    AAStreaming(): peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping(){}
    ~AAStreaming(){}

    void swap(double &pdf1, double& pdf2, double &swap) const {
      swap = pdf1;
      pdf1 = pdf2;
      pdf2 = swap;
    }
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_AASTREAMING_H_
