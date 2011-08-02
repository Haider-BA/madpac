// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_RegularGridState_H_
#define _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_RegularGridState_H_


#include "peano/kernel/regulargrid/State.h"

#include "peano/applications/poisson/jacobitutorial/records/RegularGridState.h"
#include "peano/applications/poisson/jacobitutorial/State.h"

#include "peano/kernel/gridinterface/Checkpoint.h"


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace jacobitutorial {
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
}

/**
 * State for the Jacobi Solver
 *
 * The state is a very primitive implementation. It basically manages two
 * attributes: A global counter and the relaxation factor. The global counter is
 * initialised with zero. Everytime the user writes a solution snapshot (see
 * mapping PlotSolution, it increments this counter. The relaxation factor is
 * set to 0.8 and never changed at all.
 *
 * \author Tobias Weinzierl
 */class peano::applications::poisson::jacobitutorial::RegularGridState: public peano::kernel::regulargrid::State< peano::applications::poisson::jacobitutorial::records::RegularGridState >, public peano::applications::poisson::jacobitutorial::State {
  private: 
    typedef class peano::kernel::regulargrid::State< peano::applications::poisson::jacobitutorial::records::RegularGridState >  Base;

  public:
    RegularGridState();
    RegularGridState(const Base::PersistentState& argument);

    void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell>& checkpoint ) const;
    void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<peano::applications::poisson::jacobitutorial::RegularGridVertex, peano::applications::poisson::jacobitutorial::RegularGridCell>& checkpoint );


    int getFilenameCounterAndIncrementIt();

    double getRelaxationFactor() const;

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
};


#endif
