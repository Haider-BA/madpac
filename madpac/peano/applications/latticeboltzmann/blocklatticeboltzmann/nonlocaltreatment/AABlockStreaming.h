// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_AABLOCKSTREAMING_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_AABLOCKSTREAMING_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include <bitset>
#include "tarch/la/Vector.h"
#include <vector>
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/CellTopology.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/Swapping.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/NoAAStreaming.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/AAStreaming.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace nonlocaltreatment {
          class AABlockStreaming;
        }
      }
    }
  }
}


/** implements the streaming of particle populations to neighbouring LB cells.
 *  The algorithm is based on the AA-storage pattern and is divided in three steps:
 *  1. Streaming locally on each vertex. At this, all pdfs between cells of a single
 *  block are exchanged.
 *  2. Streaming between neighboured vertices. All pdfs, that need to be streamed from
 *  one block to another, i.e. copied from one vertex to another one, are exchanged in this
 *  step.
 *  3. Swap pdfs locally in every cell. In steps 1 and 2, the pdfs between cells were exchanged
 *  and placed on the position of the pdf which belongs to the inverse direction. Thus, the pdfs
 *  have to be switched inside each cell.
 *
 *
 *  Example/ Explanation for AA-pattern:
 *  Take a D2Q9 pattern (in lexicographic ordering, i.e. lattice velocity c_0=(-1,-1),
 *  c_8=(1,1) ). When pdf f_0 of cell 1 needs to be streamed to a neighbouring cell 2,
 *  this automatically implies that also f_8 of cell 2 has to be streamed to cell 1. Thus, one can
 *  do the streaming by switching the pdfs f_0 of cell 1 and f_8 of cell 2. Doing this in the manner
 *  described above (first, switch all pdfs that are placed in the same block, i.e. the same vertex;
 *  second, stream and switch pdfs between neighboured blocks), one can do the whole streaming with
 *  only one pdf field and only one buffer variable for swapping the single pdfs.
 *  However, after doing the swapping, the pdfs are placed on the positions belonging to their inverse
 *  lattice velocities. Thus, step 3 swaps the pdfs locally inside each subcell and puts them onto their
 *  right position again.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::AABlockStreaming {
  public:
	  AABlockStreaming();
	  ~AABlockStreaming(){}

	  /** carries out streaming for all pdfs which are streamed locally on each vertex.
	   *  This function implements step 1 of the upper description. The parameters are:
	   *  inner - defines, if a cell of the block is an inner or outer cell
	   *  pdf - pdf field of this block
	   */
	  void streamingLocal(
	    const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
	    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
	  ) const;


	  /** performs streaming between different vertices. The blocks of all TWO_POWER_D vertices
	   *  are handed over as a big vector (which might be done in the handleElement()-call). Now,
	   *  all pdfs, that have to cross the border of their block are streamed to the neighbouring block
	   *  that is available at the moment. This is the implementation of step 2.
	   *  The parameters are:
	   *  inner - 2^d boolean fields containing the information whether a cell in block i is inner/ outer
	   *  (i is in {0,...,2^d-1})
	   *  pdf - the pdf fields of all 2^d vertices that are touched when entering a single Peano element
	   */
	  void streamingNonLocal(
	    const tarch::la::Vector< TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
	    tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* >& pdf
	  ) const;


	  // TEST REFERENCE
//	   void streamingNonLocal(
//	      const tarch::la::Vector< TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
//	      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* >& pdf
//	    ) const;


	  /** swaps the pdfs inside all cells (also outer cells!). This function implements step 3. */
	  void swapPdfsInsideCells(
	    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& pdf
	  ) const;

	  /** sets up the index structure for the local streaming (step 1) */
	  std::vector< tarch::la::Vector<4,int> > createIndexForLocalStreaming() const;

	  /** sets up the index structure for the non-local streaming (step 2). More details on that
	   *  can be found in the documentation of the CellTopology-class.
	   */
	  std::vector< tarch::la::Vector<5,int> > createIndexForNonLocalStreaming() const;


  private:
    const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping* >
    createSwappings() const;

	  /** index describing the local streaming procedure. It holds all pairs of indices describing
	   *  the position of two pdfs inside a block that are switched during the local streaming and
	   *  the indices of their subcells.
	   *
	   *  Example: (8,0,0,4) <-> exchange pdf 8 and pdf 0 which belong to cells 0 and 4 (ordering:
	   *  (pdf1,pdf2,cell1,cell2)
	   */
	  const std::vector< tarch::la::Vector<4,int> > _indexForLocalStreaming;


	  /** index looking up where to stream a certain distribution function between neighboured
	   *  vertices. It contains as entries (in the same order as described here):
	   *  - index of the original vertex (1,...2^D)
	   *  - index of vertex where the pdf is streamed to
	   *  - index of the local cell index of at original vertex
	   *  - index of the cell index at vertex where odf is streamed to
	   *  - index of the original pdf
	   */
	  const std::vector< tarch::la::Vector<5,int> > _indexForNonLocalStreaming;

	  /** swapping operations */
	  const peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::AAStreaming _aaStreaming;
	  const peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::NoAAStreaming _noAAStreaming;
	  const std::vector<const peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::Swapping* > _swappings;

	  /** for logging */
	  static tarch::logging::Log _log;
};

#endif //_LATTICEBOLTZMANN_BLOCKSTRUCTURE_AABLOCKSTREAMING_H_
