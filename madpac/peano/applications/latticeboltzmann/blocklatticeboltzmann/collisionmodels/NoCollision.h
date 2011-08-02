// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_COLLISIONMODELS_NOCOLLISION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_COLLISIONMODELS_NOCOLLISION_H_

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/AbstractCollisionModel.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace collisionmodels {
          class NoCollision;
        }
      }
    }
  }
}


/** empty collision class; is triggered on outer and overlap cells
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::NoCollision:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel {
  public:
    NoCollision(): peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel(){}
    ~NoCollision(){}

    void collide(
      const int& cellNumber,
      const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries=peano::applications::latticeboltzmann::blocklatticeboltzmann::_hasMinusOneEntries
    ) const {}
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_COLLISIONMODELS_NOCOLLISION_H_
