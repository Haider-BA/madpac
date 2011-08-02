// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_CONFIGURATIONS_ABSTRACT_TIME_STEPPING_CONFIGURATION_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_CONFIGURATIONS_ABSTRACT_TIME_STEPPING_CONFIGURATION_H_


#include "tarch/configuration/TopLevelConfiguration.h"
#include "tarch/logging/configurations/LogFilterConfiguration.h"
#include "tarch/logging/configurations/LogOutputFormatConfiguration.h"

#if defined(SharedOMP) || defined(SharedTBB)
#include "tarch/multicore/configurations/CoreConfiguration.h"
#endif

#include "scenario/diffusionequation/configurations/RotatingHeatSourceConfiguration.h"
#include "scenario/diffusionequation/configurations/FadingSinusConfiguration.h"

#include "peano/kernel/datatraversal/configurations/AutotuningConfiguration.h"


namespace peano {
  namespace applications {
    namespace heatequation {
      namespace timestepping {
        namespace configurations {
          class AbstractTimeSteppingConfiguration;
        }
      }
    }
  }
}


class peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration:
  public tarch::configuration::TopLevelConfiguration {
  public:
    enum SolverScheme {
      Undef, ExplicitEuler, ImplicitEulerJacobi, VCycle, OneVCycle, FMG
    };
  private:
    static tarch::logging::Log _log;

  protected:
    tarch::logging::configurations::LogFilterConfiguration                 _logFilterConfiguration;
    tarch::logging::configurations::LogOutputFormatConfiguration           _logFormatConfiguration;

    #if defined(SharedOMP) || defined(SharedTBB)
    tarch::multicore::configurations::CoreConfiguration                    _coreConfiguration;
    #endif

    scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration                _rotatingHeatSourceConfiguration;
    scenario::diffusionequation::configurations::FadingSinusConfiguration                       _fadingSinusConfiguration;
    peano::kernel::datatraversal::configurations::AutotuningConfiguration  _autotuningConfiguration;

    double  _initialTimeStepSize;
    double  _timeStepSizeMaxDifference;
    int     _numberOfSnapshotsPerSequence;
    int     _numberOfSequences;
    double  _relaxationFactor;
    double  _solverAccuracy;
    SolverScheme _solverScheme;

    bool _isValid;
    bool _foundScenario;

    bool parseUnknownSubtags( tarch::irr::io::IrrXMLReader* xmlReader );
    void parseAttributes( tarch::irr::io::IrrXMLReader* xmlReader );
  public:
    AbstractTimeSteppingConfiguration();

    virtual bool isValid() const;

    double getInitialTimeStepSize() const;
    double getTimeStepSizeMaxDifference() const;
    int    getNumberOfSnapshotsPerSequence() const;
    int    getNumberOfSequences() const;
    double getRelaxationFactor() const;

    SolverScheme getSolverScheme() const;
    double       getSolverAccuracy() const;
};

#endif
