/*
 * NSEConfiguration.h
 *
 *  Created on: May 23, 2011
 *      Author: denis
 */

#ifndef NSECONFIGURATION_H_
#define NSECONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"
#include "tarch/la/Vector.h"
#include <string>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace configurations {

class NSEConfiguration {
public:
	static const std::string TAG;

	// independent (must) on Lattice Boltzmann configuration parameters
	static const std::string TIME_SAFETY_FACTOR;
	static const std::string MAXIMUM_ITERATIONS;
	static const std::string SOLVER_TOLERANCE;
	static const std::string SOR_RELAXATION_FACTOR;
	static const std::string UPWIND_DIFFERENTIATION_FACTOR;
	static const std::string INITIAL_PRESSURE;
	static const std::string INITIAL_VELOCITY;
	static const std::string ONLY_NSE;

	/**
	 *  time step size can be either set from Lattice Boltzamann configuration or
	 *  specified explicitly in the configuration file
	 */
	static const std::string TIME_STEP_SIZE;

	// dependent (unnecessary) on Lattice Boltzmann configuration parameters
	static const std::string END_TIME;
	static const std::string REYNOLDS_NUMBER;
	static const std::string DOMAIN_LENGTH;
	static const std::string RESOLUTION;
	static const std::string GRAVITY;
	static const std::string VIS_TIME_STEP_SIZE;

	NSEConfiguration();
	virtual ~NSEConfiguration();

	/** parses configuration input */
	void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader);

	/** returns the _isValid flag */
	bool isValid() const;

	/** checks the configuration after input (-> parseSubtag() ) and (-> readParticlesParameters) */
	bool checkConfiguration();

	// get() - functions
	double getTimeSafetyFactor() const;
	int getMaximumIterations() const;
	double getSolverTolerance() const;
	double getSorRelaxationFactor() const;
	double getUpwindDifferentiationFactor() const;
	double getInitialPressure() const;
	tarch::la::Vector<DIMENSIONS,double> getInitialVelocity() const;
	bool getOnlyNSE() const;

	double getTimeStepSize() const;
	bool isTimeStepSizeDefined() const;

	double getEndTime() const;
	bool isEndTimeDefined() const;

	double getReynoldsNumber() const;
	bool isReynoldsNumberDefined() const;

	tarch::la::Vector<DIMENSIONS,double> getDomainLength() const;

	tarch::la::Vector<DIMENSIONS,int> getResolution() const;
	bool isResolutionDefined() const;

	tarch::la::Vector<DIMENSIONS,double> getMeshSize() const;

	tarch::la::Vector<DIMENSIONS,double> getGravity() const;
	bool isGravityDefined() const;

	double getVisTimeStepSize() const;
	bool isVisTimeDefined() const;

	// set() - functions for dependent parameters
	void setTimeStepSize(double timeStepSize);
	void setEndTime(double endTime);
	void setReynoldsNumber(double ReynoldsNumber);
	void setDomainLength(tarch::la::Vector<DIMENSIONS,double>& domainLength);
	void setResolution(tarch::la::Vector<DIMENSIONS,int>& resolution);
	void setGravity(tarch::la::Vector<DIMENSIONS,double>& gravity);
	void setVisTimeStepSize(double visTimeStepSize);

private:
	/** true, if configuration is valid and false otherwise */
	bool _isValid;

	/** time safety factor */
	double _timeSafetyFactor;
	bool _isDefinedTimeSafetyFactor;

	/** maximum number of iterations in pressure solver*/
	int _maximumIterations;
	bool _isDefinedMaximumIterations;

	/** pressure solver tolerance */
	double _solverTolerance;
	bool _isDefinedSolverTolerance;

	/** SOR relaxation factor */
	double _sorRelaxationFactor;
	bool _isDefinedSorRelaxationFactor;

	/** Upwind differentiation factor */
	double _upwindDifferentiationFactor;
	bool _isDefinedUpwindDifferentiationFactor;

	/** fluid initial pressure */
	double _initialPressure;
	bool _isDefinedInitialPressure;

	/** fluid initial velocity */
	tarch::la::Vector<DIMENSIONS,double> _initialVelocity;
	bool _isDefinedInitialVelocity;

	/** run only NSE */
	bool _onlyNSE;
	bool _isDefinedOnlyNSE;

	/** time step size */
	double _timeStepSize;
	bool _isDefinedTimeStepSize;

	/** simulation end time */
	double _endTime;
	bool _isDefinedEndTime;

	/** Reynolds number */
	double _ReynoldsNumber;
	bool _isDefinedReynoldsNumber;

	/** domain length */
	tarch::la::Vector<DIMENSIONS,double> _domainLength;
	bool _isDefinedDomainLength;

	/** mesh size */
	tarch::la::Vector<DIMENSIONS,int> _resolution;
	bool _isDefinedResolution;

	/** gravity */
	tarch::la::Vector<DIMENSIONS,double> _gravity;
	bool _isDefinedGravity;

	/** visualization time step size */
	double _visTimeStepSize;
	bool _isDefinedVisTimeStepSize;

	/** for logging */
	static tarch::logging::Log _log;
};

}

}

}

}

}

#endif /* NSECONFIGURATION_H_ */
