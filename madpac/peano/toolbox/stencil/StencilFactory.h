// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_STENCIL_STENCIL_FACTORY_H_
#define _PEANO_TOOLBOX_STENCIL_STENCIL_FACTORY_H_


#include "peano/toolbox/stencil/Stencil.h"


namespace peano {
  namespace toolbox {
    namespace stencil {
      class StencilFactory;
    }
  }
}


/**
 * Stencil Factory
 *
 * Many components in the Peano framework switch from a stencil notation to
 * element-wise assembly matrices. This class provides some operations to
 * construct the stencils. To convert these stencil into element-wise assembly
 * matrices, use the class ElementMatrix.
 *
 * @author Tobias Weinzierl
 */
class peano::toolbox::stencil::StencilFactory {
  public:
    /**
     * Exchanges the coordinates of a stencil.
     *
     * Operations like this operation can be used to rotate a stencil, i.e. to
     * derive several stencils from one input stencil.
     */
    static Stencil exchangeCoordinates( const Stencil& stencil, int coord0, int coord1 );

    /**
     * @return @f$ [\frac{1}{6}, \frac{2}{3}, \frac{1}{6}] @f$
     */
    static tarch::la::Vector<3,double> get1DMassStencilWithoutHScaling();
    static tarch::la::Vector<3,double> get1DMassStencil(double h);
    

    /**
     * @return @f$ [-1, 2, -1] @f$
     */
    static tarch::la::Vector<3,double> get1DLaplaceStencilWithoutHScaling();
    static tarch::la::Vector<3,double> get1DLaplaceStencil(double h);

    static tarch::la::Vector<5,double> get1DLinearInterpolationStencil();

    static tarch::la::Vector<3,double> get1DMeanValueStencil();

    /**
     * Makes stencil-product of two stencils:
     *
     * a * b = [a_1, a_2, a_3] o [ b_1, b_2, B_3]
     *         [a_1*b_3 a_2*b_3 a_3*b_3]
     *       = [a_1*b_2 a_2*b_2 a_3*b_2]
     *         [a_1*b_1 a_2*b_1 a_3*b_1]
     */
    static tarch::la::Vector<3*3,double> stencilProduct(
      const tarch::la::Vector<3,double>& a,
      const tarch::la::Vector<3,double>& b
    );
    static tarch::la::Vector<5*5,double> stencilProduct(
      const tarch::la::Vector<5,double>& a,
      const tarch::la::Vector<5,double>& b
    );

    /**
     * Equals a * (b*c)
     */
    static tarch::la::Vector<3*3*3,double> stencilProduct(
      const tarch::la::Vector<3,double>& a,
      const tarch::la::Vector<3,double>& b,
      const tarch::la::Vector<3,double>& c
    );
    static tarch::la::Vector<5*5*5,double> stencilProduct(
      const tarch::la::Vector<5,double>& a,
      const tarch::la::Vector<5,double>& b,
      const tarch::la::Vector<5,double>& c
    );
};

#endif
