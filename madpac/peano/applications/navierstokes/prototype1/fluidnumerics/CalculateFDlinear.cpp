#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDlinear.h"
#include "tarch/la/Vector.h"
#include "tarch/la/Matrix.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/FluidStateEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/NSEGlobals.h"


namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {

tarch::logging::Log peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear::_log("peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear");


//peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear::CalculateFDlinear(
//  const double          etaDividedByRho,
////  const bool            scenarioHasInflowPressureBoundaryCondition,
////  const bool            scenarioHasOutflowPressureBoundaryCondition,
////  const double          inletPressure,
////  const double          outletPressure,
//  const double          rho
////  const Vector          gravityVector
//) :
//  _DFactor(etaDividedByRho),
////  _scenarioHasInflowPressureBoundaryCondition(scenarioHasInflowPressureBoundaryCondition),
////  _scenarioHasOutflowPressureBoundaryCondition(scenarioHasOutflowPressureBoundaryCondition),
////  _inletPressure(inletPressure),
////  _outletPressure(outletPressure),
//  _scenarioHasInflowPressureBoundaryCondition(false),
//  _scenarioHasOutflowPressureBoundaryCondition(false),
//  _inletPressure(0.0),
//  _outletPressure(0.0),
//  _rho(rho),
////  _gravityVector(gravityVector),
//  _gravityVector(Vector(0.0)),
//  _elementMatrices()
//  {
//  copyMatricesDLinear();
//}


peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear::CalculateFDlinear(
  const double          etaDividedByRho,
  const double          rho
) :
  AbstractCalculateF(Dlinear,etaDividedByRho,rho),
  _DFactor(etaDividedByRho),
  _scenarioHasInflowPressureBoundaryCondition(false),
  _scenarioHasOutflowPressureBoundaryCondition(false),
  _inletPressure(0.0),
  _outletPressure(0.0),
  _rho(rho),
  _gravityVector(Vector(0.0)),
  _elementMatrices()
  {
  copyMatricesDLinear();
}


peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear::~CalculateFDlinear()
{}

void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear::copyMatricesDLinear() {
  assertion(NUMBER_OF_VERTICES_PER_ELEMENT==TWO_POWER_D);

  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    // copy values of D
    for (int j=0; j<NUMBER_OF_VERTICES_PER_ELEMENT; j++) {
      _DElementMatrix[i][j][0] = D1DlinearElementMatrix[i][j];
      _DElementMatrix[i][j][1] = D2DlinearElementMatrix[i][j];
      #ifdef Dim3
      _DElementMatrix[i][j][2] = D3DlinearElementMatrix[i][j];
      #endif
    }
    // copy values of C
    // different for 2D and 3D because of different storage in ElementMatrices.h
    #ifdef Dim2
    for (int k=0; k<NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS; k++) {
      for (int l=0; l<NUMBER_OF_VERTICES_PER_ELEMENT; l++) {
        _CElementMatrix[(k/DIMENSIONS)*NUMBER_OF_VERTICES_PER_ELEMENT+l][i][k%2] = CBilinearElementMatrix[k*NUMBER_OF_VERTICES_PER_ELEMENT+l][i];
      }
    }
    #elif Dim3
    for (int k=0; k<NUMBER_OF_VERTICES_PER_ELEMENT*NUMBER_OF_VERTICES_PER_ELEMENT; k++) {
      _CElementMatrix[k][i][0] = C0DlinearElementMatrix[k][i];
      _CElementMatrix[k][i][1] = C1DlinearElementMatrix[k][i];
      _CElementMatrix[k][i][2] = C2DlinearElementMatrix[k][i];
    }
    #endif //Dim2
  }
}

