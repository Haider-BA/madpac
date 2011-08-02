#include "peano/toolbox/solver/SurplusCalculator.h"
#include "peano/toolbox/stencil/StencilFactory.h"
#include "tarch/la/MatrixMatrixOperations.h"
#include "tarch/la/VectorOperations.h"


tarch::logging::Log peano::toolbox::solver::SurplusCalculator::_log( "peano::toolbox::solver::SurplusCalculator" );


std::string peano::toolbox::solver::SurplusCalculator::toString( const Action& action ) {
  switch (action) {
    case Refine:
      return "Refine";
    case Delete:
      return "Delete";
    case NoAction:
      return "NoAction";
  }

  return "<error>";
}


peano::toolbox::solver::SurplusCalculator::SurplusCalculator (
  double refinementThreshold,
  double deleteThreshold,
  double minimumMeshSize,
  double maximumMeshSize,
  int    numberOfBins,
  int    maxNumberOfRefinements
):
  _refinementThreshold(refinementThreshold),
  _deleteThreshold(deleteThreshold),
  _numberOfBins(numberOfBins),
  _totalNumberOfSurplusEvaluations(0),
  _maxNumberOfRefinements(maxNumberOfRefinements),
  _surplusMaximumOnFineGrid(0.0),
  _minimumMeshSize(minimumMeshSize),
  _maximumMeshSize(maximumMeshSize) {

  assertion1( _maxNumberOfRefinements>0, _maxNumberOfRefinements );
  assertion1( _deleteThreshold>=0.0, _deleteThreshold );
  assertion1( _refinementThreshold>=0.0, _refinementThreshold );
  assertion2( _deleteThreshold + _refinementThreshold <= 1.0, _deleteThreshold, _refinementThreshold );
  assertion1( _numberOfBins > 0 , _numberOfBins );

  _bins = new Bin[_numberOfBins];

  tarch::la::Vector<3,double> meanValueStencil = peano::toolbox::stencil::StencilFactory::get1DMeanValueStencil();
  tarch::la::Vector<3,double> massStencil      = peano::toolbox::stencil::StencilFactory::get1DMassStencilWithoutHScaling();

  peano::toolbox::stencil::ElementMatrix elementMatrix;

  #ifdef Dim2
  tarch::la::assign(_elementMatrix[0]) =
    elementMatrix.getElementWiseAssemblyMatrix(
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        meanValueStencil,
        massStencil
      )
    );
  _elementMatrix[1] =
    elementMatrix.getElementWiseAssemblyMatrix(
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        massStencil,
        meanValueStencil
      )
    );
  #elif Dim3
  _elementMatrix[0] =
    elementMatrix.getElementWiseAssemblyMatrix(
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        meanValueStencil,
        massStencil,
        massStencil
      )
    );
  _elementMatrix[1] =
    elementMatrix.getElementWiseAssemblyMatrix(
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        massStencil,
        meanValueStencil,
        massStencil
      )
    );
  _elementMatrix[2] =
    elementMatrix.getElementWiseAssemblyMatrix(
      peano::toolbox::stencil::StencilFactory::stencilProduct(
        massStencil,
        massStencil,
        meanValueStencil
      )
    );
  #else
  assertionMsg( false, "dimension not supported");
  #endif
}


peano::toolbox::solver::SurplusCalculator::~SurplusCalculator() {
  assertion( _bins!=0 );
  delete [] _bins;
  _bins = 0;
}


void peano::toolbox::solver::SurplusCalculator::clearMeasurements() {
  if (_bins[_numberOfBins-1]._numberOfEntries==0) {
    _surplusMaximumOnFineGrid /= 2.0;
  }
  logDebug( "clearMeasurements()", "new surplus maxOfLinearSurplusimum=" << _surplusMaximumOnFineGrid );

  double numberOfEntriesToRefine = _refinementThreshold * _totalNumberOfSurplusEvaluations;

  logDebug( "clearMeasurements()", "number of entries to refine: " << numberOfEntriesToRefine << ", ref-threshold=" << _refinementThreshold << ", surplus-evaluations=" << _totalNumberOfSurplusEvaluations );

  assertion( numberOfEntriesToRefine>=0 );
  int currentBin = _numberOfBins-1;
  while (currentBin>=0) {
    if (numberOfEntriesToRefine>0) {
      _bins[currentBin]._associatedAction  = Refine;
      numberOfEntriesToRefine             -= _bins[currentBin]._numberOfEntries;
    }
    else {
      _bins[currentBin]._associatedAction  = NoAction;
    }
    currentBin--;
  }

  double numberOfEntriesToDelete = _deleteThreshold * _totalNumberOfSurplusEvaluations;

  logDebug( "clearMeasurements()", "number of entries to delete: " << numberOfEntriesToDelete << ", del-threshold=" << _deleteThreshold << ", surplus-evaluations=" << _totalNumberOfSurplusEvaluations );

  currentBin = 0;
  while (currentBin<_numberOfBins) {
    if (numberOfEntriesToDelete>0 && _bins[currentBin]._associatedAction == NoAction) {
      _bins[currentBin]._associatedAction  = Delete;
      numberOfEntriesToDelete             -= _bins[currentBin]._numberOfEntries;
    }
    if (numberOfEntriesToDelete>0 && _bins[currentBin]._associatedAction == Refine) {
      _bins[currentBin]._associatedAction  = NoAction;
      numberOfEntriesToDelete             -= _bins[currentBin]._numberOfEntries;
    }

    currentBin++;
  }

  for (int i=0; i<_numberOfBins; i++) {
    logDebug( "clearMeasurements()", "bin " << i << ": " <<  toString(_bins[i]._associatedAction) << "; entries=" << _bins[i]._numberOfEntries );
    _bins[i]._numberOfEntries   = 0;
  }

  _totalNumberOfSurplusEvaluations = 0.0;
}


