// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BLOCKLATTICEBOLTZMANNSCENARIOCONFIGURATION_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BLOCKLATTICEBOLTZMANNSCENARIOCONFIGURATION_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"
#include "string.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/ScenarioDefinitions.h"
#include "peano/integration/partitioncoupling/builtin/configurations/PartitionCoupling4MovingSphereConfiguration.h"


namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      namespace configurations {
        class BlockLatticeBoltzmannScenarioConfiguration;
      }
    }
  }
}


/** reads basic Lattice Boltzmann scenario configuration tags
 *
 * @author Philipp Neumann
 *
 */
class scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration {
  public:

    BlockLatticeBoltzmannScenarioConfiguration();
    ~BlockLatticeBoltzmannScenarioConfiguration();

    /** parses the configuration input */
    void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader);

    void computeUndefinedValues(const double dx, const double dt);

    /** returns the _isValid flag */
    bool isValid() const;

    /** gets the characteristic velocity on the lattice */
    double getCharacteristicVelocityL() const;

    /** true if a parabolic inlet profile shall be used */
    bool useParabolicProfile() const;

    int getTimestepsPerSineCycle() const;

    /** returns the scenario type */
    scenario::latticeboltzmann::blocklatticeboltzmann::ScenarioType
    getScenario() const;

    /** true, if geometry is allowed to change over time */
    bool hasDynamicGeometry() const;

    /** true if forces shall be computed */
    bool computeForces() const;

    /** returns the config for partition-coupling-moving-sphere simulations using the respective
     *  builtin functionalities.
     */
    const peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration&
    getPartitionCoupling4MovingSphereConfiguration() const;


  public:
    static const std::string TAG;
    static const std::string SCENARIO_TYPE;
    static const std::string CHARACTERISTIC_VELOCITY;
    static const std::string CHARACTERISTIC_VELOCITY_L;
    static const std::string USE_PARABOLIC_PROFILE;
    static const std::string DYNAMIC_GEOMETRY;
    static const std::string COMPUTE_FORCES;
    static const std::string TIMESTEPS_PER_SINE_CYCLE;

  private:
    bool _isValid;
    /** scenario type */
    scenario::latticeboltzmann::blocklatticeboltzmann::ScenarioType _scenarioType;
    /** characteristic velocity (in units and dimensionless) */
    double _characteristicVelocity;
    bool _isDefinedCharacteristicVelocity;
    double _characteristicVelocityL;
    /** true, if the channel should use a parabolic inlet profile */
    bool _useParabolicProfile;
    /** timesteps per sine cycle evolution in the velocity profile.
     *  This is needed for the oscillating flow in the drift ratchet scenario.
     */
    int _timestepsPerSineCycle;

    /** configuration for a builtin moving sphere */
    peano::integration::partitioncoupling::builtin::configurations::PartitionCoupling4MovingSphereConfiguration _partitionCoupling4MovingSphereConfiguration;

    /** true if the geometry is allowed to dynamically change over time */
    bool _dynamicGeometry;

    /** true if the forces shall be computed */
    bool _computeForces;

    /** for logging */
    static tarch::logging::Log _log;
};

#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_BLOCKLATTICEBOLTZMANNSCENARIOCONFIGURATION_H_

