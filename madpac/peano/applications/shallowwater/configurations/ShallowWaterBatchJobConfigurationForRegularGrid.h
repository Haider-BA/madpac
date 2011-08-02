// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_SHALLOWWATER_CONFIGURATIONSShallowWaterBatchJobConfiguration_FOR_REGULAR_GRID_H_
#define PEANO_APPLICATIONS_SHALLOWWATER_CONFIGURATIONSShallowWaterBatchJobConfiguration_FOR_REGULAR_GRID_H_
 

#include "tarch/configuration/TopLevelConfiguration.h"

#include "tarch/logging/configurations/LogFilterConfiguration.h"
#include "tarch/logging/configurations/LogOutputFormatConfiguration.h"

#if defined(SharedTBB)
#include "tarch/multicore/configurations/CoreConfiguration.h"
#endif

#include "scenario/shallowwater/configuration/ShallowWaterScenarioConfiguration.h"

namespace peano { 
  namespace applications { 
    namespace shallowwater {
      namespace configurations {
      class ShallowWaterBatchJobConfigurationForRegularGrid;
      } 
}
}
}
 
 
class peano::applications::shallowwater::configurations::ShallowWaterBatchJobConfigurationForRegularGrid: public tarch::configuration::TopLevelConfiguration {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log                                   _log;

    bool                                                         _isValid;
    tarch::logging::configurations::LogFilterConfiguration       _logConfiguration;
    tarch::logging::configurations::LogOutputFormatConfiguration _logFormatConfiguration;
    #if defined(SharedTBB)
    tarch::multicore::configurations::CoreConfiguration          _coreConfiguration;
    #endif

    scenario::shallowwater::configuration::ShallowWaterScenarioConfiguration* _scenarioConfiguration;

  public: 
    ShallowWaterBatchJobConfigurationForRegularGrid(); 
    virtual ~ShallowWaterBatchJobConfigurationForRegularGrid();
     
    virtual std::string getTag() const;
    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );
    virtual bool isValid() const;
    
    /**
     * Create xml representation of object. The operation is two-fold. If the 
     * object represents a valid configuration, i.e. isValid() holds, it returns 
     * an xml representation of this object that we can reparse later again. If 
     * the object ain't valid, it returns a dummy representation of the xml tag
     * with meaningful comments which subtags and attribute values are allowed 
     * and what their semantics is. This way, we document the set of 
     * configurations that are supported.
     *
     *    
     * @return XML representation of configuration
     */
    virtual void toXML(std::ostream& out) const;
    virtual tarch::configuration::TopLevelConfiguration* clone() const;
    virtual int interpreteConfiguration(); 

    tarch::logging::configurations::LogFilterConfiguration       getLogConfiguration() const;
    tarch::logging::configurations::LogOutputFormatConfiguration getLogFormatConfiguration() const;
    #if defined(SharedTBB)
    tarch::multicore::configurations::CoreConfiguration          getCoreConfiguration() const;
    #endif

    scenario::shallowwater::configuration::ShallowWaterScenarioConfiguration& getShallowWaterScenario() const;
};


#endif
