#include "scenario/diffusionequation/RotatingHeatSource.h"


scenario::diffusionequation::RotatingHeatSource::RotatingHeatSource(
  double                                    thermalDiffusivity,
  double                                    thermalDiffusivityInEmbeddedMaterial,
  double                                    stimulusSphereRadius
):
  _hexahedron(false, tarch::la::Vector<DIMENSIONS,double>(1.0), tarch::la::Vector<DIMENSIONS,double>(0.0)),
  _embeddedMaterial(false,0.43,tarch::la::Vector<DIMENSIONS,double>(0.3)),
  _stimulusSphere(false,stimulusSphereRadius,tarch::la::Vector<DIMENSIONS,double>(0.3)),
  _thermalDiffusivity(thermalDiffusivity),
  _thermalDiffusivityInEmbeddedMaterial(thermalDiffusivityInEmbeddedMaterial),
  _stimulusRadius(stimulusSphereRadius) {
  setTime(0.0);
  tarch::la::Vector<DIMENSIONS,double> centerOfEmbeddedMaterial(0.3);

  centerOfEmbeddedMaterial(0) = 0.1;
  centerOfEmbeddedMaterial(1) = 0.2;

  _embeddedMaterial.setCenter(centerOfEmbeddedMaterial);
}


void scenario::diffusionequation::RotatingHeatSource::setTime( double t ) {
  tarch::la::Vector<DIMENSIONS,double> position(0.5);

  position(0) = 0.5 + 0.3 * std::sin( 2.0 * t * tarch::la::PI );
  position(1) = 0.5 + 0.3 * std::cos( 2.0 * t * tarch::la::PI );

  _stimulusSphere.setCenter(position);
}


tarch::la::Vector<DIMENSIONS,double> scenario::diffusionequation::RotatingHeatSource::getDomainSize() const {
  return tarch::la::Vector<DIMENSIONS,double>(1.0);
}


tarch::la::Vector<DIMENSIONS,double> scenario::diffusionequation::RotatingHeatSource::getComputationalDomainOffset() const {
  return tarch::la::Vector<DIMENSIONS,double>(0.0);
}


double scenario::diffusionequation::RotatingHeatSource::getRhs(const tarch::la::Vector<1,double>& x) {
  #ifdef Dim2
    tarch::la::Vector<2,double> y;
    y(0) = x(0);
    y(1) = 0.5;
    if (_stimulusSphere.isOutsideClosedDomain(y)) {
      return 0.0;
    }
    else {
      return 1.0;
    }
  #else
    assertion(false);
    return 0.0;
  #endif
}


double scenario::diffusionequation::RotatingHeatSource::getRhs(const tarch::la::Vector<2,double>& x) {
  #ifdef Dim3
    tarch::la::Vector<3,double> y;
    y(0) = x(0);
    y(1) = x(1);
    y(2) = 0.5;
    if (_stimulusSphere.isOutsideClosedDomain(y)) {
      return 0.0;
    }
    else {
      return 1.0;
    }
  #elif Dim2
    if (_stimulusSphere.isOutsideClosedDomain(x)) {
      return 0.0;
    }
    else {
      return 1.0;
    }
  #else
    assertion(false);
    return 0.0;
  #endif
}


double scenario::diffusionequation::RotatingHeatSource::getRhs(const tarch::la::Vector<3,double>& x) {
  #ifdef Dim4
    tarch::la::Vector<4,double> y;
    y(0) = x(0);
    y(1) = x(1);
    y(2) = x(2);
    y(3) = 0.5;
    if (_stimulusSphere.isOutsideClosedDomain(y)) {
      return 0.0;
    }
    else {
      return 1.0;
    }
  #elif Dim3
    if (_stimulusSphere.isOutsideClosedDomain(x)) {
      return 0.0;
    }
    else {
      return 1.0;
    }
  #else
    assertion(false);
    return 0.0;
  #endif
}


