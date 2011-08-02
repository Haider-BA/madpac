// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_SOLVER_PETROVGALERKIN_H_
#define _PEANO_TOOLBOX_SOLVER_PETROVGALERKIN_H_

#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "tarch/la/WrappedVector.h"
#include "peano/utils/Globals.h"
#include "peano/utils/Loop.h"

#include "peano/applications/poisson/multigrid/SpacetreeGridCell.h"
#include "peano/applications/poisson/multigrid/SpacetreeGridVertex.h"
#include "peano/applications/poisson/multigrid/SpacetreeGridState.h"
#include "peano/toolbox/solver/Multigrid.h"
#include "peano/toolbox/stencil/ElementMatrix.h"

namespace peano{
  namespace toolbox{
    namespace solver{
       class PetrovGalerkin;
    }
  }
}

class peano::toolbox::solver::PetrovGalerkin{
  private:

    static tarch::logging::Log _log;

    peano::toolbox::stencil::ElementMatrix _elementMatrix;

  public:

    PetrovGalerkin();
    virtual ~PetrovGalerkin();

    /*
     * Get the prolongation weights for the active fine grid vertex from the coarse grid vertices.
     */
    tarch::la::Vector<TWO_POWER_D,double> calculateTempP(
        const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&     coarseGridVerticesP,
        const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex);

    /*
     * Calculate AP for each  vertex of a cell.
     */
    tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> calculateTempAP(
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D, double>&  verticesTempP,
      tarch::la::Matrix<TWO_POWER_D, TWO_POWER_D, double>  elementWiseAssemblyMatrix);


    /*
     * Get restriction weight for the active fine grid vertex from each coarse grid vertex
     * and distribute the RAP contributions to the respective coarse grid stencil entries.
     */
    tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double> calculateRAP(
        const tarch::la::Vector<TWO_POWER_D, double>&                      fineGridVertexTempAP,
        const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&   coarseGridVerticesR,
        const tarch::la::Vector<DIMENSIONS, int>&                          fineGridPositionOfVertex);

    /*
     * Calculate the Petrov-Galerkin coarse grid operators for the coarse vertices of one cell.
     * To be called in leaveCell(...)
     */
    /*tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double> calculatePetrovGalerkinCoarseGridOperator(
        const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&    coarseGridVerticesP,
        const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&    coarseGridVerticesR,
        const tarch::la::Vector<TWO_POWER_D_TIMES_DIMENSIONS,int>&          fineGridVerticesPositions,
        tarch::la::Matrix<TWO_POWER_D, TWO_POWER_D, double>                 elementWiseAssemblyMatrix
    );*/

};

#endif /* PETROVGALERKIN_H_ */
