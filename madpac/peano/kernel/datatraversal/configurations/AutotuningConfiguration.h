// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _TARCH_MULTICORE_TBB_CONFIGURATION_AUTOTUNING_CONFIGURATION_H_
#define _TARCH_MULTICORE_TBB_CONFIGURATION_AUTOTUNING_CONFIGURATION_H_

#include "tarch/configuration/Configuration.h"
#include "peano/kernel/datatraversal/autotuning/Oracle.h"
#include "tarch/logging/Log.h"
#include <string>


namespace peano {
  namespace kernel {
    namespace datatraversal {
      namespace configurations {
        class AutotuningConfiguration;
      }
    }
  }
}


/**
 * Core Configuration
 *
 * @author Tobias Weinzierl
 */
class peano::kernel::datatraversal::configurations::AutotuningConfiguration: public tarch::configuration::Configuration {
  private:
    /**
     * Log device.
     */
    static tarch::logging::Log _log;

    std::string  _oracleType;
    bool         _printStatisticsWhenTerminating;
    bool         _hasParsed;
    bool         _isValid;

  public:
    AutotuningConfiguration();
    virtual ~AutotuningConfiguration();

    virtual std::string getTag() const;

    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    virtual bool isValid() const;

    virtual void toXML(std::ostream& out) const;

    /**
     * @return Number of threads or 0 if you should use the standard number.
     */
    peano::kernel::datatraversal::autotuning::OracleForOnePhase*   interpreteConfiguration() const;
    bool                                                           printStatisticsWhenTerminating() const;

    static peano::kernel::datatraversal::autotuning::OracleForOnePhase* getOracleForSequentialCode();
};


#endif
