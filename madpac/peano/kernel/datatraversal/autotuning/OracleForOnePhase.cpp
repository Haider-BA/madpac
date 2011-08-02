#include "peano/kernel/datatraversal/autotuning/OracleForOnePhase.h"

std::string peano::kernel::datatraversal::autotuning::toString( const MethodTrace& methodTrace ) {
  switch (methodTrace) {
    case RegularGridLoadVertices:
      return "regular-grid-load-vertices";
    case RegularGridStoreVertices:
      return "regular-grid-store_vertices";
    case RegularGridHandleCells:
      return "regular-grid-handle-cells";
    case SpacetreeGridLoadVertices:
      return "spacetree-grid-load-vertices";
    case SpacetreeGridSetCounter:
      return "spacetree-grid-set-counter";
    case SpacetreeGridCallEnterCellAndLoadSubCellsWithinTraverse:
      return "spacetree-grid-enter-cell-and-load-sub-cells";
    case SpacetreeGridCallLeaveCellAndStoreSubCellsWithinTraverse:
      return "spacetree-grid-leave-cell-and-store-sub-cells";
  }

  return "<error>";
}
