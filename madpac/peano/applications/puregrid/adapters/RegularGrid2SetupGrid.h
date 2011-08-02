// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PUREGRID_ADAPTERS_RegularGrid2SetupGrid_H_
#define PEANO_APPLICATIONS_PUREGRID_ADAPTERS_RegularGrid2SetupGrid_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "tarch/la/VectorCompare.h"
#include "tarch/multicore/BooleanSemaphore.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "tarch/plotter/griddata/unstructured/vtk/VTKTextFileWriter.h"

#include "peano/applications/puregrid/RegularGridCell.h"
#include "peano/applications/puregrid/RegularGridVertex.h"
#include "peano/applications/puregrid/RegularGridState.h"

 #include "peano/applications/puregrid/mappings/RegularGrid2SetupGrid.h"


#include <map>


namespace peano { 
  namespace applications { 
    namespace puregrid {
      namespace adapters {
        class RegularGrid2SetupGrid;
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
class peano::applications::puregrid::adapters::RegularGrid2SetupGrid {
  private:
    peano::applications::puregrid::mappings::RegularGrid2SetupGrid _map2SetupGrid;


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
    RegularGrid2SetupGrid();

    virtual ~RegularGrid2SetupGrid();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::puregrid::RegularGridVertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::puregrid::RegularGridVertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::puregrid::RegularGridVertex&  vertex
    );

    void createCell(
      peano::applications::puregrid::RegularGridVertex const * const vertices,
      peano::applications::puregrid::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::applications::puregrid::RegularGridVertex const * const vertices,
      peano::applications::puregrid::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::applications::puregrid::RegularGridVertex* const vertices,
      peano::applications::puregrid::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );
    
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::puregrid::RegularGridVertex& vertex, 
      const peano::applications::puregrid::RegularGridVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::puregrid::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );


    void touchVertexLastTime(
      peano::applications::puregrid::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );

    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::puregrid::RegularGridVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::puregrid::RegularGridState&  solverState
    );


    void endIteration(
      peano::applications::puregrid::RegularGridState&  solverState
    );
};


#endif
