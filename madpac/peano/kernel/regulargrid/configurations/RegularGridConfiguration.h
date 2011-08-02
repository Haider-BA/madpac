// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULAR_GRID_CONFIGURATIONS_REGULAR_GRID_CONFIGURATION_H_
#define _PEANO_KERNEL_REGULAR_GRID_CONFIGURATIONS_REGULAR_GRID_CONFIGURATION_H_


#include "peano/utils/Globals.h"
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"



#include "peano/utils/Dimensions.h"


namespace peano {
  namespace kernel {
    namespace regulargrid {
      namespace configurations {
        class RegularGridConfiguration;
      }
    }
  }
}


/**
 * Configuration for a regular grid.
 *
 * This class only describes the grid resolution, but not scenario specific things like the size of
 * the computational domain.
 *
 * @author Tobias Neckel
 */
class peano::kernel::regulargrid::configurations::RegularGridConfiguration: public tarch::configuration::Configuration {
  private:

    /**
     * XML-Tag corresponding to a domain configuration.
     */
    static const std::string TAG;

    /**
     * XML-Attribute holding the number of gridpoints
     */
    static const std::string NUMBER_OF_GRID_POINTS;

    /**
     * Log device.
     */
    static tarch::logging::Log _log;

    /**
     * Holds validity of the configuration.
     */
    bool _isValid;

    /**
     * Number of cells in each dimension (please don't confuse this with the
     * number of nodes, which is one higher).
     */
    tarch::la::Vector<DIMENSIONS,int> _numberOfGridPoints;

  public:
    /**
     * Constructor initiating _isValid and _hasNonlinearSolverConfiguration with
     * false.
     */
    RegularGridConfiguration();

    /**
     * Destructor.
     */
    virtual ~RegularGridConfiguration();
    virtual std::string getTag() const;

    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* _xmlReader );

    virtual bool isValid() const;

    virtual void toXML(std::ostream& out) const;

    tarch::la::Vector<DIMENSIONS,int> getNumberOfGridPoints() const;
};

#endif
