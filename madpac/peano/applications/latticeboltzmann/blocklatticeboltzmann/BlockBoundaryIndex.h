// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKBOUNDARYINDEX_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKBOUNDARYINDEX_H_

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include <map>
#include <vector>

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        class BlockBoundaryIndex;
      }
    }
  }
}


/** is used to access the right indices of the density values on the boundary cells of
 *  each vertex block. For FSI problems, the density needs to be interpolated in newly
 *  created fluid cells. For this purpose and optimal parallelisation support, the density
 *  data needed to be split into the inner density values and the density values placed
 *  on the boundary of each vertex block. This class helps to access the data on the boundary
 *  using the global block index.
 *
 *  @author Philipp Neumann.
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockBoundaryIndex {
  public:
    BlockBoundaryIndex();
    ~BlockBoundaryIndex(){}

    /** returns the index on the boundary for the index blockindex describing the position of
     *  a cell inside a vertex block. This function is slower than its inverse (as this one uses a
     *  map instead of a vector with direct indexing!).
     */
    int getBoundaryIndex(const int& blockIndex) const;

    /** returns the block index to the related boundary index. If possible, this function should
     *  be used inside the algorithms instead of its inverse getBoundaryIndex, since it directly looks
     *  up the respective index in a vector.
     */
    int getBlockIndex(const int& boundaryIndex) const;

  private:
    const std::map<int,int> createBlockIndex2BoundaryIndexMap() const;
    const std::vector<int> createBoundaryIndex2BlockIndexVector() const;


    const std::map<int,int> _blockIndex2BoundaryIndexMap;
    const std::vector<int> _boundaryIndex2BlockIndexVector;
};

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        static const peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockBoundaryIndex BLOCKBOUNDARYINDEX;
      }
    }
  }
}
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKBOUNDARYINDEX_H_
