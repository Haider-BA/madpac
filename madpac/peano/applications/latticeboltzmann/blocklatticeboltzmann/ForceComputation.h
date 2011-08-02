// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_FORCECOMPUTATION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_FORCECOMPUTATION_H_

#include <vector>

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"

#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/BoundaryData.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/ForceSynchronisationService.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        class ForceComputation;
      }
    }
  }
}


/** evaluates the forces acting on a moving obstacle in the flow and sends them to a structural solver.
 *  For details on the evaluation of the pdfs for the force evaluation, see amongst others
 *  "Boundary Forces in lattice Boltzmann: Analysis of Momentum Exchange Algorithm"
 *  by A. Caiazzo and M. Junk
 *
 * @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::ForceComputation {
  public:
    ForceComputation(
      const peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
    );
    ~ForceComputation(){}

    /** is called directly after the collision process and stores all post-collision pdf values for those
     *  particle distribution functions which point into the moving obstacle (and their respective index in the vectors).
     *  This function needs to be called BEFORE reconstructing the pdfs for the next timestep.
     */
    void storePostCollisionPdfs(
      const std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryData,
      const std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> &pdf
    );


    /** computes all forces acting on a MOVING_OBSTACLE_HW_BB boundary and sends them to a structural solver using the
     *  SendDataService. For consistency reasons, this function needs to be called after updating the pdfs pointing towards
     *  the boundary and before local streaming in the touchVertexFirstTime() callback.
     */
    void evaluateForce(
      const tarch::la::Vector<DIMENSIONS,double> &position,
      const int level,
      const std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryData,
      const std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> &pdf
    ) const;


  private:
    static tarch::logging::Log _log;

    const peano::applications::latticeboltzmann::MultiLevelSimData &_multiLevelSimData;

    std::vector<double> _postCollisionPdfs;
    std::vector<unsigned int> _postCollisionIndex;
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_FORCECOMPUTATION_H_
