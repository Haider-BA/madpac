#include "peano/applications/poisson/vhhjacobi/RegularGridVertex.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridCell.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"


peano::applications::poisson::vhhjacobi::RegularGridVertex::RegularGridVertex():
  Base() { 
}


peano::applications::poisson::vhhjacobi::RegularGridVertex::RegularGridVertex(const Base::PersistentVertex& argument):
  Base(argument) {
}


tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::vhhjacobi::RegularGridVertex::readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getResidual(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::vhhjacobi::RegularGridVertex::readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::vhhjacobi::RegularGridVertex::readRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getRhs(); enddforx return result; }

void peano::applications::poisson::vhhjacobi::RegularGridVertex::writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setResidual( values(xScalar) ); enddforx }

double peano::applications::poisson::vhhjacobi::RegularGridVertex::getResidual() const {
  assertion1( !isOutside(), *this );
  return _vertexData.getRhs() - _vertexData.getResidual();
}


double peano::applications::poisson::vhhjacobi::RegularGridVertex::getU() const {
  return _vertexData.getU();
}


void peano::applications::poisson::vhhjacobi::RegularGridVertex::init(double initialValue, double rhs, const tarch::la::Vector<DIMENSIONS,double>& h) {
  for (int d=0; d<DIMENSIONS; d++) {
    assertion( h(d) > 0.0 );
    rhs *= h(d);
  }
  _vertexData.setU(initialValue);
  _vertexData.setRhs(rhs);
}


void peano::applications::poisson::vhhjacobi::RegularGridVertex::clearResidual() {
  _vertexData.setResidual(0.0);
}


void peano::applications::poisson::vhhjacobi::RegularGridVertex::update( double relaxationFactor ) {
  assertion( relaxationFactor >  0.0 );
  assertion( relaxationFactor <= 1.0 );
  if (isInside())  {
    double diagonalElement = RegularGridCell::getDiagonalElement();
    double update = relaxationFactor / diagonalElement * getResidual();
    _vertexData.setU( _vertexData.getU() + update );
    assertion(_vertexData.getU()!=0.0);
  }
}


double peano::applications::poisson::vhhjacobi::RegularGridVertex::getRhs() const {
  return _vertexData.getRhs();
}
