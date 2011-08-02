// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKFULLWAYBOUNCEBACK_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKFULLWAYBOUNCEBACK_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include <vector>
#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/AbstractBlockBoundaryCondition.h"
#include "peano/applications/latticeboltzmann/BoundaryData.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundaryconditions {
          class BlockHalfwayBounceBack;
        }
      }
    }
  }
}


/** implements the halfway bounce back boundary condition.
 *
 * @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockHalfwayBounceBack:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition {
  public:
	  BlockHalfwayBounceBack();
	  ~BlockHalfwayBounceBack(){}

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


	  /** boundary treatment for a single pdf.
	   */
	  void treatBoundaryAfterCollision(
      const int level,
      const peano::applications::latticeboltzmann::BoundaryData& boundaryData,
      const tarch::la::Vector<2,unsigned int>& boundaryDataIndex,
	    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
	    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
	    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
	  );

  private:
    /** for logging */
	  static tarch::logging::Log _log;
};
#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKFULLWAYBOUNCEBACK_H_
