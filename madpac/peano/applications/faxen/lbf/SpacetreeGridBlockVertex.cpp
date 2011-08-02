#include "peano/applications/faxen/lbf/SpacetreeGridBlockVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"

tarch::logging::Log peano::applications::faxen::lbf::SpacetreeGridBlockVertex::_log("peano::applications::faxen::lbf::SpacetreeGridBlockVertex");

peano::applications::faxen::lbf::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex():
		  Base() {
	// set default refinement flag
	switchToDefault();
}


peano::applications::faxen::lbf::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const Base::PersistentVertex& argument):
		  Base(argument) {
	// @todo Insert your code here
}


#ifdef Parallel
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::mergeWithNeighbour(const peano::applications::faxen::lbf::SpacetreeGridBlockVertex& neighbour, int fromRank) {
	Base::mergeWithNeighbour(neighbour,fromRank);
	// @todo Insert your code here
}


void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::prepareSendToNeighbour() {
	// @todo Insert your code here
}
#endif


tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getP0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getP1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getF0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getF1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getG0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getG1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU2(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV0(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV1(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getV2(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::faxen::lbf::SpacetreeGridBlockVertex::readFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getFlag(); enddforx return result; }

void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setP0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setP1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setF0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setF1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setG0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setG1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setU2( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV0( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV1( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setV2( values(xScalar) ); enddforx }
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::writeFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setFlag( values(xScalar) ); enddforx }

/**
 * Lattice Boltzmann component functions' implementation
 */

void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::createVertex(
const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h){
  unsigned int vertexNumber =
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
    createVertex(x,h);

  setVertexNumber(vertexNumber);
}


void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::createHangingVertex(){
  setVertexNumber(0);
}


void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::destroyVertex() const{
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  destroyVertex(getVertexNumber());
}



void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
setVertexNumber(int vertexNumber){
  Base::_vertexData.setVertexNumber(vertexNumber);
}


unsigned int
peano::applications::faxen::lbf::SpacetreeGridBlockVertex::getVertexNumber() const{
  return Base::_vertexData.getVertexNumber();
}


void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::switchToDefault() {
  Base::_vertexData.setLbRefinementState(Base::Records::LB_REFINEMENT_DEFAULT);
}



void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
switchToNewPersistentVertex(){
  Base::_vertexData.setLbRefinementState(Base::Records::LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX);
}



void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
switchToHasNewPersistentSubVertices() {
  Base::_vertexData.setLbRefinementState(Base::Records::LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES);
}



void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
switchToCoarsenedVertex(){
  Base::_vertexData.setLbRefinementState(Base::Records::LB_REFINEMENT_IS_COARSED);
}



bool peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
isDefaultVertex() const{
  return (Base::_vertexData.getLbRefinementState() == Base::Records::LB_REFINEMENT_DEFAULT);
}


bool peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
isNewPersistentVertex() const{
  return (Base::_vertexData.getLbRefinementState() == Base::Records::LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX);
}



bool peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
hasNewPersistentSubVertices() const{
  return (Base::_vertexData.getLbRefinementState() == Base::Records::LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES);
}


bool peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
isCoarsenedVertex() const {
  return (Base::_vertexData.getLbRefinementState() == Base::Records::LB_REFINEMENT_IS_COARSED);
}


#ifdef Parallel
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::mergeWithNeighbour(const peano::applications::faxen::lbf::SpacetreeGridBlockVertex& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
}


void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::prepareSendToNeighbour() {
}
#endif


#ifdef Parallel
void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
resetDensityOnOuterBoundaryCellsOfBlockBoundary(){
  assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY; i++){
    int index = peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKBOUNDARYINDEX.getBlockIndex(i);
    if (   (!peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner()[index])
        && peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary()[index]){
      Base::_vertexData.setLbDensityOnBoundary(i,0.0);
    }
  }
}


double peano::applications::faxen::lbf::SpacetreeGridBlockVertex::getDensityOnBoundary(const int& index) const {
  return Base::_vertexData.getLbDensityOnBoundary(index);
}
#endif



#ifdef Parallel
double peano::applications::faxen::lbf::SpacetreeGridBlockVertex::
getPdfDiff(const int& index) const {
  assertion(index > -1);
  assertion(index < LB_PDFS_ON_BLOCKBOUNDARY);
  return Base::_vertexData.getLbPdfDiff(index);
}


void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::initPdfDiff(){
  assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY; i++){
    // save pdfs pointing out of the block
    Base::_vertexData.setLbPdfDiff(
      i,
      -peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf()(peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getOutgoingPdf(i))
    );
  }
}


void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::computePdfDiff(){
  assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY; i++){
    // save pdfs pointing into the block
    Base::_vertexData.setLbPdfDiff(
      i,
      Base::_vertexData.getLbPdfDiff(i) +
      peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf()(
        peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getIncomingPdf(i)
      )
    );
  }
}

void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::mergePdfDiff(const SpacetreeGridBlockVertex& neighbour,int fromRank) {
  assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf = peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf();
  // add difference to pdfs
  for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY; i++){
    // if the current pdf-field has not changed
    // -> either the same amount was transfered from some neighbour cell; in this case, adding the difference (which should also
    //    equal zero) should not matter at all
    // -> or: there was no transfer, as the process boundary passes through here; in this case, adding the difference
    //    will just make everything right ;-)
    if (Base::_vertexData.getLbPdfDiff(i) == 0.0){
      pdf(peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getIncomingPdf(i)) =
        pdf(
        peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getIncomingPdf(i)
        )
        + neighbour.getPdfDiff(i);
    }
  }
}


void peano::applications::faxen::lbf::SpacetreeGridBlockVertex::mergeDensityOnBoundary(const SpacetreeGridBlockVertex& neighbour,int fromRank) {
  assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  // merge density values in outer close-to-boundary cells
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY; i++){
    int index = peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKBOUNDARYINDEX.getBlockIndex(i);
    if (   (!peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner()[index])
        && peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary()[index]){
      assertion ( (Base::_vertexData.getLbDensityOnBoundary(i) == 0.0) || (neighbour.getDensityOnBoundary(i) == 0.0) );
      Base::_vertexData.setLbDensityOnBoundary(i,
          Base::_vertexData.getLbDensityOnBoundary(i)
        + neighbour.getDensityOnBoundary(i)
      );
    }
  }
}
#endif





