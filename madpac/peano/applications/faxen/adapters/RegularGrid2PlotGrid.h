// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_FAXEN_ADAPTERS_RegularGrid2PlotGrid_H_
#define PEANO_APPLICATIONS_FAXEN_ADAPTERS_RegularGrid2PlotGrid_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "tarch/la/VectorCompare.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "tarch/plotter/griddata/unstructured/vtk/VTKTextFileWriter.h"

#include "peano/applications/faxen/RegularGridCell.h"
#include "peano/applications/faxen/RegularGridVertex.h"
#include "peano/applications/faxen/RegularGridState.h"



#include <map>
#ifdef SharedTBB
#include <tbb/spin_mutex.h>
#endif


namespace peano { 
  namespace applications { 
    namespace faxen {
      namespace adapters {
        class RegularGrid2PlotGrid;
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
class peano::applications::faxen::adapters::RegularGrid2PlotGrid {
  private:


    /**
     * One big map mapping vertices to indices. The procedure using this map is 
     * straightforward. Whenever we encounter a vertex, the object does a 
     * lookup whether this vertex already has been plotted. If not, it plots it 
     * and adds an entry.
     * 
     * @see plotVertex(const tarch::la::Vector<DIMENSIONS,double>&  x)
     */
    std::map<tarch::la::Vector<DIMENSIONS,double> , int, tarch::la::VectorCompare<DIMENSIONS> >  _vertex2IndexMap;
    
    #ifdef SharedTBB
    typedef tbb::spin_mutex Vertex2IndexMapSemaphore;
    Vertex2IndexMapSemaphore _vertex2IndexMapSemaphore;
    #endif
    
    tarch::plotter::griddata::unstructured::vtk::VTKTextFileWriter                  _vtkWriter;
    tarch::plotter::griddata::unstructured::UnstructuredGridWriter::VertexWriter*   _vertexWriter;
    tarch::plotter::griddata::unstructured::UnstructuredGridWriter::CellWriter*     _cellWriter;
    tarch::plotter::griddata::Writer::VertexDataWriter*                             _vertexTypeWriter;
    
    static int _snapshotCounter;

    /**
     * Logging device.
     */    
    static tarch::logging::Log    _log;
  public:
    RegularGrid2PlotGrid();

    virtual ~RegularGrid2PlotGrid();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::faxen::RegularGridVertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::faxen::RegularGridVertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::faxen::RegularGridVertex&  vertex
    );

    void createCell(
      peano::applications::faxen::RegularGridVertex const * const vertices,
      peano::applications::faxen::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::applications::faxen::RegularGridVertex const * const vertices,
      peano::applications::faxen::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::applications::faxen::RegularGridVertex* const vertices,
      peano::applications::faxen::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );
    
    #ifdef Parallel
    void mergeWithNeighbour(
      peano::applications::faxen::RegularGridVertex& vertex, 
      const peano::applications::faxen::RegularGridVertex& neighbour, 
      int fromRank);
    #endif 

    void touchVertexFirstTime(
      peano::applications::faxen::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );


    void touchVertexLastTime(
      peano::applications::faxen::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );

    #ifdef Parallel
    void prepareSendToNeighbour(peano::applications::faxen::RegularGridVertex& vertex);
    #endif

    void beginIteration(
      peano::applications::faxen::RegularGridState&  solverState
    );


    void endIteration(
      peano::applications::faxen::RegularGridState&  solverState
    );
};


#endif
