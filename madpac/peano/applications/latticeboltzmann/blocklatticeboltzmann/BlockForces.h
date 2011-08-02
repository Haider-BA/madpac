// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKFORCES_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKFORCES_H_

#include "tarch/la/Vector.h"
#include "peano/utils/Globals.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/forcerecords/BlockPosition.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/forcerecords/SendForce.h"
#include "peano/integration/partitioncoupling/services/SendDataService.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        class BlockForces;
      }
    }
  }
}


/** In the case of force computations, all forces need to be sent to the SendDataService in order to contribute
 *  to the total force acting on some body. However, in parallel simulations, this gets a little nasty: As the vertices
 *  at process boundaries are held and evaluated by both processes, we would obtain multiples of certain force contributions
 *  (for each vertex copy, we would have one force contribution)! So, we need to synchronise that.
 *  This class is meant to be used especially for this purpose. It collects the force data of one vertex, including the
 *  information, which vertex this is (i.e. the position of the vertex), if its forces shall contribute to the force
 *  computations etc.
 *  The class is used within the ForceSynchonisationService.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockForces {
  public:
    /** SEND_FORCE_YES: The forces of this vertex contribute to the force computations.
     *  SEND_FORCE_NO: The forces do not contribute to the force computations.
     *  In the serial case, all vertices with forces will have the SEND_FORCE_YES-flag.
     */
    enum AddThisForce{SEND_FORCE_YES=0,SEND_FORCE_NO};

    /** initialise class with the respective block position */
    BlockForces(const tarch::la::Vector<DIMENSIONS,double>& blockPosition) {
      _blockPosition.setBlockPosition(blockPosition);
      // by default, set sendForce to YES. This is important as - in the serial case - the forces
      // should always be sent to the SendDataService
      _sendForce.setSendForce(SEND_FORCE_YES);
      _forces.clear();
    }
    ~BlockForces(){}

    /** adds the force at a certain position to the std::vector */
    void addForce(const tarch::la::Vector<DIMENSIONS,double> &position, const tarch::la::Vector<DIMENSIONS,double> &force){
      _forces.push_back(Force());
      _forces[_forces.size()-1]._force = force;
      _forces[_forces.size()-1]._position = position;
    }

    /** returns the number of forces for this block */
    unsigned int size() const {
      return _forces.size();
    }

    /** returns a reference to the block position */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition&
    getBlockPosition(){
      return _blockPosition;
    }

    /** returns a reference to the SendForce-object */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce& getSendForce(){
      return _sendForce;
    }

    /** if _sendForces says "Hey, we need these forces!", then the forces are sent to the SendDataService. */
    void sendForces() {
      if (_sendForce.getSendForce() == SEND_FORCE_YES){
        for (unsigned int i = 0; i < _forces.size(); i++){
          peano::integration::partitioncoupling::services::SendDataService::getInstance().getSendData().
          sendForce(_forces[i]._position,_forces[i]._force);
        }
      }
    }

  private:
    /** contains position and the force coming from this position */
    struct Force {
      tarch::la::Vector<DIMENSIONS,double> _force;
      tarch::la::Vector<DIMENSIONS,double> _position;
    };

    /** for sending information, whether the forces shall be sent to the SendDataService or not */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce _sendForce;
    /** for sending the position of this vertex to the master rank */
    peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition _blockPosition;
    /** all forces contributing from this vertex */
    std::vector<Force> _forces;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKFORCES_H_

