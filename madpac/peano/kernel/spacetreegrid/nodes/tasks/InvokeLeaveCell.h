// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREEGRID_NODES_TASKS_INVOKE_LEAVE_CELL_H_
#define _PEANO_KERNEL_SPACETREEGRID_NODES_TASKS_INVOKE_LEAVE_CELL_H_


#include "tarch/logging/Log.h"

#include "peano/utils/Globals.h"
#include "peano/kernel/datatraversal/TaskSet.h"
#include "peano/kernel/spacetreegrid/SingleLevelEnumerator.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace nodes {
        namespace tasks {
          template <
            class Vertex,
            class Cell,
            class State,
            class EventHandle
          >
          class InvokeLeaveCell;
        }
      }
    }
  }
}




template < class Vertex, class Cell, class State, class EventHandle
>
class peano::kernel::spacetreegrid::nodes::tasks::InvokeLeaveCell {
  private:
    static tarch::logging::Log _log;

    State&                                                      _state;
    Cell&                                                       _fineGridCell;
    Vertex* const                                               _fineGridVertices;
    const peano::kernel::spacetreegrid::SingleLevelEnumerator&  _fineGridVerticesEnumerator;
    Cell&                                                       _coarseGridCell;
    Vertex*                                                     _coarseGridVertices;
    const SingleLevelEnumerator&                                _coarseGridVerticesEnumerator;
    const tarch::la::Vector<DIMENSIONS,int>&                    _fineGridPositionOfCell;
    EventHandle&                                                _eventHandle;

  public:
    InvokeLeaveCell(
      State&                                                      state,
      Cell&                                                       fineGridCell,
      Vertex* const                                               fineGridVertices,
      const peano::kernel::spacetreegrid::SingleLevelEnumerator&  fineGridVerticesEnumerator,
      Cell&                                                       coarseGridCell,
      Vertex* const                                               coarseGridVertices,
      const peano::kernel::spacetreegrid::SingleLevelEnumerator&  coarseGridVerticesEnumerator,
      const tarch::la::Vector<DIMENSIONS,int>&                    fineGridPositionOfCell,
      EventHandle&                                                eventHandle
    );

    void operator()();
};


#include "peano/kernel/spacetreegrid/nodes/tasks/InvokeLeaveCell.cpph"


#endif
