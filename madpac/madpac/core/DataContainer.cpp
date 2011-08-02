/***************************************************************************
 *   Copyright (C) 2011 by Peter Hoffmann <peter.hoffmann@mytum.de>        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "DataContainer.h"
#include <iostream>
#include <fstream>
#include <string>
#include "madpac/configurations/CouplingOutputConfiguration.h"
#include "madpac/configurations/CouplingGeometryConfiguration.h"

#ifdef MADPAC_PEANOCOUPLING
#include "madpac/PeanoCouplingService.h"
#endif

DataContainer::DataContainer(int dim) :
  _dim(dim), _insertMolecules(0)
{



  madpac::configurations::CouplingGeometryConfiguration
      *_config
#ifdef MADPAC_PEANOCOUPLING
      =
          madpac::PeanoCouplingService::getInstance().getConfig()->getGeometryConfig();
#else
   = NULL;
#endif

  _cellSize = _config->getCellSize();

  if (dim == 2)
    {
      _size[2] = 1;
      _lbOffset[2] = 0;
      _borderSize[2] = 0;

      _lbLowerOffset[2] = 0;
      _lbUpperOffset[2] = 0;
      _outerNoCouplingLowerCorner[2] = 0;
      _outerNoCouplingUpperCorner[2] = 1;
      _lbCouplingLowerCorner[2] = 0;
      _lbCouplingUpperCorner[2] = 1;
      _midNoCouplingLowerCorner[2] = 0;
      _midNoCouplingUpperCorner[2] = 1;
      _mdCouplingLowerCorner[2] = 0;
      _mdCouplingUpperCorner[2] = 1;
      _innerNoCouplingLowerCorner[2] = 0;
      _innerNoCouplingUpperCorner[2] = 1;

      _bBoxMin[2] = 0.0;
      _bBoxMax[2] = _cellSize * _size[2] + _bBoxMin[2];
    }
  for (int i = 0; i < dim; i++)
    {
      _lbLowerOffset[i] = _config->getLbLowerOffset()[i];
      _lbUpperOffset[i] = _config->getLbUpperOffset()[i];
      _outerNoCouplingLowerCorner[i]
          = _config->getOuterNoCouplingLowerCorner()[i];
      _outerNoCouplingUpperCorner[i]
          = _config->getOuterNoCouplingUpperCorner()[i];
      _lbCouplingLowerCorner[i] = _config->getLbCouplingLowerCorner()[i];
      _lbCouplingUpperCorner[i] = _config->getLbCouplingUpperCorner()[i];
      _midNoCouplingLowerCorner[i] = _config->getMidNoCouplingLowerCorner()[i];
      _midNoCouplingUpperCorner[i] = _config->getMidNoCouplingUpperCorner()[i];
      _mdCouplingLowerCorner[i] = _config->getMdCouplingLowerCorner()[i];
      _mdCouplingUpperCorner[i] = _config->getMdCouplingUpperCorner()[i];
      _innerNoCouplingLowerCorner[i]
          = _config->getInnerNoCouplingLowerCorner()[i];
      _innerNoCouplingUpperCorner[i]
          = _config->getInnerNoCouplingUpperCorner()[i];

      _size[i] = _outerNoCouplingUpperCorner[i]
          - _outerNoCouplingLowerCorner[i];
      _borderSize[i] = _midNoCouplingLowerCorner[i];
      _lbOffset[i] = _config->getLbLowerOffset()[i];
      _bBoxMin[i] = 0.0;
      _bBoxMax[i] = _cellSize * _size[i] + _bBoxMin[i];
    }
  std::cout << " CELL " << _cellSize << std::endl;
  std::cout << "S " << _size[0] << " " << _size[1] << " " << _size[2]
      << std::endl;
  std::cout << "O " << _lbOffset[0] << " " << _lbOffset[1] << " "
      << _lbOffset[2] << std::endl;
  std::cout << "B " << _borderSize[0] << " " << _borderSize[1] << " "
      << _borderSize[2] << std::endl;

  _color = new int[_size[X] * _size[Y] * _size[Z]];

  _cellType = new int[_size[X] * _size[Y] * _size[Z]];


  for (int i = _outerNoCouplingLowerCorner[X]; i
      < _outerNoCouplingUpperCorner[X]; i++)
    {
      for (int j = _outerNoCouplingLowerCorner[Y]; j
          < _outerNoCouplingUpperCorner[Y]; j++)
        {
          for (int k = _outerNoCouplingLowerCorner[Z]; k
              < _outerNoCouplingUpperCorner[Z]; k++)
            {
              // _isInBorder[calcIndex(i, j, k)] = true;
              _cellType[calcIndexX(i, j, k)] = ONC;
              _color[calcIndexX(i, j, k)] = (i % 2) + (j % 2) * 2 + (k % 2) * 4;
            }
        }
    }

  for (int k = _lbCouplingLowerCorner[Z]; k < _lbCouplingUpperCorner[Z]; k++)
    {
      //  if (k < _midNoCouplingLowerCorner[Z] && _midNoCouplingUpperCorner[Z] <= k)

      for (int j = _lbCouplingLowerCorner[Y]; j < _lbCouplingUpperCorner[Y]; j++)
        {
          // if (j < _midNoCouplingLowerCorner[Y] && _midNoCouplingUpperCorner[Y] <= j)
          for (int i = _lbCouplingLowerCorner[X]; i < _lbCouplingUpperCorner[X]; i++)
            {
              // if (i < _midNoCouplingLowerCorner[X]  && _midNoCouplingUpperCorner[X] <= i)
              _cellType[calcIndexX(i, j, k)] = LB;

            }

        }

    }

  for (int i = _midNoCouplingLowerCorner[X]; i < _midNoCouplingUpperCorner[X]; i++)
    {
      for (int j = _midNoCouplingLowerCorner[Y]; j
          < _midNoCouplingUpperCorner[Y]; j++)
        {
          for (int k = _midNoCouplingLowerCorner[Z]; k
              < _midNoCouplingUpperCorner[Z]; k++)
            {
              _cellType[calcIndexX(i, j, k)] = MNC;
            }
        }
    }

  for (int i = _mdCouplingLowerCorner[X]; i < _mdCouplingUpperCorner[X]; i++)
    {
      for (int j = _mdCouplingLowerCorner[Y]; j < _mdCouplingUpperCorner[Y]; j++)
        {
          for (int k = _mdCouplingLowerCorner[Z]; k < _mdCouplingUpperCorner[Z]; k++)
            {
              //_isInBorder[calcIndex(i, j, k)] = false;
              _cellType[calcIndexX(i, j, k)] = MD;
            }
        }
    }

  for (int i = _innerNoCouplingLowerCorner[X]; i
      < _innerNoCouplingUpperCorner[X]; i++)
    {
      for (int j = _innerNoCouplingLowerCorner[Y]; j
          < _innerNoCouplingUpperCorner[Y]; j++)
        {
          for (int k = _innerNoCouplingLowerCorner[Z]; k
              < _innerNoCouplingUpperCorner[Z]; k++)
            {
              //_cellType[calcIndex(i, j, k)] = INC;
            }
        }
    }

  if (_dim == 2)
    {
      _numColors = 4;
    }
  else
    {
      _numColors = 8;
    }
}

DataContainer::~DataContainer()
{
  // assert(_isInBorder);
  //delete[] _isInBorder;
//  assert(_cellType);
  delete[] _cellType;
  //assert(_color);
  delete[] _color;
}

void
DataContainer::addNumInsertMolecules(int i)
{
  _insertMolecules = _insertMolecules + i;
}

int
DataContainer::calcIndexX(double pos[3])
{
  int ipos[3];
  for (int i = 0; i < _dim; i++)
    {
      ipos[i] = -1;
      if (_bBoxMin[i] <= pos[i] && pos[i] <= _bBoxMax[i])
        {

          ipos[i] = (int) (((pos[i] - _bBoxMin[i]) / _cellSize));

        }

      if (ipos[i] == -1)
        {
          //	std::cout << " ip "<<i<< " "  << ipos[i] << std::endl;
          std::cout << i << " " << _bBoxMin[i] << " " << pos[i] << " "
              << _bBoxMax[i] << std::endl;
          return -2;
        }
    }
  if (_dim == 2)
    {
      ipos[Z] = 0;
    }
  int index = calcIndexX(ipos[X], ipos[Y], ipos[Z]);
  return index;
}

int
DataContainer::calcIndexLBX(int cellIndex[3])
{
  int ipos[3];

  for (int i = 0; i < _maxDim; i++)
    {
      ipos[i] = cellIndex[i] - _lbOffset[i];
      if (ipos[i] < 0 || _size[i] <= ipos[i])
        {
          //std::cout << _size[i] << std::endl;
          return -1;
        }

    }
  int index = calcIndexX(ipos[X], ipos[Y], ipos[Z]);
  return index;
}

int
DataContainer::calcIndexX(int x, int y, int z)
{
  return ((x * _size[Y] + y) * _size[Z] + z);
}

int
DataContainer::calcIndexV(int x, int y, int z)
{
  return ((x * (_size[Y] + 2 * _lbOffset[Y]) + y) * (_size[Z] + 2
      * _lbOffset[Z]) + z) * _dataSize;
}

