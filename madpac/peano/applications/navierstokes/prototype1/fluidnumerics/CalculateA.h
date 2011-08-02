/*
 * CalculateA.h
 *
 *  Created on: Jan 28, 2011
 *      Author: unterweg
 */

#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDNUMERICS_CALCULATEA_H_
#define _PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDNUMERICS_CALCULATEA_H_

#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/applications/navierstokes/prototype1/RegularGridFluidCellEnhancedDivFreeEulerExplicit.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace fluidnumerics {
          class CalculateA;
        }  // namespace fluidnumerics
        class RegularGridFluidVertexEnhancedDivFreeEulerExplicit;
        class RegularGridFluidCellEnhancedDivFreeEulerExplicit;
      }
    }
  }
}

/**
 * This class encapsulates all functionality needed for calculating A, i.e.
 * the size of the support for a vertex.
 */
class peano::applications::navierstokes::prototype1::fluidnumerics::CalculateA
{
public:
  CalculateA();
  virtual ~CalculateA();

  /**
   * Accumulating the contribution of one cell on the adjacent vertices.
   */
  void accumulateA(peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit* const vertices,
      peano::applications::navierstokes::prototype1::RegularGridFluidCellEnhancedDivFreeEulerExplicit&  cell,
      const peano::kernel::gridinterface::VertexEnumerator&  enumerator);

  /**
   * Resets the A value for the current vertex
   */
  void handleVertex(peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex);
};

#endif /* _PEANO_APPLICATIONS_NAVIERSTOKES_FLUIDNUMERICS_CALCULATEA_H_ */
