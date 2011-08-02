#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/DynamicGeometryRefinement.h"


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::
DynamicGeometryRefinement::DynamicGeometryRefinement(
peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
):
_multiLevelSimData(multiLevelSimData)
{}


peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::RefinementAction
peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::
getAction(
  const tarch::la::Vector<DIMENSIONS,double> &x,
  const tarch::la::Vector<DIMENSIONS,double> &h,
  const bool& isRefined,
  const int& maximumSubtreeHeight,
  const int& level
) const {
  bool triggerCoarsening =  peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(x,2.0*h)
                         || peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyOutside(x,2.0*h);
  triggerCoarsening = triggerCoarsening && (level >= _multiLevelSimData.getSimData(0).getLevel()) && isRefined;
  if (triggerCoarsening){
    return peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::Delete;
  } else {
    bool refine = peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService::getInstance().refine(x,h,level);
    if (refine && (!isRefined)){
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::Refine;
    } else {
      return peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::NoAction;
    }
  }
}

bool peano::applications::latticeboltzmann::blocklatticeboltzmann::
DynamicGeometryRefinement::refine(
  const tarch::la::Vector<DIMENSIONS,double> &x,
  const tarch::la::Vector<DIMENSIONS,double> &h,
  const bool& isRefined,
  const int& maximumSubtreeHeight,
  const int& level
) const {
  // refine = ((!isCompletelyInside) && (!isCompletelyOutside) && (level < maxNumberLevels) )
  //          || (level > coarsestLevel)
  bool refine = peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService::getInstance().refine(x,h,level);

  // refine, if
  // - geometry triggers refinement or
  // - the vertex is not refined but has a subtree height which is bigger than one level.
  // The latter implies that there would be more than one level of hanging nodes in the support
  // if single vertex; this should not be allowed!
  //return ((refine || (maximumSubtreeHeight > 1)) && (!isRefined));
  // TODO test
  return ((refine) && (!isRefined));
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::
DynamicGeometryRefinement::coarse(
  const tarch::la::Vector<DIMENSIONS,double> &x,
  const tarch::la::Vector<DIMENSIONS,double> &h,
  const bool &isRefined,
  const int& maximumSubtreeHeight,
  const int& level
) const {
  //bool triggerRefinement = peano::applications::latticeboltzmann::blocklatticeboltzmann::services::RefinementService::getInstance().refine(x,h,level);
  bool triggerCoarsening =  peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyInside(x,h)
                         || peano::geometry::services::GeometryService::getInstance().getGeometry().isCompletelyOutside(x,h);
  triggerCoarsening = triggerCoarsening && (level >= _multiLevelSimData.getSimData(0).getLevel()) && isRefined;
  return triggerCoarsening;

  // no coarsening, if refinement is or has been triggered
//  if (refine(x,h,isRefined,maximumSubtreeHeight,level)){
//    return false;
//  }
//
//  // coarse, if there is no geometry refinement, the vertex is only one level above the
//  // finest grid level at this position and the vertex is completely refined
//  // TODO
//  //if ((!triggerRefinement) && (maximumSubtreeHeight==1) && isRefined){
//  if ((!triggerRefinement) && isRefined){
//    return true;
//  } else {
//    return false;
//  }
}
