// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_WITH_OSCILLATING_SEARCH_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_WITH_OSCILLATING_SEARCH_H_


#include "peano/kernel/datatraversal/autotuning/OracleForOnePhase.h"

#include "tarch/logging/Log.h"

#include <map>


namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace autotuning {
        class OracleForOnePhaseWithOscillatingSearch;
      }
    }
  }
}


/**
 * This is an oracle for one phase
 *
 * !!! Model Assumptions
 *
 * @image html Oracle-OscillatingSearch.png
 *
 * - The optimal speedup curve is similar to a sink (convex is not that
 *   important).
 * - If splitting up the problem into two pieces (i.e. we use two threads)
 *   doesn't accelerate the application, splitting up the problem into
 *   smaller subtasks is absolutely useless. This is a very strong assumption,
 *   and I'm absolutely not sure whether it holds always.
 * - There's only few variants of problem sizes per operation, i.e. we can
 *   track the history of each variant-problem size combination explicitly.
 *
 *
 * !!! Algorithm
 *
 * The class handles tuples (a,b,t) internally. Each combination method
 * trace-problem size is mapped to one tuple.
 *
 * - Call parallelise() for a given problem size N:
 *   - No tuple for this call does exist:
 *     - Add tuple (0,N/2,max<int>) to database.
 *     - Return 0, i.e. tell the caller not to run anything in parallel.
 *   - Tuple (a,b,t) exists:
 *     - Remember this tuple locally.
 *     - Return a+b.
 * - Call loopHasTerminated(t_new):
 *   - Read tuple (a,b,t) that has been remembered from the parallelise() call
 *     before.
 *   - t=max<int>: (a,b,t) becomes (a,b,t_new).
 *   - t_new<t: (a,b,t) becomes (a+b,b,t_new).
 *   - Otherwise:
 *     - If a-b/2 < 0: (a,b,t) becomes (0,0,t).
 *     - Else: (a,b,t) becomes (a,-b/2,t).
 *
 * The last case distinction is my 'parallelise or not' switch. If the problem
 * scales on two processors, a becomes a positive number and the constraints
 * a>0, |b|<=a and -b<a hold always (proof is simple). Consequently, the value
 * a-b/2 never becomes negative. However, if there's no speedup for two threads,
 * the oracle immediately switches off the parallelisation completely.
 *
 * The image above illustrates the different grain sizes for a case where
 * parallelisation is not of use at all (green) an a simulation where it does
 * make sense (blue).
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithOscillatingSearch: public peano::kernel::datatraversal::autotuning::OracleForOnePhase {
  private:
    static tarch::logging::Log  _log;

    struct Tuple {
      int     _grainSize;
      int     _b;
      double  _time;

      Tuple(int problemSize);
      Tuple();
    };

    struct MeasurementDescription {
      int          _problemSize;
      MethodTrace  _askingMethod;

      MeasurementDescription(int problemSize, MethodTrace askingMethod);
      MeasurementDescription();

      bool operator<(const MeasurementDescription& rhs) const;
      bool operator==(const MeasurementDescription& rhs) const;
    };


    MeasurementDescription                  _currentMeasurementDescription;
    std::map<MeasurementDescription,Tuple>  _database;
  public:
    /**
     * This (very simple) countdown is counted down (per tuple) if the oracle
     * has found a perfect grain size, i.e. if b equals zero. Then, as soon as
     * the counter equals 0, b is reset to (max-grainsize)/2. The search is
     * restarted. Sometimes this is of value - in particular if you have a long
     * startup phase.
     *
     */
    OracleForOnePhaseWithOscillatingSearch();
    virtual ~OracleForOnePhaseWithOscillatingSearch();

    /**
     * t.b.d.
     */
    virtual int parallelise(int problemSize, MethodTrace askingMethod );

    /**
     */
    virtual void parallelSectionHasTerminated(double elapsedCalendarTime);

    virtual void plotStatistics();

    virtual OracleForOnePhase* createNewOracle() const;
};


#endif
