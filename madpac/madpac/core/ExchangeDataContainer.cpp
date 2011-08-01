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

#include "ExchangeDataContainer.h"
#include <iostream>
#include <fstream>
#include <string>
#include "madpac/configurations/CouplingOutputConfiguration.h"
#include "madpac/configurations/CouplingGeometryConfiguration.h"


#include "madpac/PeanoCouplingService.h"
ExchangeDataContainer::ExchangeDataContainer(int dim, bool lb2md, bool md2lb,
    int mdIterations, int lbIterations) :
  DataContainer(dim), _md2lb(md2lb),
      _lb2md(lb2md), _numMDiterations(mdIterations), _numLBiterations(
          lbIterations)
{

#ifdef MADPAC_MARDYNCOUPLING
  _domainDecomposition = madpac::PeanoCouplingService::getInstance().getDomainDecomposition();
  _numProcs = _domainDecomposition->getNumProcs();
  _rank = _domainDecomposition->getRank();
#else
  _numProcs = 1;
  _rank = 0;
#endif
  std::cout << "LB2MD " << _lb2md << " MD2LB " << _md2lb << std::endl;
  _mdDataRead = new double[_size[X] * _size[Y] * _size[Z] * _dataSize];
  _lbDataRead = new double[_size[X] * _size[Y] * _size[Z] * _dataSize];
  _mdDataWriteSum = new double[_size[X] * _size[Y] * _size[Z] * _dataSize];
  _mdDataWriteTmp = new double[_size[X] * _size[Y] * _size[Z] * _dataSize];
  _lbDataWrite = new double[_size[X] * _size[Y] * _size[Z] * _dataSize];

  for (int i = 0; i < _size[X]; i++)
    {
      for (int j = 0; j < _size[Y]; j++)
        {
          for (int k = 0; k < _size[Z]; k++)
            {
              int index = calcIndexX(i, j, k) * _dataSize;
              for (int q = 0; q < _dataSize; q++)
                {
                  _mdDataRead[index + q] = 0;
                  _lbDataRead[index + q] = 0;
                  _mdDataWriteSum[index + q] = 0;
                  _mdDataWriteTmp[index + q] = 0;
                  _lbDataWrite[index + q] = 0;
                }
            }
        }
    }


}

ExchangeDataContainer::~ExchangeDataContainer()
{
  assert(_mdDataRead);
  delete[] _mdDataRead;
  assert(_mdDataWriteSum);
  delete[] _mdDataWriteSum;
  assert(_mdDataWriteTmp);
  delete[] _mdDataWriteTmp;
  assert(_lbDataRead);
  delete[] _lbDataRead;
  assert(_lbDataWrite);
  delete[] _lbDataWrite;
}
/*
 void
 ExchangeDataContainer::sync()
 {
 syncLB();
 syncMD();

 }*/

void
ExchangeDataContainer::syncLB()
{
#ifdef MADPAC_MARDYNCOUPLING

  _domainDecomposition->collCommInit(_size[X] * _size[Y] * _size[Z] * _dataSize);
  for (int i = 0; i < _size[X] * _size[Y] * _size[Z] * _dataSize; i++)
    {
      _domainDecomposition->collCommAppendDouble(_lbDataWrite[i]);
    }
  _domainDecomposition->collCommBroadcast();
  for (int i = 0; i < _size[X] * _size[Y] * _size[Z] * _dataSize; i++)
    {
      _lbDataRead[i] = _domainDecomposition->collCommGetDouble();
      if (_domainDecomposition->getRank() == 0)
        {
#ifndef NDEBUG
          if (_cellType[i - i % 4] == LB && i % 4 != 3 && i % 4 != 2)
            {
              //std::cout <<i <<  " " << i%4 << " " << tmp << " " << _lbData[i]<< std::endl;
              assert(_lbDataRead[i] == _lbDataWrite[i]);
            }
#endif
        }
    }
  _domainDecomposition->collCommFinalize();
#else
  double *tmp = _lbDataRead;
  _lbDataRead = _lbDataWrite;
  _lbDataWrite = tmp;
#endif
  setZeroLB();
}

void
ExchangeDataContainer::syncMD()
{
#ifdef MADPAC_MARDYNCOUPLING

  // setMDBorderZero();
  _domainDecomposition->collCommInit(getArraySize() * _dataSize);
  for (int i = 0; i < getArraySize() * _dataSize; i++)
    {
      _domainDecomposition->collCommAppendDouble(_mdDataWriteSum[i]);
    }

  _domainDecomposition->collCommAllreduceSum();

  for (int i = 0; i < getArraySize() * _dataSize; i++)
    {
      _mdDataRead[i] = _domainDecomposition->collCommGetDouble();

      //if(_domainDecomposition->getRank() == 0) {
#ifndef NDEBUG
      if (_mdDataWriteSum[i] > 1.0e-300)
        {
          //if(!_isInBorder[i-i%4])
          if (_mdDataRead[i] != _mdDataWriteSum[i])
            {
              std::cout << _domainDecomposition->getRank() << " " << i << " "
                  << i % 4 << " " << _mdDataWriteSum[i] << " "
                  << _mdDataRead[i] << std::endl;
            }

          //assert(_mdDataRead[i] == _mdDataWrite[i]);
        } //else if (!_isInBorder[i-i%4] && i%4 == 3 && tmp == 0) std::cout << _domainDecomposition->getRank() << " " << i<< " "<< i%4 << " " << _mdData[i] <<  " " <<tmp << std::endl;
#endif
      //}
    }

  _domainDecomposition->collCommFinalize();
#else
  double *tmp = _lbDataRead;
  _lbDataRead = _lbDataWrite;
  _lbDataWrite = tmp;
#endif
  setZeroMDSum();
  //	std::cout << "lub"<< _domainDecomposition->getRank()  <<std::endl;
}

