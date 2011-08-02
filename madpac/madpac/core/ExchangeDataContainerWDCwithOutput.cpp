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

#include "ExchangeDataContainerWDCwithOutput.h"
#include <iostream>
#include <fstream>
#include <string>
#include "madpac/configurations/CouplingOutputConfiguration.h"
#include "madpac/configurations/CouplingGeometryConfiguration.h"
#include "madpac/PeanoCouplingService.h"

ExchangeDataContainerWDCwithOutput::ExchangeDataContainerWDCwithOutput(int dim,
    int mdIterations, int lbIterations) :
  ExchangeDataContainerWDC(dim,
      mdIterations, lbIterations)
{
  _output = new double[_size[X] * _size[Y] * _size[Z] * _dataSize];
  _voutput = new double[(_size[X] + 2 * _lbOffset[X]) * (_size[Y] + 2
      * _lbOffset[Y]) * (_size[Z] + 2 * _lbOffset[Z]) * _dataSize];
  _outputRate
      = madpac::PeanoCouplingService::getInstance().getConfig()->getOutputConfig()->getOutputRate();
  _outputFile
      = madpac::PeanoCouplingService::getInstance().getConfig()->getOutputConfig()->getOutputFile();
  _bvoutput
      = madpac::PeanoCouplingService::getInstance().getConfig()->getOutputConfig()->getVOutput();
  std::cout << _outputFile << " OUTPUT " << _outputRate << std::endl;
  for (int i = 0; i < _size[X]; i++)
    for (int j = 0; j < _size[Y]; j++)
      for (int k = 0; k < _size[Z]; k++)
        {
          for (int q = 0; q < _dataSize; q++)
            {
              _output[calcIndexX(i, j, k) * _dataSize + q] = 0;
            }
        }
}

ExchangeDataContainerWDCwithOutput::~ExchangeDataContainerWDCwithOutput()
{
  assert(_output);
  delete[] _output;
  assert(_voutput);
  delete[] _voutput;
}

void
ExchangeDataContainerWDCwithOutput::output(int iteration)
{
  if (_rank == 0)
    {
      for (int i = 0; i < _size[X]; i++)
        for (int j = 0; j < _size[Y]; j++)
          for (int k = 0; k < _size[Z]; k++)
            {
              int index = calcIndexX(i, j, k);
              int vindex = calcIndexV(i + _lbOffset[X], j + _lbOffset[Y], k
                  + _lbOffset[Z]);
              if (_cellType[index] == LB || _cellType[index] == ONC)
                {
                  for (int q = 0; q < _dataSize; q++)
                    {
                      _output[index * _dataSize + q] += _lbDataRead[index
                          * _dataSize + q] / _numLBiterations;
                      _voutput[vindex + q]
                          += _lbDataRead[index * _dataSize + q]
                              / _numLBiterations;
                    }
                }
              else
                {
                  for (int q = velocityX; q <= velocityZ; q++)
                    {
                      _output[index * _dataSize + q] += _mdDataRead[index
                          * _dataSize + q] / _numMDiterations;
                      ;
                      _voutput[vindex + q]
                          += _mdDataRead[index * _dataSize + q]
                              / _numMDiterations;
                      ;
                    }
                  _output[index * _dataSize + rho] += _mdDataRead[index
                      * _dataSize + rho] / _numMDiterations;
                  ;
                  _voutput[vindex + rho]
                      += _mdDataRead[index * _dataSize + rho]
                          / _numMDiterations;
                  ;
                }

              //

            }

      if (_outputRate != 0 && iteration % _outputRate == 0)
        { //TODO: check
          for (int i = 0; i < _size[X]; i++)
            for (int j = 0; j < _size[Y]; j++)
              for (int k = 0; k < _size[Z]; k++)
                {
                  int index = calcIndexX(i, j, k);
                  int vindex = calcIndexV(i + _lbOffset[X], j + _lbOffset[Y], k
                      + _lbOffset[Z]);
                  for (int q = 0; q < _dataSize; q++)
                    {
                      _output[index * _dataSize + q] = _output[index
                          * _dataSize + q] / (double) _outputRate;
                      _voutput[vindex + q] = _voutput[vindex + q]
                          / (double) _outputRate;
                    }
                }

          writeOutput(_outputFile, iteration);
          if (_bvoutput)
            writeVOutput(_outputFile, iteration);

          for (int i = 0; i < _size[X]; i++)
            for (int j = 0; j < _size[Y]; j++)
              for (int k = 0; k < _size[Z]; k++)
                {
                  int index = calcIndexX(i, j, k);
                  int vindex = calcIndexV(i + _lbOffset[X], j + _lbOffset[Y], k
                      + _lbOffset[Z]);
                  for (int q = 0; q < _dataSize; q++)
                    {
                      _output[index * _dataSize + q] = 0.0;
                      _voutput[vindex + q] = 0.0;
                    }
                }
        }

    }
}

