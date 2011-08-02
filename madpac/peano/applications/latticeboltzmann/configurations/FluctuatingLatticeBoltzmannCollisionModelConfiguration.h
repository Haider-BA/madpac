// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_FLUCTUATINGLATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_
#define _LATTICEBOLTZMANN_FLUCTUATINGLATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_

/**
 *  This file includes all functions and static variables needed in case of a fluctuating
 *  lattice Boltzmann configuration. For details on the variables and functions, see
 *  "LatticeBoltzmannCollisionModelConfiguration.h".
 */

const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::FLUCTUATING_LATTICE_BOLTZMANN_NAME = "fluctuating-lattice-boltzmann";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::FLUCTUATING_LATTICE_BOLTZMANN_RELAXATION_TIMES="ghost-mode-relaxation-times";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::TEMPERATURE = "temperature";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::TEMPERATURE_L = "temperature_L";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::BOLTZMANN_CONSTANT = "k_B";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::BOLTZMANN_CONSTANT_L = "k_B_L";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::BULK_VISCOSITY = "bulk-viscosity";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::BULK_VISCOSITY_L = "bulk-viscosity_L";
const double peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::_temp_L = 1.0;
const int peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::_numberOfVariablesForFluctuatingLatticeBoltzmann = 5;

void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::parseFluctuatingLatticeBoltzmannConfiguration(
tarch::irr::io::IrrXMLReader *xmlReader){
  int numberGhostModesToBeRead = 0;  // number of ghost modes with different relaxation parameters
  double *relaxationParams = NULL;   // stores the ghost mode relaxation parameters that have been read from the configuration file

  // read in ghost mode relaxation parameters ----------------------------------------//

  // switch for different fluctuating models
  switch(LB_CURRENT_MODEL){
    case LB_D2Q9:
      numberGhostModesToBeRead = 2;
      _fluctuating_LB_numberRelaxationTimes = 3;
      break;
    case LB_D3Q19:
      numberGhostModesToBeRead = 4;
      _fluctuating_LB_numberRelaxationTimes = 9;
      break;
    default:
      _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "only D2Q9- and D3Q19-model supported at the moment!");
      _isValid = false;
      assertion(false);
      return;
  }


  relaxationParams = new double[numberGhostModesToBeRead];
  _fluctuating_LB_relaxationTimes.clear();

  // read in ghost mode relaxation parameters
  if ( xmlReader->getAttributeValue( FLUCTUATING_LATTICE_BOLTZMANN_RELAXATION_TIMES.c_str() ) == 0 ) {
    _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "Relaxation times 'ghost-mode-relaxation-times' for the ghost modes not specified!");
    _isValid = false;
    assertion(false);
  }
  else {

    std::stringstream getValues(std::stringstream::in | std::stringstream::out);
    getValues << (xmlReader->getAttributeValue(FLUCTUATING_LATTICE_BOLTZMANN_RELAXATION_TIMES.c_str()));
    for (int i = 0; i < numberGhostModesToBeRead; i++){
      if (! getValues.eof()){
        getValues >> relaxationParams[i];

        #if Debug
        logDebug("parseFluctuatingLatticeBoltzmannConfiguration()", "Ghost mode relaxation parameter " << i << ": " << relaxationParams[i]);
        #endif
      } else {
        i = numberGhostModesToBeRead+10;
        // throw error
        _isValid = false;
        _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "'ghost-mode-relaxation-times' could not be parsed!");
        assertion(false);
        return;
      }
    }
  }

  // check input data for consistency (-> range between -1.0 and 1.0)
  for (int i = 0; i < numberGhostModesToBeRead; i++){
    if ( (relaxationParams[i] <= -1.0) || (relaxationParams[i] >= 1.0) ){
      _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "relaxation parameter out of range!");
      _isValid = false;
      assertion(false);
      return;
    }
  }

  // set the ghost mode relaxation times according to the model
  switch(LB_CURRENT_MODEL){
    case LB_D2Q9:
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[0]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[0]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[1]);
      break;
    case LB_D3Q19:
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[0]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[0]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[0]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[1]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[1]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[1]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[2]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[3]);
      _fluctuating_LB_relaxationTimes.push_back(relaxationParams[3]);
      break;
    default:
      _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "only D2Q9- and D3Q19-model supported at the moment!");
      _isValid = false;
      assertion(false);
      return;
  }

  // read in ghost mode relaxation parameters (end) -----------------------------------//

  // read in Boltzmann constant and corresponding nondimensionalised number
  if ( xmlReader->getAttributeValue( BOLTZMANN_CONSTANT.c_str() ) == 0 ) {
    _log.debug("parseFluctuatingLatticeBoltzmannConfiguration()", "Boltzmann constant 'k_B' not specified");
  }
  else {
    _k_B  = xmlReader->getAttributeValueAsFloat( BOLTZMANN_CONSTANT.c_str() );
    #if Debug
    logDebug("parseFluctuatingLatticeBoltzmannConfiguration()", "'k_B': " << _k_B );
    #endif
    if (_k_B <= 0.0){
      _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "'k_B' is smaller or equal zero!");
      _isValid = false;
      assertion(false);
    }
    _isDefinedKB = true;
  }
  if ( xmlReader->getAttributeValue( BOLTZMANN_CONSTANT_L.c_str() ) == 0 ) {
    _log.debug("parseFluctuatingLatticeBoltzmannConfiguration()", "nondimensionalised Boltzmann constant 'k_B_L' not specified");
  }
  else {
    _k_B_L  = xmlReader->getAttributeValueAsFloat( BOLTZMANN_CONSTANT_L.c_str() );
    if (_k_B_L <= 0.0){
      _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "'k_B_L' is smaller or equal zero!");
      _isValid = false;
      assertion(false);
    }
    logDebug("parseFluctuatingLatticeBoltzmannConfiguration()", "'k_B_L': " << _k_B_L );
    _isDefinedKBL = true;
  }


  // read in temperature and corresponding nondimensionalised temperature
  if ( xmlReader->getAttributeValue( TEMPERATURE.c_str() ) == 0 ) {
    _log.debug("parseFluctuatingLatticeBoltzmannConfiguration()", "temperature 'temperature' not specified");
  }
  else {
    _temp  = xmlReader->getAttributeValueAsFloat( TEMPERATURE.c_str() );
    if (_temp <= 0.0){
      _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "'temperature' is smaller or equal zero!");
      _isValid = false;
      assertion(false);
    }
    logDebug("parseFluctuatingLatticeBoltzmannConfiguration()", "'temperature': " << _temp );
    _isDefinedTemperature = true;
  }


  // read in bulk viscosity and corresponding nondimensionalised parameter (if not defined so far; this is because the same
  // value is also needed in case of using the MRT model of d'Humieres et al.!)
  if (!_isDefinedBulkViscosity){
    if ( xmlReader->getAttributeValue( BULK_VISCOSITY.c_str() ) == 0 ) {
      _log.debug("parseFluctuatingLatticeBoltzmannConfiguration()", "bulk viscosity 'bulk-viscosity' not specified");
    }
    else {
      _bulk_viscosity  = xmlReader->getAttributeValueAsFloat( BULK_VISCOSITY.c_str() );
      if (_bulk_viscosity <= 0.0){
        _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "'bulk-viscosity' is smaller or equal zero!");
        _isValid = false;
        assertion(false);
      }
      logDebug("parseFluctuatingLatticeBoltzmannConfiguration()", "'bulk-viscosity': " << _bulk_viscosity );
      _isDefinedBulkViscosity = true;
    }
  }
  if (!_isDefinedBulkViscosityL){
    if ( xmlReader->getAttributeValue( BULK_VISCOSITY_L.c_str() ) == 0 ) {
      _log.debug("parseFluctuatingLatticeBoltzmannConfiguration()", "nondimensionalised bulk viscosity 'bulk-viscosity_L' not specified");
    }
    else {
      _bulk_viscosity_L  = xmlReader->getAttributeValueAsFloat( BULK_VISCOSITY_L.c_str() );
      if (_bulk_viscosity_L <= 0.0){
        _log.error("parseFluctuatingLatticeBoltzmannConfiguration()", "'bulk_viscosity_L' is smaller or equal zero!");
        _isValid = false;
        assertion(false);
      }
      logDebug("parseFluctuatingLatticeBoltzmannConfiguration()", "'bulk-viscosity_L': " << _bulk_viscosity_L );
      _isDefinedBulkViscosityL = true;
    }
  }

  // delete array
  delete [] relaxationParams;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::setDx(double val){
  _dx = val;
  _isDefinedDx = true;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::setDt(double val){
  _dt = val;
  _isDefinedDt = true;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::setDensity(double val){
  _density = val;
  _isDefinedDensity = true;
}



void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::
computeUndefinedFluctuatingLatticeBoltzmannValues() {

  // dx2dt = dx*dx/dt and dt2Dx2PlusD = dt*dt/(dx*dx*dx*dx*dx) (in 3D)
  if (_isDefinedDx && _isDefinedDt){
    if (!_isDefinedDxDt){
      _dx2Dt = _dx*_dx/_dt;
      _dt2Dx2PlusD = _dt*_dt/(_dx*_dx
#if defined(Dim3)
          *_dx*_dx*_dx
#elif defined(Dim2)
          *_dx*_dx
#endif
          );
      _isDefinedDxDt = true;
    } else {
      double dx2Dt = _dx*_dx/_dt;
      double dt2Dx2PlusD = _dt*_dt/(_dx*_dx
#if defined(Dim2)
          *_dx*_dx
#elif defined(Dim3)
          *_dx*_dx*_dx
#endif
          );
      if ( (!tarch::la::equals(dx2Dt/_dx2Dt,1.0,1.0e-12)) || (!tarch::la::equals(dt2Dx2PlusD/_dt2Dx2PlusD,1.0,1.0e-12))){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'dx', 'dt' and corresponding variables do not agree!");
        assertion(false);
        _isValid = false;
      }
    }
  }
  // no reversion of the upper case -> dx,dt shall be delivered by the input of the "toplevel" configuration!!!

  // dt*dt/(dx*dx*dx*dx*dx*density)
  if (_isDefinedDxDt && _isDefinedDensity){
    if (!_isDefinedDt2Dx2PlusDDensity){
      _dt2Dx2PlusDDensity = _dt2Dx2PlusD/_density;
      _isDefinedDt2Dx2PlusDDensity = true;
    } else {
      double dt2Dx2PlusDDensity = _dt2Dx2PlusD/_density;
      if (!tarch::la::equals(dt2Dx2PlusDDensity/_dt2Dx2PlusDDensity,1.0,1.0e-12)){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'dt'^2/('dx'^5) and 'density' do not agree!");
        assertion(false);
        _isValid = false;
      }
    }
  }
  // no reversion of the upper case -> dx,dt and density shall be delivered by the input of the "toplevel" configuration!!!


  // bulk_viscosity = bulk_viscosity_L* (dx*dx/dt)
  if (_isDefinedBulkViscosityL && _isDefinedDxDt){
    if (!_isDefinedBulkViscosity){
      _bulk_viscosity = _bulk_viscosity_L * _dx2Dt;
      if (_bulk_viscosity <= 0.0){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'bulk-viscosity' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      logDebug("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'bulk-viscosity': " << _bulk_viscosity);
      _isDefinedBulkViscosity = true;
    } else {
      double bulkViscosity = _bulk_viscosity_L*_dx2Dt;
      if (!tarch::la::equals(bulkViscosity,_bulk_viscosity,1.0e-12)){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'bulk-viscosity' and 'bulk-viscosity_L'*'dx'*'dx'/'dt' do not fit!");
        assertion(false);
        _isValid = false;
      }
    }
  }

  // bulk_viscosity_L = bulk_viscosity / (dx*dx/dt)
  if (_isDefinedBulkViscosity && _isDefinedDxDt){
    if (!_isDefinedBulkViscosityL){
      _bulk_viscosity_L = _bulk_viscosity / _dx2Dt;
      if (_bulk_viscosity_L <= 0.0){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'bulk-viscosity_L' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      logDebug("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'bulk-viscosity_L': " << _bulk_viscosity_L);
      _isDefinedBulkViscosityL = true;
    } else {
      double bulkViscosityL = _bulk_viscosity / _dx2Dt;
      if (!tarch::la::equals(bulkViscosityL,_bulk_viscosity_L,1.0e-12)){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'bulk-viscosity_L' and 'bulk-viscosity'/('dx'*'dx'/'dt') do not fit!");
        assertion(false);
        _isValid = false;
      }
    }
  }
  // dx*dx/dt = bulk_viscosity/bulk_viscosity_L -> this case does not have to be regarded, since dx, dt have to be defined in the "toplevel" configuration


  // KBT = k_B*T
  if (_isDefinedTemperature && _isDefinedKB){
    if (!_isDefinedKBT){
      _kBT = _temp * _k_B;
      if (_kBT <= 0.0){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B'*'temperature' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      _isDefinedKBT = true;
    } else {
      double kBT = _temp*_k_B;
      if (!tarch::la::equals(kBT/_kBT,1.0,1.0e-12)){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B'*'temperature' does not pass equality test!");
        assertion(false);
        _isValid = false;
      }
    }
  }

  // k_B = KBT / T
  if (_isDefinedTemperature && _isDefinedKBT){
    if (!_isDefinedKB){
      _k_B = _kBT/_temp;
      if (_k_B <= 0.0){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      logDebug("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B': " << _k_B);
      _isDefinedKB = true;
    } else {
      double kB = _kBT/_temp;
      if (!tarch::la::equals(kB/_k_B,1.0,1.0e-12)){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B' does not pass equality test!");
        assertion(false);
        _isValid = false;
      }
    }
  }


  // T = KBT/k_B
  if (_isDefinedKB && _isDefinedKBT){
    if (!_isDefinedTemperature){
      _temp = _kBT /_k_B;
      if (_temp <= 0.0){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'temperature' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      logDebug("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'temperature': " << _temp);
      _isDefinedTemperature = true;
    } else {
      double temp = _kBT/_k_B;
      if (!tarch::la::equals(temp,_temp,1.0e-12)){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'temperature' does not pass equality test!");
        assertion(false);
        _isValid = false;
      }
    }
  }


  // k_B_L = KBT* (dt^2/(dx^5*density))
  if (_isDefinedKBT && _isDefinedDt2Dx2PlusDDensity){
    if (!_isDefinedKBL){
      _k_B_L = _kBT*_dt2Dx2PlusDDensity;
      if (_k_B_L <= 0.0){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B_L' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      logDebug("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B_L': " << _k_B_L);
      _isDefinedKBL = true;
    } else {
      double kBL = _kBT*_dt2Dx2PlusDDensity;
      if (!tarch::la::equals(kBL/_k_B_L,1.0,1.0e-12)){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B_L' does not pass equality test!");
        assertion(false);
        _isValid = false;
      }
    }
  }


  // KBT = k_B_L / (dt^2/(dx^5*density))
  if (_isDefinedKBL && _isDefinedDt2Dx2PlusDDensity){
    if (!_isDefinedKBT){
      _kBT = _k_B_L/_dt2Dx2PlusDDensity;
      if (_kBT <= 0.0){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B'*'temperature' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      _isDefinedKBT = true;
    } else {
      double kBT = _k_B_L/_dt2Dx2PlusDDensity;
      if (!tarch::la::equals(kBT/_kBT,1.0,1.0e-12)){
        _log.error("computeUndefinedFluctuatingLatticeBoltzmannValues()", "'k_B'*'temperature' does not pass equality test!");
        assertion(false);
        _isValid = false;
      }
    }
  }


  // (dt^2/(dx^5*density)) = k_B_L / KBT -> this test is not necessary since dt,dx,density have to be defined in the "toplevel" configuration
}

double peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::
getFluctuatingLatticeBoltzmannRelaxationTime(int i) const {
  if (_fluctuating_LB_relaxationTimes.size() == 0){
    _log.error("getFluctuatingLatticeBoltzmannRelaxationTime()", "vector has size 0!");
    assertion(false);
    return -10.0;
  }
  assertion( (i > -1) && (i < _fluctuating_LB_numberRelaxationTimes) );

  return _fluctuating_LB_relaxationTimes[i];
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::
checkFluctuatingLatticeBoltzmannConfiguration() const{
  bool isValid = _isDefinedDx & _isDefinedDt
               & _isDefinedDensity & _isDefinedKB & _isDefinedKBL
               & _isDefinedTemperature & _isDefinedBulkViscosity
               & _isDefinedBulkViscosityL;


  assertion(_isDefinedDx);
  assertion(_isDefinedDt);
  assertion(_isDefinedDensity);
  assertion(_isDefinedKB);
  assertion(_isDefinedKBL);
  assertion(_isDefinedTemperature);
  assertion(_isDefinedBulkViscosity);
  assertion(_isDefinedBulkViscosityL);
  if (!isValid){
    logError("checkFluctuatingLatticeBoltzmannConfiguration()", "Fluctuating LB config not valid!");
    assertion(false);
  }
}

int peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::
getFluctuatingLatticeBoltzmannNumberRelaxationTimes() const {
  return _fluctuating_LB_numberRelaxationTimes;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::setBoltzmannConstant(double val){
  _k_B = val;
}

double peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::getBoltzmannConstant() const {
  return _k_B;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::setBoltzmannConstantL(double val){
  _k_B_L = val;
}

double peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::getBoltzmannConstantL() const {
  return _k_B_L;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::setTemperature(double val){
  _temp = val;
}

double peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::getTemperature() const {
  return _temp;
}


double peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::getTemperatureL() const {
  return _temp_L;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::setBulkViscosity(double val){
  _bulk_viscosity = val;
}


double peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::getBulkViscosity() const {
  return _bulk_viscosity;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::setBulkViscosityL(double val){
  _bulk_viscosity_L = val;
}


double peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::getBulkViscosityL() const {
  return _bulk_viscosity_L;
}

#endif // _LATTICEBOLTZMANN_FLUCTUATINGLATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_
