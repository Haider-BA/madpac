/*
 * SetScenario.cpp
 *
 *  Created on: Jan 27, 2011
 *      Author: unterweg
 */

#include "SetScenario.h"

peano::applications::navierstokes::prototype1::SetScenario::SetScenario(bool isInitialising)
{
  // TODO Auto-generated constructor stub

}

peano::applications::navierstokes::prototype1::SetScenario::~SetScenario()
{
  // TODO Auto-generated destructor stub
}


void peano::applications::navierstokes::prototype1::SetScenario::initialiseInnerVertex(
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
  )
{
  if(_isInitialising){
    vertex.setFluidVertexType(
          peano::applications::navierstokes::prototype1::INNER);
      //vertex.setU(Vector(0.0));
      Vector u(0.0);
//      u(0) = 4.0/3.0;

      //Parabolic profile
    //  u(0) = -6 * x(1) * x(1) + 6 * x(1);

      vertex.setU(u);
  }
}

void peano::applications::navierstokes::prototype1::SetScenario::initialiseBoundaryVertex(
  const tarch::la::Vector<DIMENSIONS,double>&  x,
  peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
  )
{
  if(tarch::la::equals(x(0),0.0)
      && tarch::la::greater(x(1), 0.0)
      && tarch::la::smaller(x(1), 1.0)
      #ifdef Dim3
      && tarch::la::greater(x(2), 0.0)
      && tarch::la::smaller(x(2), 1.0)
      #endif
  ) {
      //Inflow
      vertex.setFluidVertexType(
        peano::applications::navierstokes::prototype1::DIRICHLET);
      vertex.setBoundaryType(
          peano::applications::navierstokes::prototype1::INFLOW);
      Vector u(0.0);

      //Constant inflow
      u(0) = 4.0/3.0;

      //Parabolic profile
      //u(0) = -6 * x(1) * x(1) + 6 * x(1);


      vertex.setU(u);
    } else if (
        tarch::la::equals(x(0), 1.0)
        && tarch::la::greater(x(1), 0.0)
        && tarch::la::smaller(x(1), 1.0)
        #ifdef Dim3
        && tarch::la::greater(x(2), 0.0)
        && tarch::la::smaller(x(2), 1.0)
        #endif
        )
    {
      //outflow
      vertex.setFluidVertexType(
        peano::applications::navierstokes::prototype1::NEUMANN);
      vertex.setBoundaryType(
          peano::applications::navierstokes::prototype1::OUTFLOW);

      //Constant
      Vector u(0.0);
//      u(0) = 4.0/3.0;

      //Parabolic profile
  //    u(0) = -6 * x(1) * x(1) + 6 * x(1);

      vertex.setU(u);
    } else { //wall
      vertex.setFluidVertexType(
        peano::applications::navierstokes::prototype1::DIRICHLET);
      vertex.setBoundaryType(
          peano::applications::navierstokes::prototype1::WALL);
      vertex.setU(Vector(0.0));
    }
}
