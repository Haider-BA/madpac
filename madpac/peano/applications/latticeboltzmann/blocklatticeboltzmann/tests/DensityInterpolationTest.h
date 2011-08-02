// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYINTERPOLATIONTEST_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYINTERPOLATIONTEST_H_

#include "tarch/tests/TestCase.h"
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include "tarch/la/ScalarOperations.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/nonlocaltreatment/DensityInterpolation.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace tests {
          class DensityInterpolationTest;
        }
      }
    }
  }
}


/** tests the setters and getters for the density field on a vertex. As the field is stored in two different buffers,
 *  this test is essential for FSI scenarios.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::tests::DensityInterpolationTest:
public tarch::tests::TestCase {
  public:
    DensityInterpolationTest();
    ~DensityInterpolationTest(){}

    virtual void run();

    virtual void setUp();

  private:
    void initialiseData(
      const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
      const int& cellNumber,
      const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
      const int& vertexNumber,
      const std::vector<int> &elements,
      const int &combination,
      tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
      tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
      tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &boundary,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > &pdf,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > &density
    ) const;

    void initInnerAndBoundary(
      const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
      const int& cellNumber,
      const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
      const int& vertexNumber,
      tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
      tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &boundary
    ) const;

    void initNonLocalStreamingFinished(
      const std::vector<int> &elements,
      const int &combination,
      tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished
    ) const;

    void initPdfAndDensity(
      const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
      const int& cellNumber,
      const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
      const int& vertexNumber,
      const tarch::la::Vector<TWO_POWER_D, std::bitset<TWO_POWER_D>* > &nonLocalStreamingFinished,
      const tarch::la::Vector<TWO_POWER_D, std::bitset<LB_BLOCK_NUMBER_OF_CELLS>* > &inner,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>* > &pdf,
      tarch::la::Vector<TWO_POWER_D, tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>* > &density
    ) const;


    void determineRelevantElementCombinations(
      const tarch::la::Vector<DIMENSIONS,int> &cellCoords,
      const tarch::la::Vector<DIMENSIONS,int> &vertexCoords,
      std::vector<int> &elementCombinations
    ) const;

    const peano::applications::latticeboltzmann::blocklatticeboltzmann::nonlocaltreatment::DensityInterpolation _densityInterpolation;

    static tarch::logging::Log _log;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DENSITYINTERPOLATIONTEST_H_
