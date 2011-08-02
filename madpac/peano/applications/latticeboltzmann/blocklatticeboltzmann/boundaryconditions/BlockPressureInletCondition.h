// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKPRESSUREINLETCONDITION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKPRESSUREINLETCONDITION_H_

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockAbstractPressureCondition.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundaryconditions {
          class BlockPressureInletCondition;
        }
      }
    }
  }
}


/** pressure condition at an inlet. Currently neither used nor supported!
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockPressureInletCondition:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockAbstractPressureCondition {
  public:
    BlockPressureInletCondition(): BlockAbstractPressureCondition(){}
    virtual ~BlockPressureInletCondition(){}

    void getVelocity(
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<DIMENSIONS,double> &targetVelocity
    ) const {
      // use (profile) velocity from boundary data
      targetVelocity = boundaryData.getVelocityL();
    }

    void getDensity(
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      double &targetDensity
    ) const {
      //targetDensity = boundaryData.getDensityL();
      targetDensity = density(boundaryDataIndex(0));
    }

};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKPRESSUREINLETCONDITION_H_
