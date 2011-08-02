// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_ROTATION_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_ROTATION_H_

#include "tarch/la/Scalar.h"
#include "tarch/la/Vector.h"
#include "tarch/la/Matrix.h"
#include "tarch/la/MatrixVectorOperations.h"
#include "tarch/la/VectorVectorOperations.h"
#include <cmath>
#include <bitset>

/** not needed anymore. Maybe remove...
 *
 *  @author Philipp Neumann
 */
namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace builtin {

        /** Consider a sphere with midpoint 'rotationCenter' and a point 'point'
         *  on its surface. Now, we are interested in the angles, that are needed
         *  for rotating a point (p_0,0.0,....,0.0) onto 'point' (assuming
         *  'rotationCenter' is the origin). Therefore, it is sufficient to compute
         *  angles in the x0-x1-,x0-x2-,....x0-xd-plane.
         *  Thus, this function returns the angles in the respective planes that
         *  are needed to rotate the reference point on the x0-axis onto the point
         *  'point'.
         */
        void getRotationAngles(
          const tarch::la::Vector<DIMENSIONS,double> &rotationCenter,
          const tarch::la::Vector<DIMENSIONS,double> &point,
          tarch::la::Vector<DIMENSIONS-1,double> &angles
        );

        /** rotates the point 'point' around 'rotationCenter' using the angles 'angles'.
         *  These angles describe the rotation in the x0-x1-,x0-x2-,...x0-xd-plane.
         */
        tarch::la::Vector<DIMENSIONS,double> rotateForward(
          const tarch::la::Vector<DIMENSIONS,double> &rotationCenter,
          const tarch::la::Vector<DIMENSIONS,double> &point,
          const tarch::la::Vector<DIMENSIONS-1,double> &angles
        );

        tarch::la::Vector<DIMENSIONS,double> rotateBackward(
          const tarch::la::Vector<DIMENSIONS,double> &rotationCenter,
          const tarch::la::Vector<DIMENSIONS,double> &point,
          const tarch::la::Vector<DIMENSIONS-1,double> &angles
        );
      }
    }
  }
}


