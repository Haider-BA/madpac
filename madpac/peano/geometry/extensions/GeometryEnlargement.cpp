#include "peano/geometry/extensions/GeometryEnlargement.h"


peano::geometry::extensions::GeometryEnlargement::GeometryEnlargement(
  peano::geometry::Geometry &geo, const tarch::la::Vector<DIMENSIONS,double> &enlargementFactor
): peano::geometry::Geometry(),
_geometry(geo),
_enlargementFactor(enlargementFactor){}


bool peano::geometry::extensions::GeometryEnlargement::isCompletelyOutside(
  const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){
  return _geometry.isCompletelyOutside(x,2.0*resolution);
}



bool peano::geometry::extensions::GeometryEnlargement::isCompletelyInside(
  const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ){
  return !_geometry.isCompletelyOutside(x,2.0*resolution);
}



bool peano::geometry::extensions::GeometryEnlargement::isOutsideClosedDomain(
  const tarch::la::Vector<DIMENSIONS,double>& x ){
  return _geometry.isCompletelyOutside(x,2.0*_enlargementFactor);
}
