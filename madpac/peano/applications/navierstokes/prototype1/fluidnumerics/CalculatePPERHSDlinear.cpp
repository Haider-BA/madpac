#include "peano/applications/navierstokes/prototype1/fluidnumerics/CalculatePPERHSDlinear.h"


namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {

          CalculatePPERHSDlinear::CalculatePPERHSDlinear(
              const double      adjustmentFactor,
              double            tau
          ) :
          AbstractCalculatePPERHS(
              peano::applications::navierstokes::prototype1::Dlinear, adjustmentFactor, tau),
              _elementMatrices() {
          }


          CalculatePPERHSDlinear::~CalculatePPERHSDlinear() {
          }


          void CalculatePPERHSDlinear::computePPERHSValues(
              const Vector&                           h,
              const tarch::la::DynamicVector<double>& u,
              const tarch::la::DynamicVector<double>& F,
              const tarch::la::DynamicVector<double>& inverseA,
              double&                                 result
          ) {
            assertion( tarch::la::greater(_tau, 0.0));

            Vector hFactor = _elementMatrices.getHFactorForMOrC(h);

            result = 0.0;

            for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
              for (int d=0; d<DIMENSIONS; d++) {
                result += MDlinearElementMatrix[ i + (d*NUMBER_OF_VERTICES_PER_ELEMENT) ] * hFactor(d) * (
                    inverseA(i) * F(i*DIMENSIONS + d)
                    - _adjustmentFactor/_tau * u(i*DIMENSIONS + d) );
              }
            }
          }


          void CalculatePPERHSDlinear::computeCellDivergence(
              const Vector&                           h,
              const tarch::la::DynamicVector<double>& u,
              double&                                 result
          ) {
            //Copied from computeCellDivergenceGenericValues, as long as there is only one Vertextype
            Vector hFactor = _elementMatrices.getHFactorForMOrC(h);

            result = 0.0;

            // Formula for calculation of b entry for cell i (div-correction only!)
            // b(i) =  MATRIX_M * h * [u1(index_vector); u2(index_vector)];

            for(int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++){
              /* old 2d version
                      temp += MElementMatrix[i] * h(0) * vertex[i]->getU()(0);
                      temp += MElementMatrix[i+NUMBER_OF_VERTICES_PER_ELEMENT] * h(1) * vertex[i]->getU()(1);
               */
              // new dimensionless form
              for (int d=0; d<DIMENSIONS; d++) {
                result += MDlinearElementMatrix[ i + (d*NUMBER_OF_VERTICES_PER_ELEMENT) ] *
                    hFactor(d) * u[i*DIMENSIONS + d];
              }
            }
          }


          void CalculatePPERHSDlinear::computeAnalyticalDivergenceValues(
              const Vector&                     h,
              tarch::la::DynamicVector<double>& result
          ){
            assertion2(result.size()==NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS,result.size(),NUMBER_OF_VERTICES_PER_ELEMENT*DIMENSIONS);
            Vector hFactor = _elementMatrices.getHFactorForMOrC(h);

            for (int i=0; i<NUMBER_OF_VERTICES_PER_ELEMENT; i++) {
              for (int d=0; d<DIMENSIONS; d++) {
                result[i*DIMENSIONS + d] = MDlinearElementMatrix[i+d*NUMBER_OF_VERTICES_PER_ELEMENT] * hFactor(d);
              }
            }
          }
        }}}}} // close namespaces

