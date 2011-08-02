// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_ADAPTERS_RegularGrid2Coarse_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_ADAPTERS_RegularGrid2Coarse_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/heatequation/timestepping/RegularGridCell.h"
#include "peano/applications/heatequation/timestepping/RegularGridSingleStepVertex.h"
#include "peano/applications/heatequation/timestepping/RegularGridState.h"

 #include "peano/applications/heatequation/timestepping/mappings/RegularGrid2ComputeHierarchicalSurplus.h"
 #include "peano/applications/heatequation/timestepping/mappings/RegularGrid2ComputeHierarchicalResidual.h"
 #include "peano/applications/heatequation/timestepping/mappings/RegularGrid2RestrictRhs.h"



namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping {
      namespace adapters {
        class RegularGrid2Coarse;
      } 
}
}
}
}


/**
 * This is a mapping from the regular grid events to your user-defined activities.
 * Please implement the operations you wish to implement.
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.10 $
 */
class peano::applications::heatequation::timestepping::adapters::RegularGrid2Coarse {
  private:
    peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalSurplus _map2ComputeHierarchicalSurplus;
    peano::applications::heatequation::timestepping::mappings::RegularGrid2ComputeHierarchicalResidual _map2ComputeHierarchicalResidual;
    peano::applications::heatequation::timestepping::mappings::RegularGrid2RestrictRhs _map2RestrictRhs;

  public:
    RegularGrid2Coarse();

    virtual ~RegularGrid2Coarse();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex
    );

    void createCell(
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
      peano::applications::heatequation::timestepping::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex const * const vertices,
      peano::applications::heatequation::timestepping::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex* const vertices,
      peano::applications::heatequation::timestepping::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );
    
        
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex, 
      const peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    

    void touchVertexLastTime(
      peano::applications::heatequation::timestepping::RegularGridSingleStepVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    
    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::heatequation::timestepping::RegularGridSingleStepVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::heatequation::timestepping::RegularGridState&  solverState
    );


    void endIteration(
      peano::applications::heatequation::timestepping::RegularGridState&  solverState
    );
};


#endif
