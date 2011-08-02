// Copyright (C) 2009 Technische Universitaet Muenchen 
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_CONFIGURATIONSPrototypeConfiguration_FOR_REGULAR_GRID_H_
#define PEANO_APPLICATIONS_NAVIERSTOKES_CONFIGURATIONSPrototypeConfiguration_FOR_REGULAR_GRID_H_
 

#include "tarch/configuration/TopLevelConfiguration.h"
#include "tarch/logging/configurations/LogFilterConfiguration.h"
#include "tarch/logging/configurations/LogOutputFormatConfiguration.h"
#include "peano/kernel/regulargrid/configurations/RegularGridConfiguration.h"
#include "tarch/multicore/configurations/CoreConfiguration.h"
#include "peano/kernel/datatraversal/configurations/AutotuningConfiguration.h"
#include "peano/geometry/builtin/configurations/BuiltinGeometryConfiguration.h"


namespace peano { 
  namespace applications { 
    namespace navierstokes {
      namespace prototype1 {
        namespace configurations {
        class PrototypeConfigurationForRegularGrid;
        }
      }
    }
  }
}
 
 
/**
 * Comments with MAN indicate manually inserted stuff.
 */
class peano::applications::navierstokes::prototype1::configurations::PrototypeConfigurationForRegularGrid: public tarch::configuration::TopLevelConfiguration {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;
    /**
     * Config for log filter. MAN
     */
    tarch::logging::configurations::LogFilterConfiguration _logConfiguration;

    /**
     * Config for logging format.
     */
    tarch::logging::configurations::LogOutputFormatConfiguration _logFormatConfiguration;

    /**
     * Config for regular grid
     */
    peano::kernel::regulargrid::configurations::RegularGridConfiguration _regularGridConfiguration;

    /**
     * Config for multicore
     */
    tarch::multicore::configurations::CoreConfiguration _multicoreConfiguration;

    /**
     * Config for autotuning
     */
    peano::kernel::datatraversal::configurations::AutotuningConfiguration  _autotuningConfiguration;

    /**
     * Config for builtin geometry
     */
    peano::geometry::builtin::configurations::BuiltinGeometryConfiguration _builtinGeometryConfiguration;

    /**
     * Flag for validity.
     */
    bool _isValid;

	int _numberOfTimesteps;

	int _maximumLGSIterations;

	bool _plotVTKFiles;

  public: 
    PrototypeConfigurationForRegularGrid(); 
    virtual ~PrototypeConfigurationForRegularGrid();
     
    virtual std::string getTag() const;
    virtual void parseAttributes( tarch::irr::io::IrrXMLReader* xmlReader );
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

    /**
     * Getter for config. MAN
     */
    tarch::logging::configurations::LogFilterConfiguration getLogConfiguration() const;

    /**
     * Getter for the configuration of the regular grid.
     */
    peano::kernel::regulargrid::configurations::RegularGridConfiguration getRegularGridConfiguration() const;

    /**
     * Getter for multicore configuration. Used for TBB and OpenMP parallelization. This
     * method was created manually.
     */
    tarch::multicore::configurations::CoreConfiguration getMulticoreConfiguration() const;

    /**
     * Getter for configuration of builtin geometry.
     */
    const peano::geometry::builtin::configurations::BuiltinGeometryConfiguration& getBuiltinGeometryConfiguration() const;

    /**
     * Getter for autotuning configuration.
     */
    const peano::kernel::datatraversal::configurations::AutotuningConfiguration& getAutotuningConfiguration() const;

    /**
	 * Getter for the number of timesteps to be performed.
	 */
    int getNumberOfTimesteps() const;

    /**
	 * Getter for the maximum number of lgs iterations.
	 */
	int getMaximumLGSIterations() const;

	/**
	 * Returns wether the results should be plotted to VTK-files.
	 */
	bool plotVTKFiles() const;
};


#endif
