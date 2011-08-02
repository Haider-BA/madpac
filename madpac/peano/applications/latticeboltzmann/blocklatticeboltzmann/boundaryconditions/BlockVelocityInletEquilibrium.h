// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKVELOCITIYINLETEQUILIBRIUM_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKVELOCITIYINLETEQUILIBRIUM_H_

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/AbstractBlockBoundaryCondition.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundaryconditions {
          class BlockVelocityInletEquilibrium;
        }
      }
    }
  }
}

/** sets the equilibrium distributions as reconstruction values for missing pdfs at a velocity inlet.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockVelocityInletEquilibrium:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition {
  public:
    BlockVelocityInletEquilibrium();
    ~BlockVelocityInletEquilibrium(){}

    /** nop
     */
    void treatBoundaryBeforeCollision(
      const int level,
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
    ){}


    /** boundary treatment for a certain pdf
     */
    void treatBoundaryAfterCollision(
      const int level,
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
    );

};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONDITIONS_BLOCKVELOCITIYINLETEQUILIBRIUM_H_
