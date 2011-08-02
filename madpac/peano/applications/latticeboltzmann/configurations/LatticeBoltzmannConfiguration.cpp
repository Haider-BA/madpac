#include "peano/applications/latticeboltzmann/configurations/LatticeBoltzmannConfiguration.h"

const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::TAG = "lattice-boltzmann-configuration";

const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::TAU = "tau";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::VISCOSITY = "viscosity";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::VISCOSITY_L = "viscosity_L";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::DENSITY = "density";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::GRAVITY= "gravity";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::GRAVITY_L= "gravity_L";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::DT = "dt";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::NUMBER_OF_TIMESTEPS = "number-of-timesteps";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::TIME_INTERVAL = "time-interval";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::PERFORMANCE_MEASUREMENT = "measure-performance";

const double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::_dx_L = 1.0;
const double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::_dt_L = 1.0;
const double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::_density_L = 1.0;


tarch::logging::Log
peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::_log(
  "peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration"
);



peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
LatticeBoltzmannConfiguration():
_isValid(true),
// boolean variables for "real" parameters
_isDefinedTau(false),
_isDefinedViscosity(false), _isDefinedViscosityL(false),
_isDefinedDensity(false),
_isDefinedDx(false),
_isDefinedDt(false),
_isDefinedNumberOfTimesteps(false), _isDefinedTimeInterval(false),
// booleans for help variables
_isDefinedViscosityLDxDx(false),
// gravity
_isDefinedGravityL(false),
_isDefinedGravity(false),
_gravity(0.0),
_gravity_L(0.0),
// boolean whether performance shall be measured or not
_measurePerformance(false)
{}


peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::~LatticeBoltzmannConfiguration(){}


void peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::setDx(double dx){
  logDebug("setDx()", "set dx to " << dx);
  _dx = dx;
  _isDefinedDx = true;
}



void peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
parseSubtag(tarch::irr::io::IrrXMLReader* xmlReader){

  assertion(xmlReader != NULL);

  // get relaxation parameter
  if ( xmlReader->getAttributeValue( TAU.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "relaxation time 'tau' not specified");
  }
  else {
    _tau  = xmlReader->getAttributeValueAsDouble( TAU.c_str() );
    logDebug("parseSubtag()", "'tau': " << _tau );
    _isDefinedTau = true;
  }

  // get viscosity
  if ( xmlReader->getAttributeValue( VISCOSITY.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "viscosity 'viscosity' not specified");
  }
  else {
    _viscosity  = xmlReader->getAttributeValueAsDouble( VISCOSITY.c_str() );
    logDebug("parseSubtag()", "'viscosity': " << _viscosity );
    _isDefinedViscosity = true;
  }

  // get lattice viscosity
  if ( xmlReader->getAttributeValue( VISCOSITY_L.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "lattice viscosity 'viscosity_L' not specified");
  }
  else {
    _viscosity_L  = xmlReader->getAttributeValueAsDouble( VISCOSITY_L.c_str() );
    logDebug("parseSubtag()", "'viscosity_L': " << _viscosity_L );
    _isDefinedViscosityL = true;
  }

  // get gravity_L
  if ( xmlReader->getAttributeValue( GRAVITY_L.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "gravity 'gravity_L' not specified");
  }
  else {
	  std::stringstream getVector(std::stringstream::in | std::stringstream::out);
	  getVector << (xmlReader->getAttributeValue(GRAVITY_L.c_str()));
	  for (int i = 0; i < DIMENSIONS; i++){
	    if (! getVector.eof()){
	      getVector >> _gravity_L[i];
	    } else {
	      i = DIMENSIONS+10;
	      _isValid = false;
	      _log.error("parseSubtag()", "'gravity_L' could not be parsed!");
	      assertion(false);
	    }
	  }
	  _isDefinedGravityL = true;
  }

  // gravity
  if ( xmlReader->getAttributeValue( GRAVITY.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "gravity 'gravity' not specified");
  }
  else {
  	std::stringstream getVector(std::stringstream::in | std::stringstream::out);
  	getVector << (xmlReader->getAttributeValue(GRAVITY.c_str()));
  	for (int i = 0; i < DIMENSIONS; i++){
  	  if (! getVector.eof()){
  	    getVector >> _gravity[i];
  	  } else {
  	    i = DIMENSIONS+10;
  	    // throw error
  	    _isValid = false;
  	    _log.debug("parseSubtag()", "'gravity' could not be parsed!");
  	    assertion(false);
  	  }
  	}
  	_isDefinedGravity = true;
  }

  // get density
  if ( xmlReader->getAttributeValue( DENSITY.c_str() ) == 0 ) {
    _log.error("parseSubtag()", "density 'density' not specified");
    _isValid = false;
    assertion(false);
  }
  else {
    _density  = xmlReader->getAttributeValueAsDouble( DENSITY.c_str() );
    if (_density <= 0.0){
      _log.error("parseSubtag()", "density 'density' is smaller or equal zero!");
      assertion(false);
      _isValid = false;
    }
    logDebug("parseSubtag()", "'density': " << _density);
    _isDefinedDensity = true;
  }

  // get timestep size dt
  if ( xmlReader->getAttributeValue( DT.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "timestep size 'dt' not specified");
  }
  else {
    _dt  = xmlReader->getAttributeValueAsDouble( DT.c_str() );
    logDebug("parseSubtag()", "'dt': " << _dt );
    _isDefinedDt = true;
  }

  // get number of timesteps
  if ( xmlReader->getAttributeValue( NUMBER_OF_TIMESTEPS.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "number of timesteps 'number-of-timesteps' not specified");
  }
  else {
    _numberOfTimesteps  = xmlReader->getAttributeValueAsInt( NUMBER_OF_TIMESTEPS.c_str() );
    logDebug("parseSubtag()", "'number-of-timesteps': " << _numberOfTimesteps);
    _isDefinedNumberOfTimesteps = true;
  }

  // get time interval
  if ( xmlReader->getAttributeValue( TIME_INTERVAL.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "time interval 'time-interval' not specified");
  }
  else {
    _timeInterval = xmlReader->getAttributeValueAsInt( TIME_INTERVAL.c_str() );
    logDebug("parseSubtag()", "'time-interval': " << _timeInterval );
    _isDefinedTimeInterval = true;
  }


  // get information on performance measurement
  if ( xmlReader->getAttributeValue( PERFORMANCE_MEASUREMENT.c_str() ) == 0 ) {
    _log.debug("parseSubtag()", "'measure-performance' not specified!");
    _isValid = false;
    assertion(false);
  }
  else {
    if ( strcmp( (xmlReader->getAttributeValue(PERFORMANCE_MEASUREMENT.c_str())), "yes") == 0 ){
      _measurePerformance = true;
      _log.debug("parseSubtag()", "performance is going to be measured");
    } else if ( strcmp( (xmlReader->getAttributeValue(PERFORMANCE_MEASUREMENT.c_str())), "no") == 0){
      _measurePerformance = false;
      _log.debug("parseSubtag()", "performance is not going to be measured");
    } else {
      _log.error("parseSubtag()", "'measure-performance' not answered by 'yes' or 'no'!");
      _isValid = false;
      assertion(false);
    }
  }
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
isValid() const {
  return peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::_isValid;
}


void peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::checkConfiguration(){
  if (_isValid){

    _isValid =  _isDefinedTau
                & _isDefinedViscosityL & _isDefinedViscosity & _isDefinedDensity
                & _isDefinedDx & _isDefinedDt
                & _isDefinedNumberOfTimesteps & _isDefinedTimeInterval;
  }
  if (!_isValid){
    _log.error("checkConfiguration()", "LatticeBoltzmannConfiguration is not valid!");
    assertion(false);
  }
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
computeUndefinedValues() {

  // check for meshsize
  if (!_isDefinedDx){
    _log.error("computeUndefinedValues()", "meshsize 'dx' has to be defined in your configuration file!");
    _isValid = false;
    assertion(false);
    return false;
  }
  if (_dx <= 0.0){
    _log.error("computeUndefinedValues()", "meshsize 'dx' smaller or equal 0.0!");
    _isValid = false;
    assertion(false);
    return false;
  }

  // v_L = 1/3 * (tau - 0.5)
  if ( (_isDefinedViscosityL) && (_isDefinedTau) ){
    double vL2 = 1.0/3.0 * (_tau - 0.5);
    if (!tarch::la::equals(vL2,_viscosity_L,1.0e-12) ){
      _log.error("computeUndefinedValues()", "lattice viscosity 'viscosity_L' and relaxation time 'tau' do not fit!");
      assertion(false);
      _isValid = false;
      return false;
    }

  } else {
      if (_isDefinedViscosityL){
        _tau = 3.0 * _viscosity_L + 0.5;
        logDebug("computeUndefinedValues()", "'tau': " << _tau );

        if ( (_tau < 0.5001) || (_tau > 1.9999) ){
          _log.error("computeUndefinedValues()", "'tau' is out of range! 'tau' has to be in (0.501,1.999)!");
          assertion(false);
          _isValid = false;
          return false;
        }

        _isDefinedTau = true;
      } else if (_isDefinedTau){
        _viscosity_L = 1.0/3.0 * (_tau - 0.5);
        logInfo("computeUndefinedValues()", "'viscosity_L': " << _viscosity_L );
        if ( (_viscosity_L < (1.0/10000.0) ) || (_viscosity_L > (1.4999/3.0) ) ){
          _log.error("computeUndefinedValues()", "'viscosity_L' out of range! 'viscosity_L' has to be such that 'tau' is in (0.501,1.999)!");
          assertion(false);
          _isValid = false;
          return false;
        }
        _isDefinedViscosityL = true;
      }
  }


  // vLDxDx = v_L * dx * dx
  if (_isDefinedViscosityL && _isDefinedDx){
    if (!_isDefinedViscosityLDxDx){
      _viscosity_L_DxDx = _viscosity_L*_dx*_dx;
      logDebug("computeUndefinedValues", "'viscosity_L'*'dx'*'dx': " << _viscosity_L_DxDx);
      _isDefinedViscosityLDxDx = true;
    } else {
      double vDxDx = _viscosity_L*_dx*_dx;
      if (!tarch::la::equals(vDxDx/_viscosity_L_DxDx,1.0,1.0e-12) ){
        _log.error("computeUndefinedValues()", "'viscosity_L'*'dx'*'dx' and its input parameters do not fit!");
        _isValid = false;
        assertion(false);
        return false;
      }
    }
  }


  // v_L = vLDxDx / (dx * dx)
  if (_isDefinedViscosityLDxDx && _isDefinedDx){
    if (!_isDefinedViscosityL){
      _viscosity_L = _viscosity_L_DxDx / (_dx * _dx);
      logDebug("computeUndefinedValues()", "'viscosity_L': " << _viscosity_L );
      _isDefinedViscosityL = true;

      if ( (_viscosity_L < (1.0/10000.0) ) || (_viscosity_L > (1.4999/3.0) ) ){
        _log.error("computeUndefinedValues()", "'viscosity_L' out of range! 'viscosity_L' has to be such that 'tau' is in (0.55,1.95)!");
        assertion(false);
        _isValid = false;
        return false;
      }

    } else {
      double vDxDx = _viscosity_L*_dx*_dx;
      if (!tarch::la::equals(vDxDx/_viscosity_L_DxDx,1.0,1.0e-12) ){
        _log.error("computeUndefinedValues()", "'viscosity_L'/('dx'*'dx'), 'viscosity_L' and 'dx' do not fit!");
        assertion(false);
        _isValid = false;
        return false;
      }
    }
  }



  // v = v_L * dx * dx / dt = vLDxDx / dt
  if ( _isDefinedViscosityLDxDx && _isDefinedDt ){

    if ( _dt <= 0.0  ){
      _log.error("computeUndefinedValues()", "'dt' smaller or equal zero!");
      assertion(false);
      _isValid = false;
      return false;
    }

    if (!_isDefinedViscosity){
      _viscosity = _viscosity_L_DxDx / _dt;
      logDebug("computeUndefinedValues()", "'viscosity': " << _viscosity);
      _isDefinedViscosity = true;

      if ( _viscosity <= 0.0 ){
        _log.error("computeUndefinedValues()", "'viscosity' smaller or equal 0.0!");
        assertion(false);
        _isValid = false;
        return false;
      }

    } else {
      double v = _viscosity_L_DxDx / _dt;
      if ( !tarch::la::equals(v,_viscosity,1.0e-12) ){
        _log.error("computeUndefinedValues()", "'viscosity', 'viscosity_L', 'dx' and 'dt' do not fit!");
        assertion(false);
        _isValid = false;
        return false;
      }
    }
  }


  // vLDxDx = v * dt
  if (_isDefinedViscosity && _isDefinedDt){
    if (!_isDefinedViscosityLDxDx){
      _viscosity_L_DxDx = _viscosity * _dt;
      logDebug("computeUndefinedValues()", "'viscosity_L'*'dx'*'dx'" << _viscosity_L_DxDx);
      _isDefinedViscosityLDxDx = true;
    } else {
      double vDxDx = _viscosity * _dt;
      if (!tarch::la::equals(vDxDx/_viscosity_L_DxDx,1.0,1.0e-12) ){
        _log.error("computeUndefinedValues()", "'viscosity'*'dt' does not fit!");
        assertion(false);
        _isValid = false;
        return false;
      }
    }
  }

  // dt = vLDxDx / v
  if (_isDefinedViscosityLDxDx && _isDefinedViscosity){

    if ( _viscosity <= 0.0  ){
      _log.error("computeUndefinedValues()", "'viscosity' smaller or equal zero!");
      assertion(false);
      _isValid = false;
      return false;
    }


    if (!_isDefinedDt){
      _dt = _viscosity_L_DxDx / _viscosity;

      if ( _dt <= 0.0  ){
        _log.error("computeUndefinedValues()", "'dt' smaller or equal zero!");
        assertion(false);
        _isValid = false;
        return false;
      }

      logDebug("computeUndefinedValues()", "'dt': " << _dt );
      _isDefinedDt = true;
    } else {
      double dt = _viscosity_L_DxDx / _viscosity;
      if (!tarch::la::equals(dt/_dt,1.0,1.0e-12) ){
        _log.error("computeUndefinedValues()", "'viscosity_L'*'dx'*'dx' and 'dt' do not fit!");
        assertion(false);
        _isValid = false;
        return false;
      }
    }
  }

  // compute gravity = gravity_L*dx/dt^2
  if (_isDefinedDx && _isDefinedDt && _isDefinedGravityL){
	if (!_isDefinedGravity){
	  _gravity = _gravity_L* (_dx/(_dt*_dt));
	  logDebug("computeUndefinedValues()", "'gravity': " << _gravity);
	  _isDefinedGravity = true;
	} else {
	  bool allEqual = true;
	  for (int d = 0; d < DIMENSIONS; d++){
		allEqual = allEqual && tarch::la::equals(_gravity[d],_gravity_L[d]*_dx/(_dt*_dt),1.0e-12);
	  }
	  if (!allEqual){
		_log.error("computeUndefinedValues()", "'gravity' and 'gravity_L' do not agree!");
		assertion(false);
		_isValid = false;
		return false;
	  }
	}
  }

  // compute gravity_L = gravity*dt^2/dx
  if (_isDefinedDx && _isDefinedDt && _isDefinedGravity){
	if (!_isDefinedGravityL){
	  _gravity_L = _gravity* (_dt*_dt/_dx);
	  logDebug("computeUndefinedValues()", "'gravity_L': " << _gravity_L);
	  _isDefinedGravityL = true;
	} else {
	  bool allEqual = true;
	  for (int d = 0; d < DIMENSIONS; d++){
		  allEqual = allEqual && tarch::la::equals(_gravity[d],_gravity_L[d]*_dx/(_dt*_dt),1.0e-12);
	  }
	  if (!allEqual){
		  _log.error("computeUndefinedValues()", "'gravity' and 'gravity_L' do not agree!");
		  assertion(false);
		  _isValid = false;
		  return false;
	  }
	}
  }

  // NO COMPUTATIONS OF DX and DT from GRAVITY


  // t = numberTimesteps * dt
  if (_isDefinedNumberOfTimesteps && _isDefinedDt){

    if (!_isDefinedTimeInterval){
      _timeInterval = _numberOfTimesteps * _dt;

      logDebug("computeUndefinedValues()", "'time-interval': " << _timeInterval);

      _isDefinedTimeInterval = true;

    } else {
      double interval = _numberOfTimesteps * _dt;

      if (!tarch::la::equals(interval,_timeInterval,1.0e-12) ){
        _log.error("computeUndefinedValues()", "'number-of-timesteps'*'dt' and 'time-interval' do not fit!");
        assertion(false);
        _isValid = false;
        return false;
      }
    }
  }


  // dt = t / numberTimesteps
  if (_isDefinedTimeInterval && _isDefinedNumberOfTimesteps){

    if ( _numberOfTimesteps == 0  ){
      _log.error("computeUndefinedValues()", "'number-of-timesteps' is zero!");
      assertion(false);
      _isValid = false;
      return false;
    }

    if (!_isDefinedDt){
      _dt = _timeInterval / ((double) _numberOfTimesteps);

      logDebug("computeUndefinedValues()", "'dt': " << _dt );

      _isDefinedDt = true;

    } else {
      double dt = _timeInterval / ( (double) _numberOfTimesteps);

      if (!tarch::la::equals(dt/ _dt,1.0,1.0e-12) ){
        _log.error("computeUndefinedValues()", "'time-interval'/'number-of-timesteps' and 'dt' do not fit!");
        assertion(false);
        _isValid = false;
        return false;
      }
    }
  }


  // numberTimesteps = t / dt -> rounding !!! CHECK for dt and t and correct dt
  if (_isDefinedTimeInterval && _isDefinedDt){

    if (!_isDefinedNumberOfTimesteps){
      _numberOfTimesteps = (int) ceil(_timeInterval / _dt);

      if ( !tarch::la::equals( ((double) _numberOfTimesteps) , (_timeInterval/_dt),1.0e-12 ) ){
        _log.info("computeUndefinedValues()", "'number-of-timesteps' is not completely the same as 'time-interval'/'dt'. Time interval is adapted...");
        _timeInterval = _numberOfTimesteps * _dt;
        logDebug("computeUndefinedValues()", "'time-interval'=" << _timeInterval );
      }

      logDebug("computeUndefinedValues()", "'number-of-timesteps': " << _numberOfTimesteps );
      _isDefinedNumberOfTimesteps = true;

    } else {
      double interval = _numberOfTimesteps * _dt;

      if (!tarch::la::equals(interval,_timeInterval,1.0e-12) ){
        _log.error("computeUndefinedValues()", "'time-interval'/'dt' and 'number-of-timesteps' do not fit!");
        assertion(false);
        _isValid = false;
        return false;
      }
    }
  }

  return true;
}


double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::getTau() const {
  assertion(_tau > 0.5001);
  assertion(_tau < 1.9999);
  return _tau;
}


double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::getViscosity() const {
  return _viscosity;
}


double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::getViscosityL() const {
  assertion((_viscosity_L >= 1.0/10000.0));
  assertion((_viscosity_L <= 1.4999/3.0));
  return _viscosity_L;
}


tarch::la::Vector<DIMENSIONS,double>
peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
getGravity() const {
  return _gravity;
}


tarch::la::Vector<DIMENSIONS,double>
peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
getGravityL() const {
  return _gravity_L;
}



double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
getDensity() const {
  return _density;
}

double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
getDx() const {
  return _dx;
}


double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
getDt() const {
  return _dt;
}


int peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
getNumberOfTimesteps() const {
  return _numberOfTimesteps;
}


double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
getTimeInterval() const {
  return _timeInterval;
}



bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
isDefinedDx() const {
  return _isDefinedDx;
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
isDefinedDt() const {
  return _isDefinedDt;
}

bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
isDefinedDensity() const {
  return _isDefinedDensity;
}


bool peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::
measurePerformance() const {
  return _measurePerformance;
}