void
ExchangeDataContainer::finishMDts()
{
  //std::cout << " finish ts " << std::endl;
  for (int i = 0; i < _size[X]; i++)
    {
      for (int j = 0; j < _size[Y]; j++)
        {
          for (int k = 0; k < _size[Z]; k++)
            {
              int index = calcIndexX(i, j, k);
              if (_cellType[index] == MD)
                {
                  if (_mdDataWriteTmp[index * _dataSize + rho] > 0)
                    {
                      for (int q = velocityX; q <= velocityZ; q++)
                        {
                          assert(_mdDataWriteTmp[index*_dataSize + q] == _mdDataWriteTmp[index*_dataSize + q]);
                          _mdDataWriteSum[index * _dataSize + q]
                              += _mdDataWriteTmp[index * _dataSize + q]
                                  / _mdDataWriteTmp[index * _dataSize + rho];
                        }

                      _mdDataWriteSum[index * _dataSize + rho]
                          += _mdDataWriteTmp[index * _dataSize + rho]
                              / _cellSize / _cellSize / _cellSize;
                    } //else std::cout << " asd " << _mdDataWriteTmp[index + rho] << std::endl;
                }
            }
        }
    }
}
#ifdef MADPAC_MARDYNCOUPLING

unsigned long
ExchangeDataContainer::syncV(double *v, unsigned long numSamples)
{
  int length = 3;
  _domainDecomposition->collCommInit(length + 1);
  for (int i = 0; i < length; i++)
    {
      _domainDecomposition->collCommAppendDouble(v[i]);
    }
  _domainDecomposition->collCommAppendUnsLong(numSamples);
  _domainDecomposition->collCommAllreduceSum();
  for (int i = 0; i < length; i++)
    {
      v[i] = _domainDecomposition->collCommGetDouble();
    }
  numSamples = _domainDecomposition->collCommGetUnsLong();
  _domainDecomposition->collCommFinalize();
  return numSamples;
}

void
ExchangeDataContainer::syncE(double *v)
{
  int length = 1;
  _domainDecomposition->collCommInit(length);
  for (int i = 0; i < length; i++)
    {
      _domainDecomposition->collCommAppendDouble(v[i]);
    }
  _domainDecomposition->collCommAllreduceSum();
  for (int i = 0; i < length; i++)
    {
      v[i] = _domainDecomposition->collCommGetDouble();
    }
  _domainDecomposition->collCommFinalize();
}
#endif

int
ExchangeDataContainer::getRank()
{
#ifdef MADPAC_MARDYNCOUPLING

  return _domainDecomposition->getRank();
#else
  return 0;
#endif
}

void
ExchangeDataContainer::addMDRegion(double *data, double pos[3])
{
  assert(data[velocityX] == data[velocityX]);
  assert(data[velocityY] == data[velocityY]);
  assert(data[velocityZ] == data[velocityZ]);
  assert(data[rho] == data[rho]);
  int index = calcIndexX(pos);
  if (index > -1)
    {
      if (data[rho] > 0)
        {
          for (int i = 0; i < _maxDim; i++)
            {
              _mdDataWriteTmp[index * _dataSize + i] += data[i];
            }
          _mdDataWriteTmp[index * _dataSize + rho] = _mdDataWriteTmp[index
              * _dataSize + rho] + data[rho];
        }
      else
        std::cout << "addmD rho 0 " << std::endl;
    }
}

void
ExchangeDataContainer::setLBRegion(double *data, int cellIndex[3])
{
  assert(data[velocityX] == data[velocityX]);
  assert(data[velocityY] == data[velocityY]);
  assert(data[velocityZ] == data[velocityZ]);
  assert(data[rho] == data[rho]);

  int index = calcIndexLBX(cellIndex);

  if (index > -1)
    {
      if (_cellType[index] == LB)
        {

          for (int i = 0; i < _dataSize; i++)
            {
              _lbDataWrite[index * _dataSize + i] += data[i]; //TODO check
            }
          //if(data[0] > 1.0e-5)
          //std::cout << cellIndex[0] << " "<<cellIndex[1] << " " << data[0] << " " << data[1]<< " " <<_lbDataWrite[index]<< " "<< _lbDataWrite[index+1]<< std::endl;

        }
    }

}

