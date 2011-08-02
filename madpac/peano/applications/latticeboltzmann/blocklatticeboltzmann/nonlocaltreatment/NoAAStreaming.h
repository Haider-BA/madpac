// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_AANOBLOCKSTREAMING_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_AANOBLOCKSTREAMING_H_

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/Swapping.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace nonlocaltreatment {
          class NoAAStreaming;
        }
      }
    }
  }
}


/** Empty swapping operation. The respective method is called, if at least one of the two considered cells
 *  lies outside the domain.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::NoAAStreaming:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping {
  public:
    NoAAStreaming(): peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping(){}
    ~NoAAStreaming(){}

    void swap(double &pdf1, double &pdf2, double& swap) const {}
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_AANOBLOCKSTREAMING_H_
