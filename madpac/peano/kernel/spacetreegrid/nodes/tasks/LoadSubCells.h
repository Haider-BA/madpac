// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_SPACETREEGRID_NODES_TASKS_LOAD_SUB_CELL_H_
#define _PEANO_KERNEL_SPACETREEGRID_NODES_TASKS_LOAD_SUB_CELL_H_


#include "tarch/logging/Log.h"

#include "peano/utils/Globals.h"
#include "peano/kernel/datatraversal/TaskSet.h"


namespace peano {
  namespace kernel {
    namespace spacetreegrid {
      namespace nodes {
        namespace tasks {
          template < class Cell, class CellStack >
          class LoadSubCells;
        }
      }
    }
  }
}




template < class Cell, class CellStack >
class peano::kernel::spacetreegrid::nodes::tasks::LoadSubCells {
  private:
    static tarch::logging::Log _log;

    Cell * const                 _subCells;
    CellStack&                   _cellStack;
    peano::utils::LoopDirection  _loopDirection;

    #ifdef Debug
    int                          _coarseFatherCellLevel;
    #endif

  public:
    LoadSubCells(
      Cell * const                        subCells,
      CellStack&                          cellStack,
      const peano::utils::LoopDirection&  loopDirection
      #ifdef Debug
      , int                                 coarseFatherCellLevel
      #endif
    );

    void operator()();
};


#include "peano/kernel/spacetreegrid/nodes/tasks/LoadSubCells.cpph"


#endif
