// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_RECEIVEDATAFROMMOVINGSPHERE_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_RECEIVEDATAFROMMOVINGSPHERE_H_

#include "peano/integration/partitioncoupling/ReceiveData.h"
#include "peano/integration/partitioncoupling/builtin/Utils.h"

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace builtin {
        class ReceiveDataFromMovingSphere;
      }
    }
  }
}


/** returns the velocity at a certain surface point of the moving sphere (in the
 *  builtin PartitionCoupling4MovingSphere case)
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::builtin::ReceiveDataFromMovingSphere:
public peano::integration::partitioncoupling::ReceiveData {
  public:
    ReceiveDataFromMovingSphere(
      const tarch::la::Vector<DIMENSIONS,double>& position,
      const double radius,
      const tarch::la::Vector<3,double>& initialTranslationalVelocity,
      const tarch::la::Vector<3,double>& initialAngularVelocity
    ): peano::integration::partitioncoupling::ReceiveData(),
       _position(position),
       _radius(radius),
       _translationalVelocity(initialTranslationalVelocity),
       _angularVelocity(initialAngularVelocity){
#if ((DIMENSIONS!=2) && (DIMENSIONS!=3))
        assertion1(false,"Only 2D/3D supported!");
#endif
      }



  /** if the distance of the point x to the surface of the sphere is smaller than 3*max_d h(d), this
   *  function return true. Otherwise, it returns false.
   */
  bool reflag(const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h){
    // TODO change
    return true;
    tarch::la::Vector<DIMENSIONS,double> diff(x-_position);
    double maxH = h(0);
    double norm = diff(0)*diff(0);
    for (int d = 1; d < DIMENSIONS; d++){
      if (maxH < h(d)){
        maxH = h(d);
      }
      norm += diff(d)*diff(d);
    }
    norm = std::fabs(std::sqrt(norm) - _radius);
    if ( tarch::la::smaller(norm,3*maxH) ){
      return true;
    } else {
      return false;
    }
  }


  /** returns the respective velocity at the position 'position' */
  virtual tarch::la::Vector<DIMENSIONS,double> getVelocity(
    const tarch::la::Vector<DIMENSIONS,double> &position
  ){

    tarch::la::Vector<3,double> r(
      position(0)-_position(0),
      position(1)-_position(1)
#if (DIMENSIONS==2)
      ,0.0
#elif (DIMENSIONS==3)
      ,position(2)-_position(2)
#endif
    );

    tarch::la::Vector<3,double> angularPart = crossProduct(_angularVelocity,r);
#if (DIMENSIONS==2)
    assertion(tarch::la::equals(angularPart(2),0.0));
    return tarch::la::Vector<2,double>(
      _translationalVelocity(0) + angularPart(0),
      _translationalVelocity(1) + angularPart(1)
    );
#elif (DIMENSIONS==3)
    return _translationalVelocity+angularPart;
#else
    assertion1(false,"Only 2D/3D supported!");
    return tarch::la::Vector<DIMENSIONS,double>(-1.0);
#endif
  }


  /** get the difference between old and current velocity. Not implemented yet! TODO */
  virtual tarch::la::Vector<DIMENSIONS,double> getVelocityDelta (
    const tarch::la::Vector<DIMENSIONS,double> &position){
    // currently not available
    assertion(false);
    return tarch::la::Vector<DIMENSIONS,double>(0.0);
  }


  /** set translational velocity */
  void setTranslationalVelocity(const tarch::la::Vector<3,double> &vel){
    _translationalVelocity = vel;
  }

  /** set angular velocity */
  void setAngularVelocity(const tarch::la::Vector<3,double> &vel){
    _angularVelocity = vel;
  }

  /** set sphere position */
  void setPosition(const tarch::la::Vector<DIMENSIONS,double> &pos){
    _position = pos;
  }

  tarch::la::Vector<DIMENSIONS,double> getPosition() const {
    return _position;
  }

  private:


    /** position of sphere */
    tarch::la::Vector<DIMENSIONS,double> _position;

    /** radius of sphere */
    double _radius;

    /** translational velocity */
    tarch::la::Vector<3,double> _translationalVelocity;

    /** angular velocity */
    tarch::la::Vector<3,double> _angularVelocity;
};
#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_RECEIVEDATAFROMMOVINGSPHERE_H_
