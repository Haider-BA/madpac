#include "peano/applications/navierstokes/prototype1/mappings/RegularGrid2GaussSeidelForEnhancedDivFree.h"


tarch::logging::Log peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::_log( "peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree" );


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::setNewTimeStepSizeTau(
  const double newTau
) {
  assertion(tarch::la::greater(newTau,0.0));
  _tau = newTau;
}


double peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::getResidual() const {
  return _residual;
}

double peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::getInitResidual() const {
  return _initResidual;
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::prepareForInitResidual() {
  assertion(_computeInitResidual==false);
  _computeInitResidual = true;
}


peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::RegularGrid2GaussSeidelForEnhancedDivFree()
  : _elementMatrices()
{
  logTraceIn( "RegularGrid2GaussSeidelForEnhancedDivFree()" );
  // @todo Insert your code here
  logTraceOut( "RegularGrid2GaussSeidelForEnhancedDivFree()" );
}


peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::~RegularGrid2GaussSeidelForEnhancedDivFree() {
  logTraceIn( "~RegularGrid2GaussSeidelForEnhancedDivFree()" );
  // @todo Insert your code here
  logTraceOut( "~RegularGrid2GaussSeidelForEnhancedDivFree()" );
}

  
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::createInnerVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createInnerVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createInnerVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::createBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "createBoundaryVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createBoundaryVertex()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::destroyVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  const tarch::la::Vector<DIMENSIONS,double>&  h,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
) {
  logTraceInWith3Arguments( "destroyVertex()", x, h, vertex );
  // @todo Insert your code here
  logTraceOut( "destroyVertex()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::createCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "createCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOutWith1Argument( "createCell()", cell );
}



void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::destroyCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit const * const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "destroyCell()", enumerator.toString(), cell );
  // @todo Insert your code here
  logTraceOut( "destroyCell()" );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::handleCell(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
  peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  logTraceInWith2Arguments( "handleCell()", enumerator.toString(), cell );
  assertion( tarch::la::equals(enumerator.getCellSize()(0),enumerator.getCellSize()(1)) );

  double c;
  c = 1.0;
  const bool enhancedOn = false;
  if (enhancedOn==false) c = 0.0;

//  double hFactor = enumerator.getCellSize()(0) * enumerator.getCellSize()(0);
//
//  double r = ( - vertices[enumerator(0)].getGradP()(0) * hFactor
//               - vertices[enumerator(0)].getGradP()(1) * hFactor
//               + vertices[enumerator(1)].getGradP()(0) * hFactor
//               - vertices[enumerator(1)].getGradP()(1) * hFactor
//               - vertices[enumerator(2)].getGradP()(0) * hFactor
//               + vertices[enumerator(2)].getGradP()(1) * hFactor
//               + vertices[enumerator(3)].getGradP()(0) * hFactor
//               + vertices[enumerator(3)].getGradP()(1) * hFactor
//
//               + cell.getRhsPPE()
//             );
//
//  if (enhancedOn==true) {
//    r = r    - vertices[enumerator(0)].getGradPEdge(2)
//             + vertices[enumerator(1)].getGradPEdge(2)
//             - vertices[enumerator(0)].getGradPEdge(1)
//             + vertices[enumerator(2)].getGradPEdge(1);
//  }

  Vector hFactor = _elementMatrices.getHFactorForMOrC(enumerator.getCellSize());
  double r = 0.0;
  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    for (int d=0; d<DIMENSIONS; d++) {
//      r += MDlinearElementMatrix[ i + (d*NUMBER_OF_VERTICES_PER_ELEMENT) ] * hFactor(d) * (
//          inverseA(i) * F(i*DIMENSIONS + d)
//          - _adjustmentFactor/_tau * u(i*DIMENSIONS + d) );
        r += MDlinearElementMatrix[ i + (d*NUMBER_OF_VERTICES_PER_ELEMENT) ] * hFactor(d) * (
             vertices[enumerator(i)].getInverseA() * vertices[enumerator(i)].getGradP()(d));
    }
  }
  r += cell.getRhsPPE();

  r = r / (2.0 + 4.0*c);
      //std::cout << "\n\ncell res =" << r;

  //SOR
  //r *= 1.7;

  Vector tmp(0.0);