void
ExchangeDataContainerWDCwithOutput::writeOutput(const std::string& filename,
    int iteration)
{
  std::stringstream strstr;
  strstr << filename << "_" << (iteration < 10 ? "000"
      : (iteration < 100 ? "00" : (iteration < 1000 ? "0" : ""))) << iteration
      << ".vtk";

  std::ofstream file(strstr.str().c_str());

  file << "# vtk DataFile Version 2.0" << std::endl;
  file << "generated by madpac" << std::endl;
  file << "ASCII" << std::endl;

  file << std::endl;
  file << "DATASET STRUCTURED_GRID" << std::endl;
  file << "DIMENSIONS  " << _size[X] << " " << _size[Y] << " " << _size[Z]
      << std::endl;
  file << "POINTS  " << _size[X] * _size[Y] * _size[Z] << " float" << std::endl;
  for (int i = 0; i < _size[X]; i++)
    for (int j = 0; j < _size[Y]; j++)
      for (int k = 0; k < _size[Z]; k++)
        {
          file << i << " " << j << " " << k << std::endl;
        }
  file << std::endl;
  file << std::endl;
  file << std::endl;
  file << "POINT_DATA  " << _size[X] * _size[Y] * _size[Z] << std::endl;
  file << "SCALARS density float 1" << std::endl;
  file << "LOOKUP_TABLE default" << std::endl;
  for (int i = 0; i < _size[X]; i++)
    for (int j = 0; j < _size[Y]; j++)
      for (int k = 0; k < _size[Z]; k++)
        {
          file << _output[calcIndexX(i, j, k) * _dataSize + DataContainer::rho]
              << std::endl;
        }

  file << std::endl;
  file << std::endl;
  file << std::endl;
  file << "SCALARS color float 1" << std::endl;
  file << "LOOKUP_TABLE default" << std::endl;
  for (int i = 0; i < _size[X]; i++)
    for (int j = 0; j < _size[Y]; j++)
      for (int k = 0; k < _size[Z]; k++)
        {
          file << _color[calcIndexX(i, j, k)] << std::endl;
        }

  file << std::endl;
  file << std::endl;
  file << std::endl;
  file << "SCALARS celltype float 1" << std::endl;
  file << "LOOKUP_TABLE default" << std::endl;
  for (int i = 0; i < _size[X]; i++)
    for (int j = 0; j < _size[Y]; j++)
      for (int k = 0; k < _size[Z]; k++)
        {
          file << _cellType[calcIndexX(i, j, k)] << std::endl;
        }
  file << std::endl;
  file << std::endl;
  file << std::endl;
  file << "VECTORS velocity float" << std::endl;
  for (int i = 0; i < _size[X]; i++)
    for (int j = 0; j < _size[Y]; j++)
      for (int k = 0; k < _size[Z]; k++)
        {
          int index = calcIndexX(i, j, k);
          double vx = _output[index * _dataSize + DataContainer::velocityX];
          double vy = _output[index * _dataSize + DataContainer::velocityY];
          double vz = _output[index * _dataSize + DataContainer::velocityZ];
          if (vx != vx || vx > 999999999999 || vx < -999999999999)
            vx = 0;
          if (vy != vy || vy > 999999999999 || vy < -999999999999)
            vy = 0;
          if (vz != vz || vz > 999999999999 || vz < -999999999999)
            vz = 0;

          file << vx << " " << vy << " " << vz << std::endl;
        }

}

