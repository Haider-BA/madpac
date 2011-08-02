// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano#ifndef _PEANO_KERNEL_MULTICORE_MULTILEVELSCHEDULER_ACTION_H_
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_DFOR_LOOP_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_DFOR_LOOP_H_


#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"


#include "peano/kernel/datatraversal/dForRange.h"
#include "tarch/multicore/BooleanSemaphore.h"


namespace peano {
  namespace kernel {
    namespace datatraversal {
      template <class LoopBody>
      class dForLoop;
    }
  }
}



/**
 * Simple d-dimensional For-Loop
 *
 * This class is a simple wrapper for for-loops that has one significant
 * advantage: It is parallelised if TBBs or OpenMP are included. The class
 * needs, besides the range (iterate space), an event handle (loop body) with
 * implements $void operator() (const tarch::la::Vector<DIMENSIONS,int>& i)$.
 * This means you write a simple class with a constructor and this one
 * operation. Then, you move the body of your original for-loop to the
 * implementation of the operator() and replace the original for loop by
 * something similar to
 * \code
  typedef loops::GridStoreVertexLoopBody LoopBody;
  LoopBody loopBody(*this,other arguments you need within the loop body);
  peano::kernel::datatraversal::dForLoop<LoopBody>(int-vector with loop range,loopBody);
\endcode
 *
 * The range implementation will copy the loop body for each thread, i.e. you
 * have to ensure that there is an appropriate copy constructor for your loop
 * body. The loop body class itself may have a state and also may modify this
 * state from call to call. However, this state ain't persistent, i.e. after
 * the very last iteration (and you actually don't know how many iterations
 * there will be due to load stealing), the complete object is thrown away.
 *
 * Besides the operator(), you also have to implement an operation
\code
void updateGlobalValues();
\endcode
 * This operation may update the global state of the application, as it is
 * thread-safe. If you wanna use your local thread body data that is not
 * persistent after the loop has terminated, use updateGlobalValues() to make
 * the data survive.
 *
 * !!! Sequential Implementation
 *
 * The sequential implementation is trivial and consists of only two steps: We
 * create a copy of the loop body (otherwise C++ won't translate the code as we
 * pass the original loop body as const reference but invoke a non-const functor
 * on it) and then execute a simple dfor.
 *
 * !!! Parallel Implementation (TBB)
 *
 * The TBB implementation is straightforward. While I could deploy the range
 * management to the loop bodys, i.e. the loop bodys' operator() runs over a
 * whole range, this would make the implementation more difficult. Instead, I
 * decided to require the loop body only to provide an operator() operating on
 * one single element.
 *
 * However, forcing TBB to create a task per loop element in turn induces a big
 * overhead. Thus, I introduced an intermediate layer: The embedded class
 * dForLoopInstance implements the loop over a (sub)-range, i.e. the dForLoop
 * itself just creates an instance of dForLoopInstance and invokes a parallel
 * for for this object. The object accepts a Peano range, traverses this range,
 * and invokes the loop body's operator() for each range element. It is
 * important that dForLoopInstance creates a thread-local copy of the loop body
 * - Peano allows loop bodys to have a (thread-wise) state. Thus, we have to
 * ensure that we are working on a copy and that not all threads are working on
 * the same loop body instance.
 *
 * @author Tobias Weinzierl
 */
template <class LoopBody>
class peano::kernel::datatraversal::dForLoop {
  private:
    static tarch::logging::Log _log;

    static tarch::multicore::BooleanSemaphore _semaphore;

    class dForLoopInstance {
      private:
        const LoopBody& _loopBody;
      public:
        dForLoopInstance( const LoopBody& loopBody );

        /**
         * Can be const as the method copies the loop body anyway.
         */
        void operator() (const dForRange& range) const;
    };
  public:
    /**
     * Constructor
     *
     * @param grainSize  Grain size of problem. See dForLoop for a
     *                   documentation. If the grain size equals zero, the
     *                   multithreading is switched off. Another term for grain
     *                   size is chunk size (OpenMP prefers this term).
     * @param handleBoundaryOfDomainSequential  The range describes a Cartesian
     *                   grid that is to be traversed. For some applications it
     *                   is essential that the grid of the domain is handled in
     *                   the right order whereas the internal can be traversed
     *                   in parallel. This flag switches such a behaviour on
     *                   and off.
     */
    dForLoop(
      const tarch::la::Vector<DIMENSIONS,int>&  range,
      const LoopBody&                           body,
      int                                       grainSize,
      bool                                      handleBoundaryOfDomainSequential
    );
};

#include "peano/kernel/datatraversal/dForLoop.cpph"

#endif
