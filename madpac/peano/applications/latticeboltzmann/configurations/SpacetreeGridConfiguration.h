#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_CONFIGURATIONS_SPACETREEGRIDCONFIGURATION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_CONFIGURATIONS_SPACETREEGRIDCONFIGURATION_H_

#include "peano/utils/Globals.h"
#include "tarch/la/Vector.h"
#include "tarch/irr/XML.h"
#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/UserInput.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace configurations {
        class SpacetreeGridConfiguration;
      }
    }
  }
}


class peano::applications::latticeboltzmann::configurations::
SpacetreeGridConfiguration {
  public:
    SpacetreeGridConfiguration();
    ~SpacetreeGridConfiguration(){}

    /** parses the configuration input */
    void parseSubtag(tarch::irr::io::IrrXMLReader* xmlReader);

    /** @returns the _isValid flag */
    bool isValid() const;

    std::string toXMLString() const;

    /** returns the domain size of the simulation domain. We only
     *  want to consider cubic domains. Thus, the domain size that
     *  was read from the config is considered, its maximum component
     *  is determined and a vector with entries of this max. component
     *  is returned.
     */
    tarch::la::Vector<DIMENSIONS,double> getDomainSizeForPeanoGrid() const;

    /** returns the domain size */
    tarch::la::Vector<DIMENSIONS,double> getDomainSize() const;

    /** returns the domain offset */
    tarch::la::Vector<DIMENSIONS,double> getDomainOffset() const;

    /** computes and returns the reference level, i.e. the coarsest
     *  simulation level.
     */
    int getReferenceLevel() const;

    /** returns the total number of grid levels */
    int getTotalNumberOfGridLevels() const;

    static const std::string TAG;

  private:
    static const std::string DOMAIN_SIZE;
    static const std::string DOMAIN_OFFSET;
    static const std::string NUMBER_OF_VERTICES_ON_REFERENCE_LEVEL;
    static const std::string NUMBER_OF_SIMULATION_GRID_LEVELS;

    bool _isValid;
    tarch::la::Vector<DIMENSIONS,double> _domainSize;
    tarch::la::Vector<DIMENSIONS,double> _domainOffset;
    tarch::la::Vector<DIMENSIONS,int> _verticesOnReferenceLevel;
    int _numberOfSimulationGridLevels;


    static tarch::logging::Log _log;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CONFIGURATIONS_SPACETREEGRIDCONFIGURATION_H_
