#include "peano/applications/poisson/multigrid/SpacetreeGridVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"

tarch::logging::Log peano::applications::poisson::multigrid::SpacetreeGridVertex::SpacetreeGridVertex::_log( "peano::applications::poisson::multigrid::SpacetreeGridVertex::SpacetreeGridVertex" );


peano::applications::poisson::multigrid::SpacetreeGridVertex::SpacetreeGridVertex():
  Base() { 
  // @todo Insert your code here
}


peano::applications::poisson::multigrid::SpacetreeGridVertex::SpacetreeGridVertex(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::poisson::multigrid::SpacetreeGridVertex::mergeWithNeighbour(const peano::applications::poisson::multigrid::SpacetreeGridVertex& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
  // @todo Insert your code here
}
 

void peano::applications::poisson::multigrid::SpacetreeGridVertex::prepareSendToNeighbour() {
  // @todo Insert your code here
}
#endif


 tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::SpacetreeGridVertex::readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getResidual(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::SpacetreeGridVertex::readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU(); enddforx return result; }




 tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>  peano::applications::poisson::multigrid::SpacetreeGridVertex::readTempP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices)  { tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> result; dfor2(x) tarch::la::slice<TWO_POWER_D>(result,xScalar*TWO_POWER_D) = vertices[ enumerator(x) ]._vertexData.getTempP(); enddforx return result; }

 tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>  peano::applications::poisson::multigrid::SpacetreeGridVertex::readTempAP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices)  { tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> result; dfor2(x) tarch::la::slice<TWO_POWER_D>(result,xScalar*TWO_POWER_D) = vertices[ enumerator(x) ]._vertexData.getTempAP(); enddforx return result; }

 tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>  peano::applications::poisson::multigrid::SpacetreeGridVertex::readStencil(
   const peano::kernel::gridinterface::VertexEnumerator& enumerator,
   const SpacetreeGridVertex* const vertices){

   tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double> result;

   dfor2(x)
     tarch::la::slice<THREE_POWER_D>(result, xScalar*THREE_POWER_D) = vertices[enumerator(x)]._vertexData.getStencil();
   enddforx

   return result;
 }

 tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D,double>  peano::applications::poisson::multigrid::SpacetreeGridVertex::readR(
   const peano::kernel::gridinterface::VertexEnumerator& enumerator,
   const SpacetreeGridVertex* const vertices){

   tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D,double> result;

   dfor2(x)
     tarch::la::slice<FIVE_POWER_D>(result, xScalar*FIVE_POWER_D) = vertices[enumerator(x)]._vertexData.getRestriction();
   enddforx

   return result;
 }

 tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D,double>  peano::applications::poisson::multigrid::SpacetreeGridVertex::readP(
   const peano::kernel::gridinterface::VertexEnumerator& enumerator,
   const SpacetreeGridVertex* const vertices){

   tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D,double> result;

   dfor2(x)
     tarch::la::slice<FIVE_POWER_D>(result, xScalar*FIVE_POWER_D) = vertices[enumerator(x)]._vertexData.getProlongation();
   enddforx

   return result;
 }

 void peano::applications::poisson::multigrid::SpacetreeGridVertex::writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setResidual( values(xScalar) ); enddforx }


void peano::applications::poisson::multigrid::SpacetreeGridVertex::writeTempP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>& values) { dfor2(x) tarch::la::Vector<TWO_POWER_D,double> temp; temp = tarch::la::slice<TWO_POWER_D>(values,xScalar*TWO_POWER_D); vertices[ enumerator(x) ]._vertexData.setTempP( temp ); enddforx }


void peano::applications::poisson::multigrid::SpacetreeGridVertex::writeTempAP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>& values) { dfor2(x) tarch::la::Vector<TWO_POWER_D,double> temp; temp = tarch::la::slice<TWO_POWER_D>(values,xScalar*TWO_POWER_D); vertices[ enumerator(x) ]._vertexData.setTempAP( temp ); enddforx }


 void peano::applications::poisson::multigrid::SpacetreeGridVertex::writeStencil(
     const peano::kernel::gridinterface::VertexEnumerator& enumerator,
     SpacetreeGridVertex* const vertices,
     const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>& values){

   dfor2(x) tarch::la::Vector<THREE_POWER_D,double> temp;
     temp = tarch::la::slice<THREE_POWER_D>(values,xScalar*THREE_POWER_D);
     vertices[ enumerator(x) ]._vertexData.setStencil( temp );
   enddforx
 }

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setStencil(const peano::toolbox::stencil::Stencil& stencil){

  _vertexData.setStencil(stencil);

}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setRhs(double value, const tarch::la::Vector<DIMENSIONS,double>& h) {
  assertion(value != std::numeric_limits<float>::infinity());
  for (int d=0; d<DIMENSIONS; d++) {
	assertion( h(d)>0.0 );
	value *= h(d);
  }
  _vertexData.setRhs(value);
}


