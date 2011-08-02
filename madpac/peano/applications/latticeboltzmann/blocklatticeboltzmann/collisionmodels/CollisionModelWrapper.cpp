#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/CollisionModelWrapper.h"

const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::NoCollision
  peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper::_noCollision;

peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper::
CollisionModelWrapper(
  const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel* collisionModel
): _collisionModel(setupVector(collisionModel)){
}


const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel* >
peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper::
setupVector(const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel *collisionModel) const {
  std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel* > vec;
  vec.push_back(&_noCollision);
  vec.push_back(&_noCollision);
  vec.push_back(&_noCollision);
  // only collision, if index=inner[cell] + 2*(!hasMinusOneEntries(cell)) == 3
  vec.push_back(collisionModel);

  return vec;
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::CollisionModelWrapper::collide(
  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries
) const {
  for (int cell = 0; cell < LB_BLOCK_NUMBER_OF_CELLS; cell++){
    const unsigned short int index = inner[cell] + 2*(!hasMinusOneEntries(cell));
    _collisionModel[index]->collide(cell,inner,density,velocity,pdf,hasMinusOneEntries);
  }
}
