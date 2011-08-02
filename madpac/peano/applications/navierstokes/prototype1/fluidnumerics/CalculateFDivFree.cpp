#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculateFDivFree.h"
#include "tarch/la/Vector.h"
#include "tarch/la/Matrix.h"
//#include "tarch/la/Utilities.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"


namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {

const std::string peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::ELEMENT_TYPE("enhanced-div-free");


tarch::logging::Log peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::_log("peano::applications::navierstokes::prototype1::CalculateFDivFree");


//peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::CalculateFDivFree(
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


peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::CalculateFDivFree(
  const double          etaDividedByRho,
  const double          rho
) :
  AbstractCalculateF(DivergenceFree, etaDividedByRho,rho),
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


peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::~CalculateFDivFree()
{}

void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::copyMatricesDLinear() {
//  assertion(NUMBER_OF_VERTICES_PER_ELEMENT==TWO_POWER_D);

  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    // copy values of D
    for (int j=0; j<NUMBER_OF_VERTICES_PER_ELEMENT; j++) {
      _DElementMatrix(i,j) = D1DivFreeElementMatrix_tmp[i][j];
      #ifdef Dim3
//      _DElementMatrix[i][j][2] = D3DlinearElementMatrix[i][j];
      #endif
    }
    // copy values of C
    // different for 2D and 3D because of different storage in ElementMatrices.h
    #ifdef Dim2
    for (int k=0; k<NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS; k++) {
      for (int l=0; l<NUMBER_OF_VERTICES_PER_ELEMENT; l++) {
//        _CElementMatrix[(k/DIMENSIONS)*NUMBER_OF_VERTICES_PER_ELEMENT+l][i][k%2] = CBilinearElementMatrix_tmp[k*NUMBER_OF_VERTICES_PER_ELEMENT+l][i];
      }
    }
    #elif Dim3
    _log.error("copyMatricesDLinear()","3D not yet supported!");
//    for (int k=0; k<NUMBER_OF_VERTICES_PER_ELEMENT*NUMBER_OF_VERTICES_PER_ELEMENT; k++) {
//      _CElementMatrix[k][i][0] = C0DlinearElementMatrix[k][i];
//      _CElementMatrix[k][i][1] = C1DlinearElementMatrix[k][i];
//      _CElementMatrix[k][i][2] = C2DlinearElementMatrix[k][i];
//    }
    #endif //Dim2
  }
}


void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::addGravityContribution(
  const Vector&                      h,
  tarch::la::DynamicVector<double>&  result,
  const tarch::la::DynamicVector<double>& gravityFactor
) const {
  if (!tarch::la::equals(_gravityVector,Vector(0.0), tarch::la::NUMERICAL_ZERO_DIFFERENCE)) {
    _log.error("addGravityContribution()","not yet implemented!");
    assertion(false);
  }
}


tarch::la::DynamicVector<double> peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::rotateCartesianTo45(const tarch::la::DynamicVector<double>& uCartesian) {
#ifdef Dim2
  assertionEquals(uCartesian.size(),12);
  tarch::la::DynamicVector<double>u45(uCartesian.size());

  double oneOverSqrt2 = 1.0 / std::sqrt(2.0);

  assignList(u45) = oneOverSqrt2*(uCartesian(0*DIMENSIONS + 0) + uCartesian(0*DIMENSIONS + 1)),
                    oneOverSqrt2*(uCartesian(0*DIMENSIONS + 0) - uCartesian(0*DIMENSIONS + 1)),
                    oneOverSqrt2*(uCartesian(1*DIMENSIONS + 0) + uCartesian(1*DIMENSIONS + 1)),
                    oneOverSqrt2*(uCartesian(1*DIMENSIONS + 0) - uCartesian(1*DIMENSIONS + 1)),
                    oneOverSqrt2*(uCartesian(2*DIMENSIONS + 0) + uCartesian(2*DIMENSIONS + 1)),
                    oneOverSqrt2*(uCartesian(2*DIMENSIONS + 0) - uCartesian(2*DIMENSIONS + 1)),
                    oneOverSqrt2*(uCartesian(3*DIMENSIONS + 0) + uCartesian(3*DIMENSIONS + 1)),
                    oneOverSqrt2*(uCartesian(3*DIMENSIONS + 0) - uCartesian(3*DIMENSIONS + 1)),
                    -99.0,-99.0,-99.0,-99.0;
  return u45;
#else
  _log.error("rotateCartesianTo45()","not yet implemented for 3D");
  exit(ASSERTION_EXIT_CODE);
#endif
}


