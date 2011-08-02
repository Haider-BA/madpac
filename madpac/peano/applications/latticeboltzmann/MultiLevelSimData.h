// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_MULTILEVELSIMDATA_H_
#define _LATTICEBOLTZMANN_MULTILEVELSIMDATA_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockState.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockState.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      class MultiLevelSimData;
    }
  }
}


/** stores simulation data for all grid levels and in addition provides access to the corresponding
 *  parameters on different levels
 *
 * @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::MultiLevelSimData {
  public:
    /** empty constructor */
    MultiLevelSimData();

    /** gets the simulation data from the reference level
     *  @param currentLevel and from this computes all other levels,
     *  starting from level 0 and going to @param numberLevels-1. For the computation, the scaling
     *  type @param scaling has to be defined; thus, one has to say whether the velocities or the
     *  viscosities are held constant on the grid levels.
     *  We need a template here, as we initialise the MultiLevelSimData by the state of the system.
     *  The state, however, can be represented by different classes (regular-grid state, spacetree-grid-state,
     *  faxen-state...).
     */
      template<class SimData>
      MultiLevelSimData(const SimData &simData);
    ~MultiLevelSimData();

    /** returns the SimData of level @param level. */
    const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&
    getSimData(const int level) const;

    const int getNumberOfGridLevels() const;

    void setNumberOfGridLevels(const int levels);

    const int getReferenceLevel() const;

  private:
    /** returns the simulation data corresponding to level @param level using the velocity scaling;
     *  as input, this function needs a reference SimData-object @param sim
     */
    template<class SimData>
    peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState
    setSimData(
      const int level,
      const SimData& sim
    );

    /** the number of grid levels augmented by 1 ! Remember that the grid component enumerates the tree levels
     *  starting with 0 (root) and going down to maxTreeLevel(). Thus _numberLevels is maxTreeLevel()+1. */
    int _numberLevels;

    /** this is the level that is related to the input SimData-object
     */
    int _referenceLevel;

    /** stores all simulation data of all grid levels */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState *_multiLevelSimData;

    /** for logging */
    static tarch::logging::Log _log;
};


template<class SimData>
peano::applications::latticeboltzmann::MultiLevelSimData::
MultiLevelSimData(
const SimData &simData):
_numberLevels(simData.getNumberLevels()),
_referenceLevel(simData.getLevel()),
_multiLevelSimData(NULL) {
  // initialise array of simulation data
  assertion(simData.getNumberLevels() > 0);

  assertion(simData.getLevel() >= 0);
  assertion(simData.getLevel() < simData.getNumberLevels());


  _multiLevelSimData = new peano::applications::latticeboltzmann::blocklatticeboltzmann::
                           RegularGridBlockState[_numberLevels];
  assertion(_multiLevelSimData != NULL);

  // set data on all levels (based on the velocity scaling)
  for (int i = 0; i < _numberLevels; i++){
    _multiLevelSimData[i] = setSimData<SimData>(i,simData);
  }

}


