#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKBOUNDARYCONDITIONMANAGER_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKBOUNDARYCONDITIONMANAGER_H_

#include "peano/utils/Dimensions.h"
#include <bitset>
#include "tarch/la/Vector.h"
#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/AbstractBlockBoundaryCondition.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockHalfwayBounceBack.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockMovingWall.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockVelocityInletEquilibrium.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundaryconditions/BlockPressureOutletCondition.h"

#include "peano/applications/latticeboltzmann/BoundaryData.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundaryconditions {
          class BlockBoundaryConditionManager;
        }
      }
    }
  }
}


/** manages all boundary conditions. This class holds instances of all boundary conditions and can
 *  be used to switch between different boundary treatments. There are 2*DIMENSIONS pointers which
 *  can be set/ initialised to treat the outer boundaries of a cubic domain. Besides, the only
 *  further boundaries which are allowed to be directly specified as members are no-slip and
 *  moving-obstacle boundaries as these are the only ones which shall be allowed to exist
 *  inside the domain. In case that an outer boundary is set to be moving-obstacle or no-slip type,
 *  it is not initialised as such but instead is set to dummy state. This is done because the no-slip
 *  and moving-obstacle treatment is triggered anyway by this method; otherwise, the boundaries would
 *  be treated twice by this method.
 *  The function provided by the Manager-class are the same as the ones of the boundary conditions;
 *  however, they trigger directly the boundary conditions for no-slip and moving-obstacle boundaries
 *  as well as for the outer boundaries.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::
BlockBoundaryConditionManager {
  public:
    BlockBoundaryConditionManager(
      peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
    );
    ~BlockBoundaryConditionManager();

    /** boundary treatment for a whole block. This function needs to be implemented by the
     * respective boundary condition for a treatment before collision (e.g. Bounce-Back schemes).
     * It is to be called before any other action performed on the pdf-data in touchVertexFirstTime().
     * Typically, a boundary treatment only requires the implementation of one
     * treatBoundaryBeforeCollision() or treatBoundaryAfterCollision().
     */
    void treatBoundaryBeforeCollision(
      const int level,
      const std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryData,
      const std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
    );

    /** boundary treatment for a whole block. This function needs to be implemented by the
     * respective boundary condition for a treatment after collision (e.g. Bounce-Back schemes)
     * and is called directly after collision (in case that this is the right level).
     */
    void treatBoundaryAfterCollision(
      const int level,
      const std::vector<peano::applications::latticeboltzmann::BoundaryData>& boundaryData,
      const std::vector<tarch::la::Vector<2,unsigned int> >& boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
    );

  private:

    /** no-slip treatment -> NO_SLIP */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockHalfwayBounceBack _halfwayBounceBack;

    /** moving wall -> MOVING_WALL */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockMovingWall _movingWall;

    /** velocity inlet -> VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockVelocityInletEquilibrium _velocityInletCondition;

    /** pressure outlet -> PRESSURE_OUTLET */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockPressureOutletCondition _pressureOutletCondition;

    /** pressure inlet -> PRESSURE_INLET */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::BlockPressureOutletCondition _pressureInletCondition;

    /** pointer to all boundary conditions */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::boundaryconditions::AbstractBlockBoundaryCondition **_boundaryConditions;

};

#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKBOUNDARYCONDITIONMANAGER_H_
