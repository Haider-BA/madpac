// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_CONFIGURATIONS_PARTITIONCOUPLING4MOVINGSPHERECONFIGURATION_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_CONFIGURATIONS_PARTITIONCOUPLING4MOVINGSPHERECONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace builtin {
        namespace configurations {
          class PartitionCoupling4MovingSphereConfiguration;
        }
      }
    }
  }
}


/** configuration for partition coupling with moving sphere (builtin)
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::builtin::configurations::
PartitionCoupling4MovingSphereConfiguration {
  public:
    PartitionCoupling4MovingSphereConfiguration();
    ~PartitionCoupling4MovingSphereConfiguration(){}

    /** parses the configuration input */
    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader);

    /** returns the _isValid flag */
    bool isValid() const {
      return _isValid;
    }

    /** returns the initial position of the sphere */
    tarch::la::Vector<DIMENSIONS,double> getPosition() const {
      return _position;
    }

    /** returns the sphere radius */
    double getRadius() const {
      return _radius;
    }

    /** returns the density of the sphere */
    double getDensity() const {
      return _density;
    }

    /** returns the number of timesteps between subsequent VTK plots. If
     * this number is smaller/ equal zero, no plots will be written at all.
     */
    int getTimestepsPerPlottingVtk() const {
      return _timestepsPerPlottingVtk;
    }

    /** number of timesteps between subsequent POV-Ray outputs. If
     *  this number is smaller/ equal zero, no output will be written at all.
     */
    int getTimestepsPerPlottingPovray() const {
      return _timestepsPerPlottingPovray;
    }

    /** get filestem for output */
    std::string getFilename() const {
      return _filename;
    }

  public:
    static const std::string TAG;

  private:
    static const std::string POSITION;
    static const std::string RADIUS;
    static const std::string DENSITY;
    static const std::string TIMESTEPS_PER_PLOTTING_VTK;
    static const std::string TIMESTEPS_PER_PLOTTING_POVRAY;
    static const std::string FILENAME;

    bool _isValid;

    /** sphere position */
    tarch::la::Vector<DIMENSIONS,double> _position;
    /** radius */
    double _radius;
    /** density */
    double _density;

    /** output parameters */
    int _timestepsPerPlottingVtk;
    int _timestepsPerPlottingPovray;
    std::string _filename;

    static tarch::logging::Log _log;
};
#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_CONFIGURATIONS_PARTITIONCOUPLING4MOVINGSPHERECONFIGURATION_H_
