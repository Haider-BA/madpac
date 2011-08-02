// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_RegularGridCell_H_
#define _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_RegularGridCell_H_


#include "peano/applications/poisson/jacobitutorial/records/RegularGridCell.h"
#include "peano/kernel/regulargrid/Cell.h"
#include "peano/toolbox/stencil/StencilFactory.h"
#include "peano/toolbox/stencil/ElementMatrix.h"
#include "tarch/la/Matrix.h"


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace jacobitutorial {
        class RegularGridCell;
        namespace tests {
          class CellTest;
        }
      }
    }
  }
}


class peano::applications::poisson::jacobitutorial::RegularGridCell: public peano::kernel::regulargrid::Cell< peano::applications::poisson::jacobitutorial::records::RegularGridCell > {
  private:
    typedef class peano::kernel::regulargrid::Cell< peano::applications::poisson::jacobitutorial::records::RegularGridCell >  Base;

    friend class tests::CellTest;

    static peano::toolbox::stencil::ElementWiseAssemblyMatrix _elementWiseAssemblyMatrix;

  public:
    static void initStencil();
    static double getDiagonalElement();

    RegularGridCell();
    RegularGridCell(const Base::PersistentCell& argument);

    tarch::la::Vector<TWO_POWER_D,double> applyStencil(const tarch::la::Vector<TWO_POWER_D,double>& u);
};


#endif