void peano::integration::partitioncoupling::builtin::getRotationAngles(
  const tarch::la::Vector<DIMENSIONS,double> &rotationCenter,
  const tarch::la::Vector<DIMENSIONS,double> &point,
  tarch::la::Vector<DIMENSIONS-1,double> &angles
){

  tarch::la::Vector<DIMENSIONS,double> distance(point-rotationCenter);
  double radius = std::sqrt( tarch::la::dot(distance,distance) );
  //std::cout << "distance: " << distance << ", radius: " << radius << std::endl;
  assertion( !tarch::la::equals(radius,0.0) );

#if (DIMENSIONS==2)
  angles(0) = asin(distance(1)/radius);

  // check for 180 degrees
  tarch::la::Vector<DIMENSIONS,double> x(0.0);
  x(0) = cos(angles(0))*radius;
  x(1) = sin(angles(0))*radius;
  x=x-distance;
  if ( !tarch::la::equals(tarch::la::dot(x,x),0.0) ){
    angles(0) = tarch::la::PI - angles(0);
  }
  return;
#elif (DIMENSIONS==3)
  if ( tarch::la::equals(distance(2),radius) ){
    angles(0) = 0.0;
    angles(1) = tarch::la::PI/2.0;
    return;
  } else if (tarch::la::equals(distance(2),-radius)){
    angles(0) = 0.0;
    angles(1) = -tarch::la::PI/2.0;
    return;
  } else {
    tarch::la::Vector<DIMENSIONS,double> x(0.0);

    angles(1) = asin(distance(2)/radius);
    //std::cout << "Angles_1. " << angles(1) << std::endl;
    if ( tarch::la::equals(distance(1),0.0) ){
      angles(0) = 0.0;
    } else {
      double sig = fabs(distance(1))/distance(1)*radius*cos(angles(1))/std::sqrt(radius*radius-distance(2)*distance(2));
      //std::cout << "Sig: " << sig << std::endl;
      assertion(tarch::la::equals(sig,1.0) || tarch::la::equals(sig,-1.0));
      if (tarch::la::equals(sig*std::sqrt(distance(1)*distance(1)/(radius*radius-distance(2)*distance(2)) ),1.0)){
        angles(0) = asin(1.0);
      } else if (tarch::la::equals(sig*std::sqrt(distance(1)*distance(1)/(radius*radius-distance(2)*distance(2)) ),-1.0)){
        angles(0) = asin(-1.0);
      } else {
        angles(0) = asin(sig*std::sqrt(distance(1)*distance(1)/(radius*radius-distance(2)*distance(2)) ) );
      }
      //std::cout << "Angles_0. " << angles(0) << std::endl;
    }


    // check: angles(0) correct, angles(1) correct
    x(0) = cos(angles(0))*cos(angles(1))*radius;
    x(1) = sin(angles(0))*cos(angles(1))*radius;
    x(2) = sin(angles(1))*radius;
    x = x-distance;
    // if this result is correct, return
    // std::cout << tarch::la::dot(x,x) << std::endl;
    if ( tarch::la::equals(tarch::la::dot(x,x),0.0) ){
      return;
    }

    // otherwise try: PI-angles(0), angles(1)
    x(0) = cos(tarch::la::PI-angles(0))*cos(angles(1))*radius;
    x(1) = sin(tarch::la::PI-angles(0))*cos(angles(1))*radius;
    x(2) = sin(angles(1))*radius;
    x = x - distance;
    //std::cout << tarch::la::dot(x,x) << std::endl;
    if ( tarch::la::equals(tarch::la::dot(x,x),0.0) ){
      angles(0) = tarch::la::PI-angles(0);
      return;
    }

    // otherwise try: angles(0), PI-angles(1) (the latter must hold!)
    angles(1) = tarch::la::PI-angles(1);
    // therefore: recompute angles(0) first:
    angles(0) = -angles(0);
    x(0) = cos(angles(0))*cos(angles(1))*radius;
    x(1) = sin(angles(0))*cos(angles(1))*radius;
    x(2) = sin(angles(1))*radius;
    x = x - distance;
    //std::cout << tarch::la::dot(x,x) << std::endl;
    if ( tarch::la::equals(tarch::la::dot(x,x),0.0) ){
      return;
    }

    // otherwise PI-angles(0),PI-angles(1) must hold!
    angles(0) = tarch::la::PI-angles(0);
#if Asserts
    x(0) = cos(angles(0))*cos(angles(1))*radius;
    x(1) = sin(angles(0))*cos(angles(1))*radius;
    x(2) = sin(angles(1))*radius;
    x = x - distance;
    //std::cout << tarch::la::dot(x,x) << std::endl;
    //assertion(tarch::la::equals(tarch::la::dot(x,x),0.0));
#endif
    return;
  }
#else
  assertion1(false, "Only 2D/3D supported!");
  return;
#endif
}


tarch::la::Vector<DIMENSIONS,double> peano::integration::partitioncoupling::builtin::rotateForward(
  const tarch::la::Vector<DIMENSIONS,double> &rotationCenter,
  const tarch::la::Vector<DIMENSIONS,double> &point,
  const tarch::la::Vector<DIMENSIONS-1,double> &angles
){
#if (! ((DIMENSIONS==3) || (DIMENSIONS==2)))
  assertion1(false,"Only 2D/3D supported!");
#endif


  tarch::la::Vector<DIMENSIONS,double> newPoint(point-rotationCenter);

  for (int d = DIMENSIONS-1; d > 0; d--){
    double p1 = cos(angles(d-1))*newPoint(0) - sin(angles(d-1))*newPoint(d);
    double p2 = sin(angles(d-1))*newPoint(0) + cos(angles(d-1))*newPoint(d);
    newPoint(0) = p1;
    newPoint(d) = p2;
  }

  newPoint += rotationCenter;



  return newPoint;
}


tarch::la::Vector<DIMENSIONS,double> peano::integration::partitioncoupling::builtin::rotateBackward(
  const tarch::la::Vector<DIMENSIONS,double> &rotationCenter,
  const tarch::la::Vector<DIMENSIONS,double> &point,
  const tarch::la::Vector<DIMENSIONS-1,double> &angles
){
#if (! ((DIMENSIONS==3) || (DIMENSIONS==2)))
  assertion1(false,"Only 2D/3D supported!");
#endif


  tarch::la::Vector<DIMENSIONS,double> newPoint(point-rotationCenter);

  for (int d = 1; d < DIMENSIONS; d++){
    double p1 = cos(-angles(d-1))*newPoint(0) - sin(-angles(d-1))*newPoint(d);
    double p2 = sin(-angles(d-1))*newPoint(0) + cos(-angles(d-1))*newPoint(d);
    newPoint(0) = p1;
    newPoint(d) = p2;
  }

  newPoint += rotationCenter;



  return newPoint;
}

#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_ROTATION_H_
