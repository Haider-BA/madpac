// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano#ifndef _PEANO_KERNEL_MULTICORE_MULTILEVELSCHEDULER_ACTION_H_
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_ACTION_SET_TRAVERSAL_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_ACTION_SET_TRAVERSAL_H_


#include "peano/kernel/datatraversal/ActionSet.h"


namespace peano {
  namespace kernel {
    namespace datatraversal {
      class ActionSetTraversal;
    }
  }
}



/**
 * Cell Traversal
 *
 * Represents a complete traversal of a cell data structure. It consists of a
 * sequence of
 *
 * @author Svetlana Nogina, Tobias Weinzierl
 */
class peano::kernel::datatraversal::ActionSetTraversal {
  private:
    std::vector< ActionSet >  _actionSets;

  public:
    /**
     * Standard constructor.
     *
     * Please use static methods to create a cell traversal.
     */
    ActionSetTraversal(int numberOfActionSets);

    /**
     * Destructor
     */
    ~ActionSetTraversal();

    /**
     * Construct cell traversal for regular Cartesian grid. This traversal
     * identifies a red-black type colouring with @f$ 2^d @f$ colours, and it
     * consists solely of enter actions. You specify a @f$ numberOfCells_1 \times numberOfCells_2 \times \dots \times numberOfCells_d @f$
     * grid. The operation splits up the elements of this d-dimensional array
     * into @f$ 2^d @f$ different sets such that no two elements within one set
     * are adjacent to each other. And then it returns exactly this sequence of
     * sets that you can execute in parallel.
     *
     * @param numberOfCells Number of cells.
     */
    static ActionSetTraversal getParallelCartesianGridTraversal(const tarch::la::Vector<DIMENSIONS,int>& numberOfCells);

    /**
     * This is the sequential version of getSequentialCartesianGridTraversal().
     */
    static ActionSetTraversal getSequentialCartesianGridTraversal(const tarch::la::Vector<DIMENSIONS,int>& numberOfCells);

    /**
     * This operation takes a action set traversal representing a total order,
     * i.e. each action set holds one and only one action. It then assumes that
     * only actions working with the same id cannot run in parallel, and
     * reorders all actions according to this assumption. If there's an action
     * a and an action b with a being before b in input, a will also be before
     * b in the result. Otherwise, they might run in parallel.
     */
    static ActionSetTraversal sortIntoIdBins(const ActionSetTraversal& input);

    /**
     * Return the maximum path.
     *
     * This maximum path also is the number of actino sets
     */
    int getMaximumPath() const;

    const ActionSet& getActionSet( int i ) const;

    ActionSet& getActionSet( int i );

    std::string toString() const;
};



#endif
