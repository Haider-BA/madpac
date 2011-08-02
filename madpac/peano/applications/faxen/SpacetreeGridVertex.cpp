#include "peano/applications/faxen/SpacetreeGridVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"


peano::applications::faxen::SpacetreeGridVertex::SpacetreeGridVertex():
  Base() { 
  // @todo Insert your code here
}


peano::applications::faxen::SpacetreeGridVertex::SpacetreeGridVertex(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::faxen::SpacetreeGridVertex::mergeWithNeighbour(const peano::applications::faxen::SpacetreeGridVertex& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
  // @todo Insert your code here
}
 

void peano::applications::faxen::SpacetreeGridVertex::prepareSendToNeighbour() {
  // @todo Insert your code here
}
#endif


 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getP0(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getP1(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getF0(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getF1(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getG0(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getG1(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU0(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU1(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU2(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV0(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV1(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV2(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::SpacetreeGridVertex::readFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getFlag(); enddforx return result; }






 void peano::applications::faxen::SpacetreeGridVertex::writeP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setP0( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setP1( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setF0( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setF1( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setG0( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setG1( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU0( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU1( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU2( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV0( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV1( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV2( values(xScalar) ); enddforx }
 void peano::applications::faxen::SpacetreeGridVertex::writeFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setFlag( values(xScalar) ); enddforx }






