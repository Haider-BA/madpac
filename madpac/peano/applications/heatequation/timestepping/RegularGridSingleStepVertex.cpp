#include "peano/applications/heatequation/timestepping/RegularGridSingleStepVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"
#include "peano/toolbox/stencil/StencilFactory.h"


peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::RegularGridSingleStepVertex():
  Base() {
}


peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::RegularGridSingleStepVertex(const Base::PersistentVertex& argument):
  Base(argument) {
}


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::initialiseInnerVertex(
  double thermalDiffusivity,
  double temperature,
  double rhs,
  const tarch::la::Vector<DIMENSIONS,double>& h
) {
  _vertexData.setResidual(0.0);
  _vertexData.setU(temperature);
  _vertexData.setOldU(temperature);
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


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::initialiseBoundaryVertex( double temperature ) {
  _vertexData.setResidual(0.0);
  _vertexData.setU(temperature);
  _vertexData.setOldU(temperature);
  _vertexData.setRhs(0.0);
  _vertexData.setStencil(0.0);
}


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::clearResidual() {
  _vertexData.setResidual(0.0);
}


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::setNewRhs( double rhs ) {
  _vertexData.setRhs( rhs );
}


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::setTemperature( double value ) {
  _vertexData.setU( value );
}


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::setNewOldTemperature( double value ) {
  _vertexData.setOldU( value );
}


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::incResidual( const RegularGridSingleStepVertex& vertex ) {
  _vertexData.setResidual( _vertexData.getResidual()+vertex._vertexData.getResidual() );
}


double peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::getOldTemperature() const {
  return _vertexData.getOldU();
}


 tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridSingleStepVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getRhs(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readOldU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridSingleStepVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getOldU(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridSingleStepVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU(); enddforx return result; }
 tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridSingleStepVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getResidual(); enddforx return result; }




 tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readTempP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridSingleStepVertex* const vertices)  { tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> result; dfor2(x) tarch::la::slice<TWO_POWER_D>(result,xScalar*TWO_POWER_D) = vertices[ enumerator(x) ]._vertexData.getTempP(); enddforx return result; }


 tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>  peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::readStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridSingleStepVertex* const vertices)  { tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double> result; dfor2(x) tarch::la::slice<THREE_POWER_D>(result,xScalar*THREE_POWER_D) = vertices[ enumerator(x) ]._vertexData.getStencil(); enddforx return result; }


 void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setResidual( values(xScalar) ); enddforx }




 void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::writeTempAP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>& values) { dfor2(x) tarch::la::Vector<TWO_POWER_D,double> temp; temp = tarch::la::slice<TWO_POWER_D>(values,xScalar*TWO_POWER_D); vertices[ enumerator(x) ]._vertexData.setTempAP( temp ); enddforx }


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::writeStencil(
  const peano::kernel::gridinterface::VertexEnumerator& enumerator,
  RegularGridSingleStepVertex* const vertices,
  const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>& values
) {
  dfor2(x)
    tarch::la::Vector<THREE_POWER_D,double> temp;
    temp = tarch::la::slice<THREE_POWER_D>(values,xScalar*THREE_POWER_D);
    vertices[ enumerator(x) ]._vertexData.setStencil( temp );
  enddforx
}


double peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::getTemperature() const {
  return _vertexData.getU();
}


double peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::getRhs() const {
  return _vertexData.getRhs();
}


peano::toolbox::stencil::Stencil peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::getStencil() const {
  return _vertexData.getStencil();
}


double peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::getResidual() const {
  return _vertexData.getResidual();
}


void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::copyTemperatureToOldTemperature() {
  _vertexData.setOldU( _vertexData.getU() );
}


#ifdef Parallel
void peano::applications::heatequation::timestepping::RegularGridSingleStepVertex::scaleResidual(double scaling) {
  _vertexData.setResidual( _vertexData.getResidual() * scaling );
}
#endif
