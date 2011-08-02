/*
 * NSEConfiguration.cpp
 *
 *  Created on: May 23, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/configurations/NSEConfiguration.h"
#include "peano/applications/faxen/lbf/configurations/readers.h"
#include "peano/utils/Dimensions.h"
#include <string>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace configurations {

const std::string NSEConfiguration::TAG = "nse-configuration";
const std::string NSEConfiguration::TIME_SAFETY_FACTOR = "time-safety-factor";
const std::string NSEConfiguration::MAXIMUM_ITERATIONS = "maximum-iterations";
const std::string NSEConfiguration::SOLVER_TOLERANCE = "solver-tolerance";
const std::string NSEConfiguration::SOR_RELAXATION_FACTOR = "sor-relaxation-factor";
const std::string NSEConfiguration::UPWIND_DIFFERENTIATION_FACTOR = "upwind-differentiation-factor";
const std::string NSEConfiguration::INITIAL_PRESSURE = "initial-pressure";
const std::string NSEConfiguration::INITIAL_VELOCITY = "initial-velocity";
const std::string NSEConfiguration::ONLY_NSE = "only-nse";

const std::string NSEConfiguration::TIME_STEP_SIZE = "time-step-size";

const std::string NSEConfiguration::END_TIME = "end-time";
const std::string NSEConfiguration::REYNOLDS_NUMBER = "reynolds-number";
const std::string NSEConfiguration::DOMAIN_LENGTH = "domain-length";
const std::string NSEConfiguration::RESOLUTION = "resolution";
const std::string NSEConfiguration::GRAVITY = "gravity";
const std::string NSEConfiguration::VIS_TIME_STEP_SIZE = "visualization-time-step-size";

tarch::logging::Log NSEConfiguration::_log(
		"peano::applications::faxen::lbf::configurations::NSEConfiguration"
);

NSEConfiguration::NSEConfiguration():
						_isValid(true),
						_isDefinedTimeSafetyFactor(false),
						_isDefinedMaximumIterations(false),
						_isDefinedSolverTolerance(false),
						_isDefinedSorRelaxationFactor(false),
						_isDefinedUpwindDifferentiationFactor(false),
						_isDefinedInitialPressure(false),
						_initialVelocity(0.0),
						_isDefinedInitialVelocity(false),
						_onlyNSE(false),
						_isDefinedOnlyNSE(false),
						_isDefinedTimeStepSize(false),
						_isDefinedEndTime(false),
						_isDefinedReynoldsNumber(false),
						_domainLength(0.0),
						_isDefinedDomainLength(false),
						_resolution(0.0),
						_isDefinedResolution(false),
						_gravity(0.0),
						_isDefinedGravity(false),
						_isDefinedVisTimeStepSize(false)
{}

NSEConfiguration::~NSEConfiguration() {}

void NSEConfiguration::parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader)
{
	assertion(xmlReader != NULL);

	// get time safety factor
	readScalar<double>(xmlReader,TIME_SAFETY_FACTOR,_timeSafetyFactor,_isDefinedTimeSafetyFactor,_log);

	// get maximum number of iterations for sor solver
	readScalar<int>(xmlReader,MAXIMUM_ITERATIONS,_maximumIterations,_isDefinedMaximumIterations,_log);

	// get solver tolerance
	readScalar<double>(xmlReader,SOLVER_TOLERANCE,_solverTolerance,_isDefinedSolverTolerance,_log);

	// get sor relaxation factor
	readScalar<double>(xmlReader,SOR_RELAXATION_FACTOR,_sorRelaxationFactor,_isDefinedSorRelaxationFactor,_log);

	// get up-wind differentiation factor
	readScalar<double>(xmlReader,UPWIND_DIFFERENTIATION_FACTOR,_upwindDifferentiationFactor,
			_isDefinedUpwindDifferentiationFactor,_log);

	// get pressure's initial value
	readScalar<double>(xmlReader,INITIAL_PRESSURE,_initialPressure,_isDefinedInitialPressure,_log);

	// get velocity's initial value
	readVector<double>(xmlReader,INITIAL_VELOCITY,_initialVelocity,_isDefinedInitialVelocity,_log);

	// get if only NSE should be run
	readScalar<bool>(xmlReader,ONLY_NSE,_onlyNSE,_isDefinedOnlyNSE,_log);

	// get simulation's time step size
	readScalar<double>(xmlReader,TIME_STEP_SIZE,_timeStepSize,_isDefinedTimeStepSize,_log);

	/** setting dependent parameters (unnecessary if Lattice Boltzmann configuration is specified) */

	// get simulation's end time
	readScalar<double>(xmlReader,END_TIME,_endTime,_isDefinedEndTime,_log);

	// get Reynolds number
	readScalar<double>(xmlReader,REYNOLDS_NUMBER,_ReynoldsNumber,_isDefinedReynoldsNumber,_log);

	// get domain size
	readVector<double>(xmlReader,DOMAIN_LENGTH,_domainLength,_isDefinedDomainLength,_log);

	// get mesh size
	readVector<int>(xmlReader,RESOLUTION,_resolution,_isDefinedResolution,_log);

	// get gravity
	readVector<double>(xmlReader,GRAVITY,_gravity,_isDefinedGravity,_log);

	// get visualization time step size
	readScalar<double>(xmlReader,VIS_TIME_STEP_SIZE,_visTimeStepSize,_isDefinedVisTimeStepSize,_log);
}

