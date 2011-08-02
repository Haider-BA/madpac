#include "scenario/poisson/sinexperiment/Experiment.h"


scenario::poisson::sinexperiment::Experiment::Experiment(
  const tarch::la::Vector<DIMENSIONS,int>& oscillationsPerAxis,
  const tarch::la::Vector<DIMENSIONS,int>& numberOfGridPoints,
  double                                    relaxationFactor,
  const std::string&                        outputFile
):
  _hexahedron(false, tarch::la::Vector<DIMENSIONS,double>(1.0), tarch::la::Vector<DIMENSIONS,double>(0.0)),
  _oscillationsPerAxis(oscillationsPerAxis),
  _numberOfGridPoints(numberOfGridPoints),
  _relaxationFactor(relaxationFactor),
  _outputFile(outputFile) {
}


scenario::poisson::sinexperiment::Experiment::~Experiment() {
}


double scenario::poisson::sinexperiment::Experiment::getRhs(const tarch::la::Vector<DIMENSIONS,int>& x) const {
  double result = 1.0;
  for (int d=0; d<DIMENSIONS; d++) {
	double argumentScaling  = _oscillationsPerAxis(d);
	argumentScaling        *= tarch::la::PI;
    result *= std::sin( argumentScaling * x(d) );
  }
  return result;
}


double scenario::poisson::sinexperiment::Experiment::getInitialValue(const tarch::la::Vector<DIMENSIONS,int>& x) const {
  return 0.0;
}


scenario::poisson::ExperimentSetup::BoundaryType scenario::poisson::sinexperiment::Experiment::getBoundaryType(const tarch::la::Vector<DIMENSIONS,int>& x) const {
  return scenario::poisson::ExperimentSetup::DIRICHLET;
}


tarch::la::Vector<DIMENSIONS,int> scenario::poisson::sinexperiment::Experiment::getNumberOfGridPoints() const {
  return _numberOfGridPoints;
}


tarch::la::Vector<DIMENSIONS,double> scenario::poisson::sinexperiment::Experiment::getDomainSize() const {
  return tarch::la::Vector<DIMENSIONS,double>(1.0);
}

tarch::la::Vector<DIMENSIONS,double>   scenario::poisson::sinexperiment::Experiment::getComputationalDomainOffset() const {
  return tarch::la::Vector<DIMENSIONS,double>(0.0);
}

bool scenario::poisson::sinexperiment::Experiment::isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  return _hexahedron.isCompletelyOutside(x,resolution);
}


bool scenario::poisson::sinexperiment::Experiment::isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution ) {
  return _hexahedron.isCompletelyInside(x,resolution);
}


bool scenario::poisson::sinexperiment::Experiment::isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x ) {
  return _hexahedron.isOutsideClosedDomain(x);
}


double scenario::poisson::sinexperiment::Experiment::getRelaxationFactor() const {
  return _relaxationFactor;
}


std::string scenario::poisson::sinexperiment::Experiment::getOutputFile() const {
  return _outputFile;
}
