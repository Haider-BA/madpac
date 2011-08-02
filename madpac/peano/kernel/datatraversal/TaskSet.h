// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano#ifndef _PEANO_KERNEL_MULTICORE_MULTILEVELSCHEDULER_ACTION_H_
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_TASK_SET_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_TASK_SET_H_

#ifdef SharedTBB
#include <tbb/task.h>
#endif

namespace peano {
  namespace kernel {
    namespace datatraversal {
      class TaskSet;
    }
  }
}


/**
 * Task Set
 *
 * This is my very simple wrapper of task parallelism in Peano. The class
 * provides only one type of constructor. This constructor is passed a set of
 * instances representing one functor each. The constructor executes all of
 * them in parallel (if this is the user's wish) and returns. Consequently,
 * this wrapper is the right choice iff all the task are totally independent
 * of each other.
 *
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::datatraversal::TaskSet {
  private:
    #ifdef SharedTBB
    template <class Functor>
    class GenericTask: public tbb::task {
      private:
        Functor&   _functor;
      public:
        GenericTask(Functor& functor);
        tbb::task* execute();
    };
    #endif

  public:
    /**
     * Constructor
     *
     * Takes the two tasks and executes them in parallel if parallelise equals
     * 1. parallelise is kind of a veto mechanism. It is defined as integer
     * although it has the semantics of a boolean. This decision is due to the
     * idea to have all the operations using the autotuning's oracle use the
     * same (integer) semantics.
     *
     * @param Parallelise either 0 or 1.
     */
    template <class Functor0, class Functor1>
    TaskSet(
      Functor0&  task0,
      Functor1&  task1,
      int        parallelise
    );
};


#include "peano/kernel/datatraversal/TaskSet.cpph"

#endif

