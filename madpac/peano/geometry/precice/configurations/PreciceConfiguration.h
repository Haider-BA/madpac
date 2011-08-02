// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_PRECICE_CONFIGURATIONS_PRECICECONFIGURATION_H_
#define _PEANO_GEOMETRY_PRECICE_CONFIGURATIONS_PRECICECONFIGURATION_H_

#include "precice/SolverInterface.hpp"

#include "tarch/irr/XML.h"
#include "peano/geometry/configurations/GeometryConfiguration.h"
#include "peano/geometry/precice/PreciceGeometry.h"
#include "tarch/logging/Log.h"
#include <map>
#include <string>
#include <vector>

namespace peano {
  namespace geometry {
    namespace precice {
      namespace configurations {
        class PreciceConfiguration;
      }
    }
  }
}

namespace precice {
  namespace utils {
    class XMLTag;
  }
}


/** configuration for precice. Though the configuration is also used for Receive/SendData class in peano/integration/partitioncoupling/precice,
 *  it has been put here since sending and receiving does not make so much sense if we do not have a certain underlying geometry.
 *
 *  @author Philipp Neumann
 */
class peano::geometry::precice::configurations::PreciceConfiguration: public peano::geometry::configurations::GeometryConfiguration
{
public:

  void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

  bool isValid() const;

  void toXML(std::ostream&) const;

  std::string getTag() const;

  /** returns the preCICE geoemtry */
  peano::geometry::Geometry* interpreteConfiguration() const;

  peano::geometry::precice::PreciceGeometry* interpreteConfigurationAsPreciceGeometry() const;

  /** returns a pointer to the solver interface. This pointer is used to initialise the PreciceSolverInterfaceService.
   *
   */
  ::precice::SolverInterface* getPreciceSolverInterface() const;

  std::vector<std::string> getGeometryAddonNames() const;

  std::vector<int> getGeometryAddonIDs() const;

  PreciceConfiguration();
  ~PreciceConfiguration();


private:

  static const std::string PEANO_NAME;

   /** Logging device. */
  static tarch::logging::Log _log;

  /** True, if configuration has taken place and was valid. */
  bool _isValid;

  /** Filename of preCICE xml coupling configuration. */
  std::string _cplConfigFilename;

  /** number of geometry queries (for each pointwise and voxel queries) that are buffered. Depending on this
   *  buffersize the performance can drastically de-/increase as queries to preCICE are quite expensive (compared
   *  to the simple builtin-geometry).
   */
  int _buffersize;

  /** Maximal grid meshwidth at goemtry boundaries (geometry name -> width). */
  std::vector<std::string> _geometryAddonNames;

  std::vector<int> _geometryAddonIDs;

  ::precice::SolverInterface* _interface;
};

#endif /* _PEANO_GEOMETRY_PRECICE_CONFIGURATIONS_PRECICECONFIGURATION_H_ */
