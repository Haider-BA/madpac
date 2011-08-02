// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PIC_DEMO2_ADAPTERS_RegularGrid2SetupExperiment_H_
#define PEANO_APPLICATIONS_PIC_DEMO2_ADAPTERS_RegularGrid2SetupExperiment_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/pic/demo2/RegularGridCell.h"
#include "peano/applications/pic/demo2/RegularGridVertex.h"
#include "peano/applications/pic/demo2/RegularGridState.h"

 #include "peano/applications/pic/demo2/mappings/RegularGrid2SetupExperiment.h"



namespace peano { 
  namespace applications { 
    namespace pic { 
      namespace demo2 {
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
class peano::applications::pic::demo2::adapters::RegularGrid2SetupExperiment {
  private:
    peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment _map2SetupExperiment;

  public:
    RegularGrid2SetupExperiment();

    virtual ~RegularGrid2SetupExperiment();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::pic::demo2::RegularGridVertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::pic::demo2::RegularGridVertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::pic::demo2::RegularGridVertex&  vertex
    );

    void createCell(
      peano::applications::pic::demo2::RegularGridVertex const * const vertices,
      peano::applications::pic::demo2::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::applications::pic::demo2::RegularGridVertex const * const vertices,
      peano::applications::pic::demo2::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::applications::pic::demo2::RegularGridVertex* const vertices,
      peano::applications::pic::demo2::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );
    
        
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::pic::demo2::RegularGridVertex& vertex, 
      const peano::applications::pic::demo2::RegularGridVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::pic::demo2::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    

    void touchVertexLastTime(
      peano::applications::pic::demo2::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    
    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::pic::demo2::RegularGridVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::pic::demo2::RegularGridState&  solverState
    );


    void endIteration(
      peano::applications::pic::demo2::RegularGridState&  solverState
    );
};


#endif
