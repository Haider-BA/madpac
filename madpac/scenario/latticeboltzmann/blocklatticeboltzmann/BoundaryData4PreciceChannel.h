// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4PRECICECHANNEL_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4PRECICECHANNEL_H_

#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Channel.h"
#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"
#include "peano/integration/partitioncoupling/services/CouplingService.h"
#include "peano/integration/partitioncoupling/services/SendDataService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/ForceSynchronisationService.h"

#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"


namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      class BoundaryData4PreciceChannel;
    }
  }
}


/** scenario needed for FSI computations involving preCICE.
 *
 *  @author Philipp Neumann
 */
class scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4PreciceChannel:
public scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel {
  public:
    BoundaryData4PreciceChannel(
      const tarch::la::Vector<DIMENSIONS,double> &domainSize,
      const tarch::la::Vector<DIMENSIONS,double> &offset,
      const double &meanInletVelocity,
      const bool &useParabolicProfile
    );
    ~BoundaryData4PreciceChannel(){}

    /** update preCICE/ moving-sphere data */
    void advance(double dt);

  protected:
    /** treats inner boundaries as moving obstacles and gets the boundary velocity from receiveData-preCICE service. */
    void fillBoundaryData4InnerBoundaries(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    );
};
#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4PRECICECHANNEL_H_

