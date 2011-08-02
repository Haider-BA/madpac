// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano#ifndef _PEANO_KERNEL_MULTICORE_MULTILEVELSCHEDULER_ACTION_H_
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_SINGLE_LEVEL_CELL_LOOP_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_SINGLE_LEVEL_CELL_LOOP_H_


#include "peano/kernel/datatraversal/ActionSet.h"
#include "peano/kernel/datatraversal/ActionSetTraversal.h"


namespace peano {
  namespace kernel {
    namespace datatraversal {
      template <class LoopBody>
      class SingleLevelCellLoop;
    }
  }
}


/**
 * Loop over set of cells on a single level
 *
 * It needs an event handle (class), and this event handle has to implement
 * $void operator() (const Action& i)$, i.e. it has to be a functor. As soon
 * as you've implemented the actions (which is similar to the loop body of a
 * dForLoop), you replace your original run over the action list with something
 * like
 * \code
  typedef loops::GridHandleCellsLoopBody<Vertex,Cell,State,EventHandle> LoopBody;
  LoopBody loopBody(*this,vertices);
  peano::kernel::multicore::SingleLevelCellLoop<LoopBody>(_dataContainer.getNumberOfGridCells(),loopBody, _eventHandle.parallelise(tarch::la::volume(_dataContainer.getNumberOfGridCells())));
\endcode
 * See regulargrid's Grid implementation for a simple example.
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
 * !!! Grain Size
 *
 * t.b.d.
 *
 * !!! Heterogeneous Task Length
 *
 * t.b.d.
 *
 * !!! TBB Implementation
 *
 * t.b.d.
 *
 * @author Tobias Weinzierl
 */
template <class LoopBody>
class peano::kernel::datatraversal::SingleLevelCellLoop {
  private:
    peano::kernel::datatraversal::ActionSetTraversal _cellTraversal;
  public:
    /**
     * t.b.d.
     */
    SingleLevelCellLoop(
      const tarch::la::Vector<DIMENSIONS,int>&  range,
      const LoopBody&                           loopBody,
      int                                       grainSize,
      bool                                      runImmediately=true
    );

    /**
     * Creates a cell loop that is not initialised, i.e. you have to call init() explicitely.
     */
    SingleLevelCellLoop();

    void init(
      const tarch::la::Vector<DIMENSIONS,int>&  range
    );

    bool isInitialised() const;

    void run(
      const LoopBody& loopBody,
      int             grainSize
    );
};



#include "peano/kernel/datatraversal/SingleLevelCellLoop.cpph"

#endif
