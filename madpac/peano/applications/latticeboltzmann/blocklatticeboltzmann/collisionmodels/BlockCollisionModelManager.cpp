#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/BlockCollisionModelManager.h"

tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
BlockCollisionModelManager::_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockCollisionModelManager");


peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
BlockCollisionModelManager::BlockCollisionModelManager():
_multiLevelSimData(NULL),
_collisionModels(NULL){}


peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
BlockCollisionModelManager::BlockCollisionModelManager(
peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
):
_multiLevelSimData(&multiLevelSimData),
_collisionModels(setupCollisionModels(multiLevelSimData)),
_collisionModelWrappers(setupCollisionModelWrappers(multiLevelSimData))
{}


peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
BlockCollisionModelManager::~BlockCollisionModelManager(){
  // run over all collision models and delete the single collision models
  for(int i = 0; i < _multiLevelSimData->getSimData(0).getNumberLevels() - _multiLevelSimData->getSimData(0).getLevel();i++){
    assertion(_collisionModels[i] != NULL);
    delete _collisionModels[i];
    _collisionModels[i] = NULL;
  }

  // delete the pointer-to-pointer structure
  assertion(_collisionModels != NULL);
  delete [] _collisionModels;
  _collisionModels = NULL;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
BlockCollisionModelManager::collide(
  int level,
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries
) const {
  assertion(_collisionModels!=NULL);
  assertion(level-_multiLevelSimData->getSimData(0).getLevel() > -1);
  assertion(level < _multiLevelSimData->getSimData(0).getNumberLevels());
  assertion(_collisionModels[level-_multiLevelSimData->getSimData(0).getLevel()] != NULL);

  // take collision model of the corresponding level and carry out collision
  _collisionModelWrappers[level-_multiLevelSimData->getSimData(0).getLevel()]->collide(
    inner,density,velocity,pdf,hasMinusOneEntries
  );
}


const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel **
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
BlockCollisionModelManager::setupCollisionModels(
  peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
) const {
  // pointer structure for collision models
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel **collisionModel = NULL;
  assertion(multiLevelSimData.getSimData(0).getNumberLevels() - multiLevelSimData.getSimData(0).getLevel() > 0);


  // initialise pointer structure, Pt.1
  collisionModel = new const AbstractCollisionModel*[multiLevelSimData.getSimData(0).getNumberLevels() - multiLevelSimData.getSimData(0).getLevel()];
  assertion(collisionModel != NULL);

  // for each grid level...
  for (int i = multiLevelSimData.getSimData(0).getLevel(); i < multiLevelSimData.getSimData(0).getNumberLevels(); i++){

    // ... determine type of collision model and create it
    switch( multiLevelSimData.getSimData(0).getCollisionModelId(i)){
      case BGK:
        collisionModel[i-multiLevelSimData.getSimData(0).getLevel()] = new const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockBGK(
                                  multiLevelSimData.getSimData(i).getTau()
                                );
        assertion(collisionModel[i-multiLevelSimData.getSimData(0).getLevel()] != NULL);
        break;
      case FLUCTUATING_LATTICE_BOLTZMANN:
        collisionModel[i-multiLevelSimData.getSimData(0).getLevel()] = new const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::
                            BlockFluctuatingCollisionModel(
                              multiLevelSimData.getSimData(i)
                            );
        assertion(collisionModel[i-multiLevelSimData.getSimData(0).getLevel()] != NULL);
        break;
      default:
        logInfo("setupCollisionModels()", "Could not determine collision model id!");
        assertion(false);
        break;
    }
  }

  return collisionModel;
}


const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper* >
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockCollisionModelManager::
setupCollisionModelWrappers (
  peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
) const {
  std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper* > wrappers;
  assertion(_collisionModels != NULL);

  // push back one wrapper for each grid level
  for (int i = 0; i < multiLevelSimData.getSimData(0).getNumberLevels() - multiLevelSimData.getSimData(0).getLevel(); i++){
    assertion(_collisionModels[i] != NULL);
    wrappers.push_back(
      new const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper(
        _collisionModels[i]
      )
    );
  }

  return wrappers;
}
