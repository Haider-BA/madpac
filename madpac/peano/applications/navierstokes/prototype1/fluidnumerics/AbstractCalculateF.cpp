#include "peano/applications/navierstokes/prototype1/fluidnumerics/AbstractCalculateF.h"
#include "tarch/la/DynamicVector.h"

//#include "fluid-scenario/configuration/FluidConfiguration.h"
//#include "fluid/GridLevelTransfer.h"




namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {

tarch::logging::Log AbstractCalculateF::_log("AbstractCalculateF");

AbstractCalculateF::AbstractCalculateF(
    const ElementType elementType,
    const double          etaDividedByRho,
    const double          rho
):
  _elementType(elementType),
  _eta(etaDividedByRho*rho),
  _rho(rho)
{
#ifdef ComponentPrecice
  assertionMsg(sigma==0.0 || hPrecice!=NULL, "Illegal combination of argument "
      "values: pointer to PreciceHandle can only be NULL if suface tension sigma "
      "is zero.");
#endif
}


AbstractCalculateF::~AbstractCalculateF(){
}

void AbstractCalculateF::init(){
  _cellCounter = 0;
}


//AbstractCalculateF::AbstractCalculateF(
//  const std::string     elementType,
//  const double          rho,
//  const double          rhoPhase2,
//  const double          eta,
//  const double          etaPhase2,
//  const bool            scenarioHasInflowPressureBoundaryCondition,
//  const bool            scenarioHasOutflowPressureBoundaryCondition,
//  const bool            scenarioHasGravityPressureBoundaryCondition,
//  const double          inletPressure,
//  const double          outletPressure,
//  const Vector          gravityVector
//#ifdef ComponentPrecice
// ,peano::precice::PreciceHandle* hPrecice
// ,double                sigma
//#endif
//  )
//  :
//  _scenarioHasInflowPressureBoundaryCondition(scenarioHasInflowPressureBoundaryCondition),
//  _scenarioHasOutflowPressureBoundaryCondition(scenarioHasOutflowPressureBoundaryCondition),
//  _scenarioHasGravityPressureBoundaryCondition(scenarioHasGravityPressureBoundaryCondition),
//  _inletPressure(inletPressure),
//  _outletPressure(outletPressure),
//  _cellCounter(0),
//  _elementType(elementType),
//  _rho(rho),
//  _rhoPhase2(rhoPhase2),
//  _eta(eta),
//  _etaPhase2(etaPhase2),
//  _gravityVector(gravityVector)
//  #ifdef ComponentPrecice
// ,_hPrecice(hPrecice)
// ,_sigma(sigma)
//  #endif
//  {
//#ifdef ComponentPrecice
//  assertionMsg(sigma==0.0 || hPrecice!=NULL, "Illegal combination of argument "
//      "values: pointer to PreciceHandle can only be NULL if suface tension sigma "
//      "is zero.");
//#endif
////  logInfo("AbstractCalculateF()","using gravity with values: " <<_gravityVector);
////
////  bool isGravityInAxisDirection = false;
////  for (int d=0; d<DIMENSIONS; d++) {
////    if (!equals(_gravityVector(d),0.0)) {
////      if (isGravityInAxisDirection) {
////        _log.error("AbstractCalculateF()", "gravity may only be in axes direction!");
////        exit(ASSERTION_EXIT_CODE);
////      }
////      isGravityInAxisDirection = true;
////    }
////  }
////  if (_scenarioHasGravityPressureBoundaryCondition && !::greater(_gravityVector.norm(),0.0)) {
////    _log.error("AbstractCalculateF()", "if 'scenarioHasGravityPressureBoundaryCondition' is true, the gravity has to be non-zero!");
////    exit(ASSERTION_EXIT_CODE);
////  }
//}
//
//
//
////
////double AbstractCalculateF::computeAdditionalDFactor(
////  const tarch::la::DynamicVector<double> vertexVelocities,
////  const Vector&                          h,
////  const Vector&                          position
////) {
////  return _computeDFactor->computeAdditionalDFactor(vertexVelocities, h, position);
////}
//
//#ifdef ComponentPrecice
//void AbstractCalculateF::addSurfaceTensionContribution (
//  const Vector&                           h,
//  const Vector&                           position,
//  tarch::la::DynamicVector<double>&       result,
//  const tarch::la::DynamicVector<double>& gravityFactor
//) const {
//  Vector cellCenter(position + 0.5*h);
//  Vector surfaceTension(0.0);
//  _hPrecice->getPhaseInterfaceSurfaceTension(_cellCounter, surfaceTension);
//  addSurfaceTensionContributionPerVector(h, result, gravityFactor, surfaceTension);
//
////  ::precice::VoxelPosition vp = _hPrecice->inquireCellPositionInterfaces( position+0.5*h, 1.5*h );
////
////  if (vp.position() == ::precice::constants::positionOnGeometry()){
////    const ::precice::VertexHandle & verts = vp.contentHandle().vertices();
////    for (::precice::VertexIterator it=verts.begin(); it!=verts.end(); it++){
////      Vector vertexPos(it.vertexCoords());
////      Vector dist = vertexPos;
////      dist -= (position+0.5*h);
////      double contr = evaluateSurfaceTensionKernel(h, dist);
////      Vector curvatureVector;
////      _hPrecice->getCurvature(it.vertexID(), curvatureVector);
////      addSurfaceTensionContributionPerVector(h, result, gravityFactor, contr*curvatureVector);
////    }
////  }
//}
//
//double AbstractCalculateF::evaluateSurfaceTensionKernel(
//    const Vector& h,
//    const Vector& dist ) const
//{
//  double w = 1.0;
//
//  for (int i=0; i<DIMENSIONS; i++) {
//    double r = std::abs( dist(i) / h(i) );
//
//    w *= r <= 0.5 ? 1.0/3.0 * (1.0 + std::sqrt(-3.0*r*r+1.0)) :
//         r <= 1.5 ? 1.0/6.0 * (5.0-3.0*r-std::sqrt(-3.0*(1.0-r)*(1.0-r)+1.0)) :
//         0.0;
//  }
//
//  return w;
//}
//
//#endif //ComponentPrecice
//
//void AbstractCalculateF::setNewPressureData(
//  const double newInletPressure,
//  const double newOutletPressure
//) {
//  logDebug("setNewPressureData()","setting new pressure data: pInlet=" << newInletPressure <<
//                                    ", pOutlet=" << newOutletPressure);
//  _inletPressure  = newInletPressure;
//  _outletPressure = newOutletPressure;
//}
//
//
////void AbstractCalculateF::setDeltaNuOnComputeDFactor(const double newValue) {
////  _computeDFactor->setDeltaNu(newValue);
////}
//

//void peano::applications::navierstokes::prototype1::accumulateFGenericValues(
//  const Vector&            u,
//  const Vector&            h,
//  Vector&                  result,
//  double                   scalarTempData
////  ,
////  const double             phase,
////  const double             additionalDFactor
//) {

//old begin
//  assertionMsg( !( ::smaller(phase, 0, 0.0)||::greater(phase, 1, 0.0) ),
//      "Phase indicator has to be in [0;1]");
//
//  //gather data
//  tarch::la::DynamicVector<double> u = Vertex::fillUpVelocityDynamicVectorFromVertices(vertices, enumerator);
//  tarch::la::DynamicVector<double> result(Vertex::getLengthOfDynamicVectorForFiniteElement());
//  double scalarTempData;
//  tarch::la::DynamicVector<double> gravityData = Vertex::fillUpAdditionalGravityData(vertices, enumerator);
// old end

//  assertion2(getElementType()==peano::fluid::CalculateF::ELEMENT_TYPE,
//             getElementType(), peano::fluid::CalculateF::ELEMENT_TYPE);
//  assertion(!h.equals(Vector(0.0)));
//
//  //Note: phase/additionalDFactor are exactly 0 in case of single-phase flow/no turbulence
//  assertionMsg(phase==0.0 || additionalDFactor==0.0, "A multi-phase simulation "
//      "together with turbulence is currently not possible!");
//
//  // calculate DFactor, CFactor, and hFactor
//  double DFactor;
//  double CFactor;
//  if (phase==0.0) {
//    DFactor = _eta;
//    CFactor = _rho;
//  }
//  else {
//    DFactor = GridLevelTransfer::interpolateScalar1DLinear(phase,1,_eta,_etaPhase2);
//    CFactor = GridLevelTransfer::interpolateScalar1DLinear(phase,1,_rho,_rhoPhase2);
//  }
//  DFactor += additionalDFactor; //respect turbulence contribution (if in use)
//  Vector hFactor = _elementMatrices.getHFactorForMOrC(h);
//
//#if !defined(Dim2) && !defined(Dim3)
//  _log.error("accumulateFGenericValues()", "only 2D + 3D implemented up to now!");
//  assertion(false);
//#endif
//
//  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
//    for (int d=0; d<DIMENSIONS; d++) {
//      result[i*DIMENSIONS + d] = 0.0;
//    }
//    for (int j=0; j<NUMBER_OF_VERTICES_PER_ELEMENT; j++) {
//      scalarTempData = 0.0;
//      for (int k=0; k<NUMBER_OF_VERTICES_PER_ELEMENT; k++) {
//        for (int l=0; l<DIMENSIONS; l++) {
//          scalarTempData += u[k*DIMENSIONS + l] * hFactor(l)*_CElementMatrix[(i * NUMBER_OF_VERTICES_PER_ELEMENT) + k][j][l];
//        }
//      }
//
//      for (int l=0; l<DIMENSIONS; l++) { //loop over result components for node i
//        //calculate complete Convection part
//        result[i*DIMENSIONS + l] +=  scalarTempData * CFactor * u[j*DIMENSIONS + l];
//        //calculate Diffusion part
//        for (int d=0; d<DIMENSIONS; d++) { //loop over different matrix sum contributions
//          result[i*DIMENSIONS + l] += hFactor(d)/h(d) * DFactor * _DElementMatrix[i][j][d] * u[j*DIMENSIONS + l];
//        }
//      }
//    }
//  }
//  //Factor h for C: in 2D:  C1: hy       C2: hx
//  //                in 3D:  C1: hy*hz    C2: hz*hx    C3: hx*hy
//
//  //Factor h for D: in 2D:  D1: hy/hx,   D2: hx/hy
//  //                in 3D:  D1: hy*hz/hx D2: hz*hx/hy D3: hx*hy/hz
//}


void AbstractCalculateF::accumulateFValues(
    peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) const {
  //gather data
  tarch::la::DynamicVector<double> u = RegularGridFluidVertexEnhancedDivFreeEulerExplicit::fillUpVelocityDynamicVectorFromVertices(vertices, enumerator, getElementType());
  tarch::la::DynamicVector<double> result(RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getLengthOfDynamicVectorForFiniteElement());
  double scalarTempData;
  tarch::la::DynamicVector<double> gravityData = RegularGridFluidVertexEnhancedDivFreeEulerExplicit::fillUpAdditionalGravityData(vertices, enumerator);

  // computation
  computeFValues(enumerator.getCellSize(), u, result, scalarTempData);
//  addGravityContribution(h, result, _computeGravityFactor->computeGravityFactor(gravityData));

  //scatter data
  RegularGridFluidVertexEnhancedDivFreeEulerExplicit::addValuesToFViaDynamicVector(vertices, enumerator, result);

  //respect possible pressure boundary conditions
//  addPressureBoundaryContributionToF(vertices, enumerator, enumerator.getCellSize());
}




//
//
//void AbstractCalculateF::calculateAnalyticalFEntries(
//  const tarch::la::DynamicVector<double>& u,
//  const Vector&                     h,
//  tarch::la::DynamicMatrix<double>& result,
//  const double                      additionalDFactor
//) {
////  //gather data TODO remove
////  tarch::la::DynamicVector<double> u = Vertex::fillUpVelocityDynamicVectorFromVertices(vertices, enumerator);
//
//  //call computation
//  computeAnalyticalFEntries(u, h, result, additionalDFactor);
//}
//
//
//void AbstractCalculateF::addPressureBoundaryContributionToF(
//  Vertex*        vertices,
//  const int      vertexIndex[NUMBER_OF_VERTICES_PER_ELEMENT],
//  const Vector&  position,
//  const Vector&  h,
//  double         phase
//) const {
//  if ( _scenarioHasInflowPressureBoundaryCondition || _scenarioHasOutflowPressureBoundaryCondition) {
//    addPressureBoundaryContributionToFLoop(vertices,
//                                           vertexIndex,
//                                           h,
//                                           _inletPressure,
//                                           _outletPressure
//                                         );
//  }
//  addGravityPressureBoundaryContributionToF(vertices, vertexIndex, position, h, phase);
//}

void AbstractCalculateF::addPressureBoundaryContributionToF(
  Vertex*   vertices,
  const peano::kernel::gridinterface::VertexEnumerator& enumerator
) const {

  Vector h = enumerator.getCellSize();

  if ( _scenarioHasInflowPressureBoundaryCondition || _scenarioHasOutflowPressureBoundaryCondition ) {
    double pressureFactor = 1.0;
    for (int d=1; d<DIMENSIONS; d++) {
      pressureFactor *= h(d) * 0.5;
    }

    for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
      if (vertices[enumerator(i)].getFluidVertexType() == NEUMANN ||
          vertices[enumerator(i)].getFluidVertexType() == MIXED_DIRICHLET_NEUMANN ||
          vertices[enumerator(i)].getFluidVertexType() == PERIODIC ) {
        Vector contr(0.0);
        if (vertices[enumerator(i)].getBoundaryType() == INFLOW ||
            vertices[enumerator(i)].getBoundaryType() == WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN) {
          if (_scenarioHasInflowPressureBoundaryCondition) {
            assertion1(i%2==0, i%2);
            contr(0) = (-1.0) * _inletPressure / _rho * pressureFactor; //hard coded x-direction!
          }
        }
        else if (vertices[enumerator(i)].getBoundaryType() == OUTFLOW ||
            vertices[enumerator(i)].getBoundaryType() == WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN ) {
          if (_scenarioHasOutflowPressureBoundaryCondition) {
            assertion1(i%2==1, i%2);
            contr(0) = _outletPressure / _rho * pressureFactor;         //hard coded x-direction!
          }
        }
        else if (vertices[enumerator(i)].getBoundaryType() == PERIODIC_LEFT  ||
            vertices[enumerator(i)].getBoundaryType() == PERIODIC_RIGHT ||
            vertices[enumerator(i)].getBoundaryType() == PERIODIC_CORNER ) {
          //do nothing, allowed for 3D turbulent channel, BC in z-direction
          //            (in/out+periodic==in/out; should be set correctly in scenario)
          assertion(DIMENSIONS==3);
        }
        else if (vertices[enumerator(i)].getBoundaryType() == WALL_FREE_SLIP_Y) {
          //do nothing, just skip usual slip wall nodes (which are be included in outer if)
        }
        else {
          logError("addPressureBoundaryContributionToF()","invalid Neumann boundary type!" << vertices[enumerator(i)].getBoundaryType() );
        }

        vertices[enumerator(i)].addValueToF(contr);
      }
    }
  }
}




