#include "peano/toolbox/solver/PetrovGalerkin.h"


tarch::logging::Log peano::toolbox::solver::PetrovGalerkin::_log("peano::toolbox::solver::PetrovGalerkin");


peano::toolbox::solver::PetrovGalerkin::PetrovGalerkin(){
}


peano::toolbox::solver::PetrovGalerkin::~PetrovGalerkin(){
}

tarch::la::Vector<TWO_POWER_D,double> peano::toolbox::solver::PetrovGalerkin::calculateTempP(
  const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&     coarseGridVerticesP,
  const tarch::la::Vector<DIMENSIONS,int>&                             fineGridPositionOfVertex
){
  logTraceInWith2Arguments( "calculateTempP(...)", coarseGridVerticesP, fineGridPositionOfVertex );

  tarch::la::Vector<TWO_POWER_D,double> result;

    dfor2(k) // run over all 2^d coarse grid (parent) vertices
      tarch::la::Vector<DIMENSIONS,int>  entryOfCoarseGridStencil;
      bool                               coarseGridStencilInfluencesFineGridVertex;
      int                                indexOfCoarseGridStencil;

      peano::toolbox::solver::Multigrid::getPositionIn5PowDStencilRelativeToKthCoarseVertex(
        k,
        fineGridPositionOfVertex,
        entryOfCoarseGridStencil,
        indexOfCoarseGridStencil,
        coarseGridStencilInfluencesFineGridVertex
      );

      int indexInP = peano::toolbox::solver::Multigrid::getPositionInCellInterGridTransferOperatorVector(kScalar, indexOfCoarseGridStencil);

      if (coarseGridStencilInfluencesFineGridVertex) {
        result(kScalar) = coarseGridVerticesP(indexInP);
      }
    enddforx

    logTraceOutWith1Argument( "calculateTempP(...)", result );

    return result;
}
/*
tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> peano::toolbox::solver::PetrovGalerkin::calculateTempP(
  const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&     coarseGridVerticesP,
  const tarch::la::Vector<TWO_POWER_D_TIMES_DIMENSIONS,int>&           fineGridVerticesPositions
){
  logTraceInWith2Arguments( "calculateTempP(...)", coarseGridVerticesP, fineGridVerticesPositions );

  tarch::la::Vector<TWO_POWER_D_TIMES_,double> result;

  dfor2(l)
    tarch::la::Vector<DIMENSIONS_,double> fineGridVertexPosition;
    dfor2(d)
      fineGridVertexPosition(dScalar) = fineGridVertexPosition(lScalar*TWO_POWER_D + dScalar);
    enddforx
    dfor2(k) // run over all 2^d coarse grid (parent) vertices
      tarch::la::Vector<DIMENSIONS,int>  entryOfCoarseGridStencil;
      bool                               coarseGridStencilInfluencesFineGridVertex;
      int                                indexOfCoarseGridStencil;

      peano::toolbox::solver::Multigrid::getPositionIn5PowDStencilRelativeToKthCoarseVertex(
        k,
        fineGridVertexPosition,
        entryOfCoarseGridStencil,
        indexOfCoarseGridStencil,
        coarseGridStencilInfluencesFineGridVertex
      );

      int indexInP = peano::toolbox::solver::Multigrid::getPositionInCellInterGridTransferOperatorVector(kScalar, indexOfCoarseGridStencil);

      if(coarseGridStencilInfluencesFineGridVertex){
        result(lScalar*TWO_POWER_D + kScalar) = coarseGridVerticesP(indexInP);
      }
    enddforx
  enddforx

  logTraceOutWith1Argument( "calculateTempP(...)", result );

  return result;
}
*/
tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> peano::toolbox::solver::PetrovGalerkin::calculateTempAP(
  const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D, double>&  verticesTempP,
  tarch::la::Matrix<TWO_POWER_D, TWO_POWER_D, double>              elementWiseAssemblyMatrix
){
  logTraceInWith2Arguments( "calculateTempAP(...)", verticesTempP, elementWiseAssemblyMatrix );

  tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> result;

  tarch::la::Vector<TWO_POWER_D,double> ap;
  tarch::la::Vector<TWO_POWER_D,double> p;

  dfor2(k) // Run over vertices
    dfor2(l) // Run over entries of TempAP
      p(lScalar) = verticesTempP(lScalar*TWO_POWER_D + kScalar);
    enddforx
    ap = elementWiseAssemblyMatrix*p;
    dfor2(l) // Run over entries of TempAP
      result(lScalar*TWO_POWER_D + kScalar) = ap(lScalar);
    enddforx
  enddforx

  logTraceOutWith1Argument( "calculateTempAP(...)", result );

  return result;
}


tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double>  peano::toolbox::solver::PetrovGalerkin::calculateRAP(
  const tarch::la::Vector<TWO_POWER_D, double>&                      fineGridVertexTempAP,
  const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&   coarseGridVerticesR,
  const tarch::la::Vector<DIMENSIONS, int>&                          fineGridPositionOfVertex
){
  logTraceInWith3Arguments( "calculateRAP(...)", fineGridVertexTempAP, coarseGridVerticesR, fineGridPositionOfVertex );

  tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double> result(0.0);

  dfor2(k)
    tarch::la::Vector<DIMENSIONS,int>  entryOfCoarseGridStencil_k;
    bool                               coarseGridStencilInfluencesFineGridVertex_k;
    int                                indexOfCoarseGridStencil_k;

    peano::toolbox::solver::Multigrid::getPositionIn5PowDStencilRelativeToKthCoarseVertex(
      k,
      fineGridPositionOfVertex,
      entryOfCoarseGridStencil_k,
      indexOfCoarseGridStencil_k,
      coarseGridStencilInfluencesFineGridVertex_k
    );

    dfor2(l)
      tarch::la::Vector<DIMENSIONS,int>  entryOfCoarseGridStencil_l;
      bool                               coarseGridStencilInfluencesFineGridVertex_l;
      int                                indexOfCoarseGridStencil_l;

      peano::toolbox::solver::Multigrid::getPositionIn5PowDStencilRelativeToKthCoarseVertex(
        l,
        fineGridPositionOfVertex,
        entryOfCoarseGridStencil_l,
        indexOfCoarseGridStencil_l,
        coarseGridStencilInfluencesFineGridVertex_l
      );

     if(coarseGridStencilInfluencesFineGridVertex_l && coarseGridStencilInfluencesFineGridVertex_k){
      int indexInR = peano::toolbox::solver::Multigrid::getPositionInCellInterGridTransferOperatorVector(lScalar, indexOfCoarseGridStencil_l);
      double restrictionWeight = coarseGridVerticesR(indexInR);

      int index = 3-kScalar + lScalar;

      if(kScalar <= 1){index++;}

      switch(lScalar){
        case 0:
        case 1:
          break;

        case 2:
        case 3:
          index++;
        break;

        default:
            logDebug("calculateRAP(...)", "This case shouldn't occur...");
            logDebug("calculateRAP(...)", entryOfCoarseGridStencil_l);
            assertion(false);
          break;
       }

      peano::toolbox::solver::Multigrid::addValueToStencilEntry(result, kScalar, index, restrictionWeight*fineGridVertexTempAP(kScalar));
     }

    enddforx
  enddforx

  logTraceOutWith1Argument( "calculateRAP(...)", result );

  return result;
}

/*tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double> calculatePetrovGalerkinCoarseGridOperator(
    const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&    coarseGridVerticesP,
    const tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D, double>&    coarseGridVerticesR,
    const tarch::la::Vector<TWO_POWER_D_TIMES_DIMENSIONS,int>&          fineGridVerticesPositions,
    tarch::la::Matrix<TWO_POWER_D, TWO_POWER_D, double>                 elementWiseAssemblyMatrix
){

  tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D, double>  fineGridVerticesTempP;
  tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D, double>  fineGridVerticesTempAP;

  fineGridVerticesTempP = calculateTempP(coarseGridVerticesP, fineGridVerticesPositions);

  fineGridVerticesTempAP = calculateTempAP(tempP, elementWiseAssemblyMatrix);

  tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D, double> result = calculateRAP(fineGridVerticesTempAP, coarseGridVerticesR, fineGridVerticesPositions);

  return result;
}*/
