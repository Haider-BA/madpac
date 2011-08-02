// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREE_GRID_ASPECTS_VERTEX_STATE_ANALYSIS_H_
#define _PEANO_KERNEL_SPACETREE_GRID_ASPECTS_VERTEX_STATE_ANALYSIS_H_


#include "peano/utils/Globals.h"
#include "peano/utils/Loop.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace aspects {
        class VertexStateAnalysis;
      }
    }
  }
}



class peano::kernel::spacetreegrid::aspects::VertexStateAnalysis {
  public:
    template <class Vertex>
    static bool doesOneVertexCarryRefinementFlag(
      Vertex                                                 fineGridVertices[FOUR_POWER_D],
      const peano::kernel::gridinterface::VertexEnumerator&  fineGridVerticesEnumerator,
      typename Vertex::Records::RefinementControl            whichFlag
    );

    template <class Vertex>
    static bool doesNoVertexCarryRefinementFlag(
      Vertex                                                 fineGridVertices[FOUR_POWER_D],
      const peano::kernel::gridinterface::VertexEnumerator&  fineGridVerticesEnumerator,
      typename Vertex::Records::RefinementControl            whichFlag
    );
};


#include "peano/kernel/spacetreegrid/aspects/VertexStateAnalysis.cpph"

#endif

