#include "peano/applications/heatequation/timestepping/Solver.h"
#include "peano/utils/Globals.h"
#include "peano/utils/Loop.h"
#include "peano/toolbox/stencil/StencilFactory.h"


tarch::logging::Log peano::applications::heatequation::timestepping::Solver::_log( "peano::applications::heatequation::timestepping::Solver" );


peano::applications::heatequation::timestepping::Solver::Solver() {
  #ifdef Dim2
  _dLinearInterpolation =
    peano::toolbox::stencil::StencilFactory::stencilProduct(
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil()
    );
  #elif Dim3
  _dLinearInterpolation =
    peano::toolbox::stencil::StencilFactory::stencilProduct(
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil(),
      peano::toolbox::stencil::StencilFactory::get1DLinearInterpolationStencil()
    );
  #else
  assertionMsg( false, "dimension not supported" );
  #endif
}


void peano::applications::heatequation::timestepping::Solver::computeResidualOnCell(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex * const        fineGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         fineGridVerticesEnumerator
) {
  logTraceIn( "computeResidualOnCell(...)" );

  tarch::la::Vector<TWO_POWER_D,double> residual =
    peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readResidual(fineGridVerticesEnumerator,fineGridVertices);

  tarch::la::Vector<TWO_POWER_D,double> rhs =
    peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readRhs(fineGridVerticesEnumerator,fineGridVertices);

  tarch::la::Vector<TWO_POWER_D,double> oldTimeStepContribution =
    computeResidualContributionForImplicitEulerStepFromRhs(
      rhs,
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readOldU(fineGridVerticesEnumerator,fineGridVertices),
      fineGridVerticesEnumerator.getCellSize()
    );

  tarch::la::Vector<TWO_POWER_D,double> currentTimeStepContribution =
    computeResidualContributionForImplicitEulerStepFromSolution(
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readU(fineGridVerticesEnumerator,fineGridVertices),
      fineGridVerticesEnumerator.getCellSize(),
      peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::readStencil(fineGridVerticesEnumerator,fineGridVertices)
    );

  residual += currentTimeStepContribution;

  const double scalingOfRhs = 1.0 / TWO_POWER_D;
  dfor2(k)
    if (fineGridVertices[fineGridVerticesEnumerator(k)].getRefinementControl()==peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::Records::Refined) {
      residual(kScalar) += scalingOfRhs * rhs(kScalar);
      logDebug( "computeResidualOnCell(...)", "residual entry " << kScalar << " is determinded by rhs and current time step's approximation only" );
    }
    else {
      residual(kScalar) += oldTimeStepContribution( kScalar );
      logDebug( "computeResidualOnCell(...)", "residual entry " << kScalar << " depends on old time step's value, rhs, and current approximation" );
    }

    assertion1(residual(kScalar)< std::numeric_limits<double>::infinity(), fineGridVertices[ fineGridVerticesEnumerator(k) ].toString() );
  enddforx

  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex::writeResidual(
    fineGridVerticesEnumerator,
    fineGridVertices,
    residual
  );

  logTraceOutWith1Argument( "computeResidualOnCell(...)", residual );
}


void peano::applications::heatequation::timestepping::Solver::interpolateWithDLinearShapeFunctions(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  logTraceInWith2Arguments( "interpolateWithDLinearShapeFunctions(...)", fineGridVertex, fineGridPositionOfVertex );

  tarch::la::Vector<TWO_POWER_D,double> coarseGridNewTemperature = SpacetreeGridSingleStepVertex::readU(coarseGridVerticesEnumerator,coarseGridVertices);
  tarch::la::Vector<TWO_POWER_D,double> coarseGridOldTemperature = SpacetreeGridSingleStepVertex::readOldU(coarseGridVerticesEnumerator,coarseGridVertices);
  tarch::la::Vector<TWO_POWER_D,double> coarseGridRhs            = SpacetreeGridSingleStepVertex::readRhs(coarseGridVerticesEnumerator,coarseGridVertices);

  #ifdef Asserts
  bool hangingNodeIsInside = true;
  dfor2(k)
    hangingNodeIsInside &= !coarseGridVertices[ coarseGridVerticesEnumerator(k) ].isOutside();
  enddforx
  assertion5(
    !hangingNodeIsInside || tarch::la::max(coarseGridNewTemperature)<std::numeric_limits<double>::infinity(),
    coarseGridNewTemperature,
    coarseGridVertices[ coarseGridVerticesEnumerator(0) ].toString(),
    coarseGridVertices[ coarseGridVerticesEnumerator(1) ].toString(),
    coarseGridVertices[ coarseGridVerticesEnumerator(2) ].toString(),
    coarseGridVertices[ coarseGridVerticesEnumerator(3) ].toString()
  );
  #endif

  double interpolatedNewTemperature = 0.0;
  double interpolatedOldTemperature = 0.0;

  dfor2(k)
    interpolatedNewTemperature+=
      coarseGridNewTemperature(kScalar) *
      _multigrid.computeContributionWeightOfInterGridTransfer(
        k,
        _dLinearInterpolation,
        fineGridPositionOfVertex
      );
    interpolatedOldTemperature+=
      coarseGridOldTemperature(kScalar) *
      _multigrid.computeContributionWeightOfInterGridTransfer(
        k,
        _dLinearInterpolation,
        fineGridPositionOfVertex
      );
  enddforx

  fineGridVertex.setTemperature(       interpolatedNewTemperature );
  fineGridVertex.setNewOldTemperature( interpolatedOldTemperature );

  logTraceOutWith1Argument( "interpolateWithDLinearShapeFunctions(...)", fineGridVertex );
}


void peano::applications::heatequation::timestepping::Solver::computeHierarchicalSurplus(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&               fineGridVertex,
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex const * const  coarseGridVertices,
  const peano::kernel::gridinterface::VertexEnumerator&                                         coarseGridVerticesEnumerator,
  const tarch::la::Vector<DIMENSIONS,int>&                                                      fineGridPositionOfVertex
) {
  tarch::la::Vector<TWO_POWER_D,double> coarseGridValues = SpacetreeGridSingleStepVertex::readU(coarseGridVerticesEnumerator,coarseGridVertices);

  dfor2(k)
    fineGridVertex.setTemperature(
      fineGridVertex.getTemperature()-
      coarseGridValues(kScalar) *
      _multigrid.computeContributionWeightOfInterGridTransfer(
        k,
        coarseGridVertices[ coarseGridVerticesEnumerator(k) ].getProlongationStencil(),
        fineGridPositionOfVertex
      )
    );
  enddforx
}


void peano::applications::heatequation::timestepping::Solver::makeNewTemperatureOldTemperatureDueToTimeTransition(
  peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex&  fineGridVertex,
  const tarch::la::Vector<DIMENSIONS,double>&                                      h
) {
  _smoother.updateUpdateFields(fineGridVertex.getTemperature()-fineGridVertex.getOldTemperature(),tarch::la::volume(h));
  fineGridVertex.copyTemperatureToOldTemperature();
}
