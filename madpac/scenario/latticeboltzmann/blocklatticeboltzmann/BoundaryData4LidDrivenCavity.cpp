#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4LidDrivenCavity.h"



scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4LidDrivenCavity::BoundaryData4LidDrivenCavity(
  const tarch::la::Vector<DIMENSIONS,double> &domainSize,
  const tarch::la::Vector<DIMENSIONS,double> &offset,
  const double &wallVelocity
):
scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario(),
_upperWall(domainSize(DIMENSIONS-1)+offset(DIMENSIONS-1)),
_wallVelocity(createWallVelocity(wallVelocity)),
_comesFromMovingWall(createComesFromMovingWall()){}



void scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4LidDrivenCavity::getBoundaryData(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
  const int& pdfDirection,
  const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
){
  // coordinate of the last axis
  double topEntry = latticeNode(DIMENSIONS-1)
                  + (  latticeWidth(DIMENSIONS-1)
                      *peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection](DIMENSIONS-1) );

      // this is a boundary treatment for the moving wall if
      // - either the node is located directly on the upper boundary and the pdf comes from the top
  if (   ( (tarch::la::equals(latticeNode(DIMENSIONS-1),_upperWall)) && _comesFromMovingWall[pdfDirection] )
      // - or the node is located inside the domain (that is not exactly on the boundary), but the next point in direction
      //   of the respective lattice velocity is placed over the lid
      || (   (!tarch::la::equals(latticeNode(DIMENSIONS-1),_upperWall))
          && (tarch::la::greater(topEntry,_upperWall))
          && _comesFromMovingWall[pdfDirection] ) ){

    fillBoundaryData4MovingWall(boundaryData);

  // otherwise: fill data for no-slip wall
  } else {
    fillBoundaryData4NoSlipWall(boundaryData);
  }
}



const std::bitset<LB_CURRENT_DIR>
scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4LidDrivenCavity::createComesFromMovingWall() const {
  std::bitset<LB_CURRENT_DIR> comesFromMovingWall;
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    comesFromMovingWall[i] = (peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i](DIMENSIONS-1) < 0.0);
  }
  return comesFromMovingWall;
}


void scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4LidDrivenCavity::fillBoundaryData4NoSlipWall(
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
) const {
  // only set half-way bounceback flag and return
  boundaryData.setBoundaryType(
    peano::applications::latticeboltzmann::BoundaryData::HW_BB
  );
}


void scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4LidDrivenCavity::fillBoundaryData4MovingWall(
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
) const {
  // set wall velocity
  boundaryData.setVelocityL(_wallVelocity);
  // set boundary type to moving-wall bounceback
  boundaryData.setBoundaryType(
    peano::applications::latticeboltzmann::BoundaryData::MOVING_WALL_HW_BB
  );
}


tarch::la::Vector<DIMENSIONS,double>
scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4LidDrivenCavity::
createWallVelocity(const double &wallVelocity) const {
  tarch::la::Vector<DIMENSIONS,double> wallVelocityVector(0.0);
  wallVelocityVector(0) = wallVelocity;
  return wallVelocityVector;
}
