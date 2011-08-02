// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano#ifndef _PEANO_KERNEL_MULTICORE_MULTILEVELSCHEDULER_ACTION_H_
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_ACTION_SET_TRAVERSAL_LOOP_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_ACTION_SET_TRAVERSAL_LOOP_H_


#include "peano/kernel/datatraversal/ActionSetTraversal.h"


#ifdef SharedTBB
#include <tbb/parallel_for.h>
#include <tbb/blocked_range.h>
#include <tbb/spin_mutex.h>
#endif


namespace peano {
  namespace kernel {
    namespace datatraversal {
      template <class LoopBody>
      class ActionSetTraversalLoop;
    }
  }
}


template <class LoopBody>
class peano::kernel::datatraversal::ActionSetTraversalLoop {
  private:
    void loopParallel(
      const peano::kernel::datatraversal::ActionSetTraversal&  traversal,
      const LoopBody&                                          loopBody,
      int                                                      grainSize,
      bool                                                     invertTraversal
    );
    void loopSequential(
      const peano::kernel::datatraversal::ActionSetTraversal&  traversal,
      const LoopBody&                                          loopBody,
      bool                                                     invertTraversal
    );

    #ifdef SharedTBB
    static tbb::spin_mutex _mutex;

    class ActionSetTraversalLoopInstance {
      private:
        const LoopBody&                                 _loopBody;
        const peano::kernel::datatraversal::ActionSet&  _actionSet;
      public:
        ActionSetTraversalLoopInstance(
          const LoopBody&                                 loopBody,
          const peano::kernel::datatraversal::ActionSet&  actionSet
        );

        /**
         * Can be const as the method copies the loop body anyway.
         */
        void operator() (const tbb::blocked_range<int>& range) const;
    };
    #endif
  public:
    /**
     * Constructor.
     *
     * The loop bodies may not be const references, as they might hold their
     * own data such as enumerators. See comment.
     *
     * @param grainSize Grain size for the problem. If the grain size equals
     *                  zero, no parallelisation is taken into account. If the
     *                  grain size is bigger than the problem size, also no
     *                  parallelisation is taken into account. However, these
     *                  two cases are formally different aspects.
     */
    ActionSetTraversalLoop(
      peano::kernel::datatraversal::ActionSetTraversal traversal,
      const LoopBody&                                  loopBody,
      int                                              grainSize,
      bool                                             invertTraversal
    );
};



#include "peano/kernel/datatraversal/ActionSetTraversalLoop.cpph"

#endif
