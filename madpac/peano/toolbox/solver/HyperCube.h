// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_TOOLBOX_SOLVER_HYPERCUBE_H_
#define _PEANO_TOOLBOX_SOLVER_HYPERCUBE_H_


#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include "tarch/la/ScalarOperations.h"
#include "peano/toolbox/stencil/Stencil.h"
#include "tarch/logging/Log.h"
#include <vector>
#include <list>


namespace peano {
  namespace toolbox {
    namespace solver {
      class HyperCube;
    }
  }
}

class peano::toolbox::solver::HyperCube
{
public:
  HyperCube(int size);
  HyperCube(const HyperCube& other);
  const HyperCube& operator=(const HyperCube& other);
  virtual
  ~HyperCube();

  const double& operator[] (int index) const;
  double& operator[] (int index);
  const int& elementsCount() const;
  const int& size() const;
  double applyStencil(int index, const peano::toolbox::stencil::Stencil& s) const;
  bool isBorder(int index) const;
  bool isRightBorder(int index) const;
  std::vector<std::vector<int> > getColorIndices();

private:
  int getIndex(const tarch::la::Vector<DIMENSIONS, int>) const;
  double* _cube;
  int _size;
  int _total;
  int* _size_pow;
  int* _three_pow;
  static tarch::logging::Log _log;
};


#endif /* HYPERCUBE_H_ */
