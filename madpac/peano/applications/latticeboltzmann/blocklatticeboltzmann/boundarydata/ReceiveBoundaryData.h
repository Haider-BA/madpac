// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_RECEIVEBOUNDARYDATA_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_RECEIVEBOUNDARYDATA_H_

#include "peano/utils/Dimensions.h"
#include <vector>
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include "tarch/services/Service.h"

#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoundaryData.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/geometry/services/GeometryService.h"

#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Scenario.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4LidDrivenCavity.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4ChannelWithNoSlipBoundaries.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/BoundaryData4PreciceChannel.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundarydata {
          class ReceiveBoundaryData;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::ReceiveBoundaryData:
public tarch::services::Service {
  public:
    ReceiveBoundaryData();
    ~ReceiveBoundaryData();

    /** initialise the boundaries by config */
    void init(
      const tarch::la::Vector<DIMENSIONS,double> &domainSize,
      const tarch::la::Vector<DIMENSIONS,double> &domainOffset,
      const double &characteristicVelocity,
      const bool &useParabolicProfile
    );

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

    static ReceiveBoundaryData& getInstance();

    void receiveDanglingMessages(){}

  private:
    /** for logging */
    static tarch::logging::Log _log;

    /** scenario information */
    scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario *_scenario;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_RECEIVEBOUNDARYDATA_H_
