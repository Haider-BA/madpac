// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_KERNEL_REGULARGRID_TESTS_ADAPTERS_RegularGrid2TEST_H_
#define PEANO_KERNEL_REGULARGRID_TESTS_ADAPTERS_RegularGrid2TEST_H_


#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"

#include "peano/kernel/regulargrid/tests/TestTypes.h"

namespace peano { 
  namespace kernel {
    namespace regulargrid {
      namespace tests {
        namespace adapters {
          class RegularGrid2Test;
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
class peano::kernel::regulargrid::tests::adapters::RegularGrid2Test {
  public:
    RegularGrid2Test();

    virtual ~RegularGrid2Test();
  
    void createInnerVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::kernel::regulargrid::tests::Vertex&  vertex
    );

    void createBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::kernel::regulargrid::tests::Vertex&  vertex
    );

    void destroyVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      const tarch::la::Vector<DIMENSIONS,double>&  h,
      peano::kernel::regulargrid::tests::Vertex&  vertex
    );

    void createCell(
      peano::kernel::regulargrid::tests::Vertex const * const vertices,
      peano::kernel::regulargrid::tests::Cell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void destroyCell(
      peano::kernel::regulargrid::tests::Vertex const * const vertices,
      peano::kernel::regulargrid::tests::Cell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void handleCell(
      peano::kernel::regulargrid::tests::Vertex * const vertices,
      peano::kernel::regulargrid::tests::Cell&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator
    );

    void touchVertexFirstTime(
      peano::kernel::regulargrid::tests::Vertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );


    void touchVertexLastTime(
      peano::kernel::regulargrid::tests::Vertex&  vertex,
      const tarch::la::Vector<DIMENSIONS,double>&  x
    );


    void beginIteration(
      peano::kernel::regulargrid::tests::State&  solverState
    );


    void endIteration(
      peano::kernel::regulargrid::tests::State&  solverState
    );
};


#endif
