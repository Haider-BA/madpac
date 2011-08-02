// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_SWAPPING_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_SWAPPING_H_

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace nonlocaltreatment {
          class Swapping;
        }
      }
    }
  }
}


/** interface for the swapping operation during AA-Streaming. This is necessary as we want to allow
 *  swapping only between two fluid cells.
 *
 *  @author Philipp Neumann
 *
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping {
  public:
    Swapping(){}
    virtual ~Swapping(){}

    virtual void swap(double &pdf1, double &pdf2, double& swap) const = 0;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_NONLOCALTREATMENT_SWAPPING_H_
