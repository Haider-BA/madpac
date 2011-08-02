#include "peano/toolbox/stencil/Stencil.h"


int peano::toolbox::stencil::getStencilEntryLinearisedIndex( const tarch::la::Vector<DIMENSIONS,int>  stencilEntry) {
  int result = 0;
  int base   = 1;

  for (int d=0; d<DIMENSIONS; d++) {
    result += stencilEntry(d) * base;
    base *= 3;
  }

  return result;
}
