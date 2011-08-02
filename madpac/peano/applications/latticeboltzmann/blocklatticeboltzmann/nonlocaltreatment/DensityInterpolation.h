// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYINTERPOLATION_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYINTERPOLATION_H_

#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/AABlockStreaming.h"
#include <bitset>
#include <vector>
#include "tarch/la/Vector.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace nonlocaltreatment {
          class DensityInterpolation;

        }
        namespace tests {
          class DensityInterpolationTest;
        }
      }
    }
  }
}



/** interpolates density values in outer cells which are neighboured to inner cells. For blocksizes bigger or
 *  equal 6, the interpolation is done by averaging the density values of the NEXT timestep in the neighbouring
 *  cells which are inner (no outer) cells. For smaller blocksizes, the interpolation is done via
 *  taking the current density values; by this, the interpolated density value in the next timestep
 *  corresponds to the correct value of this timestep (thus, the real order of approximation is quite bad;
 *  however, this is implemented this way in order to save another grid iteration!).
 *
 * @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::DensityInterpolation {
  public:
    DensityInterpolation(bool dynamicGeometry);
    ~DensityInterpolation(){}

    /** friend declaration for testing */
    friend class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest;

    /** loops over the domain related to the specific enterCell()-callback and determines if a cell inside this domain
     *  needs to obtain interpolated density values. This is the case, if the cell is placed outside the computational
     *  domain, but near the boundary. If a respective cell is found, interpolateDensityValueForSingleCell() is called.
     */
    void interpolateDensity(
      const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
      const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &boundary,
      const tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > &pdf,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > &density,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>* > &velocity
    ) const;

    /** does the local interpolation of the density for all cells which are at least two cell layers away from the block
     *  boundary. This method need to be called after collision, local boundary treatment and local streaming.
     */
    void interpolateDensityLocal(
      const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
      const std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &boundary,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> &pdf,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity
    ) const;

  private:
    const std::vector< tarch::la::Vector<5,int> > createIndexForNonLocalStreaming() const {
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::AABlockStreaming streaming;
      return streaming.createIndexForNonLocalStreaming();
    }

    void interpolateDensityValueForSingleCell(
      const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
      const int& vertexNumber,
      const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
      const int& cellNumber,
      const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
      const tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > &pdf,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > &density
    ) const;

    void getPdfIndex(
      const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,const int& vertex,
      const tarch::la::Vector<DIMENSIONS,int> &cellCoords,const int&cell,
      const int& pdf,const tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
      const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
      int &newVertex, int &pdfIndex
    ) const;

    const bool _dynamicGeometry;

    /** index for non-local streaming, see AABlockStreaming for details */
    const std::vector< tarch::la::Vector<5,int> > _indexForNonLocalStreaming;

    /** for logging */
    const tarch::logging::Log _log;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYINTERPOLATION_H_
