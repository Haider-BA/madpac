#include "peano/applications/poisson/jacobitutorial/RegularGridCell.h"

tarch::la::Matrix<NUMBER_OF_VERTICES_PER_ELEMENT,NUMBER_OF_VERTICES_PER_ELEMENT, double> peano::applications::poisson::jacobitutorial::RegularGridCell::_elementWiseAssemblyMatrix;


void peano::applications::poisson::jacobitutorial::RegularGridCell::initStencil() {
  // I placed this code snippet into a file of its own to be able to include it
  // into the documentation, too. There's no other reason for this include.
  #include "codesnippets/Cell_initStencil.cpp-snippet"
}


double peano::applications::poisson::jacobitutorial::RegularGridCell::getDiagonalElement() {
  double cellsPerVertex = TWO_POWER_D;
  return _elementWiseAssemblyMatrix(0,0) * cellsPerVertex;
}


peano::applications::poisson::jacobitutorial::RegularGridCell::RegularGridCell():
  Base() { 
}


peano::applications::poisson::jacobitutorial::RegularGridCell::RegularGridCell(const Base::PersistentCell& argument):
  Base(argument) {
}

tarch::la::Vector<TWO_POWER_D,double>
peano::applications::poisson::jacobitutorial::RegularGridCell::applyStencil(const tarch::la::Vector<TWO_POWER_D,double>& u) {
  // I placed this code snippet into a file of its own to be able to include it
  // into the documentation, too. There's no other reason for this include.
  #include "codesnippets/Cell_applyStencil.cpp-snippet"
}
