// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_ADAPTERS_RegularGrid2RegularBlockSolverAndVTKOutputAdapter_H_
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_ADAPTERS_RegularGrid2RegularBlockSolverAndVTKOutputAdapter_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockCell.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockVertex.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/RegularGridBlockState.h"

 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/RegularGrid2BlockVTKOutput.h"
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/RegularGrid2RegularBlockSolver.h"
 #include "peano/applications/latticeboltzmann/blocklatticeboltzmann/mappings/RegularGrid2BlockCCAOutput.h"



namespace peano { 
  namespace applications { 
    namespace latticeboltzmann { 
      namespace blocklatticeboltzmann {
      namespace adapters {
        class RegularGrid2RegularBlockSolverAndVTKOutputAdapter;
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
class peano::applications::latticeboltzmann::blocklatticeboltzmann::adapters::RegularGrid2RegularBlockSolverAndVTKOutputAdapter {
  private:
    peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockVTKOutput _map2BlockVTKOutput;
    peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2RegularBlockSolver _map2RegularBlockSolver;
    peano::applications::latticeboltzmann::blocklatticeboltzmann::mappings::RegularGrid2BlockCCAOutput _map2BlockCCAOutput;

  public:
    RegularGrid2RegularBlockSolverAndVTKOutputAdapter();

    virtual ~RegularGrid2RegularBlockSolverAndVTKOutputAdapter();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex
    );

    void createCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex const * const vertices,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex* const vertices,
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );
    
        
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex, 
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    

    void touchVertexLastTime(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    
    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
    );


    void endIteration(
      peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockState&  solverState
    );
};


#endif
