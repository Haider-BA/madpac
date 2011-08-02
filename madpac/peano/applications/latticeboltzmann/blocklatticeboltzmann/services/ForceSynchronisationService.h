// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_FORCESYNCHRONISATIONSERVICE_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_FORCESYNCHRONISATIONSERVICE_H_

#include "tarch/services/Service.h"
#include "tarch/la/Vector.h"
#include "tarch/la/VectorCompare.h"
#include "peano/utils/Globals.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockForces.h"
#include<set>

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace services {
          class ForceSynchronisationService;
        }
      }
    }
  }
}


/** When computing forces onto a obstacle, these forces are mapped onto the structure according to their position.
 *  A problem arises in parallel computations: As the domains of neighbouring processes overlap (with one blocksize),
 *  the forces would be computed twice or even more often; they would respectively be mapped to the structure more than
 *  once!
 *  Therefore, in order to synchronise the forces, the following service is used. It collects the forces according to their
 *  block-id and their position during the grid traversal. Afterwards, when the vertices are merged, this service
 *  is informed about the merging and modifies the respective forces (i.e. divides the forces by a corresponding factor).
 *  Afterwards, the forces are sent to the SendDataService.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService:
public tarch::services::Service {
  public:
    static ForceSynchronisationService& getInstance();

    /** initialises the service. This function must not be called more than once in a simulation! */
    void init();

    /** shuts down the service */
    void shutdown();

    /** adds the force 'force' at position 'position' to the last entry of the _blockForces */
    void addForce(const tarch::la::Vector<DIMENSIONS,double> &position, const tarch::la::Vector<DIMENSIONS,double> &force);

    /** initialises the force evaluation for a block at position blockPosition */
    void startBlockForceEvaluation(const tarch::la::Vector<DIMENSIONS,double> &position);

    /** puts the force/ torque of that block to a buffer */
    void endBlockForceEvaluation();

    /** triggers the sendForces()-command for all _blockForces-entries */
    void sendForcesToSendDataService();

    void receiveDanglingMessages(){}


  private:
    ForceSynchronisationService();
    ~ForceSynchronisationService(){}

    /** for each process, this vector will hold all force contributions that might need to be considered for the
     *  structure simulation.
     */
    std::vector<peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockForces> _blockForces;


    /** this set is only present on the master node. It contains all block positions of those blocks, which
     *  have already sent their force data to the SendDataService. Thus, if we send a query and ask, if a
     *  certain block still needs to send its forces, we only have to check if this block is already contained
     *  in the set or not.
     */
#ifdef Parallel
    int _blockPositionTag;
    int _sendForceTag;
    std::set<tarch::la::Vector<DIMENSIONS,double>, tarch::la::VectorCompare<DIMENSIONS> >  _masterSet;
#endif
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_FORCESYNCHRONISATIONSERVICE_H_
