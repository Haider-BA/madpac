// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_PARALLEL_BLOCKBOUNDARYINDEX4PDFS_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_PARALLEL_BLOCKBOUNDARYINDEX4PDFS_H_

#include "peano/utils/Dimensions.h"
#include "tarch/Assertions.h"
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace parallel {
          class BlockBoundaryIndex4Pdfs;
        }
      }
    }
  }
}


/** needed for parallel computations. In the parallel case, pdfs that are streamed between the vertex blocks
 *  need to be merged. This class provides the methods getIncomingPdf(i) and getOutgoingPdf(i) in order
 *  to obtain the (block-structure related) index for the pdf-diff values that need to be merged. These values
 *  are stored in an array of length LB_PDFS_ON_BLOCKBOUNDARY. Thus, the two methods are there to transfer
 *  the array index to the block index representation.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::parallel::BlockBoundaryIndex4Pdfs {
  public:
    BlockBoundaryIndex4Pdfs();
    ~BlockBoundaryIndex4Pdfs(){}

    int getIncomingPdf(int index) const;
    int getOutgoingPdf(int index) const;

  private:
    const tarch::la::Vector<2*LB_PDFS_ON_BLOCKBOUNDARY,int>
    initBoundaryIndex() const;

    /** holds the indices of all pdfs coming in or going out of the block. These are stored pairwise, i.e.
     *  pdf(2*i) <-> pdf coming into the block, pdf(2*i+1) <-> pdf leaving the block.
     */
    const tarch::la::Vector<2*LB_PDFS_ON_BLOCKBOUNDARY,int> _boundaryIndex;

    static tarch::logging::Log _log;
};

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace parallel {
          static const BlockBoundaryIndex4Pdfs BLOCKBOUNDARYINDEX4PDFS;
        }
      }
    }
  }
}
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_PARALLEL_BLOCKBOUNDARYINDEX4PDFS_H_
