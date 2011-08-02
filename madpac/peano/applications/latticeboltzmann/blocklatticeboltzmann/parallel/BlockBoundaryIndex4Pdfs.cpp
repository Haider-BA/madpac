#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/parallel/BlockBoundaryIndex4Pdfs.h"

tarch::logging::Log peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BlockBoundaryIndex4Pdfs::_log(
  "peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BlockBoundaryIndex4Pdfs"
);


peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BlockBoundaryIndex4Pdfs::BlockBoundaryIndex4Pdfs():
_boundaryIndex(initBoundaryIndex()){}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BlockBoundaryIndex4Pdfs::
getIncomingPdf(int index) const {
  assertion( index > -1);
  assertion( index < LB_PDFS_ON_BLOCKBOUNDARY);
  return _boundaryIndex(2*index);
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BlockBoundaryIndex4Pdfs::
getOutgoingPdf(int index) const {
  assertion( index > -1);
  assertion( index < LB_PDFS_ON_BLOCKBOUNDARY);
  return _boundaryIndex(2*index+1);
}


const tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY*2,int>
peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BlockBoundaryIndex4Pdfs::
initBoundaryIndex() const{
  int index = 0;
  tarch::la::Vector<LB_PDFS_ON_BLOCKBOUNDARY*2,int> boundaryIndex(0);
  const peano::applications::latticeboltzmann::LatticeVelocities<LB_CURRENT_DIR> latVel(createLatticeVelocities<LB_CURRENT_MODEL,LB_CURRENT_DIR>());
#if (DIMENSIONS == 3)
  for (int z = 0; z < LB_BLOCKSIZE; z++){
#endif
    for (int y = 0; y < LB_BLOCKSIZE; y++){
      for (int x = 0; x < LB_BLOCKSIZE; x++){
        for (int q = 0; q < LB_CURRENT_DIR; q++){
          // if pdf points to a cell outside of the local block...
          double X = x+latVel._entries[q](0);
          double Y = y+latVel._entries[q](1);
#if (DIMENSIONS == 3)
          double Z = z+latVel._entries[q](2);
#endif

          if (   (X < 0.0) || (X > LB_BLOCKSIZE-1.0)
              || (Y < 0.0) || (Y > LB_BLOCKSIZE-1.0)
#if (DIMENSIONS == 3)
              || (Z < 0.0) || (Z > LB_BLOCKSIZE-1.0)
#endif
          ){
            // save the incoming direction
            boundaryIndex(2*index) = LB_CURRENT_DIR-1-q + x*LB_CURRENT_DIR+y*LB_BLOCKSIZE*LB_CURRENT_DIR
#if (DIMENSIONS == 3)
                                   + z*LB_BLOCKSIZE*LB_BLOCKSIZE*LB_CURRENT_DIR
#endif
                                   ;
            // save the outgoing direction
            boundaryIndex(2*index+1) = q + x*LB_CURRENT_DIR+y*LB_BLOCKSIZE*LB_CURRENT_DIR
#if (DIMENSIONS == 3)
                                     + z*LB_BLOCKSIZE*LB_BLOCKSIZE*LB_CURRENT_DIR
#endif
                                     ;

            index++;
            assertion(index < LB_PDFS_ON_BLOCKBOUNDARY+1);
          }
        } // pdfs
      } // x
    } // y
#if (DIMENSIONS == 3)
  } // z
#endif

  assertion2(index == LB_PDFS_ON_BLOCKBOUNDARY,index,LB_PDFS_ON_BLOCKBOUNDARY);
  return boundaryIndex;
}
