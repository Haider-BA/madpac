#include "peano/kernel/datatraversal/ActionSet.h"


peano::kernel::datatraversal::ActionSet::ActionSet():
  _actionSet() {
}


peano::kernel::datatraversal::ActionSet::~ActionSet() {
}


void peano::kernel::datatraversal::ActionSet::addAction( const Action& action ) {
  _actionSet.push_back(action);
}


int peano::kernel::datatraversal::ActionSet::getNumberOfParallelActions() const {
  return _actionSet.size();
}


const peano::kernel::datatraversal::Action& peano::kernel::datatraversal::ActionSet::getAction( int i ) const {
  assertion( i >= 0 );
  assertion( i<getNumberOfParallelActions() );
  return _actionSet[i];
}
