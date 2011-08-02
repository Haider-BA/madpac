#include "peano/applications/puregrid/SpacetreeGridVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"


peano::applications::puregrid::SpacetreeGridVertex::SpacetreeGridVertex():
  Base() { 
  // @todo Insert your code here
}


peano::applications::puregrid::SpacetreeGridVertex::SpacetreeGridVertex(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


#ifdef Parallel
void peano::applications::puregrid::SpacetreeGridVertex::mergeWithNeighbour(const peano::applications::puregrid::SpacetreeGridVertex& neighbour, int fromRank) {
  Base::mergeWithNeighbour(neighbour,fromRank);
  // @todo Insert your code here
}
 

void peano::applications::puregrid::SpacetreeGridVertex::prepareSendToNeighbour() {
  // @todo Insert your code here
}
#endif