void peano::applications::poisson::multigrid::SpacetreeGridVertex::setRhs(double value) {
  assertion(value != std::numeric_limits<float>::infinity());
  assertion( _vertexData.getRefinementControl()==Records::Refined );
  _vertexData.setRhs(value);
}


double peano::applications::poisson::multigrid::SpacetreeGridVertex::getRhs() const {
  return _vertexData.getRhs();
}

double peano::applications::poisson::multigrid::SpacetreeGridVertex::getResidual() const {
  return _vertexData.getResidual();
}

double peano::applications::poisson::multigrid::SpacetreeGridVertex::getU() const {
  return _vertexData.getU();
}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setU(double value){

  _vertexData.setU(value);

}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setResidual(double value){

  _vertexData.setResidual(value);

}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::clearResidual(){

  _vertexData.setResidual(_vertexData.getRhs());

}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setTempP(const int index, const double value){

  assertion(value != std::numeric_limits<float>::infinity());

  _vertexData.setTempP(index, value);

}


void peano::applications::poisson::multigrid::SpacetreeGridVertex::setTempAP(const int index, const double value){

  assertion(value != std::numeric_limits<float>::infinity());

  _vertexData.setTempAP(index, value);

}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setTempP(const tarch::la::Vector<TWO_POWER_D,double>& values){
  _vertexData.setTempP(values);
}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& values){
  _vertexData.setTempAP(values);
}

tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::SpacetreeGridVertex::getP() const {
  return _vertexData.getProlongation();
}

double peano::applications::poisson::multigrid::SpacetreeGridVertex::getP(const int index) const {
  return _vertexData.getProlongation(index);
}

tarch::la::Vector<FIVE_POWER_D,double> peano::applications::poisson::multigrid::SpacetreeGridVertex::getR() const {
  return _vertexData.getRestriction();
}

double peano::applications::poisson::multigrid::SpacetreeGridVertex::getR(const int index) const {
  return _vertexData.getRestriction(index);
}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setP(const peano::toolbox::stencil::ProlongationMatrix& prolongation){
  _vertexData.setProlongation(prolongation);
}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::setR(const peano::toolbox::stencil::RestrictionMatrix& restriction){
  _vertexData.setRestriction(restriction);
}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::clearP(){
  for (int i = 0; i < FIVE_POWER_D; i++){
    _vertexData.setProlongation(i, 0.0);
  }
}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::clearR(){
  for (int i = 0; i < FIVE_POWER_D; i++){
    _vertexData.setRestriction(i, 0.0);
  }
}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::clearStencil(){

  for (int i = 0; i < THREE_POWER_D; i++){
    _vertexData.setStencil(i, 0.0);
  }
}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::addValueToStencilEntry(const int index, double value){

  _vertexData.setStencil(index, _vertexData.getStencil(index)+value);

}

double peano::applications::poisson::multigrid::SpacetreeGridVertex::getDiagonalElementOfStencil() const {
  int base         = 1;
  int stencilEntry = 0;
  for (int d=0; d<DIMENSIONS; d++) {
    stencilEntry += 1 * base;
    base         *= 3;
  }
  assertion(_vertexData.getStencil(stencilEntry)!=0.0);
  return _vertexData.getStencil(stencilEntry);
}

double peano::applications::poisson::multigrid::SpacetreeGridVertex::getStencil(const int index) const {
  return _vertexData.getStencil(index);
}

tarch::la::Vector<THREE_POWER_D,double> peano::applications::poisson::multigrid::SpacetreeGridVertex::getStencil() const {
  return _vertexData.getStencil();
}

tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::SpacetreeGridVertex::getTempP() const{

  return _vertexData.getTempP();

}

tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::multigrid::SpacetreeGridVertex::getTempAP() const{

  return _vertexData.getTempAP();

}

double peano::applications::poisson::multigrid::SpacetreeGridVertex::getTempP(const int index){

  return _vertexData.getTempP(index);

}

double peano::applications::poisson::multigrid::SpacetreeGridVertex::getTempAP(const int index){

  return _vertexData.getTempAP(index);

}

void peano::applications::poisson::multigrid::SpacetreeGridVertex::clearTempP(){

  tarch::la::Vector<TWO_POWER_D,double> temp;
  tarch::la::assignList(temp) = 0.0, 0.0, 0.0, 0.0;
  setTempP(temp);

}
void peano::applications::poisson::multigrid::SpacetreeGridVertex::clearTempAP(){

  tarch::la::Vector<TWO_POWER_D,double> temp;
  tarch::la::assignList(temp) = 0.0, 0.0, 0.0, 0.0;
  setTempAP(temp);

}
