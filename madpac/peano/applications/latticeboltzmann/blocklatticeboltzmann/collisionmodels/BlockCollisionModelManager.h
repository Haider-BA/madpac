// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKCOLLISIONMODELMANAGER_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKCOLLISIONMODELMANAGER_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/applications/latticeboltzmann//blocklatticeboltzmann/BlockComputeCellValues.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/AbstractCollisionModel.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/CollisionModelWrapper.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/BlockBGK.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/BlockFluctuatingCollisionModel.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace collisionmodels {
          class BlockCollisionModelManager;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
BlockCollisionModelManager {
  public:
    BlockCollisionModelManager();

    /** constructor:
     *  - needs blockConfig in order to determine which collision model is applied on which grid level
     *  - needs gridSimData in order to obtain amongst others all relaxation parameters of the collision models
     *  - needs finestLevel in order to determine number of collision models (reference-level of simulation
     *  is encapsulated in blockConfig)
     */
    BlockCollisionModelManager(
      peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
    );

    /** deletes the collision models */
    ~BlockCollisionModelManager();

    /** delegates call to collision models and thus triggers collision process */
    void collide(
      int level,
      const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries=peano::applications::latticeboltzmann::blocklatticeboltzmann::_hasMinusOneEntries
    ) const;

  private:

    /** sets up the pointer structure for the collision models. This function is only needed at startup
     *  and first calls setupCollisionModelId to determine the collision-model structure over the grid levels.
     *  Afterwards, it initialises the respective pointers with the corresponding collision-models using
     *  the relaxation and input parameters for the corresponding levels.
     */
    const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
    AbstractCollisionModel** setupCollisionModels(
      peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
    ) const;

    const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper* >
    setupCollisionModelWrappers (
      peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
    ) const;

    /** for logging */
    static tarch::logging::Log _log;

    peano::applications::latticeboltzmann::MultiLevelSimData *_multiLevelSimData;

    /** contains pointers to initialised collision-model pointers */
    const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel **_collisionModels;

    const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper* > _collisionModelWrappers;

  public:
    /** collision-model ids; if a new collision-model shall be included, a new flag is needed in here! */
    enum CollisionModelId{BGK=0,FLUCTUATING_LATTICE_BOLTZMANN=1,MRT_HUMIERES=2};
};



#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKCOLLISIONMODELMANAGER_H_
