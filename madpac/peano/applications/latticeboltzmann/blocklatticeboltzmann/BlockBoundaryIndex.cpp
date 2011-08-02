#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockBoundaryIndex.h"


peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockBoundaryIndex::BlockBoundaryIndex():
_blockIndex2BoundaryIndexMap(createBlockIndex2BoundaryIndexMap()),
_boundaryIndex2BlockIndexVector(createBoundaryIndex2BlockIndexVector()){
#if ((DIMENSIONS==2) || (DIMENSIONS==3))
#else
#error "Only 2D/3D supported!"
#endif
}


const std::map<int,int> peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockBoundaryIndex::
createBlockIndex2BoundaryIndexMap() const {
  std::map<int,int> blockIndex2BoundaryIndexMap;
  int index = 0;

#if (DIMENSIONS==3)
  for (int z = 0; z < LB_BLOCKSIZE; z++){
#endif
    for (int y = 0; y < LB_BLOCKSIZE; y++){
      for (int x = 0; x < LB_BLOCKSIZE; x++){
        if (   (x<2) || (x>LB_BLOCKSIZE-3)
            || (y<2) || (y>LB_BLOCKSIZE-3)
#if (DIMENSIONS==3)
            || (z<2) || (z>LB_BLOCKSIZE-3)
#endif
        ){
          int blockIndex = x + LB_BLOCKSIZE*y
#if (DIMENSIONS==3)
                         + LB_BLOCKSIZE*LB_BLOCKSIZE*z
#endif
                         ;
          blockIndex2BoundaryIndexMap[blockIndex] = index;
          index++;
        }
      }
    }

#if (DIMENSIONS==3)
  }
#endif


  assertion(index==(LB_BLOCK_NUMBER_OF_CELLS-LB_BLOCK_NUMBER_OF_INNER_CELLS));
  return blockIndex2BoundaryIndexMap;
}


const std::vector<int> peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockBoundaryIndex::
createBoundaryIndex2BlockIndexVector() const {
  const std::map<int,int> blockIndex2BoundaryIndexMap(createBlockIndex2BoundaryIndexMap());
  std::map<int,int> boundaryIndex2BlockIndexMap;
  std::vector<int> boundaryIndex2BlockIndexVector;
  std::map<int,int>::const_iterator it;

  // create boundary2Block-map from block2Boundary-map
  for ( it=blockIndex2BoundaryIndexMap.begin() ; it != blockIndex2BoundaryIndexMap.end(); it++ ){
    int boundaryIndex = (*it).second;
    int blockIndex = (*it).first;
    boundaryIndex2BlockIndexMap[boundaryIndex] = blockIndex;
  }


  // convert map into vector
  boundaryIndex2BlockIndexVector.clear();
  for (int i = 0; i < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY; i++){
    assertion(boundaryIndex2BlockIndexMap.find(i) != boundaryIndex2BlockIndexMap.end());
    int blockIndex = boundaryIndex2BlockIndexMap.find(i)->second;
    boundaryIndex2BlockIndexVector.push_back(blockIndex);
  }

  return boundaryIndex2BlockIndexVector;
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockBoundaryIndex::getBoundaryIndex(const int& blockIndex) const {
  assertion(_blockIndex2BoundaryIndexMap.find(blockIndex) != _blockIndex2BoundaryIndexMap.end());
  return _blockIndex2BoundaryIndexMap.find(blockIndex)->second;
}


int peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockBoundaryIndex::getBlockIndex(const int& boundaryIndex) const {
  assertion(boundaryIndex > -1);
  assertion(boundaryIndex < LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY);
  return _boundaryIndex2BlockIndexVector[boundaryIndex];
}
