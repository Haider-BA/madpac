#include "peano/integration/partitioncoupling/builtin/SendDataToMovingSphere.h"

#ifdef Parallel
int peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::_managementTag = -1;
int peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::_init=-1;
#endif


peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::SendDataToMovingSphere(const tarch::la::Vector<DIMENSIONS,double>& position):
peano::integration::partitioncoupling::SendData(),
_position(position)
{
#if ((DIMENSIONS!=2) && (DIMENSIONS!=3))
  assertion1(false,"Only 2D/3D supported!");
#endif

#ifdef Parallel
  _init++;
  if (_init == 0){
    peano::integration::partitioncoupling::builtin::records::ForceTorque::initDatatype();
    _managementTag = tarch::parallel::Node::reserveFreeTag( "peano::integration::partitioncoupling::builtin::records::ForceTorque" );
  }
#endif

  tarch::la::Vector<3,double> zero(0.0);
  _forceTorque.setTranslationalForce(zero);
  _forceTorque.setTorque(zero);
}


peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::~SendDataToMovingSphere(){
#ifdef Parallel
  if (_init == 0){
    peano::integration::partitioncoupling::builtin::records::ForceTorque::shutdownDatatype();
  }
  _init--;
#endif
}


void peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::sendForce(
  const tarch::la::Vector<DIMENSIONS,double> &position,
  const tarch::la::Vector<DIMENSIONS,double> &force
){
  // determine radial vector
  tarch::la::Vector<DIMENSIONS,double> n(0.0);
  n = _position-position;
  assertion2(!tarch::la::equals(tarch::la::dot(n,n),0.0), position, _position);

  // determine force component normal to the sphere boundary (translational force,n)
  // and tangential to sphere boundary (angular force,t)
  n = tarch::la::dot(force,n)/tarch::la::dot(n,n)*n;

  // add translational force
  addTranslationalForce(force);
  // add angular force
  addTorque(position,force);
}




void peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::resetForces(){
  tarch::la::Vector<3,double> zero(0.0);
  _forceTorque.setTranslationalForce(zero);
  _forceTorque.setTorque(zero);
}


tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::
getTranslationalForce() const {
  return _forceTorque.getTranslationalForce();
}



tarch::la::Vector<3,double>
peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::getTorque() const {
  return _forceTorque.getTorque();
}



void peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::
setPosition(const tarch::la::Vector<DIMENSIONS,double>& pos){
  _position = pos;
}



void peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::addTranslationalForce(
  const tarch::la::Vector<DIMENSIONS,double> &translationalForce
){
  tarch::la::Vector<3,double> myForce = _forceTorque.getTranslationalForce();
  for (int d = 0; d < DIMENSIONS; d++){
    myForce(d) += translationalForce(d);
  }
  _forceTorque.setTranslationalForce(myForce);
}



void peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::addTorque(
  const tarch::la::Vector<DIMENSIONS,double> &position,
  const tarch::la::Vector<DIMENSIONS,double> &angularForce
){
  tarch::la::Vector<3,double> torque = crossProduct(position-_position,angularForce);
  torque = torque + _forceTorque.getTorque();
  _forceTorque.setTorque(torque);
}



#ifdef Parallel
void peano::integration::partitioncoupling::builtin::SendDataToMovingSphere::synchronizeForces(){

  if ( tarch::parallel::Node::getInstance().isMasterProcess() ) {

    // receive all force contributions and add them to master force
    for (int i = 0; i < tarch::parallel::NodePool::getInstance().getNumberOfWorkingNodes(); i++){
      records::ForceTorque incomingForce;
      incomingForce.receive(MPI_ANY_SOURCE,_managementTag);
      _forceTorque.setTranslationalForce(
        _forceTorque.getTranslationalForce()
        + incomingForce.getTranslationalForce()
      );
      _forceTorque.setTorque(_forceTorque.getTorque()+incomingForce.getTorque());
    }

    // master process sends its force and torque information to all slaves
    tarch::parallel::NodePool::getInstance().broadcastToWorkingNodes(_forceTorque, _managementTag);
  } else {
    // send data to master
    int masterRank = tarch::parallel::Node::getInstance().getMasterProcessRank();
    records::ForceTorque incomingForceTorque;

    // send force to master
    _forceTorque.send(masterRank,_managementTag);

    // receive force from master
    incomingForceTorque.receive(masterRank,_managementTag);
    _forceTorque.setTranslationalForce(incomingForceTorque.getTranslationalForce());
    _forceTorque.setTorque(incomingForceTorque.getTorque());
  }

  std::cout << "Force at process " << tarch::parallel::Node::getInstance().getRank() << ": " << _forceTorque.getTranslationalForce() << std::endl;
}
#endif
