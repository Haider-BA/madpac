// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKPRESSUREOUTLETCONDITION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKPRESSUREOUTLETCONDITION_H_

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockAbstractPressureCondition.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundaryconditions {
          class BlockPressureOutletCondition;
        }
      }
    }
  }
}


/** pressure outlet condition. For details on this condition, see BlockAbstractPressureCondition.
 *
 * @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockPressureOutletCondition:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockAbstractPressureCondition {
  public:
    BlockPressureOutletCondition(): BlockAbstractPressureCondition(){}
    virtual ~BlockPressureOutletCondition(){}

    void getVelocity(
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<DIMENSIONS,double> &targetVelocity
    ) const {
      // use velocity of current cell as extrapolated velocity value on the boundary
      for (int d = 0; d < DIMENSIONS; d++){
        targetVelocity(d) = velocity(boundaryDataIndex(0)*DIMENSIONS+d);
      }
    }

    void getDensity(
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      double &targetDensity
    ) const {
      targetDensity = boundaryData.getDensityL();
    }
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKPRESSUREINLETCONDITION_H_
