// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPING_ADAPTERS_RegularGrid2ApplyRefineDeleteCriterion_H_
#define PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPING_ADAPTERS_RegularGrid2ApplyRefineDeleteCriterion_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/diffusionequation/explicittimestepping/RegularGridCell.h"
#include "peano/applications/diffusionequation/explicittimestepping/RegularGridVertex.h"
#include "peano/applications/diffusionequation/explicittimestepping/RegularGridState.h"

 #include "peano/applications/diffusionequation/explicittimestepping/mappings/RegularGrid2ApplyRefineDeleteCriterion.h"



namespace peano { 
  namespace applications { 
    namespace diffusionequation { 
      namespace explicittimestepping {
      namespace adapters {
        class RegularGrid2ApplyRefineDeleteCriterion;
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
class peano::applications::diffusionequation::explicittimestepping::adapters::RegularGrid2ApplyRefineDeleteCriterion {
  private:
    peano::applications::diffusionequation::explicittimestepping::mappings::RegularGrid2ApplyRefineDeleteCriterion _map2ApplyRefineDeleteCriterion;

  public:
    RegularGrid2ApplyRefineDeleteCriterion();

    virtual ~RegularGrid2ApplyRefineDeleteCriterion();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex
    );

    void createCell(
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
      peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex const * const vertices,
      peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex* const vertices,
      peano::applications::diffusionequation::explicittimestepping::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );
    
        
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex, 
      const peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    

    void touchVertexLastTime(
      peano::applications::diffusionequation::explicittimestepping::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    
    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::diffusionequation::explicittimestepping::RegularGridVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
    );


    void endIteration(
      peano::applications::diffusionequation::explicittimestepping::RegularGridState&  solverState
    );
};


#endif
