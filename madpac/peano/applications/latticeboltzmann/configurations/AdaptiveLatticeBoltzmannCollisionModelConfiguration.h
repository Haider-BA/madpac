// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_ADAPTIVELATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_
#define _LATTICEBOLTZMANN_ADAPTIVELATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
//#include "tarch/la/Utilities.h"

#include "peano/utils/Globals.h"
#include "peano/applications/latticeboltzmann/configurations/LatticeBoltzmannCollisionModelConfiguration.h"

namespace peano {
  namespace applications {
	  namespace latticeboltzmann {
      namespace configurations {
		    class AdaptiveLatticeBoltzmannCollisionModelConfiguration;
      }
	  }
	}
}



/**
 * parses all parameters as the 'regular' collision model configuration and an
 * additional parameter for the meshsize range in which the collision model shall be used
 *
 * @author Philipp Neumann
 *
 */
class peano::applications::latticeboltzmann::configurations::
AdaptiveLatticeBoltzmannCollisionModelConfiguration:
public peano::applications::latticeboltzmann::configurations::
LatticeBoltzmannCollisionModelConfiguration {

	public:
	  AdaptiveLatticeBoltzmannCollisionModelConfiguration();
	  ~AdaptiveLatticeBoltzmannCollisionModelConfiguration();

	  /** parses the xml input */
    void parseSubtag(tarch::irr::io::IrrXMLReader* xmlReader);

    /** returns the minimal meshsize for using this collision model */
    double getHMin() const;

    /** returns the maximal meshsize */
    double getHMax() const;

  public:
    static const std::string MINIMAL_MESHSIZE;
    static const std::string MAXIMAL_MESHSIZE;

  private:
    /** minimal meshsize */
    double _hMin;

    /** maximal meshsize */
    double _hMax;

    /** true, if minimal meshsize was defined */
    bool _isDefinedHMin;

    /** see _isDefinedHMin */
    bool _isDefinedHMax;

    /** for logging */
    static tarch::logging::Log _log;
};

#endif /* _LATTICEBOLTZMANN_ADAPTIVELATTICEBOLTZMANNCOLLISIONMODELCONFIGURATION_H_*/
