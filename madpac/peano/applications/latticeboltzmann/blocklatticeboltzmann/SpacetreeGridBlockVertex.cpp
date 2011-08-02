#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/SpacetreeGridBlockVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"


tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex");


peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex():
  Base() {
  // set default refinement flag
  switchToDefault();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::createVertex(
const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h){
  unsigned int vertexNumber =
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
    createVertex(x,h);

  setVertexNumber(vertexNumber);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::createHangingVertex(){
  setVertexNumber(0);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::destroyVertex() const{
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  destroyVertex(getVertexNumber());
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
setVertexNumber(int vertexNumber){
  Base::_vertexData.setVertexNumber(vertexNumber);
}


unsigned int
peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::getVertexNumber() const{
  return Base::_vertexData.getVertexNumber();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::switchToDefault() {
  Base::_vertexData.setLbRefinementState(Base::Records::LB_REFINEMENT_DEFAULT);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
switchToNewPersistentVertex(){
  Base::_vertexData.setLbRefinementState(Base::Records::LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
switchToHasNewPersistentSubVertices() {
  Base::_vertexData.setLbRefinementState(Base::Records::LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES);
}



void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
switchToCoarsenedVertex(){
  Base::_vertexData.setLbRefinementState(Base::Records::LB_REFINEMENT_IS_COARSED);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
isDefaultVertex() const{
  return (Base::_vertexData.getLbRefinementState() == Base::Records::LB_REFINEMENT_DEFAULT);
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
isNewPersistentVertex() const{
  return (Base::_vertexData.getLbRefinementState() == Base::Records::LB_REFINEMENT_IS_NEW_PERSISTENT_VERTEX);
}



bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
hasNewPersistentSubVertices() const{
  return (Base::_vertexData.getLbRefinementState() == Base::Records::LB_REFINEMENT_HAS_NEW_PERSISTENT_SUBVERTICES);
}


bool peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
isCoarsenedVertex() const {
  return (Base::_vertexData.getLbRefinementState() == Base::Records::LB_REFINEMENT_IS_COARSED);
}




peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::SpacetreeGridBlockVertex(const Base::PersistentVertex& argument):
  Base(argument) {
}


#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::mergeWithNeighbour(const peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::prepareSendToNeighbour() {
}
#endif


#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
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


double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::getDensityOnBoundary(const int& index) const {
  return Base::_vertexData.getLbDensityOnBoundary(index);
}
#endif



#ifdef Parallel
double peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::
getPdfDiff(const int& index) const {
  assertion(index > -1);
  assertion(index < LB_PDFS_ON_BLOCKBOUNDARY);
  return Base::_vertexData.getLbPdfDiff(index);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::initPdfDiff(){
  assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY; i++){
    // save pdfs pointing out of the block
    Base::_vertexData.setLbPdfDiff(
      i,
      -peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf()(peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getOutgoingPdf(i))
    );
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::computePdfDiff(){
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

void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::mergePdfDiff(const SpacetreeGridBlockVertex& neighbour,int fromRank) {
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


void peano::applications::latticeboltzmann::blocklatticeboltzmann::SpacetreeGridBlockVertex::mergeDensityOnBoundary(const SpacetreeGridBlockVertex& neighbour,int fromRank) {
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
