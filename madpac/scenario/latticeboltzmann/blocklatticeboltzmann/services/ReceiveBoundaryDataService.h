// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_RECEIVEBOUNDARYDATASERVICE_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_RECEIVEBOUNDARYDATASERVICE_H_

#include "peano/utils/Dimensions.h"
#include <vector>
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include "tarch/services/Service.h"

#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/applications/latticeboltzmann/BoundaryData.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/geometry/services/GeometryService.h"

#include "scenario/latticeboltzmann/blocklatticeboltzmann/ScenarioDefinitions.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Scenario.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4LidDrivenCavity.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4ChannelWithNoSlipBoundaries.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4PreciceChannel.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4EmptyBox.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4MovingSphereInDriftRatchet.h"


namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      namespace services {
        class ReceiveBoundaryDataService;
      }
    }
  }
}


/** service providing the boundary data for the LBM simulation.
 *
 *  @author Philipp Neumann
 */
class scenario::latticeboltzmann::blocklatticeboltzmann::services::ReceiveBoundaryDataService:
public tarch::services::Service {
  private:
    ReceiveBoundaryDataService();
    ~ReceiveBoundaryDataService();

  public:
    /** initialise the boundaries by config */
    void init(
      const tarch::la::Vector<DIMENSIONS,double> &domainSize,
      const tarch::la::Vector<DIMENSIONS,double> &domainOffset,
      const double &characteristicVelocity,
      const bool &useParabolicProfile,
      double timePerSineCycle,
      const scenario::latticeboltzmann::blocklatticeboltzmann::ScenarioType &scenarioType,
      peano::geometry::Geometry *builtinGeometry
    );

    /** shuts down the service, deletes scenario ptr */
    void shutdown();

    /** first empty buffers and then fill them with all boundary data necessary for a vertex at position x on a grid
     *  with meshsize h
     */
    void getBoundaryData(
      const tarch::la::Vector<DIMENSIONS,double> &x,
      const tarch::la::Vector<DIMENSIONS,double> &h,
      const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
      const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &boundary,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryDataBuffer,
      std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex
    );

    static ReceiveBoundaryDataService& getInstance();

    void advance(double dt);

    void receiveDanglingMessages(){}

  private:
    /** for logging */
    static tarch::logging::Log _log;

    /** scenario information */
    scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario *_scenario;
};
#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_RECEIVEBOUNDARYDATASERVICE_H_