void
ExchangeDataContainerWDCwithOutput::setLBRegion(double *data, int cellIndex[3])
{
  assert(data[velocityX] == data[velocityX]);
  assert(data[velocityY] == data[velocityY]);
  assert(data[velocityZ] == data[velocityZ]);
  assert(data[rho] == data[rho]);

  int index = calcIndexLBX(cellIndex);

  if (index > -1)
    {
      if (_cellType[index] == LB || _cellType[index] == ONC)
        {

          for (int i = 0; i < _dataSize; i++)
            {
              _lbDataWrite[index * _dataSize + i] += data[i]; //TODO check
            }
          //if(data[0] > 1.0e-5)
          //std::cout << cellIndex[0] << " "<<cellIndex[1] << " " << data[0] << " " << data[1]<< " " <<_lbDataWrite[index]<< " "<< _lbDataWrite[index+1]<< std::endl;

        }
    }
  else
    {
      bool b = true;
      //check boundary
      for (int i = 0; i < 3; i++)
        if (cellIndex[i] < 0 || cellIndex[i] >= _size[i] + _lbOffset[i] * 2)
          b = false;
      if (b)
        {
          int nindex = calcIndexV(cellIndex[X], cellIndex[Y], cellIndex[Z]);
          for (int i = 0; i < _dataSize; i++)
            {
              _voutput[nindex + i] = data[i];
            }
        }
    }

}

void
ExchangeDataContainerWDCwithOutput::writeVOutput(const std::string& filename,
    int iteration)
{
  std::stringstream strstr;
  strstr << filename << "_v_" << (iteration < 10 ? "000"
      : (iteration < 100 ? "00" : (iteration < 1000 ? "0" : ""))) << iteration
      << ".vtk";

  std::ofstream file(strstr.str().c_str());

  file << "# vtk DataFile Version 2.0" << std::endl;
  file << "generated by madpac" << std::endl;
  file << "ASCII" << std::endl;

  file << std::endl;
  file << "DATASET STRUCTURED_GRID" << std::endl;
  file << "DIMENSIONS  " << _size[X] + _lbOffset[X] * 2 << " " << _size[Y]
      + _lbOffset[Y] * 2 << " " << _size[Z] + _lbOffset[Z] * 2 << std::endl;
  file << "POINTS  " << (_size[X] + 2 * _lbOffset[X]) * (_size[Y] + 2
      * _lbOffset[Y]) * (_size[Z] + 2 * _lbOffset[Z]) << " float" << std::endl;
  for (int i = 0; i < _size[X] + _lbOffset[X] * 2; i++)
    for (int j = 0; j < _size[Y] + _lbOffset[Y] * 2; j++)
      for (int k = 0; k < _size[Z] + _lbOffset[Z] * 2; k++)
        {
          file << i << " " << j << " " << k << std::endl;
        }
  file << std::endl;
  file << std::endl;
  file << std::endl;
  file << "POINT_DATA  " << (_size[X] + 2 * _lbOffset[X]) * (_size[Y] + 2
      * _lbOffset[Y]) * (_size[Z] + 2 * _lbOffset[Z]) << std::endl;
  file << "SCALARS density float 1" << std::endl;
  file << "LOOKUP_TABLE default" << std::endl;
  for (int i = 0; i < _size[X] + _lbOffset[X] * 2; i++)
    for (int j = 0; j < _size[Y] + _lbOffset[Y] * 2; j++)
      for (int k = 0; k < _size[Z] + _lbOffset[Z] * 2; k++)
        {
          file << _voutput[calcIndexV(i, j, k) + DataContainer::rho]
              << std::endl;
        }

  file << std::endl;
  file << std::endl;
  file << std::endl;
  file << "VECTORS velocity float" << std::endl;
  for (int i = 0; i < _size[X] + _lbOffset[X] * 2; i++)
    for (int j = 0; j < _size[Y] + _lbOffset[Y] * 2; j++)
      for (int k = 0; k < _size[Z] + _lbOffset[Z] * 2; k++)
        {
          int index = calcIndexV(i, j, k);
          double vx = _voutput[index + DataContainer::velocityX];
          double vy = _voutput[index + DataContainer::velocityY];
          double vz = _voutput[index + DataContainer::velocityZ];
          if (vx != vx || vx > 999999999999 || vx < -999999999999)
            vx = 0;
          if (vy != vy || vy > 999999999999 || vy < -999999999999)
            vy = 0;
          if (vz != vz || vz > 999999999999 || vz < -999999999999)
            vz = 0;

          file << vx << " " << vy << " " << vz << std::endl;
        }

}
