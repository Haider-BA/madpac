#include "peano/kernel/regulargrid/Grid.h"

tarch::la::Vector<DIMENSIONS,double> peano::kernel::regulargrid::getH(
  const tarch::la::Vector<DIMENSIONS,double>&  domainSize,
  const tarch::la::Vector<DIMENSIONS,int>&     gridPoints
) {
  tarch::la::Vector<DIMENSIONS,double> result;
  for (int d=0; d<DIMENSIONS; d++) {
    result(d) = domainSize(d);
    double numberOfCells = gridPoints(d)-1;
    result(d) = result(d) / numberOfCells;
  }
  return result;
}
