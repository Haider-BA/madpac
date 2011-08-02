#include "scenario/diffusionequation/FadingSinus.h"

#include <cmath>


scenario::diffusionequation::FadingSinus::FadingSinus():
  _hexahedron(false, tarch::la::Vector<DIMENSIONS,double>(1.0), tarch::la::Vector<DIMENSIONS,double>(0.0)) {
}


tarch::la::Vector<DIMENSIONS,double>   scenario::diffusionequation::FadingSinus::getDomainSize() const {
  return tarch::la::Vector<DIMENSIONS,double>(1.0);
}


tarch::la::Vector<DIMENSIONS,double>   scenario::diffusionequation::FadingSinus::getComputationalDomainOffset() const {
  return tarch::la::Vector<DIMENSIONS,double>(0.0);
}


void scenario::diffusionequation::FadingSinus::setTime( double t ) {
}


void scenario::diffusionequation::FadingSinus::plotInputDataToVTKFile(const std::string& data) const {
  assertionMsg( false, "not implemented yet" );
}


double scenario::diffusionequation::FadingSinus::getRhs(const tarch::la::Vector<1,double>& x) {
  return 0.0;
}


double scenario::diffusionequation::FadingSinus::getRhs(const tarch::la::Vector<2,double>& x) {
  return 0.0;
}


double scenario::diffusionequation::FadingSinus::getRhs(const tarch::la::Vector<3,double>& x) {
  return 0.0;
}


double scenario::diffusionequation::FadingSinus::getInitialValue(const tarch::la::Vector<1,double>& x) const {
  return std::sin( tarch::la::PI * x(0) );
}


double scenario::diffusionequation::FadingSinus::getInitialValue(const tarch::la::Vector<2,double>& x) const {
  return std::sin( tarch::la::PI * x(0) ) * std::sin( tarch::la::PI * x(1) );
}


double scenario::diffusionequation::FadingSinus::getInitialValue(const tarch::la::Vector<3,double>& x) const {
  return std::sin( tarch::la::PI * x(0) ) * std::sin( tarch::la::PI * x(1) ) * std::sin( tarch::la::PI * x(2) );
}


scenario::diffusionequation::FadingSinus::BoundaryType scenario::diffusionequation::FadingSinus::getBoundaryType(const tarch::la::Vector<1,double>& x) const {
  return DIRICHLET;
}


scenario::diffusionequation::FadingSinus::BoundaryType scenario::diffusionequation::FadingSinus::getBoundaryType(const tarch::la::Vector<2,double>& x) const {
  return DIRICHLET;
}


scenario::diffusionequation::FadingSinus::BoundaryType scenario::diffusionequation::FadingSinus::getBoundaryType(const tarch::la::Vector<3,double>& x) const {
  return DIRICHLET;
}


double scenario::diffusionequation::FadingSinus::getThermalDiffusivity(const tarch::la::Vector<1,double>& x) {
  return 1.0;
}


double scenario::diffusionequation::FadingSinus::getThermalDiffusivity(const tarch::la::Vector<2,double>& x) {
  return 1.0;
}


double scenario::diffusionequation::FadingSinus::getThermalDiffusivity(const tarch::la::Vector<3,double>& x)  {
  return 1.0;
}


bool scenario::diffusionequation::FadingSinus::isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  return _hexahedron.isCompletelyOutside(x,resolution);
}


bool scenario::diffusionequation::FadingSinus::isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  return _hexahedron.isCompletelyInside(x,resolution);
}


bool scenario::diffusionequation::FadingSinus::isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  return _hexahedron.isOutsideClosedDomain(x);
}


double scenario::diffusionequation::FadingSinus::getMaximalSamplingWidth() const {
  return 1.0;
}
