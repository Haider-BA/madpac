// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_WITH_INTERVAL_SEARCH_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_WITH_INTERVAL_SEARCH_H_


#include "peano/kernel/datatraversal/autotuning/OracleForOnePhase.h"
#include "tarch/logging/Log.h"


#include <map>
#include <vector>


namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace autotuning {
        class OracleForOnePhaseWithIntervalSearch;
      }
    }
  }
}


/**
 *
 * @image html Oracle-interval-search.png
 *
 * @author Svetlana Nogina
 */
class peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithIntervalSearch: public peano::kernel::datatraversal::autotuning::OracleForOnePhase {
  private:
    static tarch::logging::Log  _log;

    /**
     * Maps oracle id's to indexes
     */
    std::map< int, int> _oracles;

    /**
     * Time values measured in the test runs
     */
    std::vector< std::map<int, double> >     _runTimes;


    /**
     *     Contains grain size for current method and problem size, which are to test next:
     *     0. iteration is sequential, grainSize > 0 is parallel.
     */
    std::vector< std::map<int, int> >        _iterationGrainSizes;

    /**
     * Grain sizes for current method and problem size with the best time result yet
     */
    std::vector< std::map<int, int> > _bestGrainSizes;

    /**
     * Holds for each method the maximal problem size, which should be run sequential.
     * All problems for the same oracle-method pair with smaller or equal size are expected
     * to be most efficient in sequential.
     */
    std::vector<int>   _sequentialProblemSizes;

    /**
     * Holds minimal problem sizes with speedup in the parallel run.
     * Bigger problems for the same method can be tested beginning with the grain size 1.
     */
    std::vector<int>   _parallelProblemSizes;

    int _currentMethod;

    int _problemSize;

    static const int METHODS_NUMBER;

    /**
     * Stores the maximal available number of threads.
     */
    int _threads;

  public:
    OracleForOnePhaseWithIntervalSearch();

    /**
     *  Returns the granularity parameter grainSize: number of iterations assigned to a thread at once.
     *  Grains sizes are tested between 0 (sequential run), 1 and problemSize/threads.
     *
     *  In the tuning phase function returns the currently tested grain size.
     *  After tuning is completed, it returns the best found grain size.
     *
     *  If this method was previously tested for bigger problem
     *  and the sequential run had best performance, return 0 (sequential)
     */
    virtual int parallelise(int problemSize, MethodTrace askingMethod );

	/**
     * If the elapsedCalendarTime is better than the time saved for this method-size pair,
     * elapsedCalendarTime is written to runTimes and the value of the bestGrainSize is set to the
     * recently tested grain size.
     *
     * The grain size for the next test iteration is set to the middle
     * between the former best grain size and the recently tested grain size.
     * If the difference between both is <= 1, test is finished for this method-size pair.
     */
    virtual void parallelSectionHasTerminated(double elapsedCalendarTime);

    /**
     * Output for each method-problemSize pair best grain sizes and best run times.
     */
    virtual void plotStatistics();

    virtual OracleForOnePhase* createNewOracle() const;
};


#endif
