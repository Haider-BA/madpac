#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"

//TODO unterweg Rauswerfen, wenn die Zellengroesse anders abgeleitet werden kann (siehe .getCellSize())
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

const double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_oneOverSqrt2 = 1.0 / std::sqrt(2.0);
double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_uL2h = 0.0;
double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_uMax = 0.0;
double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_uImprovementL2h = 0.0;
double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_uImprovementMax = 0.0;
Vector peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::_uMaxPerDimension(0.0);

peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit():
  Base() { 
  setFluidVertexType( UNDEF );
  setBoundaryType(BOUNDARY_TYPE_UNDEF);
  resetAllVariables();
}


peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetAllVariables(){
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetA();
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetFValues();
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetPressureGradients();
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetVelocityValues();
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetForceValues();
}




void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetVelocityValues(){
  setU( Vector(0.0) );
  for (int i=1; i<=VERTEX_NUMBER_OF_EDGE_DOFS; i++) {
    setUEdge(i, 0.0);
  }
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::addValueToVelocities(const Vector& addValue){
  setU( getU() + addValue );
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::addValueToGradP(Vector delta){
  setGradP( getGradP() + delta );
}
//
//void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::addValueToGradPViaArray(
//  const int idx,
//  double    gradPArray[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT]
//) {
//  assertion1(idx<NUMBER_OF_VERTICES_PER_ELEMENT && idx>=0, idx);
//
//  for (int d=0; d<DIMENSIONS; d++){
//    Base::_vertexData.setGradP(d, Base::_vertexData.getGradP(d) + gradPArray[idx*DIMENSIONS + d]);
//  }
//}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetPressureGradients(){
  setGradP( Vector(0.0) );
  for (int i=1; i<=VERTEX_NUMBER_OF_EDGE_DOFS; i++) {
    setGradPEdge(i, 0.0);
  }
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::addValueToF(Vector delta){
  setF( getF() + delta );
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetFValues(){
  setF( Vector(0.0) );
  for (int i=1; i<=VERTEX_NUMBER_OF_EDGE_DOFS; i++) {
    setFEdge(i, 0.0);
  }
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetForceValues(){
  setForce( Vector(0.0) );
  for (int i=1; i<=VERTEX_NUMBER_OF_EDGE_DOFS; i++) {
    setForceEdge(i, 0.0);
  }
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetA(){
  Base::_vertexData.setA(0.0);
}

double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInverseA() const{
  assertion( getFluidVertexType() != OUTER);
  assertion( !tarch::la::equals(getA(), 0.0) );
  return 1.0/getA();
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::addValueToA(double delta){
  _vertexData.setA( getA() + delta );
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetGradPUpdate() {
  _vertexData.setGradPUpdate(tarch::la::Vector<VERTEX_NUMBER_OF_EDGE_DOFS_PLUS_DIM,double>(0.0));
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::addValueToGradPUpdate(
    tarch::la::Vector<DIMENSIONS,double>& deltaUpdate
) {
  setGradPUpdate( getGradPUpdate() + deltaUpdate );
}

tarch::la::Vector<DIMENSIONS,double>
peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdate() const{
  Vector result;
  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = Base::_vertexData.getGradPUpdate(d);
  }
  return result;
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdate(
  const tarch::la::Vector<DIMENSIONS,double>& newGradPUpdate
) {
  for (int d=0; d<DIMENSIONS; d++) {
    Base::_vertexData.setGradPUpdate(d,newGradPUpdate(d));
  }
}

double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPUpdateEdge(
  const int idx
) const {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  return Base::_vertexData.getGradPUpdate(DIMENSIONS + idx - 1);
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPUpdateEdge(
  const int     idx,
  const double& newGradPUpdate
) {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  Base::_vertexData.setGradPUpdate(DIMENSIONS + idx - 1,newGradPUpdate);
}
#endif

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::resetMeasurementMembers() {
  _uL2h = 0.0;
  _uMax = 0.0;
  _uImprovementL2h = 0.0;
  _uImprovementMax = 0.0;
  _uMaxPerDimension = Vector(0.0);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getUL2h() {
  return std::sqrt(_uL2h);
}


double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getUMax() {
  return _uMax;
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setUMax(double newUMax) {
  _uMax = newUMax;
}



double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getUImprovementL2h() {
  return std::sqrt(_uImprovementL2h);
}



double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getUImprovementMax() {
  return _uImprovementMax;
}



Vector peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getUMaxPerDimension() {
  return _uMaxPerDimension;
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setUMaxPerDimension(int d,
                                                  double newUMaxPerDimensionD) {
  _uMaxPerDimension[d] = newUMaxPerDimensionD;
}


void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::calculateUMeasurement(
  const Vector& velocityImprovement,
  const Vector& newVelocity,
  const Vector& h
  ) {
  double velocityLengthSquared = 0.0;
  double velocityImprovementLengthSquared = 0.0;
  double volumeOfGridCell = 1.0;

  for (int d=0; d<DIMENSIONS; d++) {
    assertion( tarch::la::greater(h(d), 0.0) );
    velocityLengthSquared            += newVelocity(d) * newVelocity(d);
    velocityImprovementLengthSquared += velocityImprovement(d) * velocityImprovement(d);
    volumeOfGridCell                 *= h(d);
    if ( tarch::la::greater(std::abs((newVelocity(d))), _uMaxPerDimension(d)) ) {
      _uMaxPerDimension(d) = std::abs((newVelocity(d)));
    }
  }

  if ( tarch::la::greater(std::sqrt(velocityLengthSquared), _uMax) ) {
    _uMax = std::sqrt(velocityLengthSquared);
  }
  if ( tarch::la::greater(std::sqrt(velocityImprovementLengthSquared), _uImprovementMax) ) {
    _uImprovementMax = std::sqrt(velocityImprovementLengthSquared);
  }

  _uL2h            += volumeOfGridCell * velocityLengthSquared;
  _uImprovementL2h += volumeOfGridCell * velocityImprovementLengthSquared;
}



peano::applications::navierstokes::prototype1::FluidVertexType
peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() const {
  return Base::_vertexData.getFluidVertexType();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFluidVertexType(const FluidVertexType& fluidVertexType) {
  Base::_vertexData.setFluidVertexType(fluidVertexType);
}



peano::applications::navierstokes::prototype1::BoundaryType
peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() const {
  return Base::_vertexData.getBoundaryType();
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const  BoundaryType& newBoundaryType) {
  Base::_vertexData.setBoundaryType(newBoundaryType);
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setBoundaryType(const int newBoundaryType) {
  const  BoundaryType tempType =  BoundaryType(newBoundaryType);
  Base::_vertexData.setBoundaryType(tempType);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() const {
  Vector result;
  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = Base::_vertexData.getU(d);
  }
  return result;
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(const tarch::la::Vector<DIMENSIONS,double>& newU) {
  for (int d=0; d<DIMENSIONS; d++) {
    Base::_vertexData.setU(d,newU(d));
  }
}

double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getUEdge(
  const int idx
) const {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  return Base::_vertexData.getU(DIMENSIONS + idx - 1);
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setUEdge(
  const int     idx,
  const double& newU
) {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  Base::_vertexData.setU(DIMENSIONS + idx - 1,newU);
}






tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() const {
  Vector result;
  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = Base::_vertexData.getGradP(d);
  }
  return result;
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradP(const tarch::la::Vector<DIMENSIONS,double>& newGradP) {
  for (int d=0; d<DIMENSIONS; d++) {
    Base::_vertexData.setGradP(d,newGradP(d));
  }
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPComponent(const int componentNumber, const double& newValue) {
  Base::_vertexData.setGradP(componentNumber, newValue);
}

double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradPEdge(
  const int idx
) const {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  return Base::_vertexData.getGradP(DIMENSIONS + idx - 1);
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setGradPEdge(
  const int     idx,
  const double& newGradP
) {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  Base::_vertexData.setGradP(DIMENSIONS + idx - 1,newGradP);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF() const {
  Vector result;
  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = Base::_vertexData.getF(d);
  }
  return result;
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setF(const tarch::la::Vector<DIMENSIONS,double>& newF) {
  for (int d=0; d<DIMENSIONS; d++) {
    Base::_vertexData.setF(d,newF(d));
  }
}

double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFEdge(
  const int idx
) const {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  return Base::_vertexData.getF(DIMENSIONS + idx - 1);
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setFEdge(
  const int     idx,
  const double& newF
) {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  Base::_vertexData.setF(DIMENSIONS + idx - 1,newF);
}



tarch::la::Vector<DIMENSIONS,double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForce() const {
  Vector result;
  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = Base::_vertexData.getForce(d);
  }
  return result;
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForce(const tarch::la::Vector<DIMENSIONS,double>& newForce) {
  for (int d=0; d<DIMENSIONS; d++) {
    Base::_vertexData.setForce(d,newForce(d));
  }
}

double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getForceEdge(
  const int idx
) const {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  return Base::_vertexData.getForce(DIMENSIONS + idx - 1);
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setForceEdge(
  const int     idx,
  const double& newForce
) {
  assertion1(idx>=1, idx);
  assertion2(idx<=VERTEX_NUMBER_OF_EDGE_DOFS, idx, VERTEX_NUMBER_OF_EDGE_DOFS);
  Base::_vertexData.setForce(DIMENSIONS + idx - 1,newForce);
}



double peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getA() const {
  return Base::_vertexData.getA();
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setA(double newValue) {
  Base::_vertexData.setA(newValue);
}


Vector peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getVelocityDelta(){
  return getForce();
}


void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setVelocityDelta(Vector& velocityDelta){
  for (int d=0; d<DIMENSIONS; d++) {
    Base::_vertexData.setForce( d, velocityDelta(d) );
  }
  //TODO: check enhanced!
}



Vector peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::removeNormalComponentsForSlipWall(
  const Vector& inputVector
) const {
  Vector result = inputVector;

  if (getBoundaryType() == WALL_FREE_SLIP_Y ||
      getBoundaryType() == WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN ||
      getBoundaryType() == WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN
      ) {
      result(1) = 0.0;
  }
  else if (getBoundaryType() == WALL_FREE_SLIP_Z) {
    assertionMsg(false, "not yet implemented!");
  }
  else if (getBoundaryType() == WALL_FREE_SLIP_YZ) {
    assertionMsg(false, "not yet implemented!");
  }

  return result;
}



bool peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isVertexHoldingARealDoF() const {

  if (getFluidVertexType()==INNER    ||
      getFluidVertexType()==PERIODIC ||
      getFluidVertexType()==NEUMANN  ||
      getFluidVertexType()==MIXED_DIRICHLET_NEUMANN) {
    return true;
  }

  #if defined(Asserts)
  std::ostringstream out;
  out << "fluid vertex type nr=" << getFluidVertexType()
      << "detected; supported only " << Base::_vertexData.getDebugFluidVertexTypeMapping();
  assertionMsg( getFluidVertexType()==OUTER     ||
                getFluidVertexType()==DIRICHLET ||
                getFluidVertexType()==UNDEF,
                out.str() );
  #endif

  return false;
}


/*
 * Workers do this.
 */

//void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::mergeNeighbourData(
//  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  neighbourVertex
//) {
//
//  if (_mergeTarget==MERGE_A) {
//    addValueToA(neighbourVertex.getA());
//  }
//
//  if (isVertexHoldingARealDoF()) {
//   if (_mergeTarget==MERGE_F_PHASE2) {
//      addValueToF(neighbourVertex.getF());
//    }
//    else if (_mergeTarget==MERGE_GRADP_PHASE2) {
//      addValueToGradP(neighbourVertex.getGradP());
//    }
//    else {
//      //assertionFail("case not yet implemented");
//    }
//  }
//}

/*
 * Master does this.
 */

//void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::mergeToMasterData(
//  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  neighbourVertex
//) {
//
//  if (_mergeTarget==MERGE_A) {
//    addValueToA(neighbourVertex.getA());
//  }
//
//  if (isVertexHoldingARealDoF()) {
//   if (_mergeTarget==MERGE_F_PHASE1) {
//      addValueToF(neighbourVertex.getF());
//    }
//    else if (_mergeTarget==MERGE_GRADP_PHASE1) {
//      addValueToGradP(neighbourVertex.getGradP());
//    }
//    else {
//      //assertionFail("case not yet implemented");
//    }
//  }
//}

/**
 * Worker does this.
 */

//void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::mergeWithMasterData(
//  const peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  masterVertex
//) {
//
//  if (isVertexHoldingARealDoF()) {
//    if (_mergeTarget==MERGE_A) {
//      setA(masterVertex.getA());
//    }
//    else if (_mergeTarget==MERGE_F_PHASE2) {
//      setF(masterVertex.getF());
//    }
//    else if (_mergeTarget==MERGE_GRADP_PHASE2) {
//      setGradP(masterVertex.getGradP());
//    }
//    else {
//      //assertionFail("case not yet implemented");
//    }
//  }
//}



int peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getLengthOfDynamicVectorForFiniteElement() {
  assertion1(DIMENSIONS==2 || DIMENSIONS==3, DIMENSIONS); //only 2D and 3D supported!
  return (DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 2*DIMENSIONS);
}



tarch::la::DynamicVector<double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::fillUpVelocityDynamicVectorFromVertices(
  RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator,
  const peano::applications::navierstokes::prototype1::ElementType elementType
) {
  if( elementType == peano::applications::navierstokes::prototype1::EnhancedDivergenceFree ) {
    assertion(DIMENSIONS==2);
  } else {
    assertion(DIMENSIONS==2 || DIMENSIONS==3);
  }
  tarch::la::DynamicVector<double> u((NUMBER_OF_VERTICES_PER_ELEMENT+2)*DIMENSIONS);
  assertion2(u.size()==getLengthOfDynamicVectorForFiniteElement(), u.size(), getLengthOfDynamicVectorForFiniteElement());

  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    for (int d=0; d<DIMENSIONS; d++) {
      u[i*DIMENSIONS + d] = vertices[enumerator(i)].getU()(d);
    }
  }
  if( elementType == peano::applications::navierstokes::prototype1::EnhancedDivergenceFree ) {
    u[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 0] = vertices[enumerator(0)].getUEdge(2);
    u[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 1] = vertices[enumerator(1)].getUEdge(2);
    u[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 2] = vertices[enumerator(0)].getUEdge(1);
    u[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 3] = vertices[enumerator(2)].getUEdge(1);
  }

  return u;
}



tarch::la::DynamicVector<double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::fillUpFDynamicVectorFromVertices(
  RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  tarch::la::DynamicVector<double> F(DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 2*DIMENSIONS);
  assertion2(F.size()==getLengthOfDynamicVectorForFiniteElement(), F.size(), getLengthOfDynamicVectorForFiniteElement());

  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    for (int d=0; d<DIMENSIONS; d++) {
      F[i*DIMENSIONS + d] = vertices[enumerator(i)].getF()(d);
    }
  }
  F[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 0] = vertices[enumerator(0)].getFEdge(2);
  F[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 1] = vertices[enumerator(1)].getFEdge(2);
  F[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 2] = vertices[enumerator(0)].getFEdge(1);
  F[DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 3] = vertices[enumerator(2)].getFEdge(1);

  return F;
}



tarch::la::DynamicVector<double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::fillUpInverseADynamicVectorFromVertices(
  RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  tarch::la::DynamicVector<double> inverseA(NUMBER_OF_VERTICES_PER_ELEMENT);

  for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
    inverseA[i] = vertices[enumerator(i)].getInverseA();
  }

  return inverseA;
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::addValuesToFViaDynamicVector(
  RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator,
  const tarch::la::DynamicVector<double>&                FDynVec
) {
  assertion(DIMENSIONS==2 || DIMENSIONS==3);
  assertion4( FDynVec.size()==(NUMBER_OF_VERTICES_PER_ELEMENT+2)*DIMENSIONS, FDynVec.size(),
              (NUMBER_OF_VERTICES_PER_ELEMENT+2)*DIMENSIONS, DIMENSIONS, NUMBER_OF_VERTICES_PER_ELEMENT );
  assertion2(FDynVec.size()==getLengthOfDynamicVectorForFiniteElement(), FDynVec.size(), getLengthOfDynamicVectorForFiniteElement());

  for(int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++){
    Vector tempF;
    for (int d=0; d<DIMENSIONS; d++){
      tempF(d) = vertices[enumerator(i)].getF()(d) + FDynVec(i*DIMENSIONS + d);
    }
    vertices[enumerator(i)].setF(tempF);
  }
  vertices[enumerator(0)].setFEdge(2, vertices[enumerator(0)].getFEdge(2) + FDynVec(DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 0) );
  vertices[enumerator(1)].setFEdge(2, vertices[enumerator(1)].getFEdge(2) + FDynVec(DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 1) );
  vertices[enumerator(0)].setFEdge(1, vertices[enumerator(0)].getFEdge(1) + FDynVec(DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 2) );
  vertices[enumerator(2)].setFEdge(1, vertices[enumerator(2)].getFEdge(1) + FDynVec(DIMENSIONS*NUMBER_OF_VERTICES_PER_ELEMENT + 3) );
}



Vector peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::rotateClockwise(
  const Vector& input
) {
  Vector result;
#ifdef Dim2
  result(0) = _oneOverSqrt2 * (input(0) - input(1));
  result(1) = _oneOverSqrt2 * (input(0) + input(1));
#else
  assertionFail("only valid for 2d");
#endif

  return result;
}



Vector peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::rotateCounterClockwise(
  const Vector& input
) {
  Vector result;
#ifdef Dim2
  result(0) = _oneOverSqrt2 * (  input(0) + input(1));
  result(1) = _oneOverSqrt2 * (- input(0) + input(1));
#else
  assertionFail("only valid for 2d");
#endif

  return result;
}



Vector peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::rotateCartesianTo45(
  const Vector& input
) {
  Vector result;
  result(0) = _oneOverSqrt2 * (  input(0) + input(1));
  result(1) = _oneOverSqrt2 * (  input(0) - input(1));
#if !defined(Dim2)
  //todo check Dim3!
#endif

  return result;
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::prepareODEDerivativeEnhancedDivFree(
  const double& updateTimeAccumulated,
  const Vector& h
) {
  //stuff happens directly in handleODEUpdate()
//  Vector velocityDelta = updateTimeAccumulated * getInverseA() * ( - getF() - getGradP() );
//  setVelocityDelta( velocityDelta );

  //
  Vector velocityDelta =    getInverseA() * (
                                              updateTimeAccumulated * getF()
                                              - getGradP()
                                            );
  setVelocityDelta( velocityDelta );
}


void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::prepareODEDerivativeDlinear(
  const double& updateTimeAccumulated,
  const Vector& h
) {
  Vector velocityDelta = -updateTimeAccumulated * getInverseA() * (  getF() + getGradP() );

//  Vector velocityDelta = -updateTimeAccumulated * (
//                                       getInverseA() * getF()
//                                     + 2.0 * h(0) * getGradP() );

  setVelocityDelta( velocityDelta );
}



void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::handleODETimeUpdate(
  const double& updateTimeAccumulated,
  const Vector& h
) {
  //assertion1(solverStepNumber==1,solverStepNumber);
  assertion1(tarch::la::greater(updateTimeAccumulated,0.0), updateTimeAccumulated);

  if ( RegularGridFluidVertexEnhancedDivFreeEulerExplicit::isVertexHoldingARealDoF() ) {
//    Vector velocityImprovement = updateTimeAccumulated * RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getInverseA() * (
//                                 - RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF()
//                                 - RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() );
    Vector velocityImprovement = getVelocityDelta();

    RegularGridFluidVertexEnhancedDivFreeEulerExplicit::setU(
        RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU() + velocityImprovement );

    RegularGridFluidVertexEnhancedDivFreeEulerExplicit::calculateUMeasurement(velocityImprovement,
                                   RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getU(), h);

    #ifdef Asserts
    if (RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getFluidVertexType() == MIXED_DIRICHLET_NEUMANN) {
      if (RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() == WALL_FREE_SLIP_Y ||
          RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() == WALL_FREE_SLIP_CORNER_TO_INLET_NEUMANN ||
          RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getBoundaryType() == WALL_FREE_SLIP_CORNER_TO_OUTLET_NEUMANN
      ) {
        assertion2( tarch::la::equals(RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP()(1), 0.0), RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(), RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() );
        assertion2( tarch::la::equals(RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF()(1), 0.0), RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getF(), RegularGridFluidVertexEnhancedDivFreeEulerExplicit::getGradP() );
        assertion1( tarch::la::equals(velocityImprovement(1), 0.0), velocityImprovement );
      }
      else {
        assertionMsg(false, "not yet implemented"); //WALL_FREE_SLIP_Z, WALL_FREE_SLIP_YZ
      }
    }
    #endif
  }
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::mergeA(
  const RegularGridFluidVertexEnhancedDivFreeEulerExplicit& remoteVertex
) {
  addValueToA(remoteVertex.getA());
}

void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::mergeF(
  const RegularGridFluidVertexEnhancedDivFreeEulerExplicit& remoteVertex
) {
  addValueToF(remoteVertex.getF());
}

#ifdef Parallel
void peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::mergeGradPUpdate(
  const RegularGridFluidVertexEnhancedDivFreeEulerExplicit& remoteVertex
) {
  addValueToGradP(remoteVertex.getGradPUpdate());
}
#endif

tarch::la::DynamicVector<double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::fillUpAdditionalGravityData(
  RegularGridFluidVertexEnhancedDivFreeEulerExplicit*    vertices,
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator
) {
  return tarch::la::DynamicVector<double>(1, -tarch::la::PI);
}


 tarch::la::Vector<TWO_POWER_D,double> peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit::readA(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getA(); enddforx return result; }









