// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_COLLISIONMODELS_COLLISIONMODELWRAPPER_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_COLLISIONMODELS_COLLISIONMODELWRAPPER_H_

#include <bitset>
#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/NoCollision.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/AbstractCollisionModel.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace collisionmodels {
          class CollisionModelWrapper;
        }
      }
    }
  }
}



/** wrapper class for all collision models. A new collision model needs to inherit from this class!
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper {
  public:
    /** constructor. Gets a collision model as input. This class is not responsible for deletion of the respective
     *  collision model.
     */
    CollisionModelWrapper(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel *collisionModel
    );

    ~CollisionModelWrapper(){}

    /** loops over the whole local block of a vertex, and performs the collision operation if needed.
     *
     *  inner - true, if a certain subcell is inside the comp. domain and false otherwise
     *  density - density field
     *  velocity - velocity field
     *  pdf - pdf field
     *  hasMinusOneEntries - true, if a cell contains -1.0 pdfs (i.e. the cell is a fine overlap cell)
     */
    void collide(
      const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries=peano::applications::latticeboltzmann::blocklatticeboltzmann::_hasMinusOneEntries
    ) const;

  private:
    const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel* >
    setupVector(const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel *collisionModel) const;

    /** dummy collision. Is called, when the cell is outside or is an overlap cell */
    static const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::NoCollision _noCollision;

    /** steers the calling to the right collision model (_noCollision or the real one) via indexing */
    const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel* > _collisionModel;
};
#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_ABSTRACTCOLLISIONMODEL_H_
