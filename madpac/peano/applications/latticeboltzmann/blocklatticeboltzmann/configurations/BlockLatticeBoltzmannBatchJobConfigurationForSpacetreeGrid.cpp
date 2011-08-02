#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/runners/BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid.h"
#include "tarch/configuration/TopLevelConfigurationFactory.h"


registerTopLevelConfiguration( peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid )


const int peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
_numberOfVariables =
  20
+ peano::applications::latticeboltzmann::configurations::
  LatticeBoltzmannCollisionModelConfiguration::_numberOfVariablesForFluctuatingLatticeBoltzmann;


tarch::logging::Log
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid"
);




peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid():
  tarch::configuration::TopLevelConfiguration(),
  _latticeBoltzmannConfiguration(peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration()),
  _plotterConfiguration(peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration()),
  _isValid(true){
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::~BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid() {
}


std::string peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::getTag() const {
  return "run-blocklatticeboltzmann-on-spacetree-grid";
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  while (xmlReader->read()){

    if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT ) {

      // collision model configurations
      if (xmlReader->getNodeName() == peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::TAG){
        logInfo("parseSubtag()", "Parse "<< peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration::TAG);
        _latticeBoltzmannConfiguration.parseSubtag(xmlReader);
      } else if (xmlReader->getNodeName() == scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration::TAG){
        _scenarioConfiguration.parseSubtag(xmlReader);
      } else if (xmlReader->getNodeName() == peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::TAG){
        logInfo("parseSubtag()", "Parse " << peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::TAG);
        peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration newConfiguration;
        newConfiguration.parseSubtag(xmlReader);
        _collisionModelConfigurations.push_back(newConfiguration);

      } else if (xmlReader->getNodeName() == peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::TAG){
        logInfo("parseSubtag()", "Parse " << peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration::TAG);
        _plotterConfiguration.parseSubtag(xmlReader);
      } else if (xmlReader->getNodeName() == peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::TAG){
        logInfo("parseSubtag()", "Parse " << peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration::TAG);
        _spacetreeGridConfiguration.parseSubtag(xmlReader);
      } else if (xmlReader->getNodeName() == _builtinGeometryConfiguration.getTag()){
        logInfo("parseSubtag()", "Parse geometry");
        _builtinGeometryConfiguration.parseSubtag(xmlReader);
      #if defined(Precice)
      } else if (xmlReader->getNodeName() == _preciceConfiguration.getTag()){
        logInfo("parseSubtag()", "Parse precice configuration");
        _preciceConfiguration.parseSubtag(xmlReader);
      #endif
      } else if ( xmlReader->getNodeName() == _logConfiguration.getTag() ) {
        _logConfiguration.parseSubtag(xmlReader);
      } else if ( xmlReader->getNodeName() == _logFormatConfiguration.getTag() ) {
        _logFormatConfiguration.parseSubtag(xmlReader);
      }
      #if defined(SharedTBB)
      else if ( xmlReader->getNodeName() == _coreConfiguration.getTag() ) {
        _coreConfiguration.parseSubtag(xmlReader);
      }
      #endif
      else {
        logError("parseSubtag()", "Unknown Subtag " << xmlReader->getNodeName() << " in config");
        assertion(false);
      }
    } else if ( xmlReader->getNodeType()== tarch::irr::io::EXN_ELEMENT_END ) {
      // end was found
      if ( getTag() == xmlReader->getNodeName() ) {
        return;
      }
    }
  }
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::isValid() const {
  bool isValid = true;
  if (_scenarioConfiguration.getScenario() != scenario::latticeboltzmann::blocklatticeboltzmann::PRECICE_SCENARIO){
    isValid = isValid && _builtinGeometryConfiguration.isValid();
  }
  #if defined(Precice)
  else {
    isValid = isValid && _preciceConfiguration.isValid();
  }
  #endif
  return isValid && _isValid && _logConfiguration.isValid()
                  && _logFormatConfiguration.isValid()
                  && _scenarioConfiguration.isValid()
                  #if defined(SharedTBB)
                  && _coreConfiguration.isValid()
                  #endif
                  && _spacetreeGridConfiguration.isValid()
                  ;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configuration tag corresponding to peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid. " << std::endl
      << "  The xml tag has to contain the following attributes: " << std::endl
      << std::endl
      << "    | attribute name | semantics | allowed values " << std::endl
      << "    |                |           | " << std::endl
      << std::endl
      << "  The xml tag has to contain the following subtags: " << std::endl
      << "    - tag 1 (dummy)" << std::endl
      << "    - tag 2 (dummy)" << std::endl
      << "  -->" << std::endl;
  if ( isValid() ) {
    out << "<" << getTag() << "@todo insert your attributes here >" << std::endl;
  }
  else {
    out << "<" << getTag() << "@todo insert your dummy-attributes here >" << std::endl;
  }
  // @todo insert your subtags here, i.e. call toXMLString() for them
  out << "</" << getTag() << ">" << std::endl;
}


tarch::configuration::TopLevelConfiguration* peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::clone() const {
  return new peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid();
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::interpreteConfiguration() {
  int referenceLevel = _spacetreeGridConfiguration.getReferenceLevel();
  double domainLength = 3.0*_spacetreeGridConfiguration.getDomainSize()(0);
  // determine meshsize from peano grid and divide it by LB_BLOCKSIZE to determine LB cell size
  double meshSize = 1.0/((double) tarch::la::aPowI(referenceLevel,3)) * domainLength/((double) LB_BLOCKSIZE);
  _latticeBoltzmannConfiguration.setDx(meshSize);

  computeUndefinedValues();
  _scenarioConfiguration.computeUndefinedValues(
    _latticeBoltzmannConfiguration.getDx(),
    _latticeBoltzmannConfiguration.getDt()
  );
  peano::applications::latticeboltzmann::blocklatticeboltzmann::runners::BlockLatticeBoltzmannBatchJobRunnerForSpacetreeGrid runner;
  // @insert your code here
  return runner.run(*this);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
computeUndefinedValues(){

  // determine other variables by iteration over the computeUndefinedValues() function
  for (int i = 0; i < _numberOfVariables; i++){

  // try to compute undefined values
  bool everythingIsFine = _latticeBoltzmannConfiguration.computeUndefinedValues();


  // catch errors
  if (!everythingIsFine){
    _log.error("computeUndefinedValues()", "error encountered during determination of undefined simulation parameters!");
    assertion(false);
    _isValid = false;
  }

  // compute undefined values in the collision model configuration
  for (unsigned int i = 0; i < _collisionModelConfigurations.size(); i++){
    // synchronise with other classes
    synchronise(i);
    _collisionModelConfigurations[i].computeUndefinedValues();
  }
  }

  // check collision models for consistency and set the _isValid flag
  _latticeBoltzmannConfiguration.checkConfiguration();
  checkAdaptiveLatticeBoltzmannCollisionModelConfigurations();

  // set _isValid flag with respect to the other configuration parts
  _isValid = _isValid & _latticeBoltzmannConfiguration.isValid() & _plotterConfiguration.isValid();
  _isValid = _isValid & _spacetreeGridConfiguration.isValid();
  assertion(_isValid);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
checkAdaptiveLatticeBoltzmannCollisionModelConfigurations() const {

  double hMin = 0.0;
  double hMax = 0.0;

  // if there is no collision model specified, throw error!
  if (_collisionModelConfigurations.size() < 1){
    _log.error("checkAdaptiveLatticeBoltzmannCollisionModelConfigurations()", "no collision model specified!");
    assertion(false);
  }

  // loop over all collision model configurations and check meshsizes...
  for (unsigned int i = 0; i < _collisionModelConfigurations.size(); i++){
    double hMin1 = _collisionModelConfigurations[i].getHMin();
    double hMax1 = _collisionModelConfigurations[i].getHMax();

    for (unsigned int j = i+1; j < _collisionModelConfigurations.size(); j++){
      double hMin2 = _collisionModelConfigurations[j].getHMin();
      double hMax2 = _collisionModelConfigurations[j].getHMax();


      // if one of the given mesh sizes is contained in the others -> not valid
      if (    ((hMin1 > hMin2) && (hMin1 < hMax2))
           || ((hMax1 > hMin2) && (hMax1 < hMax2))
           || ((hMin2 > hMin1) && (hMin2 < hMax1))
           || ((hMax2 > hMin1) && (hMax2 < hMax1)) )
      {
        _log.error("checkAdaptiveLatticeBoltzmannCollisionModelConfigurations()", "the meshsizes connected to the collision models overlap!");
        assertion(false);
      }

      if ( tarch::la::equals(hMin1,hMin2) && tarch::la::equals(hMax1,hMax2)){
        _log.error("checkAdaptiveLatticeBoltzmannCollisionModelConfigurations()", "an interval is defined twice!");
        assertion(false);
      }
    }

    // regular check
    _collisionModelConfigurations[i].checkConfiguration();
  }

  // check again collision model configurations for gaps in their definition intervals
  // if for a hMin, there exists no hMax of another collision model and there is another hMin2 which
  // is smaller than hMin but not zero, then there is a gap; an analogous statement exists for hMax
  hMin = _collisionModelConfigurations[0].getHMin();
  hMax = _collisionModelConfigurations[0].getHMax();
  // first: find maximum and minimum meshsize specified!
  for ( unsigned int i = 0; i < _collisionModelConfigurations.size(); i++){
    if (hMin > _collisionModelConfigurations[i].getHMin()){
      hMin = _collisionModelConfigurations[i].getHMin();
    }
    if (hMax < _collisionModelConfigurations[i].getHMax()){
      hMax = _collisionModelConfigurations[i].getHMax();
    }
  }

  for (unsigned int i = 0; i < _collisionModelConfigurations.size(); i++){
    double hMin1 = _collisionModelConfigurations[i].getHMin();

    bool hasGap = true;

    // if there is a maximum meshsize that equals this minimum meshsize, there is no gap in the
    // collision model specification
    for (unsigned int j = 0; j < _collisionModelConfigurations.size(); j++){
      if ( tarch::la::equals(_collisionModelConfigurations[j].getHMax(),hMin1) && ( j != i) ){
        hasGap = false;
      }
    }
    // if the given minimum meshsize is the absolute minimum meshsize, then there is also no gap
    if (tarch::la::equals(hMin1,hMin)){
      hasGap = false;
    }

    if (hasGap){
      _log.error("checkAdaptiveLatticeBoltzmannCollisionModelConfigurations()","there is a gap in the collision model definition concerning meshsizes!");
      assertion(false);
    }
  }
}


const peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getLatticeBoltzmannConfiguration() const {
  return _latticeBoltzmannConfiguration;
}


peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getLatticeBoltzmannPlotterConfiguration(){
  return _plotterConfiguration;
}


const std::vector<peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration>&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getAdaptiveLatticeBoltzmannCollisionModelConfiguration() const {
  return _collisionModelConfigurations;
}


const peano::geometry::builtin::configurations::BuiltinGeometryConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getBuiltinGeometryConfiguration() const {
  return _builtinGeometryConfiguration;
}


#if defined(Precice)
const peano::geometry::precice::configurations::PreciceConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getPreciceConfiguration() const {
  return _preciceConfiguration;
}
#endif


const scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getBlockLatticeBoltzmannScenarioConfiguration() const {
  return _scenarioConfiguration;
}

const peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getSpacetreeGridConfiguration() const {
  return _spacetreeGridConfiguration;
}


const tarch::logging::configurations::LogFilterConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getLogConfiguration() const {
  assertion( isValid() );
  return _logConfiguration;
}


const tarch::logging::configurations::LogOutputFormatConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getLogFormatConfiguration() const {
  assertion( isValid() );
  return _logFormatConfiguration;
}


#if defined(SharedTBB)
const tarch::multicore::configurations::CoreConfiguration&
peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
getCoreConfiguration() const {
  assertion( isValid() );
  return _coreConfiguration;
}
#endif


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
initState(peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState& sim) const {
  tarch::la::Vector<LB_CURRENT_DIR,double> gamma(0.0);
  tarch::la::Vector<LB_CURRENT_DIR,double> mrtHumieresGamma(0.0);
  tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> collisionModelIds(-1);

  checkConsistencyOfCollisionModels();

  // get "general" parameters
  sim.setLevel(_spacetreeGridConfiguration.getReferenceLevel());
  sim.setNumberLevels(_spacetreeGridConfiguration.getTotalNumberOfGridLevels());
  sim.setDx(_latticeBoltzmannConfiguration.getDx());
  sim.setDt(_latticeBoltzmannConfiguration.getDt());

  // set timesteps, density, channel sizes etc.
  sim.setComputeForces(_scenarioConfiguration.computeForces());
  sim.setDynamicGeometry(_scenarioConfiguration.hasDynamicGeometry());
  sim.setNumberTimesteps(_latticeBoltzmannConfiguration.getNumberOfTimesteps());
  sim.setDensity(_latticeBoltzmannConfiguration.getDensity());

  sim.setTau(_latticeBoltzmannConfiguration.getTau());
  sim.setViscosityL(_latticeBoltzmannConfiguration.getViscosityL());

  // plotter things
  if (_plotterConfiguration.plotVTK()){
    sim.setPlotVTK(true);
    sim.setNumberTimestepsPerPlotting(_plotterConfiguration.getNumberTimestepsPerPlotting());
    sim.setVTKFilename(_plotterConfiguration.getVTKWriterBaseName());
  } else {
    sim.setPlotVTK(false);
  }

  // performance measurement
  sim.setMeasurePerformance(_latticeBoltzmannConfiguration.measurePerformance());

  // loop over all collision models and write the necessary information into sim
  // -> setup bulk viscosity, mu, Boltzmann's constant and gamma-relaxation parameters
  for (unsigned int i = 0; i < _collisionModelConfigurations.size(); i++){
    if (_collisionModelConfigurations[i].getCollisionModelName() == peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::BGK_NAME){

    } else if (_collisionModelConfigurations[i].getCollisionModelName() ==
               peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::FLUCTUATING_LATTICE_BOLTZMANN_NAME){
      int numberGhostModes = 0;  // number of ghost modes
      int bulkModeIndex = 0;     // index of the bulk mode
      double bulkMode = 0.0;     // value of the relaxation parameter for the bulk mode
      double shearMode = 0.0;    // value of the relaxation parameter for the bulk mode

      // set Boltzmann constant
      sim.setBoltzmannConstant(_collisionModelConfigurations[i].getBoltzmannConstantL());
      sim.setBulkViscosityL(_collisionModelConfigurations[i].getBulkViscosityL());
      // set mu
      sim.setMu(_collisionModelConfigurations[i].getBoltzmannConstantL()/(CS_L_SQUARED));

      //determine model (-> relaxation parameters)
      switch(LB_CURRENT_MODEL){
        case LB_D2Q9:
          numberGhostModes = 3;
          bulkModeIndex = 3;
          break;
        case LB_D3Q19:
          numberGhostModes = 9;
          bulkModeIndex = 4;
          break;
        default:
          _log.error("getStateForReferenceGridLevel()","only D2Q9- and D3Q19-model supported for the fluctuating lattice Boltzmann model!");
          assertion(false);
      }

      // determine relaxation parameters
      // set gamma to 1.0 for all mass and momentum modes
      for (int j = 0; j < bulkModeIndex; j++){
        gamma(j) = 1.0;
      }

      // compute bulk mode
      bulkMode = (_collisionModelConfigurations[i].getBulkViscosityL() - (CS_L_SQUARED/((double) DIMENSIONS)))/
                 (_collisionModelConfigurations[i].getBulkViscosityL() + (CS_L_SQUARED/((double) DIMENSIONS)));
      gamma(bulkModeIndex) = bulkMode;

      // compute shear mode
      shearMode = (_latticeBoltzmannConfiguration.getViscosityL() - (CS_L_SQUARED/2.0)) /
                  (_latticeBoltzmannConfiguration.getViscosityL() + (CS_L_SQUARED/2.0));
      for (int j = bulkModeIndex+1; j < LB_CURRENT_DIR-numberGhostModes; j++){
        gamma(j) = shearMode;
      }

      // set ghost modes
      for (int j = LB_CURRENT_DIR-numberGhostModes; j< LB_CURRENT_DIR; j++){
        gamma(j) = _collisionModelConfigurations[i].getFluctuatingLatticeBoltzmannRelaxationTime(j-(LB_CURRENT_DIR-numberGhostModes));
      }

      // set gamma to state records
      sim.setGamma(gamma);


    } else if (_collisionModelConfigurations[i].getCollisionModelName() ==
               peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::MRT_HUMIERES_NAME){
      int numberGhostModes = 0;   // number of ghost modes
      int numberShearModes = 0;

      int bulkModeIndex = 0;       // index of the bulk mode
      int *shearModeIndex = NULL;
      int *ghostModeIndex = NULL;
      double bulkMode = 0.0;      // value of the relaxation parameter for the bulk mode
      double shearMode = 0.0;     // value of the relaxation parameter for the bulk mode


      // set bulk viscosity
      sim.setBulkViscosityL(_collisionModelConfigurations[i].getBulkViscosityL());

      switch(LB_CURRENT_MODEL){
        case LB_D3Q15:
          numberGhostModes = 5;
          numberShearModes = 5;

          bulkModeIndex = 1;
          shearModeIndex = new int[numberShearModes];
          shearModeIndex[0] = 9;
          shearModeIndex[1] = 10;
          shearModeIndex[2] = 11;
          shearModeIndex[3] = 12;
          shearModeIndex[4] = 13;
          ghostModeIndex = new int[numberGhostModes];
          ghostModeIndex[0] = 2;
          ghostModeIndex[1] = 4;
          ghostModeIndex[2] = 6;
          ghostModeIndex[3] = 8;
          ghostModeIndex[4] = 14;
          break;
        case LB_D3Q19:
          numberGhostModes = 9;
          numberShearModes = 5;

          bulkModeIndex = 1;
          shearModeIndex = new int[numberShearModes];
          shearModeIndex[0] = 9;
          shearModeIndex[1] = 11;
          shearModeIndex[2] = 13;
          shearModeIndex[3] = 14;
          shearModeIndex[4] = 15;
          ghostModeIndex = new int[numberGhostModes];
          ghostModeIndex[0] = 2;
          ghostModeIndex[1] = 4;
          ghostModeIndex[2] = 6;
          ghostModeIndex[3] = 8;
          ghostModeIndex[4] = 10;
          ghostModeIndex[5] = 12;
          ghostModeIndex[6] = 16;
          ghostModeIndex[7] = 17;
          ghostModeIndex[8] = 18;
          break;
        default:
          _log.error("getStateForReferenceGridLevel()","only D3Q15- and D3Q19-model supported for the MRT model!");
          assertion(false);
      }

      // compute bulk mode
      bulkMode = 1.0/( 0.5 + _collisionModelConfigurations[i].getBulkViscosityL() * 9.0/(5.0 - 9.0*CS_L_SQUARED) );

      // compute shear mode
      shearMode = 1.0/(3.0*_latticeBoltzmannConfiguration.getViscosityL() + 0.5);

      // determine relaxation parameters
      // set gamma to 0.0 for all parameters at start up (to initialise the moment conservative relaxation parameters)
      for (int j = 0; j < LB_CURRENT_DIR; j++){
        mrtHumieresGamma(j) = 0.0;
      }

      // set bulk and shear modes
      mrtHumieresGamma(bulkModeIndex) = bulkMode;
      for (int j = 0; j < numberShearModes; j++){
        mrtHumieresGamma(shearModeIndex[j]) = shearMode;
      }

      // set ghost modes
      for (int j = 0; j < numberGhostModes; j++){
        mrtHumieresGamma(ghostModeIndex[j]) = _collisionModelConfigurations[i].getMRTHumieresRelaxationTime(j);
      }

      // set mrt Humieres-values to state records
      sim.setMrtHumieresGamma(mrtHumieresGamma);

      delete [] shearModeIndex;
      delete [] ghostModeIndex;
    }
  }

  // loop over all relevant grid levels, determine meshsize and find out collision model id
  if (sim.getNumberLevels()-sim.getLevel() > LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS){
    logInfo("getStateForReferenceGridLevel()", "Number of simulations too big!");
    assertion(false);
  }
  for (int i = _spacetreeGridConfiguration.getReferenceLevel() ; i < _spacetreeGridConfiguration.getTotalNumberOfGridLevels(); i++){

    // get current mesh size
    double currentMeshsize = sim.getDx()/((double) tarch::la::aPowI((i-_spacetreeGridConfiguration.getReferenceLevel()),3));
    unsigned int coll = 0;

    // find respective collision model
    for (unsigned int j = 0; j < _collisionModelConfigurations.size(); j++){
      if (    (_collisionModelConfigurations[j].getHMin() <= currentMeshsize)
          &&  (_collisionModelConfigurations[j].getHMax() > currentMeshsize) ){
       coll = j;
      }
    }

    if (_collisionModelConfigurations[coll].getCollisionModelName() ==
      peano::applications::latticeboltzmann::configurations::
      LatticeBoltzmannCollisionModelConfiguration::BGK_NAME){
      collisionModelIds(i-_spacetreeGridConfiguration.getReferenceLevel()) = peano::applications::latticeboltzmann::
                                        blocklatticeboltzmann::collisionmodels::
                                        BlockCollisionModelManager::BGK;
    } else if (_collisionModelConfigurations[coll].getCollisionModelName() ==
               peano::applications::latticeboltzmann::configurations::
               LatticeBoltzmannCollisionModelConfiguration::MRT_HUMIERES_NAME){
      collisionModelIds(i-_spacetreeGridConfiguration.getReferenceLevel()) = peano::applications::latticeboltzmann::
                                              blocklatticeboltzmann::collisionmodels::
                                              BlockCollisionModelManager::MRT_HUMIERES;
    } else if (_collisionModelConfigurations[coll].getCollisionModelName() ==
               peano::applications::latticeboltzmann::configurations::
               LatticeBoltzmannCollisionModelConfiguration::FLUCTUATING_LATTICE_BOLTZMANN_NAME){
      collisionModelIds(i-_spacetreeGridConfiguration.getReferenceLevel()) = peano::applications::latticeboltzmann::
                                        blocklatticeboltzmann::collisionmodels::
                                        BlockCollisionModelManager::FLUCTUATING_LATTICE_BOLTZMANN;
    }
  }
  sim.setCollisionModelId(collisionModelIds);

}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
checkConsistencyOfCollisionModels() const{
  // vectors containing the indices of the corresponding collision models in the collision model configuration-vector
  // in case of new collision model -> add consistency checks HERE!!!
  std::vector<int> fluctuatingLatticeBoltzmannModels;
  std::vector<int> mrtHumieresModels;

  fluctuatingLatticeBoltzmannModels.clear();
  mrtHumieresModels.clear();

  // set up indices
  for (unsigned int i = 0; i < _collisionModelConfigurations.size(); i++){
    if (_collisionModelConfigurations[i].getCollisionModelName() ==
        peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::BGK_NAME){
    } else if (_collisionModelConfigurations[i].getCollisionModelName() ==
        peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::FLUCTUATING_LATTICE_BOLTZMANN_NAME){

      fluctuatingLatticeBoltzmannModels.push_back(i);

    } else if (_collisionModelConfigurations[i].getCollisionModelName() ==
             peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration::MRT_HUMIERES_NAME){
      mrtHumieresModels.push_back(i);
    }
  }

  // check consistency of all models (nop for BGK ;-) )
  checkConsistencyOfFluctuatingLatticeBoltzmann(fluctuatingLatticeBoltzmannModels);
  checkConsistencyOfMRTHumieres(mrtHumieresModels);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
checkConsistencyOfFluctuatingLatticeBoltzmann(
std::vector<int> index) const {

  // if there is no configuration given, nop
  if (index.size() == 0){
    return;
  }

  peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration
  referenceConfig = _collisionModelConfigurations[index[0]];
  for (unsigned int i = 1; i < index.size(); i++){
    if (tarch::la::equals(referenceConfig.getBoltzmannConstant()/_collisionModelConfigurations[index[i]].getBoltzmannConstant(),1.0)){
      logError("checkConsistencyOfFluctuatingLatticeBoltzmann()", "Difference in k_B from different collision model configurations!");
      assertion(false);
    }
    if (tarch::la::equals(referenceConfig.getTemperature()/_collisionModelConfigurations[index[i]].getTemperature(),1.0)){
      logError("checkConsistencyOfFluctuatingLatticeBoltzmann()", "Difference in temperature from different collision model configurations!");
      assertion(false);
    }

    if(tarch::la::equals(referenceConfig.getBulkViscosity()/_collisionModelConfigurations[index[i]].getBulkViscosity(),1.0)){
       logError("checkConsistencyOfFluctuatingLatticeBoltzmann()", "Difference in bulk viscosity from different collision model configurations!");
       assertion(false);
    }
  }
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
checkConsistencyOfMRTHumieres(
std::vector<int> index) const {
  // if there is no configuration given, nop
  if (index.size() == 0){
    return;
  }

  peano::applications::latticeboltzmann::configurations::LatticeBoltzmannCollisionModelConfiguration
  referenceConfig = _collisionModelConfigurations[index[0]];
  for (unsigned int i = 1; i < index.size(); i++){

    if(tarch::la::equals(referenceConfig.getBulkViscosity()/_collisionModelConfigurations[index[i]].getBulkViscosity(),1.0)){
       logError("checkConsistencyOfMRTHumieres()", "Difference in bulk viscosity from different collision model configurations!");
       assertion(false);
    }
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid::
synchronise(unsigned int i) {

  assertion(i >= 0);
  assertion(i < _collisionModelConfigurations.size());
  if (_latticeBoltzmannConfiguration.isDefinedDx()){
    _collisionModelConfigurations[i].setDx(_latticeBoltzmannConfiguration.getDx());
  }
  if (_latticeBoltzmannConfiguration.isDefinedDt()){
    _collisionModelConfigurations[i].setDt(_latticeBoltzmannConfiguration.getDt());
  }
  if (_latticeBoltzmannConfiguration.isDefinedDensity()){
    _collisionModelConfigurations[i].setDensity(_latticeBoltzmannConfiguration.getDensity());
  }
}
