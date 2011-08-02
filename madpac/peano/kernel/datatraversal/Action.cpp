#include "peano/kernel/datatraversal/Action.h"

peano::kernel::datatraversal::Action::Action(
  tarch::la::Vector<DIMENSIONS,int> cartesianPosition,
  int                               id
):
  _cartesianPosition(cartesianPosition),
  _id(id) {
}


peano::kernel::datatraversal::Action::~Action() {
}
