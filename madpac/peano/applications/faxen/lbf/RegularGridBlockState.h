// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_FAXEN_LBANDFAXEN_RegularGridBlockState_H_ 
#define _PEANO_APPLICATIONS_FAXEN_LBANDFAXEN_RegularGridBlockState_H_


#include "peano/kernel/regulargrid/State.h"

#include "peano/applications/faxen/lbf/records/RegularGridBlockState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"

#include "peano/utils/Dimensions.h"
#include "peano/kernel/regulargrid/State.h"

#include "peano/applications/faxen/lbf/BlockState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/logging/Log.h"


namespace peano { 
namespace applications {
namespace faxen {
namespace lbf {
class RegularGridBlockState;
/**
 * Forward declaration
 */
class RegularGridBlockVertex;
/**
 * Forward declaration
 */
class RegularGridBlockCell;
}
}
}
}

/**
 * Blueprint for solver/application state.
 * 
 * This file has originally been created by PeProt and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author PeProt
 */


class peano::applications::faxen::lbf::RegularGridBlockState: public peano::kernel::regulargrid::State< peano::applications::faxen::lbf::records::RegularGridBlockState >, public peano::applications::faxen::lbf::BlockState {
private:
	typedef class peano::kernel::regulargrid::State< peano::applications::faxen::lbf::records::RegularGridBlockState >  Base;
	static tarch::logging::Log _log;

public:
	/**
	 * Default Constructor
	 *
	 * This constructor is required by the framework's data container. Do not
	 * remove it.
	 */
	RegularGridBlockState();

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
	RegularGridBlockState(const Base::PersistentState& argument);

	void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell>& checkpoint ) const;
	void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::lbf::RegularGridBlockVertex, peano::applications::faxen::lbf::RegularGridBlockCell>& checkpoint );

	/** sets/ gets the global number of simulated fluid cells */
#ifdef Parallel
	void setGlobalNumberOfCells(int cells);
	int getGlobalNumberOfCells() const;

	void setGlobalCpuTime(double time);
	double getGlobalCpuTime() const;
