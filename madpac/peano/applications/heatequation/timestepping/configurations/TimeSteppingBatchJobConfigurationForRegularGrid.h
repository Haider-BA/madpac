// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_CONFIGURATIONSTimeSteppingBatchJobConfiguration_FOR_REGULAR_GRID_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_CONFIGURATIONSTimeSteppingBatchJobConfiguration_FOR_REGULAR_GRID_H_
 

#include "peano/applications/heatequation/timestepping/configurations/AbstractTimeSteppingConfiguration.h"
#include "peano/kernel/regulargrid/configurations/RegularGridConfiguration.h"


namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping {
        namespace configurations {
          class TimeSteppingBatchJobConfigurationForRegularGrid;
        }
      }
    }
  }
}
 
 
class peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForRegularGrid: public peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration {
  private:
    static tarch::logging::Log _log;

    peano::kernel::regulargrid::configurations::RegularGridConfiguration _regularGridConfiguration;
  public: 
    TimeSteppingBatchJobConfigurationForRegularGrid(); 
    virtual ~TimeSteppingBatchJobConfigurationForRegularGrid();
     
    virtual std::string getTag() const;
    
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

    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    virtual bool isValid() const;

    peano::kernel::regulargrid::configurations::RegularGridConfiguration getRegularGridConfiguration() const;
};


#endif
