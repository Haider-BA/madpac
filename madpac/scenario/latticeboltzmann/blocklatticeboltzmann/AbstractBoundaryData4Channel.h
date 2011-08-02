// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_ABSTRACTBOUNDARYDATA4CHANNEL_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_ABSTRACTBOUNDARYDATA4CHANNEL_H_

#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Scenario.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"

namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      class AbstractBoundaryData4Channel;
    }
  }
}


/** input for a channel scenario. Pdfs that come from the inlet (= western side of domain) are reconstructed
 *  by the equilibrium distribution, pdfs at the outlet are treated by the pressure condition (=eastern side).
 *  All other outer boundaries are handled as no-slip walls.
 *
 *  @author Philipp Neumann
 */
class scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Channel:
public scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario {
  public:
    AbstractBoundaryData4Channel(
      const tarch::la::Vector<DIMENSIONS,double> &domainSize,
      const tarch::la::Vector<DIMENSIONS,double> &offset,
      const double &meanInletVelocity,
      const bool &useParabolicProfile
    );
    virtual ~AbstractBoundaryData4Channel(){}

    void getBoundaryData(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    );

    virtual void advance(double dt) = 0;

  protected:
    /** rule for treating inner boundaries.
     *  This one needs to be implemented for different types of channel simulations.
     */
    virtual void fillBoundaryData4InnerBoundaries(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    ) = 0;

  private:
    void fillBoundaryData4VelocityInlet(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    ) const;

    void fillBoundaryData4PressureOutlet(
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    ) const;

    void fillBoundaryData4NoSlipWalls(
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    ) const;

    const tarch::la::Vector<DIMENSIONS,double> _domainSize;
    const tarch::la::Vector<DIMENSIONS,double> _offset;
    double _meanInletVelocity;
    const bool _useParabolicProfile;
};

#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_ABSTRACTBOUNDARYDATA4CHANNEL_H_
