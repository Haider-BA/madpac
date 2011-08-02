// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_ABSTRACTCOLLISIONMODEL_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_ABSTRACTCOLLISIONMODEL_H_

#include <bitset>
#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace collisionmodels {
          class AbstractCollisionModel;
        }
      }
    }
  }
}



/** abstract class for all collision models. A new collision model needs to inherit from this class!
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel {
  public:
    /** constructor */
    AbstractCollisionModel(){}

    virtual ~AbstractCollisionModel(){}

    /** carry out collision in one cell.
     *  For regular grids, _hasMinusOneEntries=false shall be used, implying
     *  that there are no overlap cells at all.
     *  The parameters are:
     *
     *  cellNumber - number of the considered cell
     *  inner      - true, if a certain subcell is inside the comp. domain and false otherwise
     *  density    - density field
     *  velocity   - velocity field
     *  pdf        - pdf field
     *  hasMinusOneEntries - true, if a cell contains -1.0 pdfs (i.e. the cell is a fine overlap cell)
     */
    virtual void collide(
      const int &cellNumber,
      const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      const tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE,double>& velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries=peano::applications::latticeboltzmann::blocklatticeboltzmann::_hasMinusOneEntries
    ) const = 0;
};
#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_ABSTRACTCOLLISIONMODEL_H_
