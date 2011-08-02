// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKDEFINITIONS_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKDEFINITIONS_H_
#include "peano/utils/Dimensions.h"
#include "peano/utils/Globals.h"
#include "tarch/la/Vector.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {

        // specific defines for the block-structured LB method. For the definition of LB_BLOCKSIZE,
        // see peano/applications/latticeboltzmann/UserInput.h

        #if (DIMENSIONS == 2)
          // number of LB cells which are stored on every vertex
          #define LB_BLOCK_NUMBER_OF_CELLS (LB_BLOCKSIZE*LB_BLOCKSIZE)
          // number of inner cells per block. In fact, this value corresponds to all inner cells which
          // are at least two cells away from the boundary. This is needed for density interpolation in
          // dynamically-changing-geometry scenarios (-> FSI etc.).
          #if (LB_BLOCKSIZE < 5)
          #define LB_BLOCK_NUMBER_OF_INNER_CELLS 0
          #else
          #define LB_BLOCK_NUMBER_OF_INNER_CELLS ((LB_BLOCKSIZE-4)*(LB_BLOCKSIZE-4))
          // this one is needed for DastGen
          #define LB_BLOCK_INNER_CELLS_EXIST
          #endif
          // number of LB cells in each subblock which is regarded during the non-local streaming
          // (that is during streaming pdfs from one vertex to another)
          #define LB_NUMBER_OF_CELLS_IN_CELLSUBBLOCK (((LB_BLOCKSIZE)/2 +1)*((LB_BLOCKSIZE)/2 +1))

        #elif (DIMENSIONS == 3)
          #define LB_BLOCK_NUMBER_OF_CELLS (LB_BLOCKSIZE*LB_BLOCKSIZE*LB_BLOCKSIZE)
          #if (LB_BLOCKSIZE < 5)
          #define LB_BLOCK_NUMBER_OF_INNER_CELLS 0
          #else
          #define LB_BLOCK_NUMBER_OF_INNER_CELLS ((LB_BLOCKSIZE-4)*(LB_BLOCKSIZE-4)*(LB_BLOCKSIZE-4))
          // this one is needed for DastGen
          #define LB_BLOCK_INNER_CELLS_EXIST
          #endif
          #define LB_NUMBER_OF_CELLS_IN_CELLSUBBLOCK (((LB_BLOCKSIZE)/2 +1)*((LB_BLOCKSIZE)/2 +1)*((LB_BLOCKSIZE)/2 +1))
        #else
          #error "Only 2D/3D supported!"
        #endif

        // number of pdfs which are stored on a vertex
        #define LB_CURRENT_DIR_BY_BLOCKSIZE (LB_CURRENT_DIR*LB_BLOCK_NUMBER_OF_CELLS)
        // needed for velocity data structure of the vertices
        #define LB_DIMENSIONS_BY_BLOCKSIZE (DIMENSIONS*LB_BLOCK_NUMBER_OF_CELLS)
        // number of cells on block boundary
        #if (LB_BLOCKSIZE < 5)
        #define LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY LB_BLOCK_NUMBER_OF_CELLS
        #else
        #define LB_BLOCK_NUMBER_OF_CELLS_ON_BLOCKBOUNDARY (LB_BLOCK_NUMBER_OF_CELLS - LB_BLOCK_NUMBER_OF_INNER_CELLS)
        #endif

        #if (LB_CURRENT_MODEL==LB_D2Q9)
        #define LB_PDFS_ON_BLOCKBOUNDARY (4*(LB_BLOCKSIZE-2)*3 + 4*5)
        #elif (LB_CURRENT_MODEL==LB_D3Q15)
        #define LB_PDFS_ON_BLOCKBOUNDARY (6*(LB_BLOCKSIZE-2)*(LB_BLOCKSIZE-2)*5+12*(LB_BLOCKSIZE-2)*8 + 8*10)
        #elif (LB_CURRENT_MODEL==LB_D3Q19)
        #define LB_PDFS_ON_BLOCKBOUNDARY (6*(LB_BLOCKSIZE-2)*(LB_BLOCKSIZE-2)*5+12*(LB_BLOCKSIZE-2)*9 + 8*12)
        #elif (LB_CURRENT_MODEL==LB_D3Q27)
        #define LB_PDFS_ON_BLOCKBOUNDARY (6*(LB_BLOCKSIZE-2)*(LB_BLOCKSIZE-2)*9+12*(LB_BLOCKSIZE-2)*15+ 8*19)
        #else
        #error "Currently only D2Q9/D3Q15/D3Q19/D3Q27 supported in parallel mode!"
        #endif


        // for regular LB Block-simulations; define -1 entries (i.e. overlap regions) to never appear
        static const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> _hasMinusOneEntries(false);
      }
    }
  }
}
#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_BLOCKDEFINITIONS_H_
