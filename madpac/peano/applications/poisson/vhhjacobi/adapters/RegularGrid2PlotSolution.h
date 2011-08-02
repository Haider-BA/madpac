// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_VHHJACOBI_ADAPTERS_RegularGrid2PlotSolution_H_
#define PEANO_APPLICATIONS_POISSON_VHHJACOBI_ADAPTERS_RegularGrid2PlotSolution_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/poisson/vhhjacobi/RegularGridCell.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridVertex.h"
#include "peano/applications/poisson/vhhjacobi/RegularGridState.h"

 #include "peano/applications/poisson/vhhjacobi/mappings/RegularGrid2PlotSolution.h"



namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace vhhjacobi {
      namespace adapters {
        class RegularGrid2PlotSolution;
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
class peano::applications::poisson::vhhjacobi::adapters::RegularGrid2PlotSolution {
  private:
    peano::applications::poisson::vhhjacobi::mappings::RegularGrid2PlotSolution _map2PlotSolution;

  public:
    RegularGrid2PlotSolution();

    virtual ~RegularGrid2PlotSolution();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex
    );

    void createCell(
      peano::applications::poisson::vhhjacobi::RegularGridVertex const * const vertices,
      peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::applications::poisson::vhhjacobi::RegularGridVertex const * const vertices,
      peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::applications::poisson::vhhjacobi::RegularGridVertex* const vertices,
      peano::applications::poisson::vhhjacobi::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );
    
        
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::poisson::vhhjacobi::RegularGridVertex& vertex, 
      const peano::applications::poisson::vhhjacobi::RegularGridVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    

    void touchVertexLastTime(
      peano::applications::poisson::vhhjacobi::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );
    
    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::poisson::vhhjacobi::RegularGridVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::poisson::vhhjacobi::RegularGridState&  solverState
    );


    void endIteration(
      peano::applications::poisson::vhhjacobi::RegularGridState&  solverState
    );
};


#endif
