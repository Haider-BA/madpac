// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_DATAQUERIES_CONFIGURATION_QUERYCONFIGURATION_H_
#define _PEANO_INTEGRATION_DATAQUERIES_CONFIGURATION_QUERYCONFIGURATION_H_


#include "tarch/logging/Log.h"
#include "tarch/configuration/Configuration.h"
#include "peano/integration/dataqueries/DataQuery.h"

namespace peano {
  namespace integration {
    namespace dataqueries {
      namespace configuration {
        class QueryConfiguration;
      }
    }
  }
}



/**
 * Represents one Data Query from a Configuration File#
 *
 * !!! Usage
 *
 * Make your configuration file hold a vector of query configurations:
 * \code
    std::vector<peano::integration::dataqueries::configuration::QueryConfiguration> _dataQueries;
   \endcode
 * and add a corresponding getter similar to
 * \code
    std::vector<peano::integration::dataqueries::configuration::QueryConfiguration> getDataQueries() const;
   \endcode
 *
 * Extend the configuration's parseSubtag() operation with a code fragment
 * similar to
 * \code
	      if ( xmlReader->getNodeName() == peano::integration::dataqueries::configuration::QueryConfiguration::Tag() ) {
	    	_dataQueries.push_back( peano::integration::dataqueries::configuration::QueryConfiguration() );
	    	_dataQueries.back().parseSubtag(xmlReader);
            _isValid &= _dataQueries.back().isValid();
	      }
   \endcode
 * Finally, implement the getter. Then, your runner can take the queries, set
 * the data id corresponding to the identifier, and pass these queries to the
 * query service. A simple example for such a configuration can be found in the
 * project jacobi2 (batch job mode).
 */
class peano::integration::dataqueries::configuration::QueryConfiguration: public tarch::configuration::Configuration {
  private:
	static tarch::logging::Log _log;

	bool                                 _isValid;
    tarch::la::Vector<DIMENSIONS,double> _boundingBoxOffset;
    tarch::la::Vector<DIMENSIONS,double> _boundingBox;
    tarch::la::Vector<DIMENSIONS,int>    _resolution;
    std::string                          _identifier;
  public:
    static std::string Tag();

	QueryConfiguration();
	virtual ~QueryConfiguration();

    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

    virtual std::string getTag() const;

    virtual bool isValid() const;

    virtual void toXML(std::ostream& out) const;

    peano::integration::dataqueries::DataQuery interpreteConfiguration() const;

    std::string getIdentifier() const;
};

#endif
