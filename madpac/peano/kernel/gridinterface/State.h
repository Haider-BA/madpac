// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_GRID_INTERFACE_GRID_H_
#define _PEANO_KERNEL_GRID_INTERFACE_GRID_H_

#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"


namespace peano {
  namespace kernel {
    namespace gridinterface {
      class State;
    }
  }
}


/**
 * Interface of any grid state within the Peano project. The grids have to hold
 * a state and the repositories are able to forward this state to the user, i.e.
 * each PDE extends this state with pde-specific stuff such as global residuals
 * etc.
 *
 * @author Tobias Neckel, Tobias Weinzierl
 *
 */
class peano::kernel::gridinterface::State {
  public:
    virtual ~State(){}
    /**
     * Number of Vertices
     *
     * Returns the global number of vertices, i.e. the number of vertices on the
     * whole cluster.
     */
    virtual double getNumberOfInnerVertices() const = 0;
    virtual double getNumberOfBoundaryVertices() const = 0;
    virtual double getNumberOfOuterVertices() const = 0;

    /**
     * Number of Elements
     *
     * Returns the global number of elements, i.e. the number of elements on the
     * whole cluster.
     */
    virtual double getNumberOfInnerCells() const = 0;
    virtual double getNumberOfOuterCells() const = 0;

    /**
     * This method returns the mesh size vector h (computed from the domain size
     * and the number of grid points in each dimension).
     *
     * This method is extensively used in iterate().
     *
     * @note For mesh stretching, this method does not respect the stretched
     *       minimum mesh size in stretching direction. Call getHMin() instead.
     *
     * @todo check if saving of the coordinates in arrays is faster if bottleneck?
     */
    virtual tarch::la::Vector<DIMENSIONS,double> getMaximumMeshWidth() const = 0;

    /**
     * Method for returning the minimum mesh size in the grid.
     *
     * It calls getH() and adapts it for mesh-stretching (if in use).
     */
    virtual tarch::la::Vector<DIMENSIONS,double> getMinimumMeshWidth() const = 0;
};

#endif