bool
ExchangeDataContainer::getLBData4MD(double *data, double pos[3])
{
  int index = calcIndexX(pos);
  if (index > -1 && _cellType[index] == LB)
    {
      for (int i = 0; i < _dataSize; i++)
        {
          data[i] = _lbDataRead[index * _dataSize + i] / _numLBiterations;
        }
      if (_dim == 2)
        {
          data[velocityZ] = 0;
        }
      return true;
    }
  return false;
}

void
ExchangeDataContainer::getMDData4MD(double *data, double* pos)
{
  int index = calcIndexX(pos);

  if (index > -1 && _cellType[index] == LB)
    {
      assert(_cellType[index] == LB);
      assert(_mdDataWriteTmp[index*_dataSize+rho] != 0);

      data[velocityX] = _mdDataWriteTmp[index * _dataSize + velocityX]
          / _mdDataWriteTmp[index * _dataSize + rho];
      data[velocityY] = _mdDataWriteTmp[index * _dataSize + velocityY]
          / _mdDataWriteTmp[index * _dataSize + rho];
      data[velocityZ] = _mdDataWriteTmp[index * _dataSize + velocityZ]
          / _mdDataWriteTmp[index * _dataSize + rho];
      data[rho] = _mdDataWriteTmp[index * _dataSize + rho] / _cellSize
          / _cellSize / _cellSize / _numMDiterations;

      assert(data[velocityX] == data[velocityX]);
      assert(data[velocityY] == data[velocityY]);
      assert(data[velocityZ] == data[velocityZ]);
      assert(data[rho] == data[rho]);
    }
  else
    std::cout << "dataContainer::getMDData4MD()" << std::endl;
}

bool
ExchangeDataContainer::getMDData4LB(double *data, int cellIndex[3])
{
  //int index = calcIndexLB(cellIndex);
  //getDataMD(data,index);
  int index = calcIndexLBX(cellIndex);
  if (index > -1 && _cellType[index] == MD)
    {
      assert(_cellType[index] == MD);
      /*for(int i=0;i<3;i++)
       std::cout <<cellIndex[i]<< " ";
       std::cout << std::endl;*/
      //	std::cout << index <<" " << _isInBorder[index] << std::endl;
      assert(_mdDataRead[index*_dataSize+rho] != 0);

      data[velocityX] = _mdDataRead[index * _dataSize + velocityX]
          / _numMDiterations;
      data[velocityY] = _mdDataRead[index * _dataSize + velocityY]
          / _numMDiterations;
      data[velocityZ] = _mdDataRead[index * _dataSize + velocityZ]
          / _numMDiterations;
      data[rho] = _mdDataRead[index * _dataSize + rho] / _numMDiterations;

      assert(data[velocityX] == data[velocityX]);
      assert(data[velocityY] == data[velocityY]);
      assert(data[velocityZ] == data[velocityZ]);
      assert(data[rho] == data[rho]);
      return true;

    }/* else{
     std::cout << "NO" << index  << " ";
     for(int i=0;i<3;i++)
     std::cout <<cellIndex[i]<< " ";
     std::cout << std::endl;
     }*/
  return false;
}

void
ExchangeDataContainer::setZeroLB()
{
  for (int i = 0; i < _size[X]; i++)
    {
      for (int j = 0; j < _size[Y]; j++)
        {
          for (int k = 0; k < _size[Z]; k++)
            {
              int index = calcIndexX(i, j, k);
              for (int q = 0; q < _dataSize; q++)
                {
                  _lbDataWrite[index * _dataSize + q] = 0.0;
                }

            }
        }
    }

}

void
ExchangeDataContainer::setZeroMDSum()
{
  for (int i = 0; i < _size[X]; i++)
    {
      for (int j = 0; j < _size[Y]; j++)
        {
          for (int k = 0; k < _size[Z]; k++)
            {
              int index = calcIndexX(i, j, k);
              for (int q = 0; q < _dataSize; q++)
                {
                  _mdDataWriteSum[index * _dataSize + q] = 0.0;
                }

            }
        }
    }

}

void
ExchangeDataContainer::setZeroMDTmp()
{
  for (int i = 0; i < _size[X]; i++)
    {
      for (int j = 0; j < _size[Y]; j++)
        {
          for (int k = 0; k < _size[Z]; k++)
            {
              int index = calcIndexX(i, j, k);
              for (int q = 0; q < _dataSize; q++)
                {
                  _mdDataWriteTmp[index * _dataSize + q] = 0.0;
                }

            }
        }
    }

}

void
ExchangeDataContainer::setMDBorderZero()
{
  finishMDts();
  /*  for (int i = 0; i < _size[X]; i++)
   {
   for (int j = 0; j < _size[Y]; j++)
   {
   for (int k = 0; k < _size[Z]; k++)
   {
   int index = calcIndexX(i, j, k);
   if (_cellType[index] == LB)
   {
   for (int q = 0; q < _dataSize; q++)
   {
   _mdDataWriteTmp[index*_dataSize + q] = 0.0;
   }
   }
   }
   }
   }*/
  setZeroMDTmp();
}

