// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_UTILS_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_UTILS_H_

#include "tarch/la/Vector.h"

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace builtin {

        /** different implementations to compute the cross product on certain vector types */
        template<int d>
        tarch::la::Vector<3,double>
        crossProduct(const tarch::la::Vector<d,double> &a, const tarch::la::Vector<d,double> &b);
        template<>
        tarch::la::Vector<3,double>
        crossProduct(const tarch::la::Vector<2,double> &a, const tarch::la::Vector<2,double> &b);
        template<>
        tarch::la::Vector<3,double>
        crossProduct(const tarch::la::Vector<3,double> &a, const tarch::la::Vector<3,double> &b);

      }
    }
  }
}

template<int d>
tarch::la::Vector<3,double> peano::integration::partitioncoupling::builtin::
crossProduct(const tarch::la::Vector<d,double> &a, const tarch::la::Vector<d,double> &b) {
  assertion1(false, "Only 2D/3D cross product supported!");
  return tarch::la::Vector<3,double>(0.0);
}
#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_UTILS_H_