bool NSEConfiguration::isValid() const
{
	return _isValid;
}

bool NSEConfiguration::checkConfiguration()
{
	if(_isDefinedTimeStepSize && _isDefinedVisTimeStepSize) {
		if(_timeStepSize > _visTimeStepSize){
			_isValid = false;
			logError("checkConfiguration()","time step size (" << _timeStepSize
					<< ")must be smaller than visualization time step size ("
					<< _visTimeStepSize << ")");
		}
	}
	if (_isValid){
		_isValid =  _isDefinedTimeSafetyFactor
				& _isDefinedMaximumIterations
				& _isDefinedSolverTolerance
				& _isDefinedSorRelaxationFactor
				& _isDefinedUpwindDifferentiationFactor
				& _isDefinedInitialPressure
				& _isDefinedInitialVelocity
				& _isDefinedOnlyNSE
				& _isDefinedTimeStepSize
				& _isDefinedEndTime
				& _isDefinedReynoldsNumber
				& _isDefinedDomainLength
				& _isDefinedResolution
				& _isDefinedGravity
				& _isDefinedVisTimeStepSize;
	}
	if (!_isValid){
		_log.error("checkConfiguration()", "NSEConfiguration is not valid!");
		assertion(false);
	}
	return _isValid;
}

double NSEConfiguration::getSolverTolerance() const
{
	return _solverTolerance;
}

double NSEConfiguration::getUpwindDifferentiationFactor() const
{
	return _upwindDifferentiationFactor;
}

double NSEConfiguration::getInitialPressure() const
{
	return _initialPressure;
}

double NSEConfiguration::getTimeSafetyFactor() const
{
	return _timeSafetyFactor;
}

double NSEConfiguration::getSorRelaxationFactor() const
{
	return _sorRelaxationFactor;
}

int NSEConfiguration::getMaximumIterations() const
{
	return _maximumIterations;
}

tarch::la::Vector<DIMENSIONS,double>  NSEConfiguration::getInitialVelocity() const
{
	return _initialVelocity;
}

bool NSEConfiguration::getOnlyNSE() const
{
	return _onlyNSE;
}

double NSEConfiguration::getTimeStepSize() const {
	return _timeStepSize;
}

bool NSEConfiguration::isTimeStepSizeDefined() const{
	return _isDefinedTimeStepSize;
}

double NSEConfiguration::getEndTime() const
{
	return _endTime;
}

bool NSEConfiguration::isEndTimeDefined() const {
	return _isDefinedEndTime;
}

double NSEConfiguration::getReynoldsNumber() const
{
	return _ReynoldsNumber;
}

bool NSEConfiguration::isReynoldsNumberDefined() const
{
	return _isDefinedReynoldsNumber;
}

tarch::la::Vector<DIMENSIONS,double>  NSEConfiguration::getDomainLength() const
{
	return _domainLength;
}

tarch::la::Vector<DIMENSIONS,int>  NSEConfiguration::getResolution() const
{
	return _resolution;
}

bool NSEConfiguration::isResolutionDefined() const {
	return _isDefinedResolution;
}

tarch::la::Vector<DIMENSIONS,double> NSEConfiguration::getMeshSize() const{
	tarch::la::Vector<DIMENSIONS,double> meshSize;
	for(int d=0; d<DIMENSIONS; d++){
		meshSize(d) = _domainLength(d)/(_resolution(d)-1);
	}
	return meshSize;
}

tarch::la::Vector<DIMENSIONS,double>  NSEConfiguration::getGravity() const
{
	return _gravity;
}

bool NSEConfiguration::isGravityDefined() const {
	return _isDefinedGravity;
}

double NSEConfiguration::getVisTimeStepSize() const {
	return _visTimeStepSize;
}

bool NSEConfiguration::isVisTimeDefined() const {
	return _isDefinedVisTimeStepSize;
}

void NSEConfiguration::setTimeStepSize(double timeStepSize) {
	_timeStepSize = timeStepSize;
	_isDefinedTimeStepSize = true;
}

void NSEConfiguration::setEndTime(double endTime)
{
	_endTime = endTime;
	_isDefinedEndTime = true;
}

void NSEConfiguration::setReynoldsNumber(double ReynoldsNumber)
{
	_ReynoldsNumber = ReynoldsNumber;
	_isDefinedReynoldsNumber = true;
}

void NSEConfiguration::setDomainLength(tarch::la::Vector<DIMENSIONS,double> & domainLength)
{
	for(int i=0; i<DIMENSIONS; i++){
		_domainLength(i) = domainLength(i);
	}
	_isDefinedDomainLength = true;
}

void NSEConfiguration::setResolution(tarch::la::Vector<DIMENSIONS,int> & resolution)
{
	for(int i=0; i<DIMENSIONS; i++){
		_resolution(i) = resolution(i);
	}
	_isDefinedResolution = true;
}

void NSEConfiguration::setGravity(tarch::la::Vector<DIMENSIONS,double> & gravity)
{
	for(int i=0; i<DIMENSIONS; i++){
		_gravity(i) = gravity(i);
	}
	_isDefinedGravity = true;
}

void NSEConfiguration::setVisTimeStepSize(double visTimeStepSize){
	_visTimeStepSize = visTimeStepSize;
	_isDefinedVisTimeStepSize = true;
}

}

}

}

}

}
