#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_REFINEMENTSERVICE_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_REFINEMENTSERVICE_H_

#include "tarch/services/Service.h"
#include "tarch/logging/Log.h"
#include "peano/geometry/services/GeometryService.h"
#include "peano/applications/latticeboltzmann/UserInput.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace services {
          class RefinementService;
        }
      }
    }
  }
}


/** default refinement with respect to the geometry considered.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::services::
RefinementService: public tarch::services::Service {

  public:
    static RefinementService& getInstance();

    /** initialise the refinement service with the Lattice Boltzmann reference level, its corresponding
     *  meshsize and the maximum number of grid levels from there.
     */
    void init(int referenceLevel, double referenceMeshsize, int numberOfLevels);

    /** true, if a refinement shall be triggered */
    bool refine(const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &h,const int level);

    void receiveDanglingMessages(){}

  private:
    int _referenceLevel;
    double _referenceMeshsize;
    int _numberOfGridLevels;

    static tarch::logging::Log _log;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_REFINEMENTSERVICE_H_
