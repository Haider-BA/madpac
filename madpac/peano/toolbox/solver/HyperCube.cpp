// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#include "HyperCube.h"
tarch::logging::Log peano::toolbox::solver::HyperCube::_log( "peano::toolbox::solver::HyperCube" );

namespace peano {
  namespace toolbox {
    namespace solver {
      class  HyperCube;
    }
  }
}

peano::toolbox::solver::HyperCube::HyperCube(int size)
{
  _size = size;
  _total = tarch::la::aPowI(DIMENSIONS, size);
  _cube = new double[_total];
  _size_pow = new int[DIMENSIONS];
  _size_pow[0] = 1;
  for(int i = 1; i<DIMENSIONS; i++){
    _size_pow[i] = _size_pow[i-1] * _size;
  }
}

peano::toolbox::solver::HyperCube::~HyperCube(){
  delete _cube;
  delete _size_pow;
}


inline int
peano::toolbox::solver::HyperCube::getIndex(
    const tarch::la::Vector<DIMENSIONS, int> position) const
{
  int index = 0;
  int s = 1;
  for (int i = 0; i < DIMENSIONS; i++) {
    assertion(position[i] >= 0);
    assertion(position[i] < _size);
    index += position[i] * s;
    s *= _size;
  }
  return index;
}

const double &
peano::toolbox::solver::HyperCube::operator [](int index) const
{
  assertion(index >= 0);
  assertion(index < _total);
  return _cube[index];
}

double &
peano::toolbox::solver::HyperCube::operator [](int index)
{
  assertion(index >= 0);
  assertion(index < _total);
  return _cube[index];
}

const int& peano::toolbox::solver::HyperCube::elementsCount() const
{
  return _total;
}

const int & peano::toolbox::solver::HyperCube::size() const
{
  return _size;
}

double peano::toolbox::solver::HyperCube::applyStencil(int index, const peano::toolbox::stencil::Stencil & s) const
{
  assertion(!isBorder(index))
  double result = 0;

  for (int i = 0; i<s.size(); i++){
    int ndx = index;
    for(int j = 0; j<DIMENSIONS; j++){

      if((i/threePowI(j))%3 == 0){
        ndx -= _size_pow[j];
        //logDebug("applyStencil()", "-" << _size_pow[j] << " ndx: " << ndx)
      } else if ((i/threePowI(j))%3 == 2){
        ndx += _size_pow[j];
        //logDebug("applyStencil()", "+" << _size_pow[j] << " ndx: " << ndx)
      } else{
        //logDebug("applyStencil()", "0");
      }
    }
    result += s[i] * operator[](ndx);
    //logDebug("applyStencil()", "map stencil index " << i << " to cube index " << ndx)
  }
  return result;
}

const peano::toolbox::solver::HyperCube& peano::toolbox::solver::HyperCube::operator =(const HyperCube & other)
{
  if (this == &other)
    return *this;

  //special case for same size, don't reallocate, but use existing memory
  if(other._total == _total){
    for (int i = 0; i < other._total; i++) {
      _cube[i] = other._cube[i];
    }
  } else {
    // 1: allocate new memory and copy the elements
    double * newcube = new double[other._total];
    for (int i = 0; i < other._total; i++) {
      newcube[i] = other._cube[i];
    }
    // 2: deallocate old memory
    delete _cube;
    delete _size_pow;

    // 3: assign the new memory to the object
    _cube = newcube;
    _size = other._size;
    _total = other._total;

    _size_pow = new int[DIMENSIONS];
    _size_pow[0] = 1;
    for(int i = 1; i<DIMENSIONS; i++){
     _size_pow[i] = _size_pow[i-1] * _size;
    }
  }
  return *this;
}

peano::toolbox::solver::HyperCube::HyperCube(const peano::toolbox::solver::HyperCube & other)
{
  _size = other._size;
  _total = other._total;
  _cube = new double[_total];
  for(int i = 0; i<_total; i++) {
    _cube[i] = other._cube[i];
  }
  _size_pow = new int[DIMENSIONS];
  _size_pow[0] = 1;
  for(int i = 1; i<DIMENSIONS; i++){
    _size_pow[i] = _size_pow[i-1] * _size;
  }
}

bool peano::toolbox::solver::HyperCube::isBorder(int index) const
{
  for (int i = 0; i<DIMENSIONS; i++){
    int index_mod_size = index%_size;
    if(index_mod_size == 0 || index_mod_size == _size-1) {
      return true;
    }
    index /= _size;
  }
  return false;
}

bool peano::toolbox::solver::HyperCube::isRightBorder(int index) const
{
  for (int i = 0; i<DIMENSIONS; i++){
    int index_mod_size = index%_size;
    if(index_mod_size == _size-1) {
      return true;
    }
    index /= _size;
  }
  return false;
}

std::vector<std::vector<int> > peano::toolbox::solver::HyperCube::getColorIndices()
{
    std::vector<std::vector<int> > colors;
    colors.reserve(TWO_POWER_D);
    for(int i = 0; i<TWO_POWER_D; i++)
        colors.push_back(std::vector<int>());
    for(int i = 0; i< elementsCount(); i++){
        if(!isBorder(i)){
            int index = i;
            int colorindex = 0;
            for(int j = 0; j<DIMENSIONS; j++){
                if(index%2 != 0){
                    colorindex += twoPowI(j);
                }
                index = index / size();
            }
            colors[colorindex].push_back(i);
        }
    }
    return colors;
}
