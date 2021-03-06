// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_SOLVER_STENCIL_H_
#define _PEANO_TOOLBOX_SOLVER_STENCIL_H_

#include "peano/utils/Globals.h"

#include "tarch/la/Vector.h"
#include "tarch/la/Matrix.h"

namespace peano {
  namespace toolbox {
    namespace stencil {
      /**
       * Element-wise Matrix
       */
      typedef tarch::la::Matrix<NUMBER_OF_VERTICES_PER_ELEMENT,NUMBER_OF_VERTICES_PER_ELEMENT, double> ElementWiseAssemblyMatrix;

      typedef tarch::la::Matrix<THREE_POWER_D,NUMBER_OF_VERTICES_PER_ELEMENT, double> ProlongationRestrictionMatrix;

      typedef tarch::la::Matrix<NUMBER_OF_VERTICES_PER_ELEMENT/2,NUMBER_OF_VERTICES_PER_ELEMENT/2, double> ElementWiseAssemblyMatrixOnSpaceTimeGrid;

      /**
       * Stencil
       */
      typedef tarch::la::Vector<THREE_POWER_D,double>  Stencil;

      typedef tarch::la::Vector<FIVE_POWER_D, double> ProlongationMatrix;

      typedef tarch::la::Vector<FIVE_POWER_D, double> RestrictionMatrix;

      /**
       * Stencil Space Time Grid
       */
      typedef tarch::la::Vector<THREE_POWER_D/3,double>  StencilOnSpaceTimeGrid;

      /**
       * Vectors.
       */
      typedef tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>  VectorOfStencils;

      /**
       * Vector of Element (Lexicographic Ordering of Unknowns)
       */
      typedef tarch::la::Vector<NUMBER_OF_VERTICES_PER_ELEMENT,double> ElementWiseVector;

      int getStencilEntryLinearisedIndex( const tarch::la::Vector<DIMENSIONS,int>  stencilEntry);
    }
  }
}

#endif
