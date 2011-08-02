// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_POISSON_SINEXPERIMENT_EXPERIMENT_H_
#define _PEANO_SCENARIO_POISSON_SINEXPERIMENT_EXPERIMENT_H_


#include "scenario/poisson/PoissonScenario.h"
#include "peano/geometry/builtin/Hexahedron.h"


namespace scenario {
  namespace poisson {
    namespace sinexperiment {
      class Experiment;
    }
  }
}


class scenario::poisson::sinexperiment::Experiment: public scenario::poisson::PoissonScenario {
  private:
	peano::geometry::builtin::Hexahedron _hexahedron;
    tarch::la::Vector<DIMENSIONS,int>    _oscillationsPerAxis;
    tarch::la::Vector<DIMENSIONS,int>    _numberOfGridPoints;

    double       _relaxationFactor;
    std::string  _outputFile;
  public:
	Experiment(
      const tarch::la::Vector<DIMENSIONS,int>&  oscillationsPerAxis,
      const tarch::la::Vector<DIMENSIONS,int>&  numberOfGridPoints,
      double                                    relaxationFactor,
      const std::string&                        outputFile
	);
	virtual ~Experiment();

    virtual double       getRhs(const tarch::la::Vector<DIMENSIONS,int>& x) const;
    virtual double       getInitialValue(const tarch::la::Vector<DIMENSIONS,int>& x) const;
    virtual scenario::poisson::ExperimentSetup::BoundaryType getBoundaryType(const tarch::la::Vector<DIMENSIONS,int>& x) const;

    virtual tarch::la::Vector<DIMENSIONS,int>      getNumberOfGridPoints() const;
    virtual tarch::la::Vector<DIMENSIONS,double>   getDomainSize() const;
    virtual tarch::la::Vector<DIMENSIONS,double>   getComputationalDomainOffset() const;

    virtual bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );
    virtual bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );
    virtual bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

	virtual double getRelaxationFactor() const;
	virtual std::string getOutputFile() const;
};

#endif
