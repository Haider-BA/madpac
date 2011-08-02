#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4MovingSphereInDriftRatchet.h"


scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4MovingSphereInDriftRatchet::BoundaryData4MovingSphereInDriftRatchet(
  peano::geometry::Geometry* basicGeometry,
  const tarch::la::Vector<DIMENSIONS,double> &domainSize,
  const tarch::la::Vector<DIMENSIONS,double> &domainOffset,
  const double &inletVelocity,
  double timePerSineCycle
):
_basicGeometry(basicGeometry),
_domainSize(domainSize),
_domainOffset(domainOffset),
_inletVelocity(inletVelocity),
_timePerSineCycle(timePerSineCycle),_time(0.0){
  assertion1(_basicGeometry != NULL, "Basic geometry is NULL!");
  assertion1(!tarch::la::equals(_timePerSineCycle,0.0), "timestepsPerSineCycle is zero!");
}


void scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4MovingSphereInDriftRatchet::advance(double dt){
  // update timestep counter
  _time += dt;

  // update moving sphere geometry, forces and boundary data
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
  getInstance().sendForcesToSendDataService();
#ifdef Parallel
  peano::integration::partitioncoupling::services::SendDataService::getInstance().synchronizeForces();
#endif
  peano::integration::partitioncoupling::services::CouplingService::getInstance().advance(dt);
}


scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4MovingSphereInDriftRatchet::~BoundaryData4MovingSphereInDriftRatchet(){
  if (_basicGeometry != NULL){
    delete _basicGeometry;
    _basicGeometry = NULL;
  }
}


void scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4MovingSphereInDriftRatchet::getBoundaryData(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
  const int& pdfDirection,
  const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
  peano::applications::latticeboltzmann::BoundaryData &boundaryData
){
  if (isInletBoundary(latticeNode,latticeWidth,pdfDirection)){
    tarch::la::Vector<DIMENSIONS,double> velocity(0.0);
    // TODO enhance -> parabolic profile, time-dependent scenario
    velocity(0) = getInletVelocity(latticeNode);

    // set velocity and inlet flag
    boundaryData.setBoundaryType(
      peano::applications::latticeboltzmann::BoundaryData::VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION
    );
    boundaryData.setVelocityL(velocity);

    return;
  } else if (isOutletBoundary(latticeNode,latticeWidth,pdfDirection)){
    // set outlet flag and density
    boundaryData.setBoundaryType(
      peano::applications::latticeboltzmann::BoundaryData::PRESSURE_OUTLET_HW_BB
    );
    boundaryData.setDensityL(1.0);

    return;
  } else {
    if (isNoSlipBoundary(latticeNode,latticeWidth,pdfDirection)){
      // set no-slip flag
      boundaryData.setBoundaryType(
        peano::applications::latticeboltzmann::BoundaryData::HW_BB
      );

      return;
    } else {
      // set moving-obstacle flag and set velocity
      int level = multiLevelSimData.getSimData(0).getLevel();
      double dt = multiLevelSimData.getSimData(level).getDt();
      double dx = multiLevelSimData.getSimData(level).getDx();

      // determine boundary node (in this case, this is the midpoint between the first node outside the comp. domain
      // (= inside the structure) and the last node inside the comp. domain)
      const tarch::la::Vector<DIMENSIONS,double> boundaryNode(latticeNode + 0.5*latticeWidth(0)*peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection]);
      tarch::la::Vector<DIMENSIONS,double> velocityL(0.0);

      // set boundary type
      boundaryData.setBoundaryType(peano::applications::latticeboltzmann::BoundaryData::MOVING_OBSTACLE_HW_BB);

      // get velocity from structure
      velocityL = peano::integration::partitioncoupling::services::ReceiveDataService::getInstance().getReceiveData().getVelocity(boundaryNode);

      // rescale velocity
      velocityL = velocityL* (dt/dx);

      // set velocity
      boundaryData.setVelocityL(velocityL);

      return;
    }
  }
}


bool scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4MovingSphereInDriftRatchet::
isNoSlipBoundary(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
  const int& pdfDirection
){
  tarch::la::Vector<DIMENSIONS,double> coords(
    peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection]*latticeWidth(0)
    + latticeNode
  );

  return _basicGeometry->isOutsideClosedDomain(coords);
}


bool scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4MovingSphereInDriftRatchet::
isInletBoundary(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
  const int& pdfDirection
){
  double coord = peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection](0)*latticeWidth(0)
               + latticeNode(0);
  return tarch::la::smaller(coord,_domainOffset(0));
}


bool scenario::latticeboltzmann::blocklatticeboltzmann::
BoundaryData4MovingSphereInDriftRatchet::
isOutletBoundary(
  const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
  const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
  const int& pdfDirection
){
  double coord = peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[LB_CURRENT_DIR-1-pdfDirection](0)*latticeWidth(0)
               + latticeNode(0);
  return tarch::la::greater(coord,_domainSize(0)+_domainOffset(0));
}
