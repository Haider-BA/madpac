#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockBoundaryConditionManager.h"


peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
BlockBoundaryConditionManager::BlockBoundaryConditionManager(
peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
):
_boundaryConditions(NULL)
{
  _boundaryConditions = new peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
    AbstractBlockBoundaryCondition*[peano::applications::latticeboltzmann::BoundaryData::NUMBER_BOUNDARY_TYPES];

  assertion(_boundaryConditions != NULL);
  _boundaryConditions[peano::applications::latticeboltzmann::BoundaryData::HW_BB] = &_halfwayBounceBack;
  _boundaryConditions[peano::applications::latticeboltzmann::BoundaryData::MOVING_WALL_HW_BB] = &_movingWall;
  _boundaryConditions[peano::applications::latticeboltzmann::BoundaryData::PRESSURE_OUTLET_HW_BB] = &_pressureOutletCondition;
  _boundaryConditions[peano::applications::latticeboltzmann::BoundaryData::PRESSURE_INLET_HW_BB] = &_pressureInletCondition;
  _boundaryConditions[peano::applications::latticeboltzmann::BoundaryData::VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION] = &_velocityInletCondition;
  _boundaryConditions[peano::applications::latticeboltzmann::BoundaryData::MOVING_OBSTACLE_HW_BB] = &_movingWall;
}



peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
BlockBoundaryConditionManager::~BlockBoundaryConditionManager(){}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
BlockBoundaryConditionManager::treatBoundaryBeforeCollision(
  const int level,
  const std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryData,
  const std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
){
  for (unsigned int i = 0; i < boundaryDataIndex.size(); i++){
    assertion(_boundaryConditions[boundaryData[i].getBoundaryType()] != NULL);
    _boundaryConditions[boundaryData[i].getBoundaryType()]->treatBoundaryBeforeCollision(
      level,boundaryData[i],boundaryDataIndex[i],density,velocity,pdf
    );
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
BlockBoundaryConditionManager::treatBoundaryAfterCollision(
  const int level,
  const std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryData,
  const std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
){
  for (unsigned int i = 0; i < boundaryDataIndex.size(); i++){
    assertion(_boundaryConditions[boundaryData[i].getBoundaryType()] != NULL);
    _boundaryConditions[boundaryData[i].getBoundaryType()]->treatBoundaryAfterCollision(
      level,boundaryData[i],boundaryDataIndex[i],density,velocity,pdf
    );
  }
}

