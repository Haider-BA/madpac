#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/ForceComputation.h"


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::
ForceComputation::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::ForceComputation"
);



peano::applications::latticeboltzmann::blocklatticeboltzmann::
ForceComputation::ForceComputation(
  const peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
):
_multiLevelSimData(multiLevelSimData){}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::ForceComputation::storePostCollisionPdfs(
  const std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryData,
  const std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> &pdf
){
  // nop if forces are not needed
  if (!_multiLevelSimData.getSimData(0).computeForces()){
    return;
  }

  _postCollisionPdfs.clear();
  _postCollisionIndex.clear();
  for (unsigned int i = 0; i < boundaryData.size(); i++){
    if (boundaryData[i].getBoundaryType() == peano::applications::latticeboltzmann::BoundaryData::MOVING_OBSTACLE_HW_BB){
      // store post-collision pdf pointing towards the boundary
      _postCollisionPdfs.push_back( pdf(boundaryDataIndex[i](0)*LB_CURRENT_DIR+LB_CURRENT_DIR-1-boundaryDataIndex[i](1)) );
      _postCollisionIndex.push_back(i);
    }
  }
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::ForceComputation::evaluateForce(
  const tarch::la::Vector<DIMENSIONS,double> &position,
  const int level,
  const std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryData,
  const std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex,
  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> &pdf
) const {
  // nop if forces are not needed
  if (!_multiLevelSimData.getSimData(0).computeForces()){
    return;
  }

  // start a new force evaluation in the service
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
  getInstance().startBlockForceEvaluation(position);

  const double dx = _multiLevelSimData.getSimData(level).getDx();
  const double dt = _multiLevelSimData.getSimData(level).getDt();
  int cellIndex = 0;
  const tarch::la::Vector<DIMENSIONS,double> firstPosition = position + (-0.5*LB_BLOCKSIZE + 0.5)*dx*tarch::la::Vector<DIMENSIONS,double>(1.0);
  tarch::la::Vector<DIMENSIONS,double> boundaryNode(0.0);
  tarch::la::Vector<DIMENSIONS,double> wallVelocity(0.0);
  tarch::la::Vector<DIMENSIONS,double> localForce(0.0);

  for (unsigned int i = 0; i < _postCollisionIndex.size(); i++){

    // if there is a pdf coming from a moving obstacle...
    logDebug("evaluateForce()", "Cell " << boundaryDataIndex[_postCollisionIndex[i]](0) << ", pdf " << boundaryDataIndex[_postCollisionIndex[i]](1) << " comes from moving obstacle");

    // determine boundary node position (= first node in boundary layer)
    cellIndex = boundaryDataIndex[_postCollisionIndex[i]](0);
    for (int d = DIMENSIONS-1; d > -1; d--){
      // coordinate   = offset (i.e. position of first cell in block)
      //              + coordinate in direction d
      //              + half a lattice cell size towards the boundary
      boundaryNode(d) = firstPosition(d)
                      + (cellIndex/tarch::la::aPowI(d,LB_BLOCKSIZE))*dx
                      + 0.5*dx*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-boundaryDataIndex[_postCollisionIndex[i]](1)](d);
      cellIndex = cellIndex%tarch::la::aPowI(d,LB_BLOCKSIZE);
    }

    // determine velocity
    logDebug("evaluateForce()", "Velocity_L at position" << boundaryNode << ": " << boundaryData[_postCollisionIndex[i]].getVelocityL());

    // compute local force
    localForce = (   _postCollisionPdfs[i]
                   + pdf(boundaryDataIndex[_postCollisionIndex[i]](0)*LB_CURRENT_DIR+LB_CURRENT_DIR-1-boundaryDataIndex[_postCollisionIndex[i]](1))
                 )*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-boundaryDataIndex[_postCollisionIndex[i]](1)];
    // scale force
    localForce =  _multiLevelSimData.getSimData(level).getDensity()*dx*dx
#if defined(Dim3)
                  *dx
#endif
                 *dx/(dt*dt) * localForce;

    // ADD force value localForce to force at position boundaryNode
    logDebug("evaluateForce()", "Add force " << localForce << " at position " << boundaryNode);
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance().
    addForce(boundaryNode,localForce);
  } // boundary data

  // end force evaluation for this block
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
  getInstance().endBlockForceEvaluation();
}

