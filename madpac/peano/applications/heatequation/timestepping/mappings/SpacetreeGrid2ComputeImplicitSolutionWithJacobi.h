// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_MAPPINGS_SpacetreeGrid2ComputeImplicitSolutionWithJacobi_H_
#define PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_MAPPINGS_SpacetreeGrid2ComputeImplicitSolutionWithJacobi_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/heatequation/timestepping/SpacetreeGridCell.h"
#include "peano/applications/heatequation/timestepping/SpacetreeGridSingleStepVertex.h"
#include "peano/applications/heatequation/timestepping/SpacetreeGridState.h"

#include "peano/applications/heatequation/timestepping/Solver.h"
#include "peano/toolbox/solver/Multigrid.h"


namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping {
        namespace mappings {
          class SpacetreeGrid2ComputeImplicitSolutionWithJacobi;
        }
      }
    }
  }
}


/**
 * This is a mapping from the Peano spacetreegrid events to your user-defined 
 * activities. Please implement the operations you wish to implement.
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.10 $
 */
class peano::applications::heatequation::timestepping::mappings::SpacetreeGrid2ComputeImplicitSolutionWithJacobi {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    peano::applications::heatequation::timestepping::Solver _solver;
    peano::toolbox::solver::Multigrid                       _multigrid;
  public:
    /**
     * Mapping constructor.
     *
     * Mappings have to have a standard constructor and, typically, no other 
     * constructor does exist. While the constructor may initialise a mapping, 
     * Peano's concept requires the mapping to be semi-stateless:
     *
     * - At construction time the mapping has no well-defined state, i.e. the 
     *   values set by the constructor are meaningless.
     * - Whenever the mapping's beginIteration() operation is called, the 
     *   mapping has to initialise itself. To do this, it has to analyse the 
     *   passed state object. The beginIteration() operation may set attributes 
     *   of the mapping and these attributes now have a valid state.
     * - All the subsequent calls on the mapping can rely on valid mapping 
     *   attributes until
     * - The operation endIteration() is invoked. Afterwards, all the mapping's 
     *   attributes have an undefined state.
     *
     * With this concept, you cannot ensure a consistent mapping state 
     * in-between two iterations: While the first iteration might set some 
     * mapping attributes, the attributes become invalid after the first 
     * endIteration() call and might be changed from outside before the next 
     * beginIteration() is invoked.
     *
     * To implement persistent attributes, you have to write back all these  
     * attributes at endIteration() and reload them at the next beginIteration() 
     * call. With this sometimes confusing persistency concept, we can ensure 
     * that your code works on a parallel machine and for any mapping/algorithm 
     * modification.
     */
    SpacetreeGrid2ComputeImplicitSolutionWithJacobi();

    /**
     * Destructor. Typically does not implement any operation.
     */
    virtual ~SpacetreeGrid2ComputeImplicitSolutionWithJacobi();
  