tarch::la::Vector<TWO_POWER_D_TIMES_D,double>
peano::toolbox::solver::SurplusCalculator::getNewLinearSurplus(
  const tarch::la::Vector<TWO_POWER_D,double>&          u,
  const tarch::la::Vector<TWO_POWER_D_TIMES_D,double>&  linearSurplusSoFar
) const {
  logTraceInWith2Arguments( "getNewLinearSurplus(...)", u, linearSurplusSoFar );

  assertion(tarch::la::max(u)<std::numeric_limits<double>::infinity());
  assertion(tarch::la::max(u)==tarch::la::max(u));

  tarch::la::Vector<TWO_POWER_D_TIMES_D,double> result;
  for (int d=0; d<DIMENSIONS; d++) {
    tarch::la::Vector<TWO_POWER_D,double> update;
    tarch::la::multiply(_elementMatrix[d], u, update);

    // What I really would like to write is:
    // tarch::la::Vector<TWO_POWER_D,double> update = _elementMatrix[d] * u;

    for (int i=0; i<TWO_POWER_D; i++) {
      result(i*DIMENSIONS+d) = update(d) + linearSurplusSoFar(i*DIMENSIONS+d);
    }
  }

  logTraceOutWith1Argument( "getNewLinearSurplus(...)", result );
  return result;
}


peano::toolbox::solver::SurplusCalculator::Action peano::toolbox::solver::SurplusCalculator::analyse(
  const tarch::la::Vector<DIMENSIONS,double>&   linearSurplus,
  double                                        residual,
  bool                                          isRefined,
  const tarch::la::Vector<DIMENSIONS,double>&   h
) {
  logTraceInWith1Argument( "analyse(...)", linearSurplus );

  // @todo Das wuerde ich gerne schreiben, aber es geht wieder nicht:
// double maxOfLinearSurplus = tarch::la::max(tarch::la::abs(linearSurplus));
  tarch::la::Vector<DIMENSIONS,double> tmp;
  tarch::la::abs(linearSurplus,tmp);
  double maxOfLinearSurplus = tarch::la::max(tmp);

  double maxOfH             = tarch::la::max(h);

  // minimum mesh size -> if it's too fine, coarse again
  if ( maxOfH < _minimumMeshSize && isRefined ) {
    return Delete;
  }

  if ( maxOfH > _maximumMeshSize && !isRefined ) {
    return Refine;
  }

  if (
    maxOfLinearSurplus == std::numeric_limits<double>::infinity() ||
    residual > maxOfLinearSurplus
  ) {
    // coarse grid point of an inhomogeneously refined region or solver has not
    // converged yet
    logTraceOutWith1Argument("analyse(...)", NoAction);
    return NoAction;
  }

  if (maxOfLinearSurplus>_surplusMaximumOnFineGrid && !isRefined) {
    _surplusMaximumOnFineGrid = maxOfLinearSurplus;
  }

  if (_surplusMaximumOnFineGrid==0.0) {
    return NoAction;
  }

  int bin = std::floor( maxOfLinearSurplus/_surplusMaximumOnFineGrid * _numberOfBins );
  if (bin>=_numberOfBins) {
    bin = _numberOfBins-1;
  }

  assertion5( bin>=0, bin, maxOfLinearSurplus, _surplusMaximumOnFineGrid, _numberOfBins, linearSurplus );
  assertion5( bin<=_numberOfBins, bin, maxOfLinearSurplus, _surplusMaximumOnFineGrid, _numberOfBins, linearSurplus );

  _bins[bin]._numberOfEntries++;
  _totalNumberOfSurplusEvaluations++;

  Action result = _bins[bin]._associatedAction;
  if (result==Refine && _totalNumberOfSurplusEvaluations>_maxNumberOfRefinements) {
    result = NoAction;
  }
  if (result==Refine && isRefined) {
    result = NoAction;
  }
  if (result==Refine && maxOfH/3.0 < _minimumMeshSize) {
    result = NoAction;
  }
  if (result==Delete && !isRefined) {
    result = NoAction;
  }
  if (result==Delete && maxOfH*3.0 > _maximumMeshSize) {
    result = NoAction;
  }

  logTraceOutWith1Argument("analyse(...)", result);
  return result;
}


tarch::la::Vector<TWO_POWER_D_TIMES_D,double> peano::toolbox::solver::SurplusCalculator::getLinearSurplusContributionFromFineGrid(
  const tarch::la::Vector<DIMENSIONS,double>&  linearSurplusOfFineGridVertex,
  bool                                         fineGridVertexIsUnrefined
) const {
  return tarch::la::Vector<TWO_POWER_D_TIMES_D,double>(
    fineGridVertexIsUnrefined ? tarch::la::max(linearSurplusOfFineGridVertex) : std::numeric_limits<double>::infinity()
  );
}


void peano::toolbox::solver::SurplusCalculator::setMinMaxMeshWidth( double minimumMeshSize, double maximumMeshSize ) {
  assertion( minimumMeshSize <= maximumMeshSize );
  _minimumMeshSize = minimumMeshSize;
  _maximumMeshSize = maximumMeshSize;
}


double peano::toolbox::solver::SurplusCalculator::getMaximumMeshWidth() const {
  return _maximumMeshSize;
}
