#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/RefinementService.h"

#include "tarch/services/ServiceFactory.h"
registerService(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService)


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService::
_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService");


peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService::
getInstance(){
  static RefinementService singleton;
  return singleton;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService::
init(int referenceLevel, double referenceMeshsize, int numberOfLevels){
  _referenceLevel = referenceLevel;
  _referenceMeshsize = referenceMeshsize;
  _numberOfGridLevels = numberOfLevels;
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService::
refine(const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &h,const int level){
  logDebug("refine()", "Level for h=" << h << ": " << level);

  bool refine =  (!peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(x,h))
              && (!peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyOutside(x,h))
              && (level < _numberOfGridLevels-1);

  refine = refine || (level < _referenceLevel);

  return refine;
}
