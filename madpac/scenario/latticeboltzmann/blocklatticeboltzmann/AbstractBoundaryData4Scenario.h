// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_ABSTRACTBOUNDARYDATA4SCENARIO_H_
#define _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_ABSTRACTBOUNDARYDATA4SCENARIO_H_

#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"
#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/applications/latticeboltzmann/BoundaryData.h"

namespace scenario {
  namespace latticeboltzmann {
    namespace blocklatticeboltzmann {
      class AbstractBoundaryData4Scenario;
    }
  }
}


/** interface for boundary treatment. At the boundaries of the comp. domain, certain values are required
 *  in order to successfully reconstruct single particle distribution functions that would have entered
 *  the domain from outside (e.g. density, velocity).
 *  This class provides a (minimal) interface for doing these actions.
 *
 *  @author Philipp Neumann
 */
class scenario::latticeboltzmann::blocklatticeboltzmann::AbstractBoundaryData4Scenario {
  public:
    AbstractBoundaryData4Scenario(){}
    virtual ~AbstractBoundaryData4Scenario(){}

    /** for a certain position @param latticeNode, a given meshsize @param latticeWidth (this width
     *  corresponds to the cell size of the small (blocked) cells) and a fixed pdf number @param pdfDirection
     *  (this values lies between 0-8 for D2Q9, 0-14 for D3Q15 and so on), the boundary data that are necessary
     *  for a reconstruction near the respective boundary are filled into @param boundaryData.
     */
    virtual void getBoundaryData(
      const tarch::la::Vector<DIMENSIONS,double> &latticeNode,
      const tarch::la::Vector<DIMENSIONS,double> &latticeWidth,
      const int& pdfDirection,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData,
      peano::applications::latticeboltzmann::BoundaryData &boundaryData
    ) = 0;


    /** advances the scenario in time. This is useful for time-dependent
     *  boundary data.
     */
    virtual void advance(double dt) = 0;
};
#endif // _SCENARIO_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_ABSTRACTBOUNDARYDATA4SCENARIO_H_