    /**
     * Create an inner vertex.
     *
     * You receive a vertex, its position, and the size of its @f$ 2^d @f$ 
     * surrounding cells. The grid already has found out that this will be an 
     * inner vertex, however, you have to set valid vertices.
     *
     * The vertices have an attribute position or x, too. However, this 
     * attribute is available in Debug mode only and it should be used solely 
     * to implement assertions. To work with the vertex's position, use the 
     * attribute x instead.
     *
     * @image html ../../../kernel/gridinterface/geometry-vertex-inside-outside.png
     *
     * If you are working with moving geometries, an inner vertex is either 
     * created at startup time or it is a former boundary vertex becoming an 
     * inner vertex now. To recognise the latter case is up to you, as every
     * PDE reacts differently.
     *
     * It might seem to make sense to add an assertion such as 
     * \code 
 assertion1( isInside() || isBoundary(), *this );
 \endcode
     * at the very beginning of your implementation. However, such an assertion 
     * fails as Peano switches the vertex type after the initialisation routine. 
     * The reason for this behaviour is simple: For moving boundaries, often 
     * you'd like to know what type the vertex had before (was it outside or 
     * was it an inner point becoming a boundary/boundary point becoming an 
     * inner point). This is possible, if the type is switched after the 
     * initialisation.
     *
     * The refinement process cuts a coarse grid cell into pieces. You have 
     * access to this coarse grid data via coarseGridCell (coarse grid's cell
     * data), coarseGridVertices, and the corresponding 
     * coarseGridVerticesEnumerator. The coarse grid cell always is cut into 
     * @f$ 3^d @f$ subcubes, i.e. two cuts along each coordinate axis. The 
     * integer vector fineGridPositionOfVertex (each entry is in-between zero
     * and 4) tells you where within this local fine grid the new vertex is 
     * located. You may modify both the fine grid vertex and the coarse grid
     * vertices and cells. However, only the initialisation of fineGridVertex
     * is mandatory.
     *
     * !!! Thread-safety
     *
     * This operation is not thread safe with respect to the coarse grid 
     * vertices and the coarse grid cell. With respect to the fine grid 
     * vertices, it is thread safe. 
     *
     * @param fineGridVertex  Vertex that is to be initialised. This is the 
     *                        central object you should set values to.
     * @param fineGridX       Position of vertex.
     * @param fineGridH       Size of the surrounding cells of fineGridVertex.
     * @param coarseGridVertices Vertices of the coarser grid. These vertices 
     *                        have to be accessed using the enumerator.
     * @param coarseGridVerticesEnumerator Enumerator for coarseGridVertices. 
     *                        It also holds the coarse grid's cell size.
     * @param coarseGridCell  This it the cell of the coarser grid into which 
     *                        the new vertex is embedded.
     * @param fineGridPositionOfVertex  Position of new vertex within the 
     *                        fine grid.
     */
    void createInnerVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );
    

    /**
     * Create a boundary vertex.
     *
     * You receive a vertex, its position, and the size of its @f$ 2^d @f$ 
     * surrounding cells. The grid already has found out that this will be a 
     * boundary vertex, however, you have to set valid vertices. Boundary 
     * implies that this vertex has less than @f$ 2^d @f$ cells that lay 
     * completely with in the computational domain.
     *
     * @image html ../../../kernel/gridinterface/geometry-vertex-inside-outside.png
     *
     * The vertices have an attribute position or x, too. However, this 
     * attribute is available in Debug mode only and it should be used solely 
     * to implement assertions. To work with the vertex's position, use the 
     * attribute x instead. 
     *
     * A boundary vertex is 
     * - either created at startup time,
     * - a former outer vertex, or
     * - a former inner vertex.
     *      
     * The latter two cases happen if and only if you are working with moving 
     * geometries. To recognise the latter case is up to you, as every
     * PDE reacts differently, i.e. there's no boundary flag for the vertices 
     * a priori.
     *
     * It might seem to make sense to add an assertion such as 
     * \code 
 assertion1( isInside() || isBoundary(), *this );
 \endcode
     * at the very beginning of your implementation. However, such an assertion 
     * fails as Peano switches the vertex type after the initialisation routine. 
     * The reason for this behaviour is simple: For moving boundaries, often 
     * you'd like to know what type the vertex had before (was it outside or 
     * was it an inner point becoming a boundary/boundary point becoming an 
     * inner point). This is possible, if the type is switched after the 
     * initialisation.     
     *
     * The refinement process cuts a coarse grid cell into pieces. You have 
     * access to this coarse grid data via coarseGridCell (coarse grid's cell
     * data), coarseGridVertices, and the corresponding 
     * coarseGridVerticesEnumerator. The coarse grid cell always is cut into 
     * @f$ 3^d @f$ subcubes, i.e. two cuts along each coordinate axis. The 
     * integer vector fineGridPositionOfVertex (each entry is in-between zero
     * and 4) tells you where within this local fine grid the new vertex is 
     * located. You may modify both the fine grid vertex and the coarse grid
     * vertices and cells. However, only the initialisation of fineGridVertex
     * is mandatory.
     *
     * !!! Thread-safety
     *
     * This operation is not thread safe with respect to the coarse grid 
     * vertices and the coarse grid cell. With respect to the fine grid 
     * vertices, it is thread safe.
     * 
     * @param fineGridVertex  Vertex that is to be initialised. This is the 
     *                        central object you should set values to.
     * @param fineGridX       Position of vertex.
     * @param fineGridH       Size of the surrounding cells of fineGridVertex.
     * @param coarseGridVertices Vertices of the coarser grid. These vertices 
     *                        have to be accessed using the enumerator.
     * @param coarseGridVerticesEnumerator Enumerator for coarseGridVertices. 
     *                        It also holds the coarse grid's cell size.
     * @param coarseGridCell  This it the cell of the coarser grid into which 
     *                        the new vertex is embedded.
     * @param fineGridPositionOfVertex  Position of new vertex within the 
     *                        fine grid.
     */
    void createBoundaryVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );
    
    /**
     * @todo Write docu
     */
    void createHangingVertex(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );

    /**
     * Destroy a vertex.
     *
     * For the regular grid, a vertex typically is destroyed due to moving
     * boundaries. The operation does not distinguish between boundary and
     * inner vertices, i.e. if you wanna treat them differently, you have to
     * implement this manually.
     *
     *
     * !!! Thread-safety
     *
     * This operation is not thread safe with respect to the coarse grid 
     * vertices and the coarse grid cell. With respect to the fine grid 
     * vertices, it is thread safe.
     * 
     * @see createBoundaryVertex() for a argument description.
     */
    void destroyVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );

    /**
     * @todo Write docu
     */
    void destroyHangingVertex(
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&   fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );
    
    /**
     * Create an inner cell.
     *
     * Whenever the grid management has created a new cell (either at startup or
     * due to moving boundaries), it afterwards invokes this operation. Here you 
     * can add your PDE-specific initialisation. The grid management already has 
     * found out that this cell will be an inner cell, so you don't have to 
     * doublecheck this again. Instead, you can focuse on PDE-specific stuff.
     *
     * @image html ../../../kernel/gridinterface/geometry-cell-inside-outside.png
     *
     * The vertices surrounding the cell already are initialised, i.e. you can 
     * rely on them having a valid state. However, they are arranged in an array 
     * and you don't know how the vertices are ordered in this array. 
     * createInnerCell() just receives a pointer to this array. To access the 
     * individual elements, you have to use the vertex enumerator. This functor 
     * encapsulates the vertex enumeration and is initialised by the grid 
     * properly. See the enumerator's documentation for more details.
     * 
     * If you need the position of the vertices of the cell or its size, use the 
     * enumerator.
     *
     * !!! Thread-safety
     *
     * This operation is not thread safe with respect to the coarse grid 
     * vertices and the coarse grid cell. With respect to the fine grid 
     * vertices and fine grid cell, it is thread safe. 
     * 
     * @param fineGridCell      Fine grid cell that you should fill with data.
     * @param fineGridVertices  Adjacent vertices of fineGridCell. To access 
     *                          elements of this array, use the enumerator.
     * @param fineGridVerticesEnumerator Enumerator for fineGridVertices.
     * @param coarseGridVertices Vertices of the next coarser level. Use the 
     *                          enumerator to access them.
     * @param coarseGridVerticesEnumerator Enumerator for coarseGridVertices.
     * @param coarseGridCell    Cell of the next coarser grid, i.e. the parent
     *                          cell within the spacetree.
     * @param fineGridPositionOfCell Position of fineGridCell within the parent 
     *                          cell. This is a d-dimensional vector where each 
     *                          entry is either 0,1, or 2.
     */
    void createCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex *              fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );

    /**
     * Destroy a cell
     *
     * This operation is called whenever the grid decides to destroy a cell due 
     * to moving boundaries. Here, the grid does not distinguish between inner 
     * and boundary cells, i.e. if you want to react differently, you have to 
     * implement this manually.
     * 
     * If you need the position of the vertices of the cell or its size, use the 
     * enumerator.
     *
     * !!! Thread-safety
     *
     * This operation is not thread safe with respect to the coarse grid 
     * vertices and the coarse grid cell. With respect to the fine grid 
     * vertices and fine grid cell, it is thread safe. 
     * 
     * @param fineGridCell      Fine grid cell that you should fill with data.
     * @param fineGridVertices  Adjacent vertices of fineGridCell. To access 
     *                          elements of this array, use the enumerator.
     * @param fineGridVerticesEnumerator Enumerator for fineGridVertices.
     * @param coarseGridVertices Vertices of the next coarser level. Use the 
     *                          enumerator to access them.
     * @param coarseGridVerticesEnumerator Enumerator for coarseGridVertices.
     * @param coarseGridCell    Cell of the next coarser grid, i.e. the parent
     *                          cell within the spacetree.
     * @param fineGridPositionOfCell Position of fineGridCell within the parent 
     *                          cell. This is a d-dimensional vector where each 
     *                          entry is either 0,1, or 2.
     */
    void destroyCell(
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );

    #ifdef Parallel
    /**
     * Merge vertex with the incoming vertex from a neighbouring computation node.
     * 
     * When Peano is running in parallel the data exchange is done vertex-wise 
     * between two grid iterations. Thus, before the touchVertexFirstTime-event
     * the vertex, sent by the computation node, which shares this vertex, is 
     * merged with the local copy of this vertex.
     *
     * @param vertex Local copy of the vertex.
     * @param neighbour Remote copy of the vertex.
     * @param fromRank rank of the neighbouring computation node
     */
    void mergeWithNeighbour(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex, 
      const peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& neighbour, 
      int fromRank);
    #endif 

    /**
     * Read vertex the first time throughout one iteration
     *
     * In the Peano world, an algorithm tells the grid that the grid should be 
     * traversed. The grid then decides how to do this and runs over all cells
     * and vertices. Whenever the grid traversal reads a vertex the very first 
     * time throughout an iteration, it invokes touchVertexFirstTime() for this 
     * vertex. Then, it calls handleCell up to @f$ 2^d @f$ times for the 
     * adjacent cells and passes this vertex to these calls. Finally, the grid
     * traversal invokes touchVertexLastTime(), i.e. the counterpart of this 
     * operation.
     *
     * @image html ../../../kernel/gridinterface/geometry-vertex-inside-outside.png
     *
     * The operation is called for both each inner and boundary vertices.
     * These vertices have an attribute position or x, too. However, this 
     * attribute is available in Debug mode only and it should be used solely 
     * to implement assertions. To work with the vertex's position, use the 
     * attribute x instead.
     *
     * Vertices may have persistent and non-persistent attributes (see the 
     * documentation of the DaStGen tool). Attributes that are not persistent 
     * are not stored in-between two iterations, i.e. whenever 
     * touchVertexFirstTime() is called, these attributes contain garbage. So,
     * this operation is the right place to initialise the non-persistent 
     * attributes of a vertex.
     *
     * !!! Thread-safety
     *
     * This operation is not thread safe with respect to the coarse grid 
     * vertices and the coarse grid cell. With respect to the fine grid 
     * vertices, it is thread safe. It is not thread safe with respect to the 
     * fine grid cell. 
     * 
     * @see createInnerVertex() for a description of the arguments. 
     */
    void touchVertexFirstTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                          fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
    );


    /**
     * Read vertex the last time throughout one iteration
     *
     * In the Peano world, an algorithm tells the grid that the grid should be 
     * traversed. The grid then decides how to do this and runs over all cells
     * and vertices. Whenever the grid traversal reads a vertex the very first 
     * time throughout an iteration, it invokes touchVertexFirstTime() for this 
     * vertex. Then, it calls handleCell up to @f$ 2^d @f$ times for the 
     * adjacent cells and passes this vertex to these calls. Finally, the grid
     * traversal invokes touchVertexLastTime().
     *
     * @image html ../../../kernel/gridinterface/geometry-vertex-inside-outside.png
     *
     * The operation is called for both each inner and boundary vertices.
     * These vertices have an attribute position or x, too. However, this 
     * attribute is available in Debug mode only and it should be used solely 
     * to implement assertions. To work with the vertex's position, use the 
     * attribute x instead.
     *
     * Vertices may have persistent and non-persistent attributes (see the 
     * documentation of the DaStGen tool). Attributes that are not persistent 
     * are not stored in-between two iterations, i.e. whenever 
     * touchVertexFirstTime() is called, these attributes contain garbage. So,
     * this operation is the right place to do something with the non-persistent 
     * attributes. As soon as this operation terminates, these attributes are 
     * lost.
     *
     * !!! Thread-safety
     *
     * This operation is not thread safe with respect to the coarse grid 
     * vertices and the coarse grid cell. With respect to the fine grid 
     * vertices, it is thread safe. It is not thread safe with respect to the 
     * fine grid cell. 
     * 
     * @see createInnerVertex() for a description of the arguments. 
     */
    void touchVertexLastTime(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&         fineGridVertex,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridX,
      const tarch::la::Vector<DIMENSIONS,double>&                    fineGridH,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfVertex
    );

    #ifdef Parallel
    /**
     * Merge vertex with the incoming vertex from a neighbouring computation node.
     * 
     * When Peano is running in parallel the data exchange is done vertex-wise 
     * between two grid iterations. Thus, after the touchVertexLastTime-event
     * has been called the current vertex can be prepared for being sent to
     * the neighbouring computation node in this method. 
     *
     * @param vertex Local copy of the vertex.
     */
    void prepareSendToNeighbour(peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex& vertex);
    #endif    

    /**
     * Begin an iteration
     * 
     * This operation is called whenever the algorithm tells Peano that the grid 
     * is to be traversed, i.e. this operation is called before any creational 
     * mapping operation or touchVertexFirstTime() or handleCell() is called.
     * The operation receives a solver state that has to 
     * encode the solver's state. Take this attribute to set the mapping's 
     * attributes. This class' attributes will remain valid until endIteration()
     * is called. Afterwards they might contain garbage.
     *
     * @see SpacetreeGrid2ComputeImplicitSolutionWithJacobi()
     */
    void beginIteration(
      peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
    );

    /**
     * Iteration is done
     * 
     * This operation is called at the very end, i.e. after all the handleCell() 
     * and toucheVertexLastTime() operations have been invoked. In this 
     * operation, you have to write all the data you will need later on back to 
     * the state object passed. Afterwards, the attributes of your mapping 
     * object (as well as global static fields) might be overwritten.  
     *
     * @see SpacetreeGrid2ComputeImplicitSolutionWithJacobi()
     */
    void endIteration(
      peano::applications::heatequation::timestepping::SpacetreeGridState&  solverState
    );

    
    /**
     * Enter a cell
     *
     * In the Peano world, an algorithm tells the grid that the grid should be 
     * traversed. The grid then decides how to do this and runs over all cells
     * (and vertices). For each cell, it calls handleCell(), i.e. if you want 
     * your algorithm to do somethin on a cell, you should implement this 
     * operation.
     *
     * @image html ../../../kernel/gridinterface/geometry-cell-inside-outside.png
     *
     * The operation is called for each inner and boundary element and, again, 
     * you may not access the cell's adjacent vertices directly. Instead, you 
     * have to use the enumerator. For all adjacent vertices of this cell, 
     * touchVertexFirstTime() already has been called. touchVertexLastTime() has 
     * not been called yet.
     * 
     * If you need the position of the vertices of the cell or its size, use the 
     * enumerator.
     *
     * !!! Thread-safety
     *
     * This operation is not thread safe with respect to the coarse grid 
     * vertices and the coarse grid cell. With respect to the fine grid 
     * vertices and the fine grid cell, it is thread safe.
     * 
     * @see createCell() for a description of the arguments. 
     */
    void enterCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&                 fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&                coarseGridVerticesEnumerator,
      const peano::applications::heatequation::timestepping::SpacetreeGridCell&            coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfCell
    );

    /**
     * This is the counterpart of enterCell(). See this operation for a 
     * description of the arguments.
     */
    void leaveCell(
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           fineGridCell,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  fineGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          fineGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const  coarseGridVertices,
      const peano::kernel::gridinterface::VertexEnumerator&          coarseGridVerticesEnumerator,
      peano::applications::heatequation::timestepping::SpacetreeGridCell&           coarseGridCell,
      const tarch::la::Vector<DIMENSIONS,int>&                       fineGridPositionOfCell
    );

};


#endif
