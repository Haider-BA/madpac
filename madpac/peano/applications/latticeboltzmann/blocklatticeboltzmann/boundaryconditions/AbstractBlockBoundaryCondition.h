// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_ABSTRACTBLOCKBOUNDARYCONDITION_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_ABSTRACTBLOCKBOUNDARYCONDITION_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"

#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/BoundaryData.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundaryconditions {
          class AbstractBlockBoundaryCondition;
        }
      }
    }
  }
}


/** Base class for any boundary treatment. This is needed to bring together all
 *  sorts of boundary conditions in the manager-system (-> BoundaryConditionManager).
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition {
  public:
    AbstractBlockBoundaryCondition(){}
    virtual ~AbstractBlockBoundaryCondition(){}

    /** boundary treatment for a single pdf. This function needs to be implemented by the
     * respective boundary condition for a treatment before collision.
     * It is to be called before any other action performed on the pdf-data in touchVertexFirstTime().
     * Typically, a boundary treatment only requires the implementation of one
     * treatBoundaryBeforeCollision() or treatBoundaryAfterCollision().
     */
    virtual void treatBoundaryBeforeCollision(
      const int level,
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
    ) = 0;


    /** boundary treatment for a single pdf. This function needs to be implemented by the
     * respective boundary condition for a treatment after collision (e.g. Bounce-Back schemes)
     * and is called directly after collision (in case that this is the right level).
     */
    virtual void treatBoundaryAfterCollision(
      const int level,
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
    ) = 0;
};
#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_ABSTRACTBLOCKBOUNDARYCONDITION_H_
