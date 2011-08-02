// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREEGRID_NODES_LOOPS_SET_COUNTER__LOOP_BODY_H_
#define _PEANO_KERNEL_SPACETREEGRID_NODES_LOOPS_SET_COUNTER__LOOP_BODY_H_


#include "peano/utils/Globals.h"
#include "peano/geometry/Geometry.h"
#include "peano/kernel/spacetreegrid/SingleLevelEnumerator.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace nodes {
        namespace loops {
          template <class Vertex>
          class SetCounterLoopBody;
        }
      }
    }
  }
}


template <class Vertex>
class peano::kernel::spacetreegrid::nodes::loops::SetCounterLoopBody {
  private:
    Vertex const * const                                        _coarseGridVertices;
    const peano::kernel::spacetreegrid::SingleLevelEnumerator&  _coarseGridVerticesEnumerator;
    int * const                                                 _fineGridCounter;

    /**
     * Is vertex a hanging node or is it a new vertex?
     *
     * Determines whether a vertex is a hanging node or not. The operation is
     * passed the vertices of the father cell and a coordinate of the node to
     * check. The coordinate is specified using a discrete
     * @f$ \{ 0, \dots , 3 \}^d @f$ identifier.
     *
     * @return peano::kernel::spacetreegrid::nodes::Constants
     */
    static int analyseFineGridVertex(
      Vertex const * const                                        coarseVertices,
      const peano::kernel::spacetreegrid::SingleLevelEnumerator&  coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&                    coordinates
    );


    /**
     * Internal helper used by the other analyseFineGridVertex() operation.
     */
    static void analyseFineGridVertex(
      Vertex const * const                                        coarseVertices,
      const peano::kernel::spacetreegrid::SingleLevelEnumerator&  coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&                    coordinates,
      tarch::la::Vector<DIMENSIONS,int>                           parentCoordinates,
      bool&                                                       oneFatherCarriesDeleteFlag,
      bool&                                                       oneFatherCarriesRefiningFlag,
      bool&                                                       oneFatherCarriesRefinedFlag,
      int                                                         dimension
    );
  public:
    SetCounterLoopBody(
      Vertex const * const                                        coarseGridVertices,
      const peano::kernel::spacetreegrid::SingleLevelEnumerator&  coarseGridVerticesEnumerator,
      int * const                                                 fineGridCounter
    );

    /**
     * Set Counter at i
     *
     * t.b.d.
     *
     * !!! Implementation
     *
     * See updateGlobalValues() for some details on the implementation.
     */
    void operator() (const tarch::la::Vector<DIMENSIONS,int>& i) const;

    /**
     * NOP
     *
     * The loop body only sets counters, i.e. it does not trigger any action.
     * Consequently, the there are no non-const object attributes, its
     * operator() is a const function, and its updateGlobalValues() does not
     * change the system state. The system state is altered as soon as the
     * counters are translated into concrete actions throughout the vertex
     * load and store process.
     */
    void updateGlobalValues();
};


#include "peano/kernel/spacetreegrid/nodes/loops/SetCounterLoopBody.cpph"


#endif
