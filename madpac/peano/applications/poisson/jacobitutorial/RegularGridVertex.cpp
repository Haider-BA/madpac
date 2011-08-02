#include "peano/applications/poisson/jacobitutorial/RegularGridVertex.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridCell.h"

#include "peano/utils/Loop.h"

#include "peano/kernel/gridinterface/Checkpoint.h"



peano::applications::poisson::jacobitutorial::RegularGridVertex::RegularGridVertex():
  Base() { 
}


peano::applications::poisson::jacobitutorial::RegularGridVertex::RegularGridVertex(const Base::PersistentVertex& argument):
  Base(argument) {
}


double peano::applications::poisson::jacobitutorial::RegularGridVertex::getResidual() const {
  assertion1( !isOutside(), *this );
  // I placed this code snippet into a file of its own to be able to include it
  // into the documentation, too. There's no other reason for this include.
  #include "codesnippets/Vertex_getResidual.cpp-snippet"
}


double peano::applications::poisson::jacobitutorial::RegularGridVertex::getU() const {
  return _vertexData.getU();
}


void peano::applications::poisson::jacobitutorial::RegularGridVertex::init(double initialValue, double rhs, const tarch::la::Vector<DIMENSIONS,double>& h) {
  // I placed this code snippet into a file of its own to be able to include it
  // into the documentation, too. There's no other reason for this include.
  #include "codesnippets/Vertex_init.cpp-snippet"
}


void peano::applications::poisson::jacobitutorial::RegularGridVertex::clearResidual() {
  // I placed this code snippet into a file of its own to be able to include it
  // into the documentation, too. There's no other reason for this include.
  #include "codesnippets/Vertex_clearResidual.cpp-snippet"
}



void peano::applications::poisson::jacobitutorial::RegularGridVertex::update( double relaxationFactor ) {
  // I placed this code snippet into a file of its own to be able to include it
  // into the documentation, too. There's no other reason for this include.
  #include "codesnippets/Vertex_update.cpp-snippet"
}


double peano::applications::poisson::jacobitutorial::RegularGridVertex::getRhs() const {
  return _vertexData.getRhs();
}

#ifdef Parallel
void peano::applications::poisson::jacobitutorial::RegularGridVertex::mergeWithNeighbour(const peano::applications::poisson::jacobitutorial::RegularGridVertex& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
  // @todo Insert your code here
}


void peano::applications::poisson::jacobitutorial::RegularGridVertex::prepareSendToNeighbour() {
  // @todo Insert your code here
}
#endif


tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::jacobitutorial::RegularGridVertex::readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getResidual(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::poisson::jacobitutorial::RegularGridVertex::readU(
  const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices
) {
  tarch::la::Vector<TWO_POWER_D,double> result;
  dfor2(x)
    result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU();
  enddforx
  return result;
}




void peano::applications::poisson::jacobitutorial::RegularGridVertex::writeResidual(
  const peano::kernel::gridinterface::VertexEnumerator& enumerator,
  RegularGridVertex* const vertices,
  const tarch::la::Vector<TWO_POWER_D,double>& values ) {
  dfor2(x)
    vertices[ enumerator(x) ]._vertexData.setResidual( values(xScalar) );
  enddforx
}





