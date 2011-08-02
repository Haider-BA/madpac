// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_APPLICATIONS_SHALLOWWATER_MAPPINGS_RegularGrid2SetupExperiment_H_
#define PEANO_APPLICATIONS_SHALLOWWATER_MAPPINGS_RegularGrid2SetupExperiment_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/applications/shallowwater/RegularGridCell.h"
#include "peano/applications/shallowwater/RegularGridVertex.h"
#include "peano/applications/shallowwater/RegularGridState.h"

//#include "peano/applications/shallowwater/utils/GeoDas.h"
#include "peano/applications/shallowwater/utils/CsvReader.h"


namespace peano { 
  namespace applications { 
    namespace shallowwater {
      namespace mappings {
        class RegularGrid2SetupExperiment;
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
class peano::applications::shallowwater::mappings::RegularGrid2SetupExperiment {
  private:
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

    peano::applications::shallowwater::utils::CsvReader _csvReader;
  
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
    RegularGrid2SetupExperiment();

    /**
     * Destructor. Typically does not implement any operation.
     */
    virtual ~RegularGrid2SetupExperiment();
  
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
     * @param x      Position of vertex
     * @param h      Size of the surrounding cells
     * @param vertex Vertex that is to be initialised
     */
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::shallowwater::RegularGridVertex&  vertex
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
     * @param x      Position of vertex
     * @param h      Size of the surrounding cells
     * @param vertex Vertex that is to be initialised
     */
    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::shallowwater::RegularGridVertex&  vertex
    );

    /**
     * Destroy a vertex.
     *
     * For the regular grid, a vertex typically is destroyed due to moving
     * boundaries. The operation does not distinguish between boundary and
     * inner vertices, i.e. if you wanna treat them differently, you have to
     * implement this manually.
     *
     * @param x      Position of vertex
     * @param h      Size of the surrounding cells
     * @param vertex Vertex that is to be initialised
     */
    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::applications::shallowwater::RegularGridVertex&  vertex
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
     * @param vertices   Array of vertices to be accessed using the enumerator
     * @param cell       Cell that is to be initialised 
     * @param enumerator Vertex enumerator
     */
    void createCell(
      peano::applications::shallowwater::RegularGridVertex const * const vertices,
      peano::applications::shallowwater::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
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
     * @param vertices   Array of vertices to be accessed using the enumerator
     * @param cell       Cell that is to be initialised 
     * @param enumerator Vertex enumerator
     */
    void destroyCell(
      peano::applications::shallowwater::RegularGridVertex const * const vertices,
      peano::applications::shallowwater::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
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
     * @param vertices   Array of vertices to be accessed using the enumerator
     * @param cell       Cell that is to be initialised 
     * @param enumerator Vertex enumerator
     */
    void handleCell(
      peano::applications::shallowwater::RegularGridVertex* const vertices,
      peano::applications::shallowwater::RegularGridCell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

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
     * @param x       Position of left bottom corner of the cell
     * @param vertex  Vertex touched the first time
     */
    void touchVertexFirstTime(
      peano::applications::shallowwater::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
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
     * @param x       Position of left bottom corner of the cell
     * @param vertex  Vertex touched the first time
     */
    void touchVertexLastTime(
      peano::applications::shallowwater::RegularGridVertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );

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
     * @see RegularGrid2SetupExperiment()
     */
    void beginIteration(
      peano::applications::shallowwater::RegularGridState&  solverState
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
     * @see RegularGrid2SetupExperiment()
     */
    void endIteration(
      peano::applications::shallowwater::RegularGridState&  solverState
    );
    
    /**
     * Apply the shared memory parallelisation
     *
     * Whenever Peano would like to run a piece of code in parallel on a shared 
     * memory machien, it asks the active mappings whether it is allowed to do 
     * so. The operation equals a veto mechanism, i.e. the active adapter asks 
     * all its mappings whether it is allowed to parallelise. If one of them 
     * says 'no', the adapter tells Peano to switch off the parallelisation.
     * 
     * This operation is, for example, important for any plotter: Here, a 
     * parallel execution of the handles is problematic as the grid data hsa to 
     * be streamed to a file sequentially. Another application scenario is 
     * simply code tuning: Parallelisation comes along with a certain overhead, 
     * i.e. if a problem size is too small, it might make sense not to 
     * parallelise then. Such an evaluation relies on the size of 
     * numberOfGridCells.
     *
     * The operation is not const as you might want to do some internal 
     * bookkeeping on the number of cells processed in parallel.
     *
     * The operation implements not solely a veto mechanism: If you return zero, 
     * this equals a veto and Peano won't run something in parallel. However, if
     * you return a number $n$ greater than zero, Peano will count the overall 
     * number of jobs, split it up into chunks of size $n$, and deploy these 
     * chunks to the individual threads. This way, you can specify a 
     * parallisation threshold: If the number of jobs (grid cells) is too small, 
     * the overhead spent on the parallelisation might slow down your code. 
     * Well, just make the integer returned by this operation a little bit 
     * bigger.  
     *
     * @param numberOfGridCells Number of grid cells that Peano plans to process 
     *                          in parallel. 
     * @return Peano's grain size.
     */
    int parallelise( int numberOfGridCells );
    
};


#endif
