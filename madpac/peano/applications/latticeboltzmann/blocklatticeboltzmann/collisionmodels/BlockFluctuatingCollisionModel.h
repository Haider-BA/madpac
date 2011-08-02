// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_COLLISIONMODELS_BLOCKFLUCTUATINGCOLLISIONMODEL_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_COLLISIONMODELS_BLOCKFLUCTUATINGCOLLISIONMODEL_H_

#include "tarch/la/Vector.h"
#include "tarch/la/Matrix.h"
#include "tarch/la/MatrixVectorOperations.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockState.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/GaussianRandomNumberService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/collisionmodels/AbstractCollisionModel.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace collisionmodels {
          class BlockFluctuatingCollisionModel;
        }

        namespace tests {
          class FluctuatingCollisionModelTest;
        }
      }
    }
  }
}


/** implements the fluctuating LB model proposed by Schiller, Dünweg and Ladd.
 *
 * @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::BlockFluctuatingCollisionModel:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::collisionmodels::AbstractCollisionModel {
  public:
    friend class peano::applications::latticeboltzmann::blocklatticeboltzmann::
    tests::FluctuatingCollisionModelTest;

    BlockFluctuatingCollisionModel(
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState& simData
    );

    /** destructor */
    ~BlockFluctuatingCollisionModel(){}

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
    /** creates the magnitudes of the fluctuations */
    tarch::la::Vector<LB_CURRENT_DIR,double> setupPhi(tarch::la::Vector<LB_CURRENT_DIR,double> gamma) const;

    /** creates the moment matrix. It is only supported for D2Q9 and D3Q19. */
    tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double> createMomentMatrix() const;

    /** creates the transposed moment matrix. It is only supported for D2Q9 and D3Q19. */
    tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double> createTransposedMomentMatrix() const;

    /** thermal level of fluctuations */
    const double _mu;

    /** relaxation times */
    const tarch::la::Vector<LB_CURRENT_DIR,double> _gamma;

    /** magnitude of fluctuations of single modes */
    const tarch::la::Vector<LB_CURRENT_DIR,double> _phi;

    /** moment matrix */
    const tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double> _M;

    /** transposed moment matrix */
    const tarch::la::Matrix<LB_CURRENT_DIR,LB_CURRENT_DIR,double> _MTranspose;

    /** for logging */
    static tarch::logging::Log _log;
};


#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_COLLISIONMODELS_BLOCKFLUCTUATINGCOLLISIONMODEL_H_
