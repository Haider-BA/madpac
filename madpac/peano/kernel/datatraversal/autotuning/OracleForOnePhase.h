// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_H_


#include <map>
#include <string>


namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace autotuning {
        class OracleForOnePhase;

        enum MethodTrace {
          RegularGridLoadVertices  = 0,
          RegularGridStoreVertices = 1,
          RegularGridHandleCells   = 2,
          /**
           * How shall the store process be parallelised. There is no such flag for
           * the store process as the store process forwards information from the
           * finer levels to the coarser levels. Consequently, I cannot parallelise
           * it without accepting race conditions.
           */
          SpacetreeGridLoadVertices = 3,
          SpacetreeGridSetCounter   = 4,
          SpacetreeGridCallEnterCellAndLoadSubCellsWithinTraverse  = 5,
          SpacetreeGridCallLeaveCellAndStoreSubCellsWithinTraverse = 6
        };

        const int NumberOfDifferentMethodsCalling = 7;

        std::string toString( const MethodTrace& methodTrace );
      }
    }
  }
}


/**
 * Abstract superclass of all oracles
 *
 * !!! Copy constructor
 *
 * The oracle singleton never works with the original oracle. Instead, it
 * clones its oracle strategy for each new phase (see createNewOracle()).
 *
 * @author Svetlana Nogina, Tobias Weinzierl
 */
class peano::kernel::datatraversal::autotuning::OracleForOnePhase {
  public:
    virtual ~OracleForOnePhase() {}

    /**
     * This operation is not const, as the oracle might insert further computations.
     *
     * @see peano::kernel::datatraversal::autotuning::Oracle::parallelise()
     */
    virtual int parallelise(int problemSize, MethodTrace askingMethod ) = 0;

    /**
     * Informs oracle that the parallel code fraction has terminated. The last
     * fraction is the one, parallelise() has been called for before. There's
     * never more than one section running in parallel.
     */
    virtual void parallelSectionHasTerminated(double elapsedCalendarTime) = 0;

    /**
     * Plot something to info log device.
     */
    virtual void plotStatistics() = 0;

    /**
     * Clone this oracle. This operation is used by the singleton whenever a
     * piece of code asks for parallelisation that never asked before.
     */
    virtual OracleForOnePhase* createNewOracle() const = 0;
};


#endif
