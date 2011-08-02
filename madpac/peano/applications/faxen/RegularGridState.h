// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_faxen_RegularGridState_H_
#define _PEANO_APPLICATIONS_faxen_RegularGridState_H_


#include "peano/kernel/regulargrid/State.h"

#include "peano/applications/faxen/records/RegularGridState.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
namespace applications {
namespace faxen {
class RegularGridState;
/**
 * Forward declaration
 */
class RegularGridVertex;
/**
 * Forward declaration
 */
class RegularGridCell;
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


class peano::applications::faxen::RegularGridState: public peano::kernel::regulargrid::State< peano::applications::faxen::records::RegularGridState > {
private:
	typedef class peano::kernel::regulargrid::State< peano::applications::faxen::records::RegularGridState >  Base;

public:
	/**
	 * Default Constructor
	 *
	 * This constructor is required by the framework's data container. Do not
	 * remove it.
	 */
	RegularGridState();

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
	RegularGridState(const Base::PersistentState& argument);

	void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell>& checkpoint ) const;
	void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::faxen::RegularGridVertex, peano::applications::faxen::RegularGridCell>& checkpoint );

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
	void mergeWithWorkerState(const RegularGridState& workerState);
#endif

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
	void   setInitialV(double VI);

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
	 * Proxy for getting filename counter and incrementing it by one
	 */
	int getFilenameCounterAndIncrementIt();
};


#endif
