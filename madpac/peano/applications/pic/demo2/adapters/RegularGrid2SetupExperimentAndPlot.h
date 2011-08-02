// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_PIC_DEMO2_ADAPTERS_RegularGrid2SetupExperimentAndPlot_H_
#define PEANO_APPLICATIONS_PIC_DEMO2_ADAPTERS_RegularGrid2SetupExperimentAndPlot_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "tarch/la/VectorCompare.h"
#include "tarch/multicore/BooleanSemaphore.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "tarch/plotter/griddata/unstructured/vtk/VTKTextFileWriter.h"

#include "peano/applications/pic/demo2/RegularGridCell.h"
#include "peano/applications/pic/demo2/RegularGridVertex.h"
#include "peano/applications/pic/demo2/RegularGridState.h"

 #include "peano/applications/pic/demo2/mappings/RegularGrid2SetupExperiment.h"
 #include "peano/applications/pic/demo2/mappings/RegularGrid2PlotSolution.h"


#include <map>


namespace peano { 
  namespace applications { 
    namespace pic { 
      namespace demo2 {
      namespace adapters {
        class RegularGrid2SetupExperimentAndPlot;
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
class peano::applications::pic::demo2::adapters::RegularGrid2SetupExperimentAndPlot {
  private:
    peano::applications::pic::demo2::mappings::RegularGrid2SetupExperiment _map2SetupExperiment;
    peano::applications::pic::demo2::mappings::RegularGrid2PlotSolution _map2PlotSolution;


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
    RegularGrid2SetupExperimentAndPlot();

    virtual ~RegularGrid2SetupExperimentAndPlot();
  
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
