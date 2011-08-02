// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_DIFFUSION_EQUATION_ROTATING_HEAT_SOURCE_H_
#define _PEANO_SCENARIO_DIFFUSION_EQUATION_ROTATING_HEAT_SOURCE_H_


#include "peano/geometry/builtin/Hexahedron.h"
#include "peano/geometry/builtin/Sphere.h"
#include "scenario/diffusionequation/DiffusionEquationScenario.h"


namespace scenario {
  namespace diffusionequation {
    class RotatingHeatSource;
  }
}


class scenario::diffusionequation::RotatingHeatSource: public scenario::diffusionequation::DiffusionEquationScenario {
  private:
    peano::geometry::builtin::Hexahedron   _hexahedron;
    peano::geometry::builtin::Sphere       _embeddedMaterial;
    peano::geometry::builtin::Sphere       _stimulusSphere;
    double                                 _thermalDiffusivity;
    double                                 _thermalDiffusivityInEmbeddedMaterial;
    double                                 _stimulusRadius;

  public:
    RotatingHeatSource(
      double                                    thermalDiffusivity,
      double                                    thermalDiffusivityInEmbeddedMaterial,
      double                                    stimulusSphereRadius
    );

    virtual void setTime( double t );

    virtual tarch::la::Vector<DIMENSIONS,double>   getDomainSize() const;
    virtual tarch::la::Vector<DIMENSIONS,double>   getComputationalDomainOffset() const;

    virtual double       getRhs(const tarch::la::Vector<1,double>& x);
    virtual double       getInitialValue(const tarch::la::Vector<1,double>& x) const;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<1,double>& x) const;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<1,double>& x);

    virtual double       getRhs(const tarch::la::Vector<2,double>& x);
    virtual double       getInitialValue(const tarch::la::Vector<2,double>& x) const;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<2,double>& x) const;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<2,double>& x);

    virtual double       getRhs(const tarch::la::Vector<3,double>& x);
    virtual double       getInitialValue(const tarch::la::Vector<3,double>& x) const;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<3,double>& x) const;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<3,double>& x);

    virtual bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );
    virtual bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );
    virtual bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

    virtual double       getMaximalSamplingWidth() const;
    virtual void         plotInputDataToVTKFile(const std::string& data) const;
};

#endif
