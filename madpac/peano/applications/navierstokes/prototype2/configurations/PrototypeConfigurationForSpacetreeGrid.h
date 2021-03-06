// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_CONFIGURATIONSPrototypeConfiguration_FOR_SPACETREE_GRID_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_CONFIGURATIONSPrototypeConfiguration_FOR_SPACETREE_GRID_H_
 

#include "tarch/configuration/TopLevelConfiguration.h"


namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype2 {
      namespace configurations {
      class PrototypeConfigurationForSpacetreeGrid;
      } 
}
}
}
}
 
 
class peano::applications::navierstokes::prototype2::configurations::PrototypeConfigurationForSpacetreeGrid: public tarch::configuration::TopLevelConfiguration {
  public: 
    PrototypeConfigurationForSpacetreeGrid(); 
    virtual ~PrototypeConfigurationForSpacetreeGrid();
     
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
};


#endif
