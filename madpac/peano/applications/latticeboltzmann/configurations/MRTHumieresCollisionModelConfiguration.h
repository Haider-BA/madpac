// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_MRTHUMIERESCOLLISIONMODELCONFIGURATION_H_
#define _LATTICEBOLTZMANN_MRTHUMIERESCOLLISIONMODELCONFIGURATION_H_

/**
 *  This file includes all functions and static variables needed in case of a multiple-
 *  relaxation-time model configuration. For details on the variables and functions, see
 *  "LatticeBoltzmannCollisionModelConfiguration.h".
 */

const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::MRT_HUMIERES_NAME = "MRT-Humieres";
const std::string peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::MRT_HUMIERES_RELAXATION_TIMES = "ghost-mode-relaxation-times";
const int peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::_numberOfVariablesForMRTHumieres = 3;


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::parseMRTHumieresConfiguration(
tarch::irr::io::IrrXMLReader *xmlReader){
  int numberGhostModesToBeRead = 0;  // number of ghost modes with different relaxation parameters
  double *relaxationParams = NULL;   // stores the ghost mode relaxation parameters that have been read from the configuration file

  // read in ghost mode relaxation parameters ----------------------------------------//

  // switch for different fluctuating models
  switch(LB_CURRENT_MODEL){
    case LB_D3Q15:
      numberGhostModesToBeRead = 3;
      _MRT_Humieres_numberRelaxationTimes = 5;
      break;
    case LB_D3Q19:
      numberGhostModesToBeRead = 4;
      _MRT_Humieres_numberRelaxationTimes = 9;
      break;
    default:
      _log.error("parseMRTHumieresConfiguration()", "only D3Q15- and D3Q19-model supported at the moment!");
      _isValid = false;
      assertion(false);
      return;
  }

  relaxationParams = new double[numberGhostModesToBeRead];
  _MRT_Humieres_relaxationTimes.clear();

  // read in ghost mode relaxation parameters
  if ( xmlReader->getAttributeValue( MRT_HUMIERES_RELAXATION_TIMES.c_str() ) == 0 ) {
    _log.error("parseMRTHumieresConfiguration()", "Relaxation times 'ghost-mode-relaxation-times' for the ghost modes not specified!");
    _isValid = false;
    assertion(false);
  }
  else {

    std::stringstream getValues(std::stringstream::in | std::stringstream::out);
    getValues << (xmlReader->getAttributeValue(MRT_HUMIERES_RELAXATION_TIMES.c_str()));
    for (int i = 0; i < numberGhostModesToBeRead; i++){
      if (! getValues.eof()){
        getValues >> relaxationParams[i];

        logDebug("parseMRTHumieresConfiguration()", "Ghost mode relaxation parameter " << (i) << ": " << (relaxationParams[i]));
      } else {
        i = numberGhostModesToBeRead+10;
        // throw error
        _isValid = false;
        _log.error("parseMRTHumieresConfiguration()", "'ghost-mode-relaxation-times' could not be parsed!");
        assertion(false);
        return;
      }
    }
  }

  // check input data for consistency (-> range between 0.0 and 2.0)
  for (int i = 0; i < numberGhostModesToBeRead; i++){
    if ( (relaxationParams[i] <= 0.0) || (relaxationParams[i] >= 2.0) ){
      _log.error("parseMRTHumieresConfiguration()", "relaxation parameter out of range!");
      _isValid = false;
      assertion(false);
      return;
    }
  }

  // set the ghost mode relaxation times according to the model
  switch(LB_CURRENT_MODEL){
    case LB_D3Q15:
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[0]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[1]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[1]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[1]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[2]);
      break;
    case LB_D3Q19:
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[0]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[1]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[1]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[1]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[2]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[2]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[3]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[3]);
      _MRT_Humieres_relaxationTimes.push_back(relaxationParams[3]);
      break;
    default:
      _log.error("parseMRTHumieresConfiguration()", "only D3Q15- and D3Q19-model supported at the moment!");
      _isValid = false;
      assertion(false);
      return;
  }

  // read in ghost mode relaxation parameters (end) -----------------------------------//

  // read in bulk viscosity and corresponding nondimensionalised parameter (if not defined so far...)
  if (!_isDefinedBulkViscosity){
    if ( xmlReader->getAttributeValue( BULK_VISCOSITY.c_str() ) == 0 ) {
      _log.info("parseMRTHumieresConfiguration()", "bulk viscosity 'bulk-viscosity' not specified");
    }
    else {
      _bulk_viscosity  = xmlReader->getAttributeValueAsFloat( BULK_VISCOSITY.c_str() );
      if (_bulk_viscosity <= 0.0){
        _log.error("parseMRTHumieresConfiguration()", "'bulk-viscosity' is smaller or equal zero!");
        _isValid = false;
        assertion(false);
      }
      logDebug("parseMRTHumieresConfiguration()", "'bulk-viscosity': " << (_bulk_viscosity) );
      _isDefinedBulkViscosity = true;
    }
  }

  if (!_isDefinedBulkViscosityL){
    if ( xmlReader->getAttributeValue( BULK_VISCOSITY_L.c_str() ) == 0 ) {
      _log.info("parseMRTHumieresConfiguration()", "nondimensionalised bulk viscosity 'bulk-viscosity_L' not specified");
    }
    else {
      _bulk_viscosity_L  = xmlReader->getAttributeValueAsFloat( BULK_VISCOSITY_L.c_str() );
      if (_bulk_viscosity_L <= 0.0){
        _log.error("parseMRTHumieresConfiguration()", "'bulk_viscosity_L' is smaller or equal zero!");
        _isValid = false;
        assertion(false);
      }
      logDebug("parseMRTHumieresConfiguration()", "'bulk-viscosity_L': " << (_bulk_viscosity_L) );
      _isDefinedBulkViscosityL = true;
    }
  }

  // delete array
  delete [] relaxationParams;
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::computeUndefinedMRTHumieresValues() {

  // dx2dt = dx*dx/dt and dt2Dx5 = dt*dt/(dx*dx*dx*dx*dx)
  if (_isDefinedDx && _isDefinedDt){
    if (!_isDefinedDxDt){
      _dx2Dt = _dx*_dx/_dt;
      _dt2Dx2PlusD = _dt*_dt/(_dx*_dx
#if defined(Dim2)
          *_dx*_dx
#elif defined(Dim3)
          *_dx*_dx*_dx
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
      if ( (!tarch::la::equals(dx2Dt,_dx2Dt)) || (!tarch::la::equals(dt2Dx2PlusD,_dt2Dx2PlusD))){
        _log.error("computeUndefinedMRTHumieresValues()", "'dx', 'dt' and corresponding variables do not agree!");
        assertion(false);
        _isValid = false;
      }
    }
  }
  // no reversion of the upper case -> dx,dt shall be delivered by the input of the "toplevel" configuration!!!


  // bulk_viscosity = bulk_viscosity_L* (dx*dx/dt)
  if (_isDefinedBulkViscosityL && _isDefinedDxDt){
    if (!_isDefinedBulkViscosity){
      _bulk_viscosity = _bulk_viscosity_L * _dx2Dt;
      if (_bulk_viscosity <= 0.0){
        _log.error("computeUndefinedMRTHumieresValues()", "'bulk-viscosity' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      logDebug("computeUndefinedMRTHumieresValues()", "'bulk-viscosity': " << (_bulk_viscosity));
      _isDefinedBulkViscosity = true;
    } else {
      double bulkViscosity = _bulk_viscosity_L*_dx2Dt;
      if (!tarch::la::equals(bulkViscosity,_bulk_viscosity)){
        _log.error("computeUndefinedMRTHumieresValues()", "'bulk-viscosity' and 'bulk-viscosity_L'*'dx'*'dx'/'dt' do not fit!");
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
        _log.error("computeUndefinedMRTHumieresValues()", "'bulk-viscosity_L' is smaller or equal zero!");
        assertion(false);
        _isValid = false;
      }
      logDebug("computeUndefinedMRTHumieresValues()", "'bulk-viscosity_L': " << (_bulk_viscosity_L));
      _isDefinedBulkViscosityL = true;
    } else {
      double bulkViscosityL = _bulk_viscosity / _dx2Dt;
      if (!tarch::la::equals(bulkViscosityL,_bulk_viscosity_L)){
        _log.error("computeUndefinedMRTHumieresValues()", "'bulk-viscosity_L' and 'bulk-viscosity'/('dx'*'dx'/'dt') do not fit!");
        assertion(false);
        _isValid = false;
      }
    }
  }
  // dx*dx/dt = bulk_viscosity/bulk_viscosity_L -> this case does not have to be regarded, since dx, dt have to be defined in the "toplevel" configuration
}

double peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::getMRTHumieresRelaxationTime(int i) const {
  if (_MRT_Humieres_relaxationTimes.size() == 0){
    _log.error("getMRTHumieresRelaxationTime()", "vector size is zero!");
    assertion(false);
    return -10.0;
  }
  assertion( (i > -1) && (i < _MRT_Humieres_numberRelaxationTimes) );

  return _MRT_Humieres_relaxationTimes[i];
}


void peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::checkMRTHumieresConfiguration() const{
  bool isValid = _isDefinedDx & _isDefinedDt
               & _isDefinedBulkViscosity & _isDefinedBulkViscosityL;

  // update _isValid parameter
  if (!isValid){
    logError("checkMRTHumieresConfiguration()", "MRT Humieres config not valid!");
    assertion(false);
  }
}

int peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration::getMRTHumieresNumberRelaxationTimes() const {
  return _MRT_Humieres_numberRelaxationTimes;
}
#endif // _LATTICEBOLTZMANN_MRTHUMIERESCOLLISIONMODELCONFIGURATION_H_
