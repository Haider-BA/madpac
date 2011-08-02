#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/ForceSynchronisationService.h"


#include "tarch/services/ServiceFactory.h"
registerService(peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService)

peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
ForceSynchronisationService(): tarch::services::Service()
#ifdef Parallel
, _blockPositionTag(-1),_sendForceTag(-1)
#endif
{}

peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService&
peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::getInstance(){
  static ForceSynchronisationService singleton;
  return singleton;
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
init(){
#ifdef Parallel
  if ( (_sendForceTag == -1) && (_blockPositionTag==-1)){
    peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::initDatatype();
    peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::initDatatype();
    _sendForceTag = tarch::parallel::Node::reserveFreeTag( "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce" );
    _blockPositionTag = tarch::parallel::Node::reserveFreeTag( "peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition" );
  }
  _masterSet.clear();
#endif
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
shutdown(){
#ifdef Parallel
  peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce::shutdownDatatype();
  peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition::shutdownDatatype();
  _masterSet.clear();
#endif
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
addForce(const tarch::la::Vector<DIMENSIONS,double> &position, const tarch::la::Vector<DIMENSIONS,double> &force){
  _blockForces[_blockForces.size()-1].addForce(position,force);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
startBlockForceEvaluation(
const tarch::la::Vector<DIMENSIONS,double> &position){
  _blockForces.push_back(peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockForces(position));
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
endBlockForceEvaluation(){
  // if there is no force contribution from this vertex, erase it from vector
  if (_blockForces[_blockForces.size()-1].size() == 0){
    _blockForces.pop_back();
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::services::ForceSynchronisationService::
sendForcesToSendDataService(){
#ifdef Parallel
  if ( tarch::parallel::Node::getInstance().isMasterProcess() ) {
    for (unsigned int i = 0; i < _blockForces.size(); i++){
      if (_masterSet.find(_blockForces[i].getBlockPosition().getBlockPosition()) == _masterSet.end()){
        _masterSet.insert(_blockForces[i].getBlockPosition().getBlockPosition());
        _blockForces[i].getSendForce().setSendForce(
          peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockForces::SEND_FORCE_YES
        );
      } else {
        _blockForces[i].getSendForce().setSendForce(
          peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockForces::SEND_FORCE_NO
        );
      }
    }

    // for all workers...
    for (int i = 0; i < tarch::parallel::NodePool::getInstance().getNumberOfWorkingNodes(); i++){

      // receive number of blocks with force contributions
      peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce incoming;
      incoming.receive(MPI_ANY_SOURCE,_sendForceTag);

      // receive all block position tags
      for (int j = 0; j < incoming.getSendForce(); j++){
        // receive block positions from the respective process
        peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::BlockPosition incomingPosition;
        peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce outgoing;
        incomingPosition.receive(incoming.getSenderRank(),_blockPositionTag);

        // if this position is not in the set yet, it shall be sent to the SendDataService
        if (_masterSet.find(incomingPosition.getBlockPosition()) == _masterSet.end()){
          outgoing.setSendForce(
            peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockForces::SEND_FORCE_YES
          );
          _masterSet.insert(incomingPosition.getBlockPosition());
        } else {
          // otherwise: no sending
          outgoing.setSendForce(
            peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockForces::SEND_FORCE_NO
          );
        }

        // send information back to worker
        outgoing.send(incoming.getSenderRank(),_sendForceTag);
      }
    }

  } else {
    // send data to master
    int masterRank = tarch::parallel::Node::getInstance().getMasterProcessRank();

    // set number of respective blocks with force contributions of this process and send it to the master
    peano::applications::latticeboltzmann::blocklatticeboltzmann::forcerecords::SendForce sendForce;
    sendForce.setSendForce(_blockForces.size());
    sendForce.send(masterRank,_sendForceTag);

    for (unsigned int i = 0; i < _blockForces.size(); i++){
      // send block position to the master
      _blockForces[i].getBlockPosition().send(masterRank,_blockPositionTag);
      // receive information on adding the force to SendDataService or not
      _blockForces[i].getSendForce().receive(masterRank,_sendForceTag);
    }
  }
#endif

  // send forces to SendDataService
  for (unsigned int i = 0; i < _blockForces.size(); i++){
    _blockForces[i].sendForces();
  }

  _blockForces.clear();
#ifdef Parallel
  _masterSet.clear();
#endif
}
