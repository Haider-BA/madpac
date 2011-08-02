#include "peano/applications/navierstokes/prototype1/GridLevelTransfer.h"
#include "peano/utils/Loop.h"


#include "peano/applications/navierstokes/prototype1/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include <math.h>

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
tarch::logging::Log GridLevelTransfer::_log("GridLevelTransfer");


tarch::la::Matrix<FOUR_POWER_D,NUMBER_OF_VERTICES_PER_ELEMENT,double> GridLevelTransfer::initialiseDLinearTransferWeights(){
  tarch::la::Matrix<FOUR_POWER_D,NUMBER_OF_VERTICES_PER_ELEMENT,double> result;
  for (int j=0; j<NUMBER_OF_VERTICES_PER_ELEMENT; j++){
    double u [NUMBER_OF_VERTICES_PER_ELEMENT];
    for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++){
      u[i] = 0.0;
    }
    u[j] = 1.0;
    /* old 2d version
    for (int i=0; i<FOUR_POWER_D; i++){
      x = fmod(i,4)/3.0, floor(i/4)/3.0;
      _nodalTransferWeightsLookupTable(i,j) = interpolateScalarDLinear(Vector(0.0),
                                                                       Vector(1.0), x, u);
    }*/
    // new dimensionless version
    Vector xDivided(0.0);
    int i = 0;
    dfor(x,4) {
      for (int d=0; d<DIMENSIONS; d++) {
        xDivided(d) = x(d) / 3.0;
      }
      result(i,j) = interpolateScalarDLinear(Vector(0.0), Vector(1.0), xDivided, u);
      i++;
    }
    assertion(i==FOUR_POWER_D);
  }
  return result;
}


void GridLevelTransfer::initialiseLinearTransferWeights(){
  for (int j=0; j<NUMBER_OF_VERTICES_PER_ELEMENT; j++){
    double u [NUMBER_OF_VERTICES_PER_ELEMENT];
    for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++){
      u[i] = 0.0;
    }
    u[j] = 1.0;
    /* old 2d version
    for (int i=0; i<FOUR_POWER_D; i++){
      x = fmod(i,4)/3.0, floor(i/4)/3.0;
      _nodalTransferWeightsLookupTable(i,j) = interpolateScalarDLinear(Vector(0.0),
                                                                       Vector(1.0), x, u);
    }*/
    // new dimensionless version
    Vector xDivided(0.0);
    int i = 0;
    dfor(x,4) {
      for (int d=0; d<DIMENSIONS; d++) {
        xDivided(d) = x(d) / 3.0;
      }
      _nodalTransferWeightsLookupTable(i,j) = interpolateScalarDLinear(Vector(0.0), Vector(1.0), xDivided, u);
      i++;
    }
    assertion(i==FOUR_POWER_D);
  }
}


void GridLevelTransfer::initialiseDivergenceFreeTransferWeights(){
  #ifdef Dim2
  _log.error("AbstractCalculateF::addGravityPressureBoundaryContributionToF", "\nthe method is not yet implemented");
  exit(ASSERTION_EXIT_CODE);
  assignList(_divergenceFreeTransferWeightsBigPhiLookupTable) =  1.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.666666666667,  0.333333333333,  0.000000000000,  0.000000000000,
                                                     0.333333333333,  0.666666666667,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  1.000000000000,  0.000000000000,  0.000000000000,
                                                     0.666666666667,  0.000000000000,  0.333333333333,  0.000000000000,
                                                     0.500000000000,  0.166666666667,  0.166666666667,  0.166666666667,
                                                     0.166666666667,  0.500000000000,  0.166666666667,  0.166666666667,
                                                     0.000000000000,  0.666666666667,  0.000000000000,  0.333333333333,
                                                     0.333333333333,  0.000000000000,  0.666666666667,  0.000000000000,
                                                     0.166666666667,  0.166666666667,  0.500000000000,  0.166666666667,
                                                     0.166666666667,  0.166666666667,  0.166666666667,  0.500000000000,
                                                     0.000000000000,  0.333333333333,  0.000000000000,  0.666666666667,
                                                     0.000000000000,  0.000000000000,  1.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.666666666667,  0.333333333333,
                                                     0.000000000000,  0.000000000000,  0.333333333333,  0.666666666667,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  1.000000000000;

  assignList(_divergenceFreeTransferWeightsSmallPhiLookupTable) =  0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.166666666667, -0.166666666667, -0.166666666667,  0.166666666667,
                                                     0.166666666667, -0.166666666667, -0.166666666667,  0.166666666667,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.166666666667, -0.166666666667, -0.166666666667,  0.166666666667,
                                                     0.166666666667, -0.166666666667, -0.166666666667,  0.166666666667,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000,
                                                     0.000000000000,  0.000000000000,  0.000000000000,  0.000000000000;
  #endif // Dim2
}

GridLevelTransfer::GridLevelTransfer() {

#ifndef Dim2
#ifndef Dim3
  _log.error("GridLevelTransfer()","only implemented for 2D and 3D!");
#endif //Dim3
#endif //Dim2

  initialiseLinearTransferWeights();

  initialiseDivergenceFreeTransferWeights();

}


GridLevelTransfer::~GridLevelTransfer() {
}


