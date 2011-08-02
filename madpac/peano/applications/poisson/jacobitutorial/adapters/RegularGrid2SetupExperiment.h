// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_ADAPTERS_RegularGrid2SetupExperiment_H_
#define PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_ADAPTERS_RegularGrid2SetupExperiment_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/poisson/jacobitutorial/RegularGridCell.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridVertex.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridState.h"

 #include "peano/applications/poisson/jacobitutorial/mappings/RegularGrid2SetupExperiment.h"



namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace jacobitutorial {
      namespace adapters {
        class RegularGrid2SetupExperiment;
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
class peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperiment {
  private:
    peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment _map2SetupExperiment;

  public:
    RegularGrid2SetupExperiment();

    virtual ~RegularGrid2SetupExperiment();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex
    );

    void createCell(
      peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
      peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::applications::poisson::jacobitutorial::RegularGridVertex const * const vertices,
      peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::applications::poisson::jacobitutorial::RegularGridVertex* const vertices,
      peano::applications::poisson::jacobitutorial::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );
    
        
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex, 
      const peano::applications::poisson::jacobitutorial::RegularGridVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    

    void touchVertexLastTime(
      peano::applications::poisson::jacobitutorial::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    
    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::poisson::jacobitutorial::RegularGridVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
    );


    void endIteration(
      peano::applications::poisson::jacobitutorial::RegularGridState&  solverState
    );
};


#endif
