/*
 * SetScenario.h
 *
 *  Created on: Jan 27, 2011
 *      Author: unterweg
 */

#ifndef SETSCENARIO_H_
#define SETSCENARIO_H_

#include "peano/applications/navierstokes/prototype1/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"

namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        class SetScenario;
      }
    }
  }
}

/**
 * The SetScenario class is responsible for applying the scenario
 * on the grid. Thus, it does the initial setting of boundary conditions
 * and it also handles the updating of the grid when it has to be changed
 * due to moving geometry.
 *
 * @author Kristof Unterweger
 */
class peano::applications::navierstokes::prototype1::SetScenario
{
  private:
    /**
     * Indicates wether this class is used for the initialising of the scenario
     * or for updating the settings.
     */
    bool _isInitialising;


  public:
    /**
     * @param isInitialising Indicates wether this class is used for the initialising of the scenario
     *        or for updating the settings.
     */
    SetScenario(bool isInitialising);
    virtual ~SetScenario();

    /**
     * Initialises a newly created inner vertex.
     */
    void initialiseInnerVertex(
      peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
    );


    /**
     * Initialises a newly created boundary vertex.
     */
    void initialiseBoundaryVertex(
      const tarch::la::Vector<DIMENSIONS,double>&  x,
      peano::applications::navierstokes::prototype1::RegularGridFluidVertexEnhancedDivFreeEulerExplicit&  vertex
    );
};

#endif /* SETSCENARIO_H_ */
