// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SpacetreeGridBlockState_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SpacetreeGridBlockState_H_


#include "peano/kernel/spacetreegrid/State.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/SpacetreeGridBlockState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"

#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockState.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
      class SpacetreeGridBlockState;
      /**
       * Forward declaration
       */
      class SpacetreeGridBlockVertex;
      /**
       * Forward declaration
       */
      class SpacetreeGridBlockCell;
}
}
}
}

/**
 * Blueprint for solver/application state.
 *
 * This file has originally been created by RaPeP and may be manually adapted to
 * the needs of your application. We do not recommend to remove anything!
 *
 * \author RaPeP
 */


class peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState: public peano::kernel::spacetreegrid::State< peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState >,public peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockState{
  private:
    typedef class peano::kernel::spacetreegrid::State< peano::applications::latticeboltzmann::blocklatticeboltzmann::records::SpacetreeGridBlockState >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not
     * remove it.
     */
    SpacetreeGridBlockState();

    /**
     * Constructor
     *
     * This constructor is required by the framework's data container. Do not
     * remove it. It is kind of a copy constructor that converts an object which
     * comprises solely persistent attributes into a full attribute. This very
     * functionality is implemented within the super type, i.e. this constructor
     * has to invoke the correponsing super type's constructor and not the super
     * type standard constructor.
     */
    SpacetreeGridBlockState(const Base::PersistentState& argument);

    void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>& checkpoint ) const;
    void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex, peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockCell>& checkpoint );

    #ifdef Parallel
    /**
     * Merge worker state with global master state
     *
     * The state management follows a one-point-holds-it-all policy, i.e. before
     * and after each iteration, the global master (rank 0) is the only rank
     * that has a valid state object. Whenever the application starts up, this
     * valid state object is distributed among the working nodes. Whenever any
     * node finishes to iterate, it sends back its state to the global master
     * where all the state objects are merged into one big state object.
     *
     * This operation implements the merge process (the distribution is just a
     * simple copying), i.e. it is called on the master node only. Implement
     * your PDE-specific operations such as the computation of a global residual
     * here but ensure that you also call the super class' merge operation. The
     * this object is the master's state. The argument is the state that the
     * node just received from a worker.
     */
    void mergeWithWorkerState(const SpacetreeGridBlockState& workerState);
    #endif

    /** sets/ gets the grid level of consideration. For the regular grid, this is always 0. */
    void setLevel(int level);
    int getLevel() const;

    /** sets/ gets the number of grid levels. For the regular grid, this is always 1. */
    void setNumberLevels(int numberLevels);
    int getNumberLevels() const;

    void setDynamicGeometry(bool reflag);
    bool hasDynamicGeometry() const;

    void setComputeForces(bool computeForces);
    bool computeForces() const;

    /** sets/ gets the meshsize */
    void setDx(double dx);
    double getDx() const;

    /** sets/ gets the timestep */
    void setDt(double dt);
    double getDt() const;

    /** sets/ gets the number of timesteps */
    void setNumberTimesteps(int numberTimesteps);
    int getNumberTimesteps() const;

    /** sets/ gets the fluid density */
    void setDensity(double density);
    double getDensity() const;

    /** sets/ gets ids of a collision model */
    void setCollisionModelId(
      tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int> collisionModelId
    );
    tarch::la::Vector<LB_MAXIMUM_NUMBER_OF_SIMULATION_LEVELS,short int>
    getCollisionModelId() const;
    short int getCollisionModelId(int level) const;

    /** sets/ gets the dimensionless fluid viscosity */
    void setViscosityL(double viscosity);
    double getViscosityL() const;

    /** sets/ gets the dimensionless fluid bulk viscosity */
    void setBulkViscosityL(double bulkViscosity);
    double getBulkViscosityL() const;

    /** sets/ gets the dimensionless relaxation time */
    void setTau(double tau);
    double getTau() const;

    /** sets/ gets the Boltzmann's constant */
    void setBoltzmannConstant(double kB);
    double getBoltzmannConstant() const;

    /** sets/ gets the parameter mu (factor influencing the magnitude of fluctuations) */
    void setMu(double mu);
    double getMu() const;

    /** sets/ gets the relaxation parameters for the fluctuating LB model */
    void setGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma);
    tarch::la::Vector<LB_CURRENT_DIR,double> getGamma() const;

    /** sets/ gets the relaxation parameters for the MRT model */
    void setMrtHumieresGamma(tarch::la::Vector<LB_CURRENT_DIR,double> gamma);
    tarch::la::Vector<LB_CURRENT_DIR,double> getMrtHumieresGamma() const;

    /** sets/ gets the number of timesteps per VTK plot */
    void setNumberTimestepsPerPlotting(int steps);
    int getNumberTimestepsPerPlotting() const;

    /** returns the current timestep */
    int getTimestep() const;

    /** triggers the plotting, i.e. returns true if a VTK plot shall be done and increments the timestep */
    bool triggerPlotting();

    /** true, if VTK plotting shall be done */
    bool plotVTK() const;

    /** sets the plotVTK()-functionality */
    void setPlotVTK(bool plotVtk);

    void setVTKFilename(std::string filename);

    std::string getVTKFilename() const;


    /** set/ tell, whether the performance shall be measured */
    void setMeasurePerformance(bool measurePerformance);
    bool measurePerformance() const;

    /** sets/ gets the local number of simulated fluid cells */
    void setLocalNumberOfCells(int cells);
    int getLocalNumberOfCells() const;

    /** sets/ gets the global number of simulated fluid cells */
#ifdef Parallel
    void setGlobalNumberOfCells(int cells);
    int getGlobalNumberOfCells() const;

    void setGlobalCpuTime(double time);
    double getGlobalCpuTime() const;
#endif

    // -------------- spacetree specific things --------------------
    void setLastLevel(int level){
      Base::_stateData.setLastLevel(level);
    }
    int getLastLevel() const{
      return Base::_stateData.getLastLevel();
    }

    void setCurrentLevel(int level){
      Base::_stateData.setCurrentLevel(level);
    }
    int getCurrentLevel() const {
      return Base::_stateData.getCurrentLevel();
    }

    void setNextLevel(int level){
      Base::_stateData.setNextLevel(level);
    }
    int getNextLevel() const {
      return Base::_stateData.getNextLevel();
    }

    void setCellCounter(int count){
      Base::_stateData.setCellCounter(count);
    }
    int getCellCounter() const {
      return Base::_stateData.getCellCounter();
    }

    bool geometryChanged() const {
      return (Base::_stateData.getGeometryChanged() == 1);
    }

    void setGeometryChanged(bool geometryChanged){
      Base::_stateData.setGeometryChanged((short int) geometryChanged);
    }

  private:
    static tarch::logging::Log _log;
};


#endif
