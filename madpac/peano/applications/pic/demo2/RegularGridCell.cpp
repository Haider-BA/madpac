#include "peano/applications/pic/demo2/RegularGridCell.h"

#include "peano/applications/pic/demo2/RegularGridCell.h"
#include "peano/applications/pic/demo2/RegularGridVertex.h"
#include "peano/applications/pic/demo2/RegularGridState.h"
#include "tarch/la/Vector.h"
#include <map>

peano::applications::pic::demo2::RegularGridCell::RegularGridCell():
  Base() { 
  // @todo Insert your code here
}


peano::applications::pic::demo2::RegularGridCell::RegularGridCell(const Base::PersistentCell& argument):
  Base(argument) {
  // @todo Insert your code here
}
void peano::applications::pic::demo2::RegularGridCell::init(double initialPressure) {
  _cellData.setP( initialPressure );
}


double peano::applications::pic::demo2::RegularGridCell::getP() const {
  return _cellData.getP();
}
