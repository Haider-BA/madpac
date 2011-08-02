// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKRESTRICTIONPROLONGATION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKRESTRICTIONPROLONGATION_H_

#include "tarch/logging/Log.h"
#include <map>
#include <vector>
#include "tarch/la/Vector.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        class BlockRestrictionProlongation;

        /** forward declaration for test */
        namespace tests {
          class BlockRestrictionProlongationTest;
        }
      }
    }
  }
}



/** carries out the restriction and prolongation operations between coarse and fine
 *  grid levels in adaptive block-structured LB simulations.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::BlockRestrictionProlongation {
  public:
    BlockRestrictionProlongation();
    ~BlockRestrictionProlongation(){}

    /** for testing */
    friend class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::BlockRestrictionProlongationTest;

    /** determines and returns the local coordinate of the father vertex which is the closest to the
     *  fine vertex with sub-coordinates discretePosition. discretePosition is in the range from (0,...,3)
     *  for every coordinate, the returned local values are in the range 0,1. The closest father
     *  vertex is the vertex which is needed for restriction or prolongation between the levels.
     */
    tarch::la::Vector<DIMENSIONS,int> getFatherVertex(const tarch::la::Vector<DIMENSIONS,int>&     discretePosition) const;


    /** searches the pdf-field finePdf for fine overlap cells. Therefore, it calls the function
     *  neighbourIsTemporaryVertex() for all possible neighbour vertices.
     */
    void findFineOverlapCells(
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool> &hasMinusOneEntries
    ) const;


    /** takes the information from the pdf-field on the coarse level and distributes it in the pdf-field
     *  from the fine level. At this, all cells containing at least one pdf with value -1.0 are overwritten by
     *  coarse level values. Since the value -1.0 can only stem from streaming operations with temporary vertices,
     *  this uniquely defines the overlap domain between fine and coarse grid.
     *  The parameters handed over are:
     *  discretePosition - local position of the child vertex in the coarse grid cell (see touchVertexFirstTime()-
     *  description for this one)
     *  coarsePdf - pdf-field of the coarse vertex
     *  finePdf - pdf-field of the fine vertex
     *  density - density field on the fine level
     *  velocity - velocity field on the fine level
     *  hasMinusOneEntries - see description of findFineOverlapCells()
     */
    void prolongateToFineLevel(
      const tarch::la::Vector<DIMENSIONS,int>&     discretePosition,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& coarsePdf,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,bool>& hasMinusOneEntries
    ) const;


    /** takes the information from the pdf-field on the fine level and brings it to the
     *  coarse grid. At this, all pdfs with non-(-1.0)-entries are averaged and put to the coarse grid.
     *  For -1.0-valued pdfs on the fine grid, it holds that they stem from temporary vertices (coming from
     *  those vertices by streaming operations) and thus are already present on the coarse level. For the
     *  meaning of the parameters, see prolongateToFineLevel().
     */
    void restrictToCoarseLevel(
      const tarch::la::Vector<DIMENSIONS,int>&     discretePosition,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& coarsePdf,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf
    ) const;


  /** returns the subblock on the coarse vertex
   *  which covers the whole region of the fine vertex at discretePosition.
   *  The vector returned contains entries from 0,...,2.
   */
  tarch::la::Vector<DIMENSIONS,int> getSubBlock(
    const tarch::la::Vector<DIMENSIONS,int>& discretePosition
  ) const;


  private:

    /** creates index structure to determine certain sub-blocks on a vertex */
    tarch::la::Vector<4,int> createSubBlockVector() const;

    /** sets up the index for the neighbour block map. For a description of this map, see
     *  the corresponding member variable.
     */
    std::map<int,std::vector<tarch::la::Vector<2,int> > >
    createMinusOneEntriesFromNeighbourBlock() const;


    /** returns true if the neighbour-block (that is neighbouring vertex) is a temporary structure.
     *  For this, the map _minusOneEntriesFromNeighbourBlock is used, i.e. finePdf is searched for -1.0
     *  entries which have been streamed from a certain neighbouring vertex. If a -1.0 entry is found,
     *  true is returned.
     */
    bool neighbourIsTemporaryVertex(
      const int& neighbourBlock,
      const tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& finePdf
    ) const;

    /** this function is needed for the setup of the _createMinusOneEntriesFromNeighbourBlock-map.
     *  For given coordinates x,y,z and pdf no. pdf, it returns the position in a block-structured
     *  array using cubic block sizes with a cube side length of LB_BLOCKSIZE.
     */
    int getDomainPdf(int x, int y,
#if defined(Dim3)
      int z,
#endif
      int pdf
    ) const;

    /** contains entries to determine the sub-block from a discrete position of a fine vertex */
    const tarch::la::Vector<4,int> _subBlockVector;

    /** this vector stores all combinations (neighbour block, affected cell, affected pdf) of overlap flaggings.
     *  Example (D2Q9 model): If the upper,right corner is diagonally placed next to a (-1)-temporary
     *  vertex-block, the incoming pdf no. 0 (from temp. vertex into this block) is going to be -1.
     *  The vector at map key 8 (neighbour block in lexicographic ordering starting at 0) will thus
     *  contain one la::Vector(26,0) <-> subcell 26 has a pdf 0 of value -1.0 (because of block 8 belonging
     *  to a temporary vertex)
     */
    const std::map<int,std::vector<tarch::la::Vector<2,int> > > _minusOneEntriesFromNeighbourBlock;

    /** for logging */
    static tarch::logging::Log _log;

};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BLOCKRESTRICTIONPROLONGATION_H_
