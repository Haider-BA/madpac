// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_SOLVER_H_
#define _PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_SOLVER_H_


#include "peano/applications/heatequation/Solver.h"
#include "peano/applications/heatequation/timestepping/SpacetreeGridSingleStepVertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/toolbox/solver/Multigrid.h"


namespace peano {
  namespace applications {
    namespace heatequation {
      namespace timestepping {
        class Solver;
      }
    }
  }
}


class peano::applications::heatequation::timestepping::Solver: public peano::applications::heatequation::Solver {
  private:
    static tarch::logging::Log _log;

    peano::toolbox::solver::Multigrid                       _multigrid;
    tarch::la::Vector<FIVE_POWER_D,double>                  _dLinearInterpolation;
  public:
    Solver();

    void computeResidualOnCell(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                                         fineGridVerticesEnumerator
    );

    void interpolateWithDLinearShapeFunctions(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
    );

    void computeHierarchicalSurplus(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
    );

    void makeNewTemperatureOldTemperatureDueToTimeTransition(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&  fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                                      h
    );

};

#endif
