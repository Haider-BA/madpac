// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONSBlockLatticeBoltzmannBatchJobConfiguration_FOR_SPACETREE_GRID_H_
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONSBlockLatticeBoltzmannBatchJobConfiguration_FOR_SPACETREE_GRID_H_


#include "tarch/configuration/TopLevelConfiguration.h"

#include <vector>
#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/logging/configurations/LogFilterConfiguration.h"
#include "tarch/logging/configurations/LogOutputFormatConfiguration.h"
#if defined(SharedTBB)
#include "tarch/multicore/configurations/CoreConfiguration.h"
#endif

#include "peano/geometry/builtin/configurations/BuiltinGeometryConfiguration.h"
#if defined(Precice)
#include "peano/geometry/precice/configurations/PreciceConfiguration.h"
#endif

#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/configurations/LatticeBoltzmannConfiguration.h"
#include "peano/applications/latticeboltzmann/configurations/LatticeBoltzmannPlotterConfiguration.h"
#include "peano/applications/latticeboltzmann/configurations/AdaptiveLatticeBoltzmannCollisionModelConfiguration.h"
#include "peano/applications/latticeboltzmann/configurations/SpacetreeGridConfiguration.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockState.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/BlockCollisionModelManager.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/configurations/BlockLatticeBoltzmannScenarioConfiguration.h"



namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
      namespace configurations {
      class BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid;
      }
}
}
}
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid: public tarch::configuration::TopLevelConfiguration {
  public:
    BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid();
    virtual ~BlockLatticeBoltzmannBatchJobConfigurationForSpacetreeGrid();

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

    /** returns the basic lattice Boltzmann configuration */
    const peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration& getLatticeBoltzmannConfiguration() const;

    /** returns the plotter configuration */
    peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration& getLatticeBoltzmannPlotterConfiguration();

    /** returns the vector of Grid-collision model-configurations */
    const std::vector<peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration>& getAdaptiveLatticeBoltzmannCollisionModelConfiguration() const;

    const peano::geometry::builtin::configurations::BuiltinGeometryConfiguration& getBuiltinGeometryConfiguration() const;

    #if defined(Precice)
    bool usePrecice() const;
    const peano::geometry::precice::configurations::PreciceConfiguration& getPreciceConfiguration() const;
    #endif

    const scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration&
    getBlockLatticeBoltzmannScenarioConfiguration() const;

    const tarch::logging::configurations::LogFilterConfiguration&      getLogConfiguration() const;
    const tarch::logging::configurations::LogOutputFormatConfiguration& getLogFormatConfiguration() const;

    #if defined(SharedTBB)
    const tarch::multicore::configurations::CoreConfiguration& getCoreConfiguration() const;
    #endif

    const peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration&
    getSpacetreeGridConfiguration() const;

    /** delegate call to LB-config */
    void setDx(double dx);

    /** returns the reference-SimData-object */
    void initState(peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockState &sim) const;

    /** synchronises data from the lattice Boltzmann configuration with the collision model configurations
     */
    void synchronise(unsigned int i);

  private:
    void computeUndefinedValues();

    /** checks whether there are conflicts in the collision model definitions */
    void checkAdaptiveLatticeBoltzmannCollisionModelConfigurations() const;

    /** checks the collision model configurations for consistency */
    void checkConsistencyOfCollisionModels() const;

    /** checks all fluctuating lattice Boltzmann definitions for consistency, that is for example:
     *  - is k_B_L everywhere the same?
     *  - is the bulk term equal?...
     *  furthermore, the _isValid flag is set to false, if anything goes wrong. The vector handed over
     *  contains the indices of all corresponding collision models in the configuration
     */
    void checkConsistencyOfFluctuatingLatticeBoltzmann(std::vector<int> index) const;

    /** checks the MRT-Humieres collision models for consistency */
    void checkConsistencyOfMRTHumieres(std::vector<int> index) const;

    static const int _numberOfVariables;

    tarch::logging::configurations::LogFilterConfiguration       _logConfiguration;
    tarch::logging::configurations::LogOutputFormatConfiguration _logFormatConfiguration;

    /** the basic lattice Boltzmann configuration */
    peano::applications::latticeboltzmann::configurations::LatticeBoltzmannConfiguration _latticeBoltzmannConfiguration;

    /** the basic plotter configuration */
    peano::applications::latticeboltzmann::configurations::LatticeBoltzmannPlotterConfiguration _plotterConfiguration;

    /** the collision model configurations for all grid levels */
    std::vector<peano::applications::latticeboltzmann::configurations::AdaptiveLatticeBoltzmannCollisionModelConfiguration> _collisionModelConfigurations;

    peano::geometry::builtin::configurations::BuiltinGeometryConfiguration _builtinGeometryConfiguration;

    #if defined(Precice)
    peano::geometry::precice::configurations::PreciceConfiguration _preciceConfiguration;
    #endif

    scenario::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannScenarioConfiguration _scenarioConfiguration;

    peano::applications::latticeboltzmann::configurations::SpacetreeGridConfiguration _spacetreeGridConfiguration;

#if defined(SharedTBB)
    tarch::multicore::configurations::CoreConfiguration          _coreConfiguration;
#endif

    /** true if configuration is valid */
    bool _isValid;

    static tarch::logging::Log _log;
};


#endif