void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear::addGravityContribution(
  const Vector&                      h,
  tarch::la::DynamicVector<double>&  result,
  const tarch::la::DynamicVector<double>& gravityFactor
) const {
//  assertion(!equals(_volumeOfTestFunction,0.0));
//  assertion(equals(gravityFactor.size(),NUMBER_OF_VERTICES_PER_ELEMENT));
//
//  // calculate _rho
//  double rho = _rho;
////  if (phase==0.0) {
////    rho = _rho;
////  }
////  else {
////    rho = GridLevelTransfer::interpolateScalar1DLinear(phase,1,_rho,_rhoPhase2);
////  }
//  double volumeOfTestFunction = 1.0/ twoPowI(DIMENSIONS);
//
//  const double hFactor = _elementMatrices.getVolumeOfCell(h);
//
//  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++){
//    for (int d=0; d<DIMENSIONS; d++) {
//      result(i*DIMENSIONS + d) += - rho * _gravityVector(d) * gravityFactor(i) *
//                                    volumeOfTestFunction * hFactor;
//    }
//  }
}


void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear::computeFValues(
  const Vector&                           h,
  const tarch::la::DynamicVector<double>& u,
  tarch::la::DynamicVector<double>&       result,
  double&                                 scalarTempData
) const {
  //The code here is copied from the method accumulateFGenericValues. Use the generic version
  //as soon as we have several vertex types.
  //accumulateFGenericValues(h, u, result, scalarTempData, additionalDFactor);

  assertion2(getElementType()==peano::applications::navierstokes::prototype1::Dlinear,
      getElementType(), peano::applications::navierstokes::prototype1::Dlinear);
  assertion(!equals(h, Vector(0.0)));

  // calculate DFactor, CFactor, and hFactor
  double DFactor = _eta;
  double CFactor = _rho;
//  DFactor = GridLevelTransfer::interpolateScalar1DLinear(phase,1,_eta,_etaPhase2);
//  CFactor = GridLevelTransfer::interpolateScalar1DLinear(phase,1,_rho,_rhoPhase2);
//  DFactor += additionalDFactor; //respect turbulence contribution (if in use)
  Vector hFactor = _elementMatrices.getHFactorForMOrC(h);

  #if !defined(Dim2) && !defined(Dim3)
  _log.error("accumulateFGenericValues()", "only 2D + 3D implemented up to now!");
  assertion(false);
  #endif

  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    for (int d=0; d<DIMENSIONS; d++) {
      result[i*DIMENSIONS + d] = 0.0;
    }
    for (int j=0; j<NUMBER_OF_VERTICES_PER_ELEMENT; j++) {
      scalarTempData = 0.0;
      for (int k=0; k<NUMBER_OF_VERTICES_PER_ELEMENT; k++) {
        for (int l=0; l<DIMENSIONS; l++) {
          scalarTempData += u[k*DIMENSIONS + l] * hFactor(l)*_CElementMatrix[(i * NUMBER_OF_VERTICES_PER_ELEMENT) + k][j][l];
        }
      }

      for (int l=0; l<DIMENSIONS; l++) { //loop over result components for node i
        //calculate complete Convection part
        result[i*DIMENSIONS + l] +=  scalarTempData * CFactor * u[j*DIMENSIONS + l];
        //calculate Diffusion part
        for (int d=0; d<DIMENSIONS; d++) { //loop over different matrix sum contributions
          result[i*DIMENSIONS + l] += hFactor(d)/h(d) * DFactor * _DElementMatrix[i][j][d] * u[j*DIMENSIONS + l];
        }
      }
    }
  }
  //Factor h for C: in 2D:  C1: hy       C2: hx
  //                in 3D:  C1: hy*hz    C2: hz*hx    C3: hx*hy

  //Factor h for D: in 2D:  D1: hy/hx,   D2: hx/hy
  //                in 3D:  D1: hy*hz/hx D2: hz*hx/hy D3: hx*hy/hz
}

void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDlinear::computeAnalyticalFEntries(
    const tarch::la::DynamicVector<double>& u,
    const Vector&                           h,
    tarch::la::DynamicMatrix<double>&       result,
    const double                            additionalDFactor
) {
  _log.error("computeFValues", "Not implemented, yet.");
  exit(ASSERTION_EXIT_CODE);
  //
  //  assertion(DIMENSIONS==2);
  //  assertion2(u.size()==NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS+4, u.size(), NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS+4);
  //
  //  assertionFail("not yet implemented!");
  //
  //  assertionFail("ATTENTION: dimension of element Jacobian not yet dynamically adapted!");
}
}}}} // close name spaces
