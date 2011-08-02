#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockVertex.h"
#include "peano/utils/Loop.h"

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::_log("peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex");

peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::RegularGridBlockVertex():
  Base() {
  Base::_vertexData.setVertexNumber(0);
#ifdef Parallel
  Base::_vertexData.setLbPdfDiff(0.0);
  Base::_vertexData.setLbDensityOnBoundary(0.0);
#endif
}


peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::RegularGridBlockVertex(const Base::PersistentVertex& argument):
  Base(argument) {
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::
setVertexNumber(int vertexNumber){
  Base::_vertexData.setVertexNumber(vertexNumber);
}


unsigned int
peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::getVertexNumber() const{
  return Base::_vertexData.getVertexNumber();
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::createVertex(
const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h){
  unsigned int vertexNumber =
    peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
    createVertex(x,h);

  setVertexNumber(vertexNumber);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::destroyVertex() const{
  peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().
  destroyVertex(getVertexNumber());
}


#ifdef Parallel
void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::
resetDensityOnBlockBoundary(){
  Base::_vertexData.setLbDensityOnBoundary(0.0);
}

void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::
setDensityOnBlockBoundary(bool useDynamicGeometry){
  if(!useDynamicGeometry){
    return;
  }

  assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  // loop over all cells near the block boundary and copy density values from the grid management service
  // to the parallel buffer
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY; i++){
    int index = peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKBOUNDARYINDEX.getBlockIndex(i);
    if (   (!peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner()[index])
        && ( peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary()[index]) ){
      Base::_vertexData.setLbDensityOnBoundary(
        i,
        peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity()(index)
      );
    } else {
      Base::_vertexData.setLbDensityOnBoundary(i,0.0);
    }
  }
}


double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::getDensityOnBoundary(const int& index) const {
  assertion(index > -1);
  assertion(index < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
  return Base::_vertexData.getLbDensityOnBoundary(index);
}
#endif


#ifdef Parallel
double peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::
getPdfDiff(const int& index) const {
  assertion(index > -1);
  assertion(index < LB_PDFS_ON_BLOCKBOUNDARY);
  return Base::_vertexData.getLbPdfDiff(index);
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::initPdfDiff(){
  assertion(getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  for (int i = 0; i < LB_PDFS_ON_BLOCKBOUNDARY; i++){
    // save pdfs pointing out of the block
    Base::_vertexData.setLbPdfDiff(
      i,
      -peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getPdf()(peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BLOCKBOUNDARYINDEX4PDFS.getOutgoingPdf(i))
    );
  }
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::computePdfDiff(){
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


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::mergePdfDiff(const RegularGridBlockVertex& neighbour) {
  assertion2((getVertexNumber()==0) || (getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber()),getVertexNumber(),peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
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


void peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex::mergeDensityOnBoundary(const RegularGridBlockVertex& neighbour) {
  assertion2((getVertexNumber()==0) || (getVertexNumber()==peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber()),getVertexNumber(),peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getVertexNumber());
  tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density = peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getDensity();

  // merge density values in outer close-to-boundary cells
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY; i++){
    int index = peano::applications::latticeboltzmann::blocklatticeboltzmann::BLOCKBOUNDARYINDEX.getBlockIndex(i);
    if (   (!peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getInner()[index])
        && peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService::getInstance().getBoundary()[index]){
#ifdef Debug
      assertion4 ( (Base::_vertexData.getLbDensityOnBoundary(i) == 0.0) || (neighbour.getDensityOnBoundary(i) == 0.0),Base::_vertexData.getLbDensityOnBoundary(i),neighbour.getDensityOnBoundary(i),index,getX() );
#endif
      density(index) += neighbour.getDensityOnBoundary(i);
    }
  }
}
#endif
