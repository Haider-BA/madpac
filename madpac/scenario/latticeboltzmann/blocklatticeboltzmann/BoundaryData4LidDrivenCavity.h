// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4LIDDRIVENCAVITY_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4LIDDRIVENCAVITY_H_

#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Scenario.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "tarch/la/VectorVectorOperations.h"
#include <bitset>

namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      class BoundaryData4LidDrivenCavity;
    }
  }
}



/** implements a simple cavity.
 *
 * @author Philipp Neumann
 */
class scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4LidDrivenCavity:
public scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario {
  public:
    /** gets the domain size, the offset and the scalar wall velocity */
    BoundaryData4LidDrivenCavity(
      const tarch::la::Vector<DIMENSIONS,double> &domainSize,
      const tarch::la::Vector<DIMENSIONS,double> &offset,
      const double &wallVelocity
    );
    virtual ~BoundaryData4LidDrivenCavity(){}

    /** no time-dependent scenario */
    void advance(double dt){}

    void getBoundaryData(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    );

  private:
    /** initialise the wall velocity vector from the scalar value */
    tarch::la::Vector<DIMENSIONS,double> createWallVelocity(const double& wallVelocity) const;

    /** initialise the bitset. The bits are set to true, if the respective pdf is coming from the moving wall
     *  and false otherwise.
     */
    const std::bitset<LB_CURRENT_DIR> createComesFromMovingWall() const;

    /** sets the HW_BB flag */
    void fillBoundaryData4NoSlipWall(
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    ) const;

    /** sets the MOVING_WALL_HW_BB flag and the wall velocity */
    void fillBoundaryData4MovingWall(
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    ) const;

    /** position coordinate no. DIMENSIONS-1 of upper wall */
    const double _upperWall;

    /** wall velocity */
    tarch::la::Vector<DIMENSIONS,double> _wallVelocity;

    /** true if a certain pdf comes from the moving wall */
    const std::bitset<LB_CURRENT_DIR> _comesFromMovingWall;
};
#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4LIDDRIVENCAVITY_H_
