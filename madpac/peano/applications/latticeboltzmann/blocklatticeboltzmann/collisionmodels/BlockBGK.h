// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKBGK_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKBGK_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/AbstractCollisionModel.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace collisionmodels {
          class BlockBGK;
        }
      }
    }
  }
}


/** implements the simple BGK collision for block-structured LB simulations
 *
 * @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockBGK:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel {
  public:
	  BlockBGK(
	    double tau
	  );

	  /** destructor */
	  ~BlockBGK(){}

	  /** carry out collision in a single cell.
	   *  For regular grids, _hasMinusOneEntries=false shall be used, implying
	   *  that there are no overlap cells at all.
	   *  The parameters are:
	   *
	   *  cellNumber - number of considered cell
	   *  inner - true, if a certain subcell is inside the comp. domain and false otherwise
	   *  density - density field
	   *  velocity - velocity field
	   *  pdf - pdf field
	   *  hasMinusOneEntries - true, if a cell contains -1.0 pdfs (i.e. the cell is a fine overlap cell)
	   */
	  void collide(
	    const int &cellNumber,
	    const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
	    const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
	    const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
	    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
	    const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries=peano::applications::latticeboltzmann::blocklatticeboltzmann::_hasMinusOneEntries
	  ) const;


  private:

	  /** the relaxation time */
	  double _tau;

	  /** for logging */
	  static tarch::logging::Log _log;
};

#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKBGK_H_
