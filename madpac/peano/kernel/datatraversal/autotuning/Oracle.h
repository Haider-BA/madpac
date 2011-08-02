// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano#ifndef _PEANO_KERNEL_MULTICORE_MULTILEVELSCHEDULER_ACTION_H_
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_H_

#include <vector>

#include <map>

#include "tarch/utils/Watch.h"
#include "peano/kernel/datatraversal/autotuning/OracleForOnePhase.h"
#include "tarch/multicore/BooleanSemaphore.h"


namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace autotuning {
        class Oracle;
      }
    }
  }
}


/**
 * Oracle for the Autotuning
 *
 * The oracle holds a set of OraceForOnePhase instances. If the respositories
 * switch to another adapter, they notify the oracle that they wanna switched
 * (switchToOracle()).
 *
 * !!! Jobs
 *
 * @image html Oracle-class-diagram.png
 *
 * - Administer oracles.
 * - Keep track of the current phase, i.e. of the adapter used at the moment.
 * - Measure times needed for the parallelisation and give the concrete oracles
 *   feedback about the time needed.
 *
 * @author Svetlana Nogina, Tobias Weinzierl
 */
class peano::kernel::datatraversal::autotuning::Oracle {
  private:
    static tarch::logging::Log  _log;

    Oracle();

    /**
     * Maps oracle id's to indexes
     */
    std::vector<OracleForOnePhase*>         _oracles;

    /**
     * Oracle, method and problem size must not change between the
     * parallelise() and loopHasTerminated() calls.
     */
    int                                     _currentOracle;

    tarch::multicore::BooleanSemaphore      _booleanSemaphore;

    /**
     * Maps each oracle type to a two tuple with a watch and the number of
     * invocations for this watch.
     */
    typedef std::pair<tarch::utils::Watch,int>           WatchDatabaseValue;
    typedef std::map<MethodTrace, WatchDatabaseValue >   WatchDatabase;
    WatchDatabase                                        _watches;
    OracleForOnePhase*                                   _oraclePrototype;

    void createOracles(int numberOfOracles);
    void deleteOracles();
  public:
    ~Oracle();

    static Oracle& getInstance();

    void plotStatistics();

    /**
     * Tell the oracle how many different adapters you'll gonna use.
     */
    void setNumberOfOracles(int value);

    /**
     * Tell the oracle which adapter is used right now.
     */
    void switchToOracle(int id);

    /**
     * Set the active oracle. Do not delete this oracle - the oracle will
     * do it.
     */
    void setOracle( OracleForOnePhase* oraclePrototype );

    /**
     * Ask oracle whether to run a piece of code in parallel and what data
     * chunk to use. Besides the analysis, the operation also starts an
     * internal timer, i.e. you have to tell the oracle afterwards that your
     * loop has terminated. To do so, use loopHasTerminated().
     *
     * !!! Implementation
     *
     * - The operation ain't const as it has to start the timer.
     * - If one operation asked twice for parallelisation, the oracle returns
     *   a no, i.e. the level of folded parallelism is restricted. If the same
     *   operation asked twice whether it should run in parallel, the first
     *   one gets the real oracle's answer, the second one always a no.
     *
     * @return grain size describing minimum size how to split up problem or
     *         zero this code piece shall not run in parallel
     */
    int parallelise( int problemSize, MethodTrace askingMethod );

    /**
     * The running time for the tested grain size is measured after loop terminating, to estimate
     * best grain size.
     *
     * The grain size for the next iteration is set to the middle
     * between the former best grain size and the recently tested grain size.
     * If the difference between both is <= 1, test is finished for this oracle-method-size triple.
     */
    void parallelSectionHasTerminated( MethodTrace askingMethod );
};

#endif
