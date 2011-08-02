#include "peano/applications/pic/demo/SpacetreeGridCell.h"


peano::applications::pic::demo::SpacetreeGridCell::SpacetreeGridCell():
  Base() { 
  // @todo Insert your code here
}


peano::applications::pic::demo::SpacetreeGridCell::SpacetreeGridCell(const Base::PersistentCell& argument):
  Base(argument) {
  // @todo Insert your code here
}


void peano::applications::pic::demo::SpacetreeGridCell::init(double initialPressure) {
  _cellData.setP( initialPressure );
}


double peano::applications::pic::demo::SpacetreeGridCell::getP() const {
  return _cellData.getP();
}
