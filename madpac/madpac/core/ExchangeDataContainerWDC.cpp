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

#include "ExchangeDataContainerWDC.h"
#include <iostream>
#include <fstream>
#include <string>
#include "madpac/configurations/CouplingOutputConfiguration.h"
#include "madpac/configurations/CouplingGeometryConfiguration.h"
#include "madpac/mdcoupling/UsherAlgorithm.h"


ExchangeDataContainerWDC::ExchangeDataContainerWDC(int dim, bool lb2md, bool md2lb,
    int mdIterations, int lbIterations) :
  ExchangeDataContainer(dim, lb2md, md2lb, mdIterations,
      lbIterations)
{
  _particleInserted = new bool[_size[X] * _size[Y] * _size[Z]];
  for (int i = 0; i < _size[X]; i++)
    for (int j = 0; j < _size[Y]; j++)
      for (int k = 0; k < _size[Z]; k++)
        {
          _particleInserted[calcIndexX(i, j, k)] = false;
        }

}

ExchangeDataContainerWDC::~ExchangeDataContainerWDC()
{
  assert(_particleInserted);
  delete[] _particleInserted;
}

void
ExchangeDataContainerWDC::setMDBorderZero()
{
  ExchangeDataContainer::setMDBorderZero();
  for (int i = 0; i < _size[X]; i++)
    {
      for (int j = 0; j < _size[Y]; j++)
        {
          for (int k = 0; k < _size[Z]; k++)
            {
              int index = calcIndexX(i, k, j);
              _particleInserted[index] = 0;
            }
        }
    }
}

bool
ExchangeDataContainerWDC::addPminLBrho(
    madpac::mdcoupling::UsherAlgorithm* usher, int iteration,
    double md2ms, double* BBMin, double* BBMax, double *vtmpG)
{
  int ipos[_maxDim];
  int minPos[_maxDim];
  double vtmp[_maxDim];
  int minIndex = 0;
  bool isSet = false;
  double minRho = 9999999999999;
  for (int i = 0; i < _size[X]; i++)
    {
      if ((i + 1 / 2) * _cellSize >= BBMin[X]
          && (i + 1 / 2) * _cellSize < BBMax[X])
        {
          for (int j = 0; j < _size[Y]; j++)
            {
              if ((j + 1 / 2) * _cellSize
                  >= BBMin[Y] && (j + 1 / 2)
                  * _cellSize < BBMin[Y])
                {
                  for (int k = 0; k < _size[Z]; k++)
                    {
                      if ((k + 1 / 2) * _cellSize
                          >= BBMin[Z] && (k + 1
                          / 2) * _cellSize
                          < BBMin[Z])
                        {
                          ipos[X] = i;
                          ipos[Y] = j;
                          ipos[Z] = k;
                          int index = calcIndexX(ipos[X], ipos[Y], ipos[Z]);
                          if (_cellType[index] == LB
                              && !_particleInserted[index])
                            {
                              if (iteration % _numColors == _color[index])
                                { //TODO: check
                                  double mdRho = _mdDataWriteTmp[index
                                      * _dataSize + rho];
                                  if (mdRho < minRho)
                                    {
                                      isSet = true;
                                      minRho = mdRho;
                                      minIndex = index;
                                      for (int i = 0; i < _maxDim; i++)
                                        {
                                          minPos[i] = ipos[i];
                                          vtmp[i] = _mdDataWriteTmp[index
                                              * _dataSize + i]
                                              / _mdDataWriteTmp[index
                                                  * _dataSize + rho] / md2ms;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  if (isSet)
    {
      for (int i = 0; i < 3; i++)
        {
          if (isnan(vtmp[i]))
            {
              std::cerr
                  << "Warning: DataCountainer::addPminLBrho(): vtmp is nan"
                  << std::endl;
              vtmp[i] = 0.0;
            }
        }
      return addP(usher, minPos, vtmp, BBMin, BBMax);
    }
  else
    {
      return false;
    }
}

/*bool DataContainer::addPp(UsherConnector* usher, double pos[3]) {
 int ipos[3];
 for(int i=0;i<_maxDim;i++) {
 ipos[i] = -1;
 if(_bBoxMin[i] <= pos[i] && pos[i] <= _bBoxMax[i]) {
 ipos[i] = (int)(((pos[i]-_bBoxMin[i])/_cellSize));
 }
 if(ipos[i]== -1) {
 std::cout << i << " " << _bBoxMin[i] << " "<< pos[i] << " "<<_bBoxMax[i] << std::endl;
 return false;
 }
 }
 //std::cout << "addPp "<< ipos[0] << " " <<ipos[1] << " "<<ipos[2] << std::endl;
 return addP(usher,ipos);
 }*/

bool
ExchangeDataContainerWDC::addP(
    madpac::mdcoupling::UsherAlgorithm* usher, int minPos[3],
    double vtmp[3], double* BBMin, double* BBMax)
{
  double minX[_maxDim];
  double maxX[_maxDim];
  for (int q = 0; q < _maxDim; q++)
    {
      minX[q] = minPos[q] * _cellSize;
      maxX[q] = (minPos[q] + 1) * _cellSize;
    }
  if (_dim == 2)
    {
      minX[2] = BBMin[Z];
      maxX[2] = BBMax[Z];
    }
  bool add = usher->addP(minX, maxX, vtmp);
  int index = calcIndexX(minPos[X], minPos[Y], minPos[Z]);

  if (add)
    {
      _mdDataWriteTmp[index * _dataSize + rho]++;
      _particleInserted[index] = 1;
      //std::cout << "INSERT IN CELL " << minPos[0] << " "<<minPos[1]<<" "<<minPos[2]<<std::endl;
    }

  return add;
}

void
ExchangeDataContainerWDC::adjustMDRho(
    madpac::mdcoupling::UsherAlgorithm* usher, int iteration,
    double md2ms)
{
  int ipos[_maxDim];
  double epsilon = 0.05;
  double minX[_maxDim];
  double maxX[_maxDim];
  double vtmp[_maxDim];
  for (int i = 0; i < _size[X]; i++)
    {
      for (int j = 0; j < _size[Y]; j++)
        {
          for (int k = 0; k < _size[Z]; k++)
            {
              ipos[X] = i;
              ipos[Y] = j;
              ipos[Z] = k;
              int index = calcIndexLBX(ipos);
              if (index > -1 && _cellType[index] == LB && iteration
                  % _numColors == _color[index])
                {

                  double lbRho = _lbDataRead[index * _dataSize + rho]
                      / _numLBiterations;
                  double mdRho = _mdDataWriteTmp[index * _dataSize + rho]
                      / _cellSize / _cellSize / _cellSize / _numMDiterations;
                  if (abs(mdRho - lbRho) > epsilon)
                    {
                      for (int q = 0; q < 3; q++)
                        {
                          minX[q] = ipos[q] * _cellSize;
                          maxX[q] = (ipos[q] + 1) * _cellSize;
                          vtmp[q] = _mdDataWriteTmp[index * _dataSize + q]
                              / _mdDataWriteTmp[index * _dataSize + rho]
                              / md2ms;
                        }

                      if (mdRho < lbRho)
                        {

                          usher->addP(minX, maxX, vtmp);
                        }
                      /*TODO:  else
                       {
                       usher->delP(minX, maxX);
                       }*/
                    }
                }
            }
        }
    }
}
