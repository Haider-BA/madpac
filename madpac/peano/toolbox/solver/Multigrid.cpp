#include "peano/toolbox/solver/Smoother.h"
#include "peano/toolbox/solver/Multigrid.h"



tarch::logging::Log peano::toolbox::solver::Multigrid::_log( "peano::toolbox::solver::Multigrid" );


peano::toolbox::solver::Multigrid::Multigrid() {
}


peano::toolbox::solver::Multigrid::~Multigrid() {
}


void peano::toolbox::solver::Multigrid::setup() {
}


void peano::toolbox::solver::Multigrid::getPositionIn5PowDStencilRelativeToKthCoarseVertex(
      const tarch::la::Vector<DIMENSIONS,int>&       coarseGridVertexPosition,
      const tarch::la::Vector<DIMENSIONS,int>&       fineGridVertexPosition,
      tarch::la::Vector<DIMENSIONS,int>&             entryOfCoarseGridStencil,
      int&                                           indexOfCoarseGridStencil,
      bool&                                          coarseGridStencilInfluencesFineGridVertex
) {
  indexOfCoarseGridStencil                  = 0;
  coarseGridStencilInfluencesFineGridVertex = true;
  int baseOfStencilEntry                    = 1;
  for (int d=0; d<DIMENSIONS; d++) {
    assertion(coarseGridVertexPosition(d)>=0 && coarseGridVertexPosition(d)<=1);
    if (coarseGridVertexPosition(d)==1) {
      entryOfCoarseGridStencil(d) = 2 - (3-fineGridVertexPosition(d));
    }
    else {
      entryOfCoarseGridStencil(d) = 2 + fineGridVertexPosition(d);
    }
    coarseGridStencilInfluencesFineGridVertex &= entryOfCoarseGridStencil(d)>=0 && entryOfCoarseGridStencil(d)<5;
    indexOfCoarseGridStencil                  += entryOfCoarseGridStencil(d) * baseOfStencilEntry;
    baseOfStencilEntry                        *= 5;
  }
}

int peano::toolbox::solver::Multigrid::getPositionInCellInterGridTransferOperatorVector(
    const int coarseGridVertexNumber,
    const int positionInOperator
){
  return coarseGridVertexNumber*FIVE_POWER_D + positionInOperator;
}

int peano::toolbox::solver::Multigrid::getPositionInCellStencilVector(
    const int coarseGridVertexNumber,
    const int positionInOperator
){
  return coarseGridVertexNumber*THREE_POWER_D + positionInOperator;
}

double peano::toolbox::solver::Multigrid::computeContributionWeightOfInterGridTransfer(
  const tarch::la::Vector<DIMENSIONS,int>&       currentCoarseGridVertex,
  const tarch::la::Vector<FIVE_POWER_D,double>&  currentCoarseGridVertexsRestrictionMatrix,
  const tarch::la::Vector<DIMENSIONS,int>&       fineGridPositionOfVertex
) {
  logTraceInWith3Arguments( "computeContributionWeightOfInterGridTransfer(...)", currentCoarseGridVertex, currentCoarseGridVertexsRestrictionMatrix, fineGridPositionOfVertex );

  double result;

  tarch::la::Vector<DIMENSIONS,int>  positionRelativeToKthCoarseVertex;
  bool                               isInfluencedByVertexK;

  int stencilEntry;
  getPositionIn5PowDStencilRelativeToKthCoarseVertex(
    currentCoarseGridVertex,
    fineGridPositionOfVertex,
    positionRelativeToKthCoarseVertex,
    stencilEntry,
    isInfluencedByVertexK
  );

  if (isInfluencedByVertexK) {
    int baseOfGridVectorEntry = 1;
    int coarseGridVectorEntry = 0;
    for (int d=0; d<DIMENSIONS; d++) {
      coarseGridVectorEntry += currentCoarseGridVertex(d) * baseOfGridVectorEntry;
      baseOfGridVectorEntry *= 2;
    }
    _numberOfStencilEvaluations++;
    result = currentCoarseGridVertexsRestrictionMatrix(stencilEntry);
  }
  else {
    result = 0.0;
  }

  logTraceOutWith1Argument( "computeContributionWeightOfInterGridTransfer(...)", result );

  return result;
}




void peano::toolbox::solver::Multigrid::makeBlackboxTransferOperator(tarch::la::Vector<THREE_POWER_D,double> stencil){

}


int peano::toolbox::solver::Multigrid:: getNumberOfStencilUpdates() const {
  return _numberOfStencilEvaluations;
}


void peano::toolbox::solver::Multigrid::clearNumberOfStencilUpdates() {
  _numberOfStencilEvaluations = 0;
}

void peano::toolbox::solver::Multigrid::addValueToStencilEntry(
  tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>& verticesStencils,
  const int index,
  double value){

  verticesStencils(index) = verticesStencils(index) + value;

}

void peano::toolbox::solver::Multigrid::addValueToStencilEntry(
  tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>& verticesStencils,
  const int vertexNumber,
  const int indexInStencil,
  double value){

  int index = getPositionInCellStencilVector(vertexNumber, indexInStencil);

  verticesStencils(index) = verticesStencils(index) + value;

}