double scenario::diffusionequation::RotatingHeatSource::getMaximalSamplingWidth() const {
  return _stimulusRadius/2.0;
}


double scenario::diffusionequation::RotatingHeatSource::getInitialValue(const tarch::la::Vector<1,double>& x) const {
  return 0.0;
}


double scenario::diffusionequation::RotatingHeatSource::getInitialValue(const tarch::la::Vector<2,double>& x) const {
  return 0.0;
}


double scenario::diffusionequation::RotatingHeatSource::getInitialValue(const tarch::la::Vector<3,double>& x) const {
  return 0.0;
}


scenario::diffusionequation::RotatingHeatSource::BoundaryType scenario::diffusionequation::RotatingHeatSource::getBoundaryType(const tarch::la::Vector<1,double>& x) const {
  return DIRICHLET;
}


scenario::diffusionequation::RotatingHeatSource::BoundaryType scenario::diffusionequation::RotatingHeatSource::getBoundaryType(const tarch::la::Vector<2,double>& x) const {
  return DIRICHLET;
}


scenario::diffusionequation::RotatingHeatSource::BoundaryType scenario::diffusionequation::RotatingHeatSource::getBoundaryType(const tarch::la::Vector<3,double>& x) const {
  return DIRICHLET;
}


double scenario::diffusionequation::RotatingHeatSource::getThermalDiffusivity(const tarch::la::Vector<1,double>& x) {
  #ifdef Dim2
  tarch::la::Vector<2,double> y;
  y(0) = x(0);
  y(1) = 0.5;
  if (!_embeddedMaterial.isOutsideClosedDomain(y)) {
    return _thermalDiffusivityInEmbeddedMaterial;
  }
  else {
    return _thermalDiffusivity;
  }
  #else
  assertion(false);
  return 0.0;
  #endif
}


double scenario::diffusionequation::RotatingHeatSource::getThermalDiffusivity(const tarch::la::Vector<2,double>& x) {
  #ifdef Dim2
  if (!_embeddedMaterial.isOutsideClosedDomain(x)) {
    return _thermalDiffusivityInEmbeddedMaterial;
  }
  else {
    return _thermalDiffusivity;
  }
  #elif Dim3
  tarch::la::Vector<3,double> y;
  y(0) = x(0);
  y(1) = x(1);
  y(2) = 0.5;
  if (!_embeddedMaterial.isOutsideClosedDomain(y)) {
    return _thermalDiffusivityInEmbeddedMaterial;
  }
  else {
    return _thermalDiffusivity;
  }
  #else
  assertion(false);
  return 0.0;

  #endif
}


double scenario::diffusionequation::RotatingHeatSource::getThermalDiffusivity(const tarch::la::Vector<3,double>& x) {
  #ifdef Dim4
  tarch::la::Vector<4,double> y;
  y(0) = x(0);
  y(1) = x(1);
  y(2) = x(2);
  y(3) = 0.5;
  if (_embeddedMaterial.isOutsideClosedDomain(x)) {
    return _thermalDiffusivityInEmbeddedMaterial;
  }
  else {
    return _thermalDiffusivity;
  }
  #elif Dim3
  if (_embeddedMaterial.isOutsideClosedDomain(x)) {
    return _thermalDiffusivityInEmbeddedMaterial;
  }
  else {
    return _thermalDiffusivity;
  }
#else
  assertion(false);
  return 0.0;
  #endif
}


bool scenario::diffusionequation::RotatingHeatSource::isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  return _hexahedron.isCompletelyOutside(x,resolution);
}


bool scenario::diffusionequation::RotatingHeatSource::isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  return _hexahedron.isCompletelyInside(x,resolution);
}


bool scenario::diffusionequation::RotatingHeatSource::isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  return _hexahedron.isOutsideClosedDomain(x);
}


void scenario::diffusionequation::RotatingHeatSource::plotInputDataToVTKFile(const std::string& data) const {
  assertionMsg( false, "not implemented yet" );
}