void AbstractCalculateF::addGravityPressureBoundaryContributionToF(
  RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
  const peano::kernel::gridinterface::VertexEnumerator& enumerator
) const {
  if( _scenarioHasGravityPressureBoundaryCondition ) {
    Vector cellCenter = enumerator.getCellCenter();

//    double distanceToMaximumElevation = peano::fluidscenario::FluidConfiguration::getMaximumElevationInNegGravitationDirection() - _gravityVector.dot(cellCenter)/_gravityVector.norm();
//    double hydrostaticPressure = (-1.0) * _rho * _gravityVector.norm() * distanceToMaximumElevation;

    addPressureBoundaryContributionToFLoop(
                                           vertices,
                                           enumerator,
                                           _inletPressure,
                                           _outletPressure
                                         );
  }
}



void AbstractCalculateF::addPressureBoundaryContributionToFLoop(
  RegularGridFluidVertexEnhancedDivFreeEulerExplicit*   vertices,
  const peano::kernel::gridinterface::VertexEnumerator& enumerator,
  const double  inletPressureFactor,
  const double  outletPressureFactor
) const {
  double pressureFactor = 1.0;
  for (int d=1; d<DIMENSIONS; d++) {
    pressureFactor *= enumerator.getCellSize()(d) * 0.5;
  }

  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    if (vertices[enumerator(i)].getFluidVertexType() == NEUMANN ||
        vertices[enumerator(i)].getFluidVertexType() == MIXED_DIRICHLET_NEUMANN ||
        vertices[enumerator(i)].getFluidVertexType() == PERIODIC ) {
      Vector contr(0.0);
      if (vertices[enumerator(i)].getBoundaryType() == INFLOW ||
          vertices[enumerator(i)].getBoundaryType() == WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN) {
        if (_scenarioHasInflowPressureBoundaryCondition) {
          assertion1(i%2==0, i%2);
          contr(0) = (-1.0) * inletPressureFactor * pressureFactor; //hard coded x-direction! (-1) due to oriented saving of F (-F used for u-update).
        }
      }
      else if (vertices[enumerator(i)].getBoundaryType() == OUTFLOW ||
               vertices[enumerator(i)].getBoundaryType() == WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN ) {
        if (_scenarioHasOutflowPressureBoundaryCondition) {
          assertion1(i%2==1, i%2);
          contr(0) = outletPressureFactor * pressureFactor;         //hard coded x-direction! (+1) due to oriented saving of F (-F used for u-update).
        }
      }
      else if (vertices[enumerator(i)].getBoundaryType() == PERIODIC_LEFT  ||
               vertices[enumerator(i)].getBoundaryType() == PERIODIC_RIGHT ||
               vertices[enumerator(i)].getBoundaryType() == PERIODIC_CORNER ) {
        //do nothing, allowed for 3D turbulent channel, BC in z-direction
        //            (in/out+periodic==in/out; should be set correctly in scenario)
        assertion(DIMENSIONS==3);
      }
      else if (vertices[enumerator(i)].getBoundaryType() == WALL_FREE_SLIP_Y) {
        //do nothing, just skip usual slip wall nodes (which are be included in outer if)
      }
      else {
        logError("addPressureBoundaryContributionToFLoop()","invalid Neumann boundary type!" << vertices[enumerator(i)].getBoundaryType() );
      }
      vertices[enumerator(i)].addValueToF(contr);
    }
  }
}

AbstractCalculateF::ElementType AbstractCalculateF::getElementType() const {
  return _elementType;
}

}}}}} // close name spaces

