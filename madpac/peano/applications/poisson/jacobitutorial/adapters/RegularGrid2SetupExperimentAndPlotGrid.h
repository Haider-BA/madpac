// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_ADAPTERS_RegularGrid2SetupExperimentAndPlotGrid_H_
#define PEANO_APPLICATIONS_POISSON_JACOBITUTORIAL_ADAPTERS_RegularGrid2SetupExperimentAndPlotGrid_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "tarch/la/VectorCompare.h"
#include "tarch/multicore/BooleanSemaphore.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "tarch/plotter/griddata/unstructured/vtk/VTKTextFileWriter.h"

#include "peano/applications/poisson/jacobitutorial/RegularGridCell.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridVertex.h"
#include "peano/applications/poisson/jacobitutorial/RegularGridState.h"

 #include "peano/applications/poisson/jacobitutorial/mappings/RegularGrid2SetupExperiment.h"


#include <map>


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace jacobitutorial {
      namespace adapters {
        class RegularGrid2SetupExperimentAndPlotGrid;
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
class peano::applications::poisson::jacobitutorial::adapters::RegularGrid2SetupExperimentAndPlotGrid {
  private:
    peano::applications::poisson::jacobitutorial::mappings::RegularGrid2SetupExperiment _map2SetupExperiment;


    /**
     * One big map mapping vertices to indices. The procedure using this map is 
     * straightforward. Whenever we encounter a vertex, the object does a 
     * lookup whether this vertex already has been plotted. If not, it plots it 
     * and adds an entry.
     * 
     * @see plotVertex(const tarch::la::Vector<DIMENSIONS,double>&  x)
     */
    std::map<tarch::la::Vector<DIMENSIONS,double> , int, tarch::la::VectorCompare<DIMENSIONS> >  _vertex2IndexMap;
    
    tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter                  _vtkWriter;
    tarch::plotter::griddata::unstructured::UnstructuredGridWriter::VertexWriter*   _vertexWriter;
    tarch::plotter::griddata::unstructured::UnstructuredGridWriter::CellWriter*     _cellWriter;
    tarch::plotter::griddata::Writer::VertexDataWriter*                             _vertexTypeWriter;
    
    static int _snapshotCounter;

    /**
     * Logging device.
     */    
    static tarch::logging::Log    _log;
    
    tarch::multicore::BooleanSemaphore _vertex2IndexMapSemaphore;
    
  public:
    RegularGrid2SetupExperimentAndPlotGrid();

    virtual ~RegularGrid2SetupExperimentAndPlotGrid();
  
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
