// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_REGULARGRID_GRID_CONTAINER_H_
#define _PEANO_KERNEL_REGULARGRID_GRID_CONTAINER_H_

#include <vector>
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "peano/utils/Globals.h"

namespace peano {
  namespace kernel {
    namespace regulargrid {
      template <class Vertex,class Cell>
      class GridContainer;
    }
  }
}


/**
 * Container for the grid data, that is both the vertices and the cells. This is
 * the regular equivalent to the stacks.
 *
 *
 * !!! Implementation
 *
 * All the repositories share one common grid container. Each repository first
 * takes the vertices, unpacks them into one big array, and then handles the
 * cells. This is not efficient, but it mirrors the behaviour of the spacetree
 * algorithm. As the regulargrid is just a simple prototyping environment for
 * the spacetree, such an approach sounds reasonable. However, creating the
 * array of vertices is expensive, as C++ always invokes the standard
 * constructor for each array element - even though the entries are overwritten
 * immediately. To avoid this, the grid container holds one huge array for the
 * vertices that is never destroyed throughout the simulation, and all grid
 * instances use this huge array to store their vertices.
 *
 * @author Tobias Weinzierl
 */
template <class Vertex,class Cell>
class peano::kernel::regulargrid::GridContainer {
  public:
    typedef std::vector<typename Cell::PersistentCell>      CellContainer;
    typedef std::vector<typename Vertex::PersistentVertex>  VertexContainer;

    /**
     * Logging device
     */
    static tarch::logging::Log _log;

    /**
     * See description of the class. There is a section on the implementation
     * that explains why there's such a pointer.
     */
    Vertex*  _arrayOfUnpackedVertices;
  private:
    /**
     * Number of grid points per dimension, i.e. this number minus one
     * represents the number of cells per dimension.
     *
     * The init is done in the constructor.
     */
    tarch::la::Vector<DIMENSIONS,int> _numberOfGridPoints;

    CellContainer    _cellContainer;
    VertexContainer  _vertexContainer;

    int getVertexIndex(const tarch::la::Vector<DIMENSIONS,int>& position) const;
    int getCellIndex(const tarch::la::Vector<DIMENSIONS,int>& position) const;
  public:
    /**
     */
    GridContainer();

    ~GridContainer();

    /**
     * Initialise all vertices.
     *
     * This operation's effect is three-fold:
     *
     * - Replace all vertices by the vertices returned by the vertex standard
     *   constructor.
     * - Replace all cells by the cells returned by the cell standard
     *   constructor.
     * - Finally, set the coordinates of the vertices.
     *
     * The latter information is used only in the debug mode (coordinates
     * otherwise are not persistent). Whenever you invoke this method, all the
     * data is overwritten as you have to call terminate() before.
     *
     * In the distributed memory parallel mode, the operation also has to send
     * copies of partition boundary vertices to the adjacent neighbours. A
     * detailed description/reasoning for this can be found in the documentation
     * of Grid::loadVertices(). After all the vertices have been distributed, we
     * have to receive the corresponding boundary vertices. Afterwards, the
     * grid container is ready to rumble.
     *
     * @param h                         Only needed for debug information
     * @param computationalDomainOffset Only needed for debug information
     */
    void restart(
      const tarch::la::Vector<DIMENSIONS,int>&     numberOfGridPoints,
      const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
      const tarch::la::Vector<DIMENSIONS,double>&  computationalDomainOffset
      #ifdef Parallel
      ,
      const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,int>&     neighbourRanks
      #endif
    );

    void terminate();

    typename Cell::PersistentCell     getCell( const tarch::la::Vector<DIMENSIONS,int>& position ) const;
    typename Vertex::PersistentVertex getVertex( const tarch::la::Vector<DIMENSIONS,int>& position ) const;

    /**
     * Set a cell back into the container.
     *
     * This operation ain't thread-safe, as, typically, no two threads work on
     * the same subdomain and try to write to or read from the same location.
     */
    void setCell(
      const tarch::la::Vector<DIMENSIONS,int>&  position,
      const typename Cell::PersistentCell&      cell
    );

    /**
     * Return a vertex back into the container.
     *
     * This operation ain't thread-safe, as, typically, no two threads work on
     * the same subdomain and try to write to or read from the same location.
     */
    void setVertex(
      const tarch::la::Vector<DIMENSIONS,int>&  position,
      const typename Vertex::PersistentVertex&  vertex
    );

    tarch::la::Vector<DIMENSIONS,int> getNumberOfGridVertices() const;
    tarch::la::Vector<DIMENSIONS,int> getNumberOfGridCells() const;

    void writeToCheckpoint( peano::kernel::gridinterface::Checkpoint<Vertex,Cell>& checkpoint ) const;
    void readFromCheckpoint( const peano::kernel::gridinterface::Checkpoint<Vertex,Cell>& checkpoint );

    Vertex* getArrayForUnpackedVertices() const;
};


#include "peano/kernel/regulargrid/GridContainer.cpph"

#endif
