// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKCOMPUTECELLVALUES_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKCOMPUTECELLVALUES_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include <bitset>
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        class BlockComputeCellValues;
      }
    }
  }
}


/** Analogon to ComputeCellValues, but for the block-structured case.
 *  This class implements density, velocity and equilibrium distribution
 *  computations.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockComputeCellValues {
  public:
	BlockComputeCellValues();
	~BlockComputeCellValues();

	/** Computes the equilibrium distribution from the given density and velocity and
	 *  stores it in feq.
	 */
	void computeFeq(double density,tarch::la::Vector<DIMENSIONS,double> velocity,
			        tarch::la::Vector<LB_CURRENT_DIR,double>& feq) const;


	/** computes the density from pdf in all inner cells (defined by inner-bitset)
	 *  and stores the result in density. This is the block-wise evaluation.
	 *  The Vector hasMinusOneEntries contains "true"-entries, if the respective subcell
	 *  has a -1-pdf, i.e. it is an overlap cell. For regularly resolved fluid domains,
	 *  there are no overlap cells; thus, a vector _hasMinusOneEntries=false can be used in this
	 *  case.
	 */
	void computeDensity(
	  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
	  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
	  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
	  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries=peano::applications::latticeboltzmann::blocklatticeboltzmann::_hasMinusOneEntries
	) const;


  /** computes the velocity from pdf and density in all inner cells (defined by inner-bitset)
   *  and stores the result in velocity. This is the block-wise evaluation.
   *  The Vector hasMinusOneEntries contains "true"-entries, if the respective subcell
   *  has a -1-pdf, i.e. it is an overlap cell. For regularly resolved fluid domains,
   *  there are no overlap cells; thus, a vector _hasMinusOneEntries=false can be used in this
   *  case.
   */
	void computeVelocity(
	  const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
	  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
	  const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density,
	  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
   const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries=peano::applications::latticeboltzmann::blocklatticeboltzmann::_hasMinusOneEntries
	) const;
};

// declare a static BlockComputeCellValues-representation
namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        static const peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockComputeCellValues BLOCKCOMPUTECELLVALUES;
      }
    }
  }
}

#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKCOMPUTECELLVALUES_H_
