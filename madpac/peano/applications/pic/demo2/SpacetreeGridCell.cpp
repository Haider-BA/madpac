#include "peano/applications/pic/demo2/SpacetreeGridCell.h"


peano::applications::pic::demo2::SpacetreeGridCell::SpacetreeGridCell():
  Base() { 
  // @todo Insert your code here
}


peano::applications::pic::demo2::SpacetreeGridCell::SpacetreeGridCell(const Base::PersistentCell& argument):
  Base(argument) {
  // @todo Insert your code here
}
void peano::applications::pic::demo2::SpacetreeGridCell::init(double initialPressure) {
  _cellData.setP( initialPressure );
}


double peano::applications::pic::demo2::SpacetreeGridCell::getP() const {
  return _cellData.getP();
}