template<class SimData>
peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState
peano::applications::latticeboltzmann::MultiLevelSimData::setSimData(
const int level,
const SimData& sim){
  peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState newSim;

  // Modification factor for viscosity
  double fac = pow(3.0,(double)(level-sim.getLevel()));
  // Modification factor for boltzmann constant
  double facD = pow(3.0,DIMENSIONS*(double)(level-sim.getLevel()));

  // index(numbers) of certain modes and modes themselves(for MRT-Humieres and FLB)
  tarch::la::Vector<LB_CURRENT_DIR,double> gamma(0.0);
  tarch::la::Vector<LB_CURRENT_DIR,double> mrtHumieresGamma(0.0);
  int numberGhostModes = 0;
  int numberShearModes = 0;
  int bulkModeIndex = 0;
  double bulkMode = 0.0;
  double shearMode = 0.0;

  // for the MRT-Humieres model
  int *shearModeIndex = NULL;
  int *ghostModeIndex = NULL;

  // set level information -> always refer to reference level!
  newSim.setLevel(sim.getLevel());
  newSim.setNumberLevels(sim.getNumberLevels());

  // set plotting information
  newSim.setPlotVTK(sim.plotVTK());
  newSim.setNumberTimestepsPerPlotting(sim.getNumberTimestepsPerPlotting());
  newSim.setVTKFilename(sim.getVTKFilename());

  // set info on performance measurement
  newSim.setMeasurePerformance(sim.measurePerformance());

  // set geometry and force info
  newSim.setComputeForces(sim.computeForces());
  newSim.setDynamicGeometry(sim.hasDynamicGeometry());

  // set new dx and dt
  newSim.setDx(sim.getDx()/fac);
  newSim.setDt(sim.getDt()/fac);

  newSim.setNumberTimesteps( ((int)fac)*sim.getNumberTimesteps() );
  newSim.setDensity(sim.getDensity());

  newSim.setCollisionModelId(sim.getCollisionModelId());
  newSim.setViscosityL(sim.getViscosityL()*fac);
  newSim.setBulkViscosityL(sim.getBulkViscosityL()*fac);

  newSim.setTau(3.0*newSim.getViscosityL() + 0.5);


  // set fluctuating Lattice Boltzmann parameters (FLB)
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
      _log.debug("setSimData()","only D2Q9- and D3Q19-model supported for the fluctuating lattice Boltzmann model!");
  }


  // determine relaxation parameters
  // set gamma to 1.0 for all mass and momentum modes
  for (int i = 0; i < bulkModeIndex; i++){
    gamma(i) = 1.0;
  }

  // compute bulk mode
  bulkMode = (newSim.getBulkViscosityL() - (CS_L_SQUARED/2.0)) /
               (newSim.getBulkViscosityL() + (CS_L_SQUARED/2.0));
  gamma(bulkModeIndex) = bulkMode;

  // compute shear mode
  shearMode = (newSim.getViscosityL() - (CS_L_SQUARED/DIMENSIONS)) /
              (newSim.getViscosityL() + (CS_L_SQUARED/DIMENSIONS));
  for (int i = bulkModeIndex+1; i < LB_CURRENT_DIR-numberGhostModes; i++){
    gamma(i) = shearMode;
  }

  // set ghost modes
  for (int i = LB_CURRENT_DIR-numberGhostModes; i < LB_CURRENT_DIR; i++){
    gamma(i) = sim.getGamma()(i-(LB_CURRENT_DIR-numberGhostModes));
  }

  // set all gamma values
  newSim.setGamma(gamma);

  // boltzmann constant
  newSim.setBoltzmannConstant(sim.getBoltzmannConstant()*facD);

  // set thermal scaling factor mu
  newSim.setMu(sim.getMu()*facD);

  // ---------------------- FLB end ------------------------ //

  // ---------------------- MRT-Humieres (start) ---------------- //
  bulkMode = 0.0;      // value of the relaxation parameter for the bulk mode
  shearMode = 0.0;     // value of the relaxation parameter for the shear modes
  numberGhostModes = 0;
  numberShearModes = 0;
  bulkModeIndex = 0;

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
      _log.debug("setSimData()","only D3Q15- and D3Q19-model supported for the MRT model!");
  }

  // compute bulk mode
  bulkMode = 1.0/( 0.5 + newSim.getBulkViscosityL() * 9.0/(5.0 - 9.0*CS_L_SQUARED) );

  // compute shear mode
  shearMode = 1.0/(3.0*newSim.getViscosityL() + 0.5);

  // determine relaxation parameters
  // set gamma to 0.0 for all parameters at start up (to initialise the moment conservative relaxation parameters)
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    mrtHumieresGamma(i) = 0.0;
  }

  // set bulk and shear modes
  mrtHumieresGamma(bulkModeIndex) = bulkMode;
  for (int i = 0; i < numberShearModes; i++){
    mrtHumieresGamma(shearModeIndex[i]) = shearMode;
  }

  // set ghost modes
  for (int i = 0; i < numberGhostModes; i++){
    mrtHumieresGamma(ghostModeIndex[i]) = sim.getMrtHumieresGamma()(ghostModeIndex[i]);
  }

  // set all MRT-Humieres modes
  newSim.setMrtHumieresGamma(mrtHumieresGamma);


  if (shearModeIndex != NULL){
    delete [] shearModeIndex;
    shearModeIndex = NULL;
  }
  if (ghostModeIndex != NULL){
    delete [] ghostModeIndex;
    ghostModeIndex = NULL;
  }

  // ------------------------ MRT-Humieres (end) -------------------------- //

  logDebug("setSimData()", "Level: " << newSim.getLevel() << " Number of levels: " << newSim.getNumberLevels());
  logDebug("setSimData()", "Dx: " << newSim.getDx());
  logDebug("setSimData()", "Dt: " << newSim.getDt());
  logDebug("setSimData()", "Density: " << newSim.getDensity());
  logDebug("setSimData()", "Viscosity: " << newSim.getViscosityL());
  logDebug("setSimData()", "Bulk Viscosity: " << newSim.getBulkViscosityL());
  logDebug("setSimData()", "Number timesteps: " << newSim.getNumberTimesteps());
  logDebug("setSimData()", "Tau: " << newSim.getTau());
  logDebug("setSimData()", "Boltzmann constant: " << newSim.getBoltzmannConstant());
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    logDebug("setSimData()", "Gamma " << i << ": " << newSim.getGamma()(i));
  }
  for (int i = 0; i < LB_CURRENT_DIR; i++){
    logDebug("setSimData()", "MRT-Gamma " << i << ": " << newSim.getMrtHumieresGamma()(i));
  }

  return newSim;
}


#endif /* _LATTICEBOLTZMANN_MULTILEVELSIMDATA_H_ */
