#include "peano/applications/poisson/vhhjacobi/RegularGridCell.h"


peano::toolbox::stencil::Stencil                    peano::applications::poisson::vhhjacobi::RegularGridCell::_stencil;
peano::toolbox::stencil::ElementWiseAssemblyMatrix  peano::applications::poisson::vhhjacobi::RegularGridCell::_elementWiseAssemblyMatrix;


peano::applications::poisson::vhhjacobi::RegularGridCell::RegularGridCell():
  Base() { 
}


peano::applications::poisson::vhhjacobi::RegularGridCell::RegularGridCell(const Base::PersistentCell& argument):
  Base(argument) {
}


void peano::applications::poisson::vhhjacobi::RegularGridCell::initStencil() {
  #if defined(Dim2)
    assignList(_stencil) =
    -1.0/3.0, -1.0/3.0, -1.0/3.0,
    -1.0/3.0,  8.0/3.0, -1.0/3.0,
    -1.0/3.0, -1.0/3.0, -1.0/3.0;
  #elif defined(Dim3)
    assignList(_stencil) =
    -1.0/12.0, -2.0/12.0, -1.0/12.0, -2.0/12.0,  0.0/12.0, -2.0/12.0, -1.0/12.0, -2.0/12.0, -1.0/12.0,
    -2.0/12.0,  0.0/12.0, -2.0/12.0,  0.0/12.0, 32.0/12.0,  0.0/12.0, -2.0/12.0,  0.0/12.0, -2.0/12.0,
    -1.0/12.0, -2.0/12.0, -1.0/12.0, -2.0/12.0,  0.0/12.0, -2.0/12.0, -1.0/12.0, -2.0/12.0, -1.0/12.0;
  #else
    assertionMsg( false, "Jacobi for d>3 is not implemented!" );
  #endif

  peano::toolbox::stencil::ElementMatrix elementMatrix;

  _elementWiseAssemblyMatrix = elementMatrix.getElementWiseAssemblyMatrix(_stencil);
}


double peano::applications::poisson::vhhjacobi::RegularGridCell::getDiagonalElement() {
  double cellsPerVertex = TWO_POWER_D;
  return _elementWiseAssemblyMatrix(0,0) * cellsPerVertex;
}


tarch::la::Vector<TWO_POWER_D,double>
peano::applications::poisson::vhhjacobi::RegularGridCell::applyStencil(const tarch::la::Vector<TWO_POWER_D,double>& u) {
  tarch::la::Vector<TWO_POWER_D,double> result;
  tarch::la::multiply(_elementWiseAssemblyMatrix, u, result);
  return result;
}


peano::toolbox::stencil::Stencil peano::applications::poisson::vhhjacobi::RegularGridCell::getStencil() {
  return _stencil;
}

