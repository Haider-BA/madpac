#include "peano/applications/diffusionequation/explicittimestepping/RegularGridVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"
#include "peano/toolbox/stencil/StencilFactory.h"


peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::RegularGridVertex():
  Base() { 
  // @todo Insert your code here
}


peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::RegularGridVertex(const Base::PersistentVertex& argument):
  Base(argument) {
  // @todo Insert your code here
}


 tarch::la::Vector<TWO_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getRhs(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getResidual(); enddforx return result; }


 tarch::la::Vector<TWO_POWER_D_TIMES_D,double>  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readLinearSurplus(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices)  { tarch::la::Vector<TWO_POWER_D_TIMES_D,double> result; dfor2(x) tarch::la::slice<DIMENSIONS>(result,xScalar*DIMENSIONS) = vertices[ enumerator(x) ]._vertexData.getLinearSurplus(); enddforx return result; }




 tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>  peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::readStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices)  { tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double> result; dfor2(x) tarch::la::slice<THREE_POWER_D>(result,xScalar*THREE_POWER_D) = vertices[ enumerator(x) ]._vertexData.getStencil(); enddforx return result; }


 void peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setResidual( values(xScalar) ); enddforx }


 void peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::writeLinearSurplus(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_D,double>& values) { dfor2(x) tarch::la::Vector<DIMENSIONS,double> temp; temp = tarch::la::slice<DIMENSIONS>(values,xScalar*DIMENSIONS); vertices[ enumerator(x) ]._vertexData.setLinearSurplus( temp ); enddforx }




 void peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::initialiseInnerVertex(
   double thermalDiffusivity,
   double temperature,
   double rhs,
   const tarch::la::Vector<DIMENSIONS,double>& h
 ) {
   _vertexData.setResidual(0.0);
   _vertexData.setU(temperature);
   _vertexData.setRhs(rhs);

   peano::toolbox::stencil::Stencil stencil;
   #if defined(Dim2)
   stencil =
     thermalDiffusivity * // could be dth entry if it were an anisotropic operator
       peano::toolbox::stencil::StencilFactory::stencilProduct(
         peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(h(0)),
         peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(1))
       )
     + thermalDiffusivity * // could be dth entry if it were an anisotropic operator
       peano::toolbox::stencil::StencilFactory::stencilProduct(
         peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(0)),
         peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(h(1))
       );
   #elif defined(Dim3)
   stencil =
     thermalDiffusivity * // could be dth entry if it were an anisotropic operator
       peano::toolbox::stencil::StencilFactory::stencilProduct(
         peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(h(0)),
         peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(1)),
         peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(2))
       )
     + thermalDiffusivity * // could be dth entry if it were an anisotropic operator
       peano::toolbox::stencil::StencilFactory::stencilProduct(
         peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(0)),
         peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(h(1)),
         peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(2))
       );
     + thermalDiffusivity * // could be dth entry if it were an anisotropic operator
       peano::toolbox::stencil::StencilFactory::stencilProduct(
         peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(0)),
         peano::toolbox::stencil::StencilFactory::get1DMassStencil(h(2)),
         peano::toolbox::stencil::StencilFactory::get1DLaplaceStencil(h(2))
       );
   #endif
  _vertexData.setStencil(stencil);
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::initialiseBoundaryVertex( double temperature ) {
  _vertexData.setResidual(0.0);
  _vertexData.setU(temperature);
  _vertexData.setRhs(0.0);
  _vertexData.setStencil(0.0);
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::getTemperature() const {
  return _vertexData.getU();
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::getRhs() const {
  return _vertexData.getRhs();
}


peano::toolbox::stencil::Stencil peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::getStencil() const {
  return _vertexData.getStencil();
}


double peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::getResidual() const {
  return _vertexData.getResidual();
}

#ifdef Parallel
void peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::scaleResidual(double scaling) {
  _vertexData.setResidual( _vertexData.getResidual() * scaling );
}
#endif


void peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::clearResidual() {
  _vertexData.setResidual(0.0);
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::setNewRhs( double rhs ) {
  _vertexData.setRhs( rhs );
}


void peano::applications::diffusionequation::explicittimestepping::RegularGridVertex::setTemperature( double value ) {
  _vertexData.setU( value );
}