double GridLevelTransfer::getNodalTransferWeightForOneDiscretePosition(
  const IntVector& discretePosition,
  const int        index
  ) {
#ifdef Debug
  for (int d=0; d<DIMENSIONS; d++) {
    assertion( discretePosition(d) >= 0 && discretePosition(d) < 4 );
  }
#endif //Debug
  _log.error("getNodalTransferWeightForOneDiscretePosition", "\nthe method is not yet implemented");
  exit(ASSERTION_EXIT_CODE);
  return 0;
//  return _nodalTransferWeightsLookupTable(tarch::utils::dLinearized(discretePosition, 4), index);
}

double GridLevelTransfer::getBigPhiForOneDiscretePosition(
  const IntVector& discretePosition,
  const int        index
) {
  #ifdef Debug
  for (int d=0; d<DIMENSIONS; d++) {
    assertion( discretePosition(d) >= 0 && discretePosition(d) < 4 );
  }
  #endif //Debug
  _log.error("getNodalTransferWeightForOneDiscretePosition", "\nthe method is not yet implemented");
  exit(ASSERTION_EXIT_CODE);
  return 0;
//  return _divergenceFreeTransferWeightsBigPhiLookupTable(
//                        tarch::utils::dLinearized(discretePosition, 4), index);
}

double GridLevelTransfer::getSmallPhiForOneDiscretePosition(
  const IntVector& discretePosition,
  const int        index
) {
  #ifdef Debug
  for (int d=0; d<DIMENSIONS; d++) {
    assertion( discretePosition(d) >= 0 && discretePosition(d) < 4 );
  }
  #endif //Debug
  _log.error("getNodalTransferWeightForOneDiscretePosition", "\nthe method is not yet implemented");
  exit(ASSERTION_EXIT_CODE);
  return 0;
//  return _divergenceFreeTransferWeightsSmallPhiLookupTable(
//                        tarch::utils::dLinearized(discretePosition, 4), index);
}


double GridLevelTransfer::interpolateScalarDLinear(
  const Vector& fatherCellFirstPosition,
  const Vector& H,
  const Vector& x,
  const double u[TWO_POWER_D]
  ) {
#ifdef Debug
  for (int d=0; d<DIMENSIONS; d++) {
    assertion(!tarch::la::smaller(x(d),fatherCellFirstPosition(d)));
    assertion(!tarch::la::greater(x(d),fatherCellFirstPosition(d)+H(d)));
  }
#endif //Debug

  double U[TWO_POWER_D];
  for (int i=0; i<TWO_POWER_D; i++) {
    U[i] = u[i];
  }

  Vector localCoordinate = x - fatherCellFirstPosition;

//  for (int d=DIMENSIONS-1; d>=0; d--) {
//    for (int i=twoPowI(d)-1; i>=0; i--) {
//      U[i] = interpolateScalar1DLinear(localCoordinate(d), H(d), U[i], U[i+twoPowI(d)]);
//    }
//  }
  for (int d=DIMENSIONS-1; d>=0; d--) {
    for (int i=myTwoPowI(d)-1; i>=0; i--) {
      U[i] = interpolateScalar1DLinear(localCoordinate(d), H(d), U[i], U[i+myTwoPowI(d)]);
    }
  }

  return U[0];
}

Vector GridLevelTransfer::interpolateVectorDLinear(
  const Vector& fatherCellFirstPosition,
  const Vector& H,
  const Vector& x,
  const Vector u[TWO_POWER_D]
  ) {
#ifdef Debug
  for (int d=0; d<DIMENSIONS; d++) {
    assertion(!tarch::la::smaller(x(d),fatherCellFirstPosition(d)));
    assertion(!tarch::la::greater(x(d),fatherCellFirstPosition(d)+H(d)));
  }
#endif //Debug

  Vector U[TWO_POWER_D];
  for (int i=0; i<TWO_POWER_D; i++) {
    U[i] = u[i];
  }

  Vector localCoordinate = x - fatherCellFirstPosition;

//  for (int d=DIMENSIONS-1; d>=0; d--) {
//    for (int i=twoPowI(d)-1; i>=0; i--) {
//      U[i] = interpolateScalar1DLinear(localCoordinate(d), H(d), U[i], U[i+twoPowI(d)]);
//    }
//  }
  for (int d=DIMENSIONS-1; d>=0; d--) {
    for (int i=myTwoPowI(d)-1; i>=0; i--) {
      U[i] = interpolateVector1DLinear(localCoordinate(d), H(d), U[i], U[i+myTwoPowI(d)]);
    }
  }

  return U[0];
}


int GridLevelTransfer::myTwoPowI(const int i) {
  assertion1(i>=0, i);
  int result = 1;
  for (int j=i; j>0; j--) {
    result *= 2;
  }
  return result;
}


double GridLevelTransfer::interpolateScalar1DLinear(
  const double localCoordinate,
  const double H,
  const double leftValue,
  const double rightValue
  ) {
  assertion(!tarch::la::smaller(localCoordinate,0.0));
  assertion(!tarch::la::greater(localCoordinate,H));
  assertion(tarch::la::greater(H,0.0));

  return leftValue * (1.0 - localCoordinate / H) + rightValue * localCoordinate / H;
}

Vector GridLevelTransfer::interpolateVector1DLinear(
  const double localCoordinate,
  const double H,
  const Vector & leftValue,
  const Vector & rightValue
  ) {
  assertion(!tarch::la::smaller(localCoordinate,0.0));
  assertion(!tarch::la::greater(localCoordinate,H));
  assertion(tarch::la::greater(H,0.0));

  return leftValue * (1.0 - localCoordinate / H) + rightValue * localCoordinate / H;
}

      }}}} // end name spaces