void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::computeFValues(
  const Vector&                           h,
  const tarch::la::DynamicVector<double>& uCartesian,
  tarch::la::DynamicVector<double>&       resultCartesian,
  double&                                 scalarTempData
) const {
#ifdef Dim2
  // Input: u:
  // (u0, v0, u1, v1, u2, v2, u3, v3, edge0, edge1, edge2, edge3)
  assertion(DIMENSIONS==2);
  assertion( tarch::la::equals(h(0),h(1)));
  // Here comes operator evaluation; todo: move to accumulateFGenericValues() once everything is ready!
  //accumulateFGenericValues(h, u, result, scalarTempData, additionalDFactor);

  assertion(!tarch::la::equals(h,Vector(0.0)));
  double DFactor;
  const double additionalDFactor = 0.0;
  DFactor = _DFactor + additionalDFactor; //respect turbulence contribution (if in use)

  //rotate input velocities into 45
  Vector u0 = Vector(uCartesian(0*DIMENSIONS + 0), uCartesian(0*DIMENSIONS + 1));
  Vector u1 = Vector(uCartesian(1*DIMENSIONS + 0), uCartesian(1*DIMENSIONS + 1));
  Vector u2 = Vector(uCartesian(2*DIMENSIONS + 0), uCartesian(2*DIMENSIONS + 1));
  Vector u3 = Vector(uCartesian(3*DIMENSIONS + 0), uCartesian(3*DIMENSIONS + 1));
  Vector rot0 = peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::rotateCartesianTo45(u0);
  Vector rot1 = peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::rotateCartesianTo45(u1);
  Vector rot2 = peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::rotateCartesianTo45(u2);
  Vector rot3 = peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::rotateCartesianTo45(u3);

  tarch::la::DynamicVector<double> u = rotateCartesianTo45(uCartesian);

  tarch::la::Vector<4,double> ux(0.0);
  tarch::la::Vector<4,double> uy(0.0);
  assignList(ux) = u(0*DIMENSIONS + 0),
                   u(1*DIMENSIONS + 0),
                   u(2*DIMENSIONS + 0),
                   u(3*DIMENSIONS + 0);

  assignList(uy) = u(0*DIMENSIONS + 1),
                   u(1*DIMENSIONS + 1),
                   u(2*DIMENSIONS + 1),
                   u(3*DIMENSIONS + 1);

  assertionNumericalEquals(rot0(0), ux(0));
  assertionNumericalEquals(rot0(1), uy(0));
  assertionNumericalEquals(rot1(0), ux(1));
  assertionNumericalEquals(rot1(1), uy(1));
  assertionNumericalEquals(rot2(0), ux(2));
  assertionNumericalEquals(rot2(1), uy(2));
  assertionNumericalEquals(rot3(0), ux(3));
  assertionNumericalEquals(rot3(1), uy(3));


  tarch::la::Vector<4,double> resultX(0.0);
  tarch::la::Vector<4,double> resultY(0.0);

  // convection
  const double hFactor = h(0) * std::sqrt(2.0);
  tarch::la::Matrix<4,4,double> Cx(0.0);
  tarch::la::Matrix<4,4,double> Cy(0.0);

  //TODO: check factor 1/2 due to Mittelwert
  Cx(0,0) = - 0.5 * hFactor * ( u(0*DIMENSIONS + 0) + u(3*DIMENSIONS + 0) );
  Cx(0,3) =   0.5 * hFactor * ( u(0*DIMENSIONS + 0) + u(3*DIMENSIONS + 0) );
  Cx(1,1) =   0.5 * hFactor * ( u(0*DIMENSIONS + 1) + u(3*DIMENSIONS + 1) );
  Cx(1,2) = - 0.5 * hFactor * ( u(0*DIMENSIONS + 1) + u(3*DIMENSIONS + 1) );
  Cx(2,1) =   0.5 * hFactor * ( u(0*DIMENSIONS + 1) + u(3*DIMENSIONS + 1) );
  Cx(2,2) = - 0.5 * hFactor * ( u(0*DIMENSIONS + 1) + u(3*DIMENSIONS + 1) );
  Cx(3,0) = - 0.5 * hFactor * ( u(0*DIMENSIONS + 0) + u(3*DIMENSIONS + 0) );
  Cx(3,3) =   0.5 * hFactor * ( u(0*DIMENSIONS + 0) + u(3*DIMENSIONS + 0) );

  Cy(0,0) = - 0.5 * hFactor * ( u(1*DIMENSIONS + 0) + u(2*DIMENSIONS + 0) );
  Cy(0,3) =   0.5 * hFactor * ( u(1*DIMENSIONS + 0) + u(2*DIMENSIONS + 0) );
  Cy(1,1) =   0.5 * hFactor * ( u(1*DIMENSIONS + 1) + u(2*DIMENSIONS + 1) );
  Cy(1,2) = - 0.5 * hFactor * ( u(1*DIMENSIONS + 1) + u(2*DIMENSIONS + 1) );
  Cy(2,1) =   0.5 * hFactor * ( u(1*DIMENSIONS + 1) + u(2*DIMENSIONS + 1) );
  Cy(2,2) = - 0.5 * hFactor * ( u(1*DIMENSIONS + 1) + u(2*DIMENSIONS + 1) );
  Cy(3,0) = - 0.5 * hFactor * ( u(1*DIMENSIONS + 0) + u(2*DIMENSIONS + 0) );
  Cy(3,3) =   0.5 * hFactor * ( u(1*DIMENSIONS + 0) + u(2*DIMENSIONS + 0) );

//  resultX = -1.0 * 0.25 * Cx.times(ux); //TODO: Operationen tunen! VZ in ux?
//  resultY = -1.0 * 0.25 * Cy.times(uy); // Factor 0.25 not yet clear
  tarch::la::multiply(Cx, ux, resultX);
  tarch::la::multiply(Cy, uy, resultY);
  resultX *= -1.0 * 0.25;
  resultY *= -1.0 * 0.25;

  tarch::la::DynamicVector<double> result(resultCartesian.size());
  result(0*DIMENSIONS + 0) = resultX(0);
  result(1*DIMENSIONS + 0) = resultX(1);
  result(2*DIMENSIONS + 0) = resultX(2);
  result(3*DIMENSIONS + 0) = resultX(3);

  result(0*DIMENSIONS + 1) = resultY(0);
  result(1*DIMENSIONS + 1) = resultY(1);
  result(2*DIMENSIONS + 1) = resultY(2);
  result(3*DIMENSIONS + 1) = resultY(3);

  //result = 0.0; //if convection commented out, this needs to be set to assure correct adding of diffusion parts

  //diffusion
//  resultX = -DFactor * _DElementMatrix.times(ux);
//  resultY = -DFactor * _DElementMatrix.times(uy);
  tarch::la::assign(resultX) = 0.0;
  tarch::la::assign(resultY) = 0.0;
  tarch::la::multiply(_DElementMatrix, ux, resultX);
  tarch::la::multiply(_DElementMatrix, uy, resultY);
  resultX *= -DFactor;
  resultY *= -DFactor;

  result(0*DIMENSIONS + 0) += resultX(0);
  result(1*DIMENSIONS + 0) += resultX(1);
  result(2*DIMENSIONS + 0) += resultX(2);
  result(3*DIMENSIONS + 0) += resultX(3);

  result(0*DIMENSIONS + 1) += resultY(0);
  result(1*DIMENSIONS + 1) += resultY(1);
  result(2*DIMENSIONS + 1) += resultY(2);
  result(3*DIMENSIONS + 1) += resultY(3);

  //rotate 45 F into Cartesian result
  resultCartesian = rotateCartesianTo45(result);

  //std::cout << "\n calcF div-free got called\n";

#else
  _log.error("computeFValues()", "computeFValues() only implemented for 2D currently!");
#endif //dim2
}


