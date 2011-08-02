// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DYNAMICGEOMETRYREFINEMENT_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DYNAMICGEOMETRYREFINEMENT_H_


#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/RefinementService.h"

#include "peano/geometry/services/GeometryService.h"



namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        class DynamicGeometryRefinement;
      }
    }
  }
}



/** triggers the dynamic mesh refinement and handles the mapping of missing particle distribution functions,
 *  density and velocity values between different grid levels.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement {
  public:
    enum RefinementAction{NoAction=0,Refine=1,Delete=2};

    DynamicGeometryRefinement(
      peano::applications::latticeboltzmann::MultiLevelSimData &multiLevelSimData
    );

    ~DynamicGeometryRefinement(){}


    peano::applications::latticeboltzmann::blocklatticeboltzmann::DynamicGeometryRefinement::RefinementAction
    getAction(
      const tarch::la::Vector<DIMENSIONS,double> &x,
      const tarch::la::Vector<DIMENSIONS,double> &h,
      const bool& isRefined,
      const int& maximumSubtreeHeight,
      const int& level
    ) const;


    /** returns true, if the vertex at position x at meshsize h shall be refined. The other parameters
     *  are:
     *
     *  - isRefined - the refined flag of the vertex (true, if all adjacent elements are refined)
     *  - maximumSubtreeHeight - the maximum subtree height defined on each vertex
     *
     *  For details on the specific vertex parameters, see the documentation of the Grid component.
     */
    bool refine(
      const tarch::la::Vector<DIMENSIONS,double> &x,
      const tarch::la::Vector<DIMENSIONS,double> &h,
      const bool &isRefined,
      const int& maximumSubtreeHeight,
      const int& level
    ) const;


    /** returns true if the vertex at position x with meshsize h shall be coarsed. For the parameters
     *  of this function, see the description of refine().
     */
    bool coarse(
      const tarch::la::Vector<DIMENSIONS,double> &x,
      const tarch::la::Vector<DIMENSIONS,double> &h,
      const bool &isRefined,
      const int& maximumSubtreeHeight,
      const int& level
    ) const;

  private:
    /** for logging */
    static tarch::logging::Log _log;

    peano::applications::latticeboltzmann::MultiLevelSimData &_multiLevelSimData;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_DYNAMICGEOMETRYREFINEMENT_H_
