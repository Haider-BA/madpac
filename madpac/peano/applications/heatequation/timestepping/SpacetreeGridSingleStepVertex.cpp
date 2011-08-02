#include "peano/applications/heatequation/timestepping/SpacetreeGridSingleStepVertex.h"
#include "peano/utils/Loop.h"
#include "peano/kernel/gridinterface/Checkpoint.h"
#include "tarch/la/WrappedVector.h"
#include "peano/toolbox/stencil/StencilFactory.h"


peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex():
  Base() { 
  _vertexData.setU(0.0);
  _vertexData.setOldU(0.0);
}


peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::SpacetreeGridSingleStepVertex(const Base::PersistentVertex& argument):
  Base(argument) {
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::initialiseInnerVertex(
  double thermalDiffusivity,
  double temperature,
  double rhs,
  const tarch::la::Vector<DIMENSIONS,double>& h
) {
  assertion1( temperature< std::numeric_limits<double>::infinity(), toString() );
  _vertexData.setU(temperature);
  _vertexData.setOldU(temperature);
  initialiseInnerVertex(thermalDiffusivity,rhs,h);
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::initialiseInnerVertex(
  double                                       thermalDiffusivity,
  double                                       rhs,
  const tarch::la::Vector<DIMENSIONS,double>&  h
) {
  assertion1(_vertexData.getU()< std::numeric_limits<double>::infinity(), toString() );

  _vertexData.setResidual(0.0);
  _vertexData.setRhs(rhs);
  _vertexData.setLinearSurplus(0.0);

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
  _vertexData.setProlongation(
    peano::toolbox::stencil::StencilFactory::stencilProduct(
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil()
    )
  );
  _vertexData.setRestriction(
    peano::toolbox::stencil::StencilFactory::stencilProduct(
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil()
    )
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
  _vertexData.setProlongation(
    peano::toolbox::stencil::StencilFactory::stencilProduct(
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil()
    )
  );
  _vertexData.setRestriction(
    peano::toolbox::stencil::StencilFactory::stencilProduct(
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil()
    )
  );
  #endif
  _vertexData.setStencil(stencil);
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::initialiseBoundaryVertex( double temperature ) {
  _vertexData.setResidual(0.0);
  _vertexData.setU(temperature);
  _vertexData.setOldU(temperature);
  _vertexData.setRhs(0.0);
  _vertexData.setStencil(0.0);
  _vertexData.setLinearSurplus(0.0);
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::clearSurplusMeasurements() {
  _vertexData.setLinearSurplus(0.0);
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::clearResidual() {
  _vertexData.setResidual(0.0);
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::setTemperature( double value ) {
  assertion1(value< std::numeric_limits<double>::infinity(), toString() );
  _vertexData.setU( value );
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::setNewOldTemperature( double value ) {
  assertion1(value< std::numeric_limits<double>::infinity(), toString() );
  _vertexData.setOldU(value);
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::setNewRhs( double rhs ) {
  _vertexData.setRhs( rhs );
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::initialiseHangingNode() {
  _vertexData.setResidual(0.0);
  _vertexData.setU(0.0);
  _vertexData.setOldU(0.0);
  _vertexData.setRhs(0.0);
  _vertexData.setStencil(0.0);
  _vertexData.setLinearSurplus(0.0);
}



tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getRhs(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readOldU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getOldU(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getU(); enddforx return result; }
tarch::la::Vector<TWO_POWER_D,double> peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices) { tarch::la::Vector<TWO_POWER_D,double> result; dfor2(x) result(xScalar) = vertices[ enumerator(x) ]._vertexData.getResidual(); enddforx return result; }




tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readTempP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices)  { tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> result; dfor2(x) tarch::la::slice<TWO_POWER_D>(result,xScalar*TWO_POWER_D) = vertices[ enumerator(x) ]._vertexData.getTempP(); enddforx return result; }


tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices)  { tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double> result; dfor2(x) tarch::la::slice<THREE_POWER_D>(result,xScalar*THREE_POWER_D) = vertices[ enumerator(x) ]._vertexData.getStencil(); enddforx return result; }


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setResidual( values(xScalar) ); enddforx }


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values ) { dfor2(x) vertices[ enumerator(x) ]._vertexData.setRhs( values(xScalar) ); enddforx }


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeTempAP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>& values) { dfor2(x) tarch::la::Vector<TWO_POWER_D,double> temp; temp = tarch::la::slice<TWO_POWER_D>(values,xScalar*TWO_POWER_D); vertices[ enumerator(x) ]._vertexData.setTempAP( temp ); enddforx }


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>& values) { dfor2(x) tarch::la::Vector<THREE_POWER_D,double> temp; temp = tarch::la::slice<THREE_POWER_D>(values,xScalar*THREE_POWER_D); vertices[ enumerator(x) ]._vertexData.setStencil( temp ); enddforx }


double peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::getTemperature() const {
  return _vertexData.getU();
}


double peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::getOldTemperature() const {
  return _vertexData.getOldU();
}


double peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::getRhs() const {
  return _vertexData.getRhs();
}


double peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::getResidual() const {
  return _vertexData.getResidual();
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::copyTemperatureToOldTemperature() {
  _vertexData.setOldU( _vertexData.getU() );
}

peano::toolbox::stencil::Stencil peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::getStencil() const {
  return _vertexData.getStencil();
}


tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::getProlongationStencil() const {
  return _vertexData.getProlongation();
}


tarch::la::Vector<FIVE_POWER_D,double> peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::getRestrictionStencil() const {
  return _vertexData.getRestriction();
}


tarch::la::Vector<TWO_POWER_D_TIMES_D,double>
peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readLinearSurplus(
  const peano::kernel::gridinterface::VertexEnumerator&  enumerator,
  const SpacetreeGridSingleStepVertex* const             vertices
)  {
  tarch::la::Vector<TWO_POWER_D_TIMES_D,double> result;
  dfor2(x)
    tarch::la::slice<DIMENSIONS>(result,xScalar*DIMENSIONS) = vertices[ enumerator(x) ]._vertexData.getLinearSurplus();
  enddforx
  return result;
}


void peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeLinearSurplus(
  const peano::kernel::gridinterface::VertexEnumerator& enumerator,
  SpacetreeGridSingleStepVertex* const vertices,
  const tarch::la::Vector<TWO_POWER_D_TIMES_D,double>& values
) {
  dfor2(x)
    tarch::la::Vector<DIMENSIONS,double> temp;
    temp = tarch::la::slice<DIMENSIONS>(values,xScalar*DIMENSIONS);
    vertices[ enumerator(x) ]._vertexData.setLinearSurplus( temp );
  enddforx
}


tarch::la::Vector<DIMENSIONS,double> peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::getLinearSurplus() const {
  return _vertexData.getLinearSurplus();
}
