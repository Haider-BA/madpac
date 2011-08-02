#include "peano/applications/pic/demo/SpacetreeGridVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"


peano::applications::pic::demo::SpacetreeGridVertex::SpacetreeGridVertex():
  Base() { 
  // @todo Insert your code here
}


peano::applications::pic::demo::SpacetreeGridVertex::SpacetreeGridVertex(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::pic::demo::SpacetreeGridVertex::mergeWithNeighbour(const peano::applications::pic::demo::SpacetreeGridVertex& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
  // @todo Insert your code here
}
 

void peano::applications::pic::demo::SpacetreeGridVertex::prepareSendToNeighbour() {
  // @todo Insert your code here
}
#endif


















