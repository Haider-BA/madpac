#include "peano/kernel/spacetreegrid/aspects/CellLocalPeanoCurve.h"

peano::kernel::spacetreegrid::aspects::CellLocalPeanoCurve::CellLocalPeanoCurve():
  _actionTraversal(4) {
}


tarch::la::Vector<DIMENSIONS,int>
peano::kernel::spacetreegrid::aspects::CellLocalPeanoCurve::toIntVector(const Coordinates& coordinates) {
  tarch::la::Vector<DIMENSIONS,int>  result;
  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = coordinates[d] ? 1 : 0;
  }
  return result;
}