#endif

	/**
	 * Lattice Boltzmann component functions
	 */

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

	/**
	 *  Proxies for the Faxen component
	 */

	/**
	 * Proxy for getting SOR relaxation factor.
	 */
	double getRelaxationFactor() const;

	/**
	 * Proxy for setting SOR relaxation factor.
	 * @param omega relaxation factor.
	 */
	void   setRelaxationFactor(double omega);

	/**
	 * Proxy for getting upwind differentiation factor.
	 */
	double getUpwindDiffFactor() const;

	/**
	 * Proxy for setting upwind differentiation factor.
	 * @oaran gamma upwind differentiation factor.
	 */
	void   setUpwindDiffFactor(double gamma);

	/**
	 * Proxy for getting maximum number of iterations.
	 */
	int    getItermax() const;

	/**
	 * Proxy for setting maximum number of iterations.
	 * @param itermax maximum number of iterations.
	 */
	void   setItermax(int itermax);

	/**
	 * Proxy for getting residual norm.
	 */
	double getResidualNorm() const;

	/**
	 * Proxy for setting residual norm.
	 * @param res residual norm.
	 */
	void setResidualNorm(double res);

	/**
	 * Proxy for getting Reynolds number.
	 */
	double getReynoldsNumber() const;

	/**
	 * Proxy for setting Reynolds number.
	 * @param Re Reynolds number.
	 */
	void   setReynoldsNumber(double Re);



	/**
	 * Proxy for getting gravity factor in horizontal direction.
	 */
	double getGravityX() const;

	/**
	 * Proxy for setting gravity factor in horizontal direction.
	 * @param GZ gravity factor in horizontal direction.
	 */
	void   setGravityX(double GX);

	/**
	 * Proxy for getting gravity factor in vertical direction.
	 */
	double getGravityY() const;

	/**
	 * Proxy for setting gravity factor in vertical direction.
	 * @param GX gravity factor in vertical direction.
	 */
	void   setGravityY(double GY);

	/**
	 * Proxy for setting gravity;
	 * @param gravity gravity vector.
	 */
	void setGravity(tarch::la::Vector<DIMENSIONS, double>& gravity);

	/**
	 * Proxy for getting initial pressure value.
	 */
	double getInitialP() const;

	/**
	 * Proxy for setting initial pressure value.
	 * @param PI initial pressure value.
	 */
	void   setInitialP(double PI);

	/**
	 * Proxy for getting initial horizontal velocity value.
	 */
	double getInitialU() const;

	/**
	 * Proxy for setting initial horizontal velocity value.
	 * @param UI initial horizontal velocity value.
	 */
	void   setInitialU(double UI);

	/**
	 * Proxy for getting initial vertical velocity value.
	 */
	double getInitialV() const;

	/**
	 * Proxy for setting initial vertical velocity value.
	 * @param VI initial vertical velocity value.
	 */
	void setInitialV(double VI);

	/**
	 * Proxy for setting initial velocity;
	 * @param velocity velocity vector.
	 */
	void setInitialVelocity(tarch::la::Vector<DIMENSIONS,double>& velocity);

	/**
	 * Proxy for getting time.
	 */
	double getTime() const;

	/**
	 * Proxy for resetting time.
	 */
	void   resetTime();

	/**
	 * Proxy for getting time safety factor.
	 */
	double getTimeSafetyFactor() const;

	/**
	 * Proxy for settign time safety factor.
	 * @param tau time safety factor
	 */
	void   setTimeSafetyFactor(double tau);

	/**
	 * Proxy for getting horizontal length of the domain.
	 */
	double getXlength() const;

	/**
	 * Proxy for setting horizontal length of the domain.
	 * @param xlength horizontal length of the domain.
	 */
	void   setXlength(double xlength);

	/**
	 * Proxy for getting vertical length of the domain.
	 */
	double getYlength() const;

	/**
	 * Proxy for setting vertical length of the domain.
	 * @param ylength vertical length of the domain.
	 */
	void setYlength(double ylength);

	/**
	 * Proxy for setting domain size
	 * @param domainSize domain size vector
	 */
	void setDomainSize(tarch::la::Vector<DIMENSIONS, double>& domainSize);

	/**
	 * Proxy for getting tolerance for pressure solver iterations.
	 */
	double getTolerance() const;

	/**
	 * Proxy for setting tolerance for pressure solver iterations.
	 * @param epsilon tolerance.
	 */
	void   setTolerance(double epsilon);

	/**
	 * Proxy for getting end time value.
	 */
	double getTEnd() const;

	/**
	 * Proxy for setting end time value.
	 * @param tEnd end time value.
	 */
	void   setTEnd(double tEnd);

	/**
	 * Proxy for getting time step.
	 */
	double getDelt() const;

	/**
	 * Proxy for stting time step.
	 * @param delt time step.
	 */
	void setDelt(double delt);

	/**
	 * Proxy for getting visualization time interval.
	 */
	double getVisDelt();

	/**
	 * Proxy for setting visualization time interval;
	 * @param vis_delt visualization time step.
	 */
	void setVisDelt(double vis_delt);

	/**
	 * Proxy for getting cell size in horizontal direction
	 */
	double getDelx() const;

	/**
	 * Proxy for setting cell size in horizontal direction
	 * @param delx cell size in horizontal direction
	 */
	void setDelx(double delx);

	/**
	 * Proxy for getting cell size in vertical direction
	 */
	double getDely() const;

	/**
	 * Proxy for setting cell size in vertical direction
	 * @param dely cell size in vertical direction
	 */
	void setDely(double dely);

	/**
	 * Proxy for setting mesh sizes;
	 * @param meshSize mesh size.
	 */
	void setMeshSize(tarch::la::Vector<DIMENSIONS, double>& meshSize);

	/**
	 * Proxy for getting filename counter and incrementing it by one
	 */
	int getFilenameCounterAndIncrementIt();

	/**
	 * Proxy for finding if only nse solver might be used.
	 */
	bool isOnlyNSE();

	/**
	 * Proxy for setting if only nse solver might be used;
	 * @param onlyNSE true if only nse solver might be used, false otherwise.
	 */
	void setOnlyNSE(bool onlyNSE);

	/**
	 * Proxy for getting the average density value extracted from NSE.
	 */
	double getAvrExtractedDensity();

	/**
	 * Proxy for setting the average density value after data injection from NSE;
	 * @param avrExtractedDensity average density.
	 */
	void setAvrExtractedDensity(double avrExtractedDensity);
};


#endif
