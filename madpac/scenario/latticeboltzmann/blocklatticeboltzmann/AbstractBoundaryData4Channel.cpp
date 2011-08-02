#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Channel.h"


scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel::AbstractBoundaryData4Channel(
  const tarch::la::Vector<DIMENSIONS,double> &domainSize,
  const tarch::la::Vector<DIMENSIONS,double> &offset,
  const double &meanInletVelocity,
  const bool &useParabolicProfile
):
scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario(),
_domainSize(domainSize),
_offset(offset),
_meanInletVelocity(meanInletVelocity),
_useParabolicProfile(useParabolicProfile){}


void scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel::
getBoundaryData(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
  const int& pdfDirection,
  const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
) {
  double coords;

  // if this is a wall, fill no-slip information and return
  for (int d = 1; d < DIMENSIONS; d++){
    coords = peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection](d)*latticeWidth(d)
           + latticeNode(d);
    if ( tarch::la::smaller(coords,_offset(d)) || tarch::la::greater(coords,_domainSize(d)+_offset(d)) ){
      fillBoundaryData4NoSlipWalls(boundaryData);
      return;
    }
  }

  coords = peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection](0)*latticeWidth(0)
         + latticeNode(0);

  // if velocity inlet...
  if ( tarch::la::smaller(coords,_offset(0)) ){
    fillBoundaryData4VelocityInlet(latticeNode,boundaryData);
    return;
  }

  // if pressure outlet...
  if ( tarch::la::greater(coords,_offset(0)+_domainSize(0)) ){
    fillBoundaryData4PressureOutlet(boundaryData);
    return;
  }

  // otherwise: treat boundary also as no slip (-> obstacles in the flow etc.)
  fillBoundaryData4InnerBoundaries(latticeNode,latticeWidth,pdfDirection,multiLevelSimData,boundaryData);
}



void scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel::
fillBoundaryData4VelocityInlet(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
) const {
  tarch::la::Vector<DIMENSIONS,double> vel(0.0);
  vel(0) = _meanInletVelocity;

  boundaryData.setBoundaryType(
    peano::applications::latticeboltzmann::BoundaryData::VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION
  );

  if (_useParabolicProfile){
    // compute parabolic profile
    for (int d = 1; d < DIMENSIONS; d++){
      vel(0) = vel(0)*6.0/(_domainSize[d]*_domainSize[d]) * (latticeNode[d]-_offset[d])*(_domainSize[d] - (latticeNode[d]-_offset[d]));
    }
  }

  // set velocity
  boundaryData.setVelocityL(vel);
}



void scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel::
fillBoundaryData4PressureOutlet(
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
) const {
  boundaryData.setBoundaryType(
    peano::applications::latticeboltzmann::BoundaryData::PRESSURE_OUTLET_HW_BB
  );
  boundaryData.setDensityL(1.0);
}


void scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel::
fillBoundaryData4NoSlipWalls(
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
) const {
  boundaryData.setBoundaryType(
    peano::applications::latticeboltzmann::BoundaryData::HW_BB
  );
}