//  if (vertices[enumerator(0)].isVertexHoldingARealDoF()) {
//      tmp(0) = r * vertices[enumerator(0)].getInverseA();
//      tmp(1) = r * vertices[enumerator(0)].getInverseA();
//      vertices[enumerator(0)].addValueToGradP(tmp);
//      #ifdef Parallel
//      vertices[enumerator(0)].addValueToGradPUpdate(tmp);
//      #endif
//    }
//    if (vertices[enumerator(1)].isVertexHoldingARealDoF()) {
//      tmp(0) = -r * vertices[enumerator(1)].getInverseA();
//      tmp(1) = r * vertices[enumerator(1)].getInverseA();
//      vertices[enumerator(1)].addValueToGradP(tmp);
//      #ifdef Parallel
//      vertices[enumerator(1)].addValueToGradPUpdate(tmp);
//      #endif
//    }
//    if (vertices[enumerator(2)].isVertexHoldingARealDoF()) {
//      tmp(0) = r * vertices[enumerator(2)].getInverseA();
//      tmp(1) = - r * vertices[enumerator(2)].getInverseA();
//      vertices[enumerator(2)].addValueToGradP(tmp);
//      #ifdef Parallel
//      vertices[enumerator(2)].addValueToGradPUpdate(tmp);
//      #endif
//    }
//    if (vertices[enumerator(3)].isVertexHoldingARealDoF()) {
//      tmp(0) = -r * vertices[enumerator(3)].getInverseA();
//      tmp(1) = -r * vertices[enumerator(3)].getInverseA();
//      vertices[enumerator(3)].addValueToGradP(tmp);
//      #ifdef Parallel
//      vertices[enumerator(3)].addValueToGradPUpdate(tmp);
//      #endif
//    }
//
//    if (vertices[enumerator(0)].isVertexHoldingARealDoF() ||
//        vertices[enumerator(2)].isVertexHoldingARealDoF() ) {
//      vertices[enumerator(0)].setGradPEdge( 2,
//           vertices[enumerator(0)].getGradPEdge(2) + c*r );
//      #ifdef Parallel
//      vertices[enumerator(0)].setGradPUpdateEdge( 2,
//                 vertices[enumerator(0)].getGradPUpdateEdge(2) + c*r );
//      #endif
//    }
//    if (vertices[enumerator(1)].isVertexHoldingARealDoF() ||
//        vertices[enumerator(3)].isVertexHoldingARealDoF() ) {
//      vertices[enumerator(1)].setGradPEdge( 2,
//           vertices[enumerator(1)].getGradPEdge(2) - c*r );
//      #ifdef Parallel
//      vertices[enumerator(1)].setGradPUpdateEdge( 2,
//                       vertices[enumerator(1)].getGradPUpdateEdge(2) + c*r );
//      #endif
//    }
//    if (vertices[enumerator(0)].isVertexHoldingARealDoF() ||
//        vertices[enumerator(1)].isVertexHoldingARealDoF() ) {
//      vertices[enumerator(0)].setGradPEdge( 1,
//           vertices[enumerator(0)].getGradPEdge(1) + c*r );
//      #ifdef Parallel
//      vertices[enumerator(0)].setGradPUpdateEdge( 1,
//                 vertices[enumerator(0)].getGradPUpdateEdge(1) + c*r );
//      #endif
//    }
//    if (vertices[enumerator(2)].isVertexHoldingARealDoF() ||
//        vertices[enumerator(3)].isVertexHoldingARealDoF() ) {
//      vertices[enumerator(2)].setGradPEdge( 1,
//           vertices[enumerator(2)].getGradPEdge(1) - c*r );
//      #ifdef Parallel
//      vertices[enumerator(2)].setGradPUpdateEdge( 1,
//                       vertices[enumerator(2)].getGradPUpdateEdge(1) + c*r );
//      #endif
//    }


  assertionMsg(!enhancedOn, "Enhanced Divergence Free not adapted yet.");
  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    if (vertices[enumerator(i)].isVertexHoldingARealDoF()) {
      for (int d=0; d<DIMENSIONS; d++) {
        tmp(d) = -MDlinearElementMatrix[ i + (d*NUMBER_OF_VERTICES_PER_ELEMENT) ] * hFactor(d) * r;
      }
      vertices[enumerator(i)].addValueToGradP(tmp);
      #ifdef Parallel
      vertices[enumerator(i)].addValueToGradPUpdate(tmp);
      #endif
    }
  }


  //TODO (std::cout): 2*r/tau!!!
  assertion(tarch::la::greater(_tau,0.0));
  double pressureDelta = r;
  cell.setPAndCalculatePMeasurement(cell.getP() + pressureDelta, enumerator.getCellSize());//p = p + r (factor 2 due to contribution: only half of real pressure part for update of gradP; additional 2 due to /8 for Cartesian instead of /4 for 45)
  _residual += std::abs(pressureDelta);
  //std::cout<< "\nres=" << pressureDelta;


  logTraceOut( "handleCell()" );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::mergeWithNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex, 
  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, 
  int fromRank) {

}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::touchVertexFirstTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexFirstTime()", x, vertex );

  #ifdef Parallel
  vertex.resetGradPUpdate();
  #endif

  logTraceOutWith1Argument( "touchVertexFirstTime()", vertex );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::touchVertexLastTime(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex,
  const tarch::la::Vector<DIMENSIONS,double>&  x
) {
  logTraceInWith2Arguments( "touchVertexLastTime()", x, vertex );
  // @todo Insert your code here
  logTraceOutWith1Argument( "touchVertexLastTime()", vertex );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::prepareSendToNeighbour(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit& vertex
) {
  // @todo Insert your code here
}
#endif

void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::beginIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "beginIteration()", solverState );
  //_log.info("beginIteration()","start iteration for Gauss-Seidel mapping ...");

  setNewTimeStepSizeTau(solverState.getOdeTau());
  _residual = 0.0;

  logTraceOutWith1Argument( "beginIteration()", solverState );
}


void peano::applications::navierstokes::prototype1::mappings::RegularGrid2GaussSeidelForEnhancedDivFree::endIteration(
  peano::applications::navierstokes::prototype1::RegularGridFluidStateEnhancedDivFreeEulerExplicit&  solverState
) {
  logTraceInWith1Argument( "endIteration()", solverState );
  if (_computeInitResidual) { //prepare for non-init in next iteration
    _initResidual        = _residual;
    _computeInitResidual = false;
}

  solverState.setLGSResidual(_residual);
  logTraceOutWith1Argument( "endIteration()", solverState );
}
