// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de
#ifndef _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_WITH_GRAIN_SIZE_SAMPLING_H_
#define _PEANO_KERNEL_DATA_TRAVERSAL_AUTOTUNING_ORACLE_FOR_ONE_PHASE_WITH_GRAIN_SIZE_SAMPLING_H_


#include "tarch/logging/Log.h"
#include "peano/kernel/datatraversal/autotuning/OracleForOnePhase.h"


#include <map>
#include <vector>


namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace autotuning {
        class OracleForOnePhaseWithGrainSizeSampling;
      }
    }
  }
}


/**
 * @author Tobias Weinzierl
 */
class peano::kernel::datatraversal::autotuning::OracleForOnePhaseWithGrainSizeSampling: public peano::kernel::datatraversal::autotuning::OracleForOnePhase {
  private:
    static tarch::logging::Log  _log;

    struct MeasurementDescription {
      int          _problemSize;
      MethodTrace  _askingMethod;

      MeasurementDescription(int problemSize, MethodTrace askingMethod);
      MeasurementDescription();

      bool operator<(const MeasurementDescription& rhs) const;
    };

    MeasurementDescription  _currentMeasurementDescription;
    int                     _currentGrainSize;
    int                     _numberOfSamples;

    typedef std::map< MeasurementDescription, std::vector< std::pair<double,double> > > ExecutionTimeDatabase;

    ExecutionTimeDatabase  _executionTimes;
  public:
    OracleForOnePhaseWithGrainSizeSampling(int numberOfSamples);

    virtual ~OracleForOnePhaseWithGrainSizeSampling();

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
