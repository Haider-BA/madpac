// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICIT_TIMESTEPPING_CONFIGURATIONS_ABSTRACT_TIME_STEPPING_CONFIGURATION_H_
#define PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICIT_TIMESTEPPING_CONFIGURATIONS_ABSTRACT_TIME_STEPPING_CONFIGURATION_H_


#include "tarch/configuration/TopLevelConfiguration.h"

#include "tarch/logging/configurations/LogFilterConfiguration.h"
#include "tarch/logging/configurations/LogOutputFormatConfiguration.h"

#if defined(SharedOMP) || defined(SharedTBB)
#include "tarch/multicore/configurations/CoreConfiguration.h"
#endif

#include "scenario/diffusionequation/configurations/RotatingHeatSourceConfiguration.h"
#include "scenario/diffusionequation/configurations/FadingSinusConfiguration.h"
#include "scenario/diffusionequation/configurations/CornerPointFieldConfiguration.h"

#include "peano/kernel/datatraversal/configurations/AutotuningConfiguration.h"


namespace peano {
  namespace applications {
    namespace diffusionequation {
      namespace explicittimestepping {
        namespace configurations {
          class AbstractTimeSteppingConfiguration;
        }
      }
    }
  }
}


class peano::applications::diffusionequation::explicittimestepping::configurations::AbstractTimeSteppingConfiguration:
  public tarch::configuration::TopLevelConfiguration {
  private:
    static tarch::logging::Log _log;

  protected:
    tarch::logging::configurations::LogFilterConfiguration                   _logFilterConfiguration;
    tarch::logging::configurations::LogOutputFormatConfiguration             _logFormatConfiguration;

    #if defined(SharedOMP) || defined(SharedTBB)
    tarch::multicore::configurations::CoreConfiguration                      _coreConfiguration;
    #endif

    scenario::diffusionequation::configurations::RotatingHeatSourceConfiguration  _rotatingHeatSourceConfiguration;
    scenario::diffusionequation::configurations::FadingSinusConfiguration         _fadingSinusConfiguration;
    scenario::diffusionequation::configurations::CornerPointFieldConfiguration    _cornerPointFieldConfiguration;

    peano::kernel::datatraversal::configurations::AutotuningConfiguration    _autotuningConfiguration;

    double       _initialTimeStepSize;
    double       _timeStepSizeMaxDifference;
    double       _totalTime;
    std::string  _plotInputGeometryToVTKFile;
    double       _snapshotDelta;

    bool    _isValid;
    bool    _foundScenario;

    bool parseUnknownSubtags( tarch::irr::io::IrrXMLReader* xmlReader );
    void parseAttributes( tarch::irr::io::IrrXMLReader* xmlReader );

    void subtagsToXML(std::ostream& out) const;

    scenario::diffusionequation::DiffusionEquationScenario* createScenario();
  public:
    AbstractTimeSteppingConfiguration();

    virtual bool isValid() const;

    double getInitialTimeStepSize() const;
    double getTimeStepSizeMaxDifference() const;
    double getSnapshotDelta() const;
    double getTotalTime() const;

    std::string shouldPlotInputGeometryToVTKFile() const;
};

#endif
