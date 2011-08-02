#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4EMPTYBOX_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4EMPTYBOX_H_

#include "tarch/la/Vector.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/AbstractBoundaryData4Scenario.h"
#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"
#include "peano/integration/partitioncoupling/services/CouplingService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/ForceSynchronisationService.h"

namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      class BoundaryData4EmptyBox;
    }
  }
}


/** simulates an empty box filled with fluid that contains a moving obstacle.
 *  The outer walls are treated by the half-way bounce-back rule.
 *  Inner boundaries are considered to be the outside of a moving structure.
 *  Make sure, that you have the ReceiveDataService initialised before.
 *
 *  @author Philipp Neumann
 */
class scenario::latticeboltzmann::blocklatticeboltzmann::BoundaryData4EmptyBox:
public scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario {
  public:
    BoundaryData4EmptyBox(
      const tarch::la::Vector<DIMENSIONS,double> &domainSize,
      const tarch::la::Vector<DIMENSIONS,double> &offset
    );
    ~BoundaryData4EmptyBox(){}

    /** advance sphere and thus update velocity data at its boundary */
    void advance(double dt){
      peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
      getInstance().sendForcesToSendDataService();
#ifdef Parallel
      peano::integration::partitioncoupling::services::SendDataService::getInstance().synchronizeForces();
#endif
      peano::integration::partitioncoupling::services::CouplingService::getInstance().advance(dt);
    }

    void getBoundaryData(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    );

  private:
    const tarch::la::Vector<DIMENSIONS,double> _domainSize;
    const tarch::la::Vector<DIMENSIONS,double> _offset;
};
#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYDATA4EMPTYBOX_H_