#if defined(ComponentAdolC)
void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::computeFValues(
  const Vector&               h,
  const std::vector<adouble>& u,
  std::vector<adouble>&       result,
  adouble&                    scalarTempData,
  const double                additionalDFactor
) {
  accumulateFGenericValues(h, u, result, scalarTempData, additionalDFactor);
}
#endif
#if defined(ComponentCppAD)
void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::computeFValues(
  const Vector&                          h,
  const std::vector<CppAD::AD<double> >& u,
  std::vector<CppAD::AD<double> >&       result,
  CppAD::AD<double>&                     scalarTempData,
  const double                           additionalDFactor
) {
  accumulateFGenericValues(h, u, result, scalarTempData, additionalDFactor);
}
#endif



void peano::applications::navierstokes::prototype1::fluidnumerics::CalculateFDivFree::computeAnalyticalFEntries(
  const tarch::la::DynamicVector<double>& u,
  const Vector&                           h,
  tarch::la::DynamicMatrix<double>&       result,
  const double                            additionalDFactor
) {
  assertion(DIMENSIONS==2);
  assertion2(u.size()==NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS+4, u.size(), NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS+4);

  assertionFail("not yet implemented!");

  assertionFail("ATTENTION: dimension of element Jacobian not yet dynamically adapted!");
}
}}}} // close name spaces
