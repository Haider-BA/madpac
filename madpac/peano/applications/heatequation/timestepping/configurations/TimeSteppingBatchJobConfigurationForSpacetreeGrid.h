// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_CONFIGURATIONSTimeSteppingBatchJobConfiguration_FOR_SPACETREE_GRID_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_CONFIGURATIONSTimeSteppingBatchJobConfiguration_FOR_SPACETREE_GRID_H_
 

#include "peano/applications/heatequation/timestepping/configurations/AbstractTimeSteppingConfiguration.h"


namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping {
        namespace configurations {
          class TimeSteppingBatchJobConfigurationForSpacetreeGrid;
        }
      }
    }
  }
}
 
 
class peano::applications::heatequation::timestepping::configurations::TimeSteppingBatchJobConfigurationForSpacetreeGrid: public peano::applications::heatequation::timestepping::configurations::AbstractTimeSteppingConfiguration {
  private:
    static tarch::logging::Log _log;

    double _minimalMeshSize;
    double _maximalMeshSize;

    int _numberOfPreSmoothingSteps;
    int _numberOfPostSmoothingSteps;

    double _refinementPercentage;
    double _deletePercentage;
  public: 
    TimeSteppingBatchJobConfigurationForSpacetreeGrid(); 
    virtual ~TimeSteppingBatchJobConfigurationForSpacetreeGrid();
     
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

    virtual bool isValid() const;

    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    double getMinimalMeshSize() const;
    double getMaximalMeshSize() const;

    int getNumberOfPreSmoothingSteps() const;
    int getNumberOfPostSmoothingSteps() const;

    double getRefinementPercentage() const;
    double getDeletePercentage() const;
};


#endif
