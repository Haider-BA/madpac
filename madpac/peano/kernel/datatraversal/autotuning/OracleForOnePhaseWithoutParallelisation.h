// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_WITHOUT_PARALLELISATION_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_WITHOUT_PARALLELISATION_H_


#include "peano/kernel/datatraversal/autotuning/OracleForOnePhase.h"
#include "tarch/logging/Log.h"


#include <map>


namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace autotuning {
        class OracleForOnePhaseWithoutParallelisation;
      }
    }
  }
}


/**
 * @author Tobias Weinzierl
 */
class peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithoutParallelisation: public peano::kernel::datatraversal::autotuning::OracleForOnePhase {
  private:
    static tarch::logging::Log  _log;

  public:
    OracleForOnePhaseWithoutParallelisation();

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
