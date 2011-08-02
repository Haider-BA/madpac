// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4CHANNELWITHNOSLIPBOUNDARIES_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4CHANNELWITHNOSLIPBOUNDARIES_H_

#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Channel.h"

namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      class BoundaryData4ChannelWithNoSlipBoundaries;
    }
  }
}


/** simple channel scenario.
 *
 *  @author Philipp Neumann
 */
class scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4ChannelWithNoSlipBoundaries:
public scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel {
  public:
    BoundaryData4ChannelWithNoSlipBoundaries(
      const tarch::la::Vector<DIMENSIONS,double> &domainSize,
      const tarch::la::Vector<DIMENSIONS,double> &offset,
      const double &meanInletVelocity,
      const bool &useParabolicProfile
    );
    ~BoundaryData4ChannelWithNoSlipBoundaries(){}

    /** no time-dependent scenario */
    void advance(double dt){}

  protected:
    /** fills boundary data for inner boundaries with no-slip information */
    void fillBoundaryData4InnerBoundaries(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    );
};


#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4CHANNELWITHNOSLIPBOUNDARIES_H_
