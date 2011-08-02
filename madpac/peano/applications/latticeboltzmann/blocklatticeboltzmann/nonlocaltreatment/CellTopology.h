// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_BLOCKSTRUCTURE_CELLTOPOLOGY_H_
#define _LATTICEBOLTZMANN_BLOCKSTRUCTURE_CELLTOPOLOGY_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include <vector>

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace nonlocaltreatment {
          class CellTopology;
        }
      }
    }
  }
}



/** describes the grid pattern arising between 2^d neighbouring vertices when for example
 *  entering a handleElement()-call. Each vertex represents a LB block structure. Since the streaming
 *  of pdfs has to be handled cell-wise in Peano (I refer to the non-local streaming between different
 *  blocks!), one has to somehow determine which pdf goes where between the vertices. This holds for all
 *  pdfs which cannot be streamed locally on one single vertex, but which go to a block belonging to
 *  another vertex of the Peano grid.
 *
 *  Therefore, this class is used. It creates a grid describing a block-structured grid consisting
 *  of 2^d neighbouring blocks. This grid is also referred to as vertex-grid since the blocks
 *  are part of the LB blocks that are each stored on one vertex.
 *  These blocks only contain LB cells which lie inside the traversed Peano
 *  element or on its boundaries (or one layer around this element). From this, an index structure
 *  for the non-local streaming (see AABlockStreaming) can be obtained.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::CellTopology {
  public:
	  CellTopology();
	  ~CellTopology(){}

	  /** returns an index structure for non-local (i.e. not local on vertex, but elementwise in the
	   *  peano sense) streaming. The dynamic vector contains vectors of length 5 with
	   *  vertex1,vertex2,cellOnVertex1,cellOnVertex2,pdf entries.
	   *  Example: (0,1,5,6,8) = Pdf. no. 8 is streamed from cell 5 on vertex 0 to cell 6 on vertex 1.
	   */
	  std::vector<tarch::la::Vector<5,int> > getNonLocalStreamingIndex() const;

    /** returns the number of the underlying vertex of a subcell at position (x,y,z). The latter
     *  coordinates refer to the global numbering over the whole element that is a Peano grid cell.
     */
    int getVertexNumber(
      int x, int y
#if (DIMENSIONS == 3)
      , int z
#endif
    ) const;


    /** returns the local cell number of the corresponding cell on the vertex-Grid
     *  The coordinates handed over are of same type as in getVertexNumber(x,y,z).
     */
    int getLocalCellNumber(
      int x,int y
#if (DIMENSIONS == 3)
      ,int z
#endif
    ) const;

    /** returns the number at vertex vertexNumber and cell localCellNumber in the vertex-grid
     *
     */
    int getVertexGrid(int vertexNumber,int localCellNumber) const;

  private:

	  /** implementation for an odd blocksize which is called in findCellsOfNeighbouredVertices */
	  void findCellsOfNeighbouredVertices4OddBlockSize(int vertex1, int vertex2,
	    std::vector< tarch::la::Vector<3,int> > &vec) const;

	  /** implementation for an even blocksize which is called in findCellsOfNeighbouredVertices */
	  void findCellsOfNeighbouredVertices4EvenBlockSize(int vertex1, int vertex2,
	    std::vector< tarch::la::Vector<3,int> > &vec) const;


	  /** determines the cells in which pdfs between vertices vertex1 and vertex2 are streamed and
	   *  stores the indices of the two corresponding cells (incl. the respective pdf-number) in the vector
	   *  vec. Example: (5,6,8) means: pdf no. 8 is streamed from cell 5 of vertex1 to cell 6 of vertex2.
	   *  The numbers vertex1 and vertex2 correspond to the local vertex numbering when a Peano element
	   *  is visited (i.e. vertex1,vertex2 are in {0,...,2^d-1}
	   */
	  void findCellsOfNeighbouredVertices(int vertex1, int vertex2,
	    std::vector< tarch::la::Vector<3,int> > &vec) const;

	  /** sets up the vertex grid */
	  tarch::la::Vector<TWO_POWER_D,tarch::la::Vector<LB_NUMBER_OF_CELLS_IN_CELLSUBBLOCK,int> >
	    createVertexGrid();

	  /** the vertex grid */
    const tarch::la::Vector<TWO_POWER_D,tarch::la::Vector<LB_NUMBER_OF_CELLS_IN_CELLSUBBLOCK,int> > _vertexGrid;

    /** for logging */
    //static tarch::logging::Log _log;
};
#endif // _LATTICEBOLTZMANN_BLOCKSTRUCTURE_CELLTOPOLOGY_H_
