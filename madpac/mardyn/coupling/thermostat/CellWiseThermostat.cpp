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
#ifdef MADPAC
#include "CellWiseThermostat.h"
#include "molecules/Molecule.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace thermostat
    {

      CellWiseThermostat::CellWiseThermostat(
          int dim,
          ParticleContainer* moleculeContainer,
          Domain* domain,
          ExchangeDataContainer *dataContainer,
          int streamOutDir,
          madpac::mardyncoupling::configurations::MarDynCellWiseThermostatConfiguration* config) :
        DataContainer(dim), Thermostat(moleculeContainer, domain,
            dataContainer, streamOutDir, config)
      {
        _vPerCell
            = new madpac::core::utils::Vector<double, _dataSize>[getArraySize()];
        _ePerCell = new double[getArraySize()];
        for (int i = 0; i < getArraySize(); i++)
          {
            for (int j = 0; j < _dataSize; j++)
              _vPerCell[i][j] = 0;
            _ePerCell[i] = 0;
          }
        _targetTemp = config->getTargetTemperature();

        //TODO: dynamic?
        _targetEnergyL = 1.5 * ((double) _domain->getglobalNumMolecules())
            / ((double) getArraySize()) * _targetTemp;

        _ginterval = config->getThermostatGInterval();

      }

      CellWiseThermostat::~CellWiseThermostat()
      {
        assert(_vPerCell);
        delete[] _vPerCell;
        assert(_ePerCell);
        delete[] _ePerCell;
      }

      void
      CellWiseThermostat::applyThermostat(int iteration)
      {
        saveV();
        //std::cout << "asdxsa" << std::endl;
        if (_ginterval != 0 && iteration % _ginterval == 0)
          {
            updateGlobalE();
          }

        if (_interval != 0 && iteration % _interval == 0)
          {
            updateLocalE();

            adjustTemperature();
          }

      }

      void
      CellWiseThermostat::adjustTemperature()
      {
        Molecule *mol;

        double pos[3];
        int index;
        double beta = 0;
        for (mol = _moleculeContainer->begin(); mol
            != _moleculeContainer->end(); mol = _moleculeContainer->next())
          {
            for (int i = 0; i < 3; i++)
              pos[i] = mol->r(i);
            index = calcIndexX(pos);
            if (index > -1)
              {
                _targetEnergyL = 1.5 * _vPerCell[index][rho]
                    / (double) _interval * _targetTemp; //TODO: check
                beta = sqrt(_targetEnergyL / _ePerCell[index]);
                mol->vsub(_vPerCell[index][velocityX],
                    _vPerCell[index][velocityY], _vPerCell[index][velocityZ]);
                mol->scale_v(1.0 + _gamma * (beta - 1.0));
                mol->vadd(_vPerCell[index][velocityX],
                    _vPerCell[index][velocityY], _vPerCell[index][velocityZ]);
              }
          }

        for (int j = 0; j < getArraySize(); j++)
          {
            for (int i = 0; i < _dataSize; i++)
              {
                _vPerCell[j][i] = 0;
              }
            //std::cout << _targetEnergy << " " <<_ePerCell[j*_dataSize] << std::endl;
          }

        //TODO : CHECK ;)
        for (int i = 0; i < 3; i++)
          {
            _vtmp[i] = 0;
          }
      }

      void
      CellWiseThermostat::saveV()
      {

        Molecule *mol;
        int index;
        double pos[3];
        _numVsamples = 0;
        _eglobal = 0;
        for (mol = _moleculeContainer->begin(); mol
            != _moleculeContainer->end(); mol = _moleculeContainer->next())
          {
            for (int i = 0; i < 3; i++)
              pos[i] = mol->r(i);
            index = calcIndexX(pos);
            if (index > -1)
              {
                for (int i = 0; i < 3; i++)
                  {
                    _vPerCell[index][i] += mol->v(i);
                  }
                _vPerCell[index][rho] = _vPerCell[index][rho] + 1;
              }

            for (int i = 0; i < 3; i++)
              {
                _vtmp[i] += mol->v(i);
              }
            _numVsamples++;
          }

      }

      void
      CellWiseThermostat::updateLocalE()
      {
        Molecule *mol;

        for (int j = 0; j < getArraySize(); j++)
          {
            for (int i = 0; i < 3; i++)
              {
                if (_directed[i] != 0)
                  {
                    _vPerCell[j][i] = _vPerCell[j][i] / _vPerCell[j][rho];
                  }
                else
                  {
                    _vPerCell[j][i] = 0.0;
                  }
              }
            _ePerCell[j] = 0;
          }
        double vtmp;
        double pos[3];
        int index;

        for (mol = _moleculeContainer->begin(); mol
            != _moleculeContainer->end(); mol = _moleculeContainer->next())
          {
            for (int i = 0; i < 3; i++)
              pos[i] = mol->r(i);
            index = calcIndexX(pos);
            if (index > -1)
              {
                double e = 0;
                for (int i = 0; i < 3; i++)
                  {
                    vtmp = mol->v(i) - _vPerCell[index][i];
                    e += vtmp * vtmp;
                  }
                e *= 0.5 * mol->getMass();
                _ePerCell[index] += e;
              }
          }

      }

      void
      CellWiseThermostat::updateGlobalE()
      {
        Molecule *mol;
        _eglobal = 0.0;
        for (int i = 0; i < 3; i++)
          {
            if (_directed[i] != 0)
              {
                _vglobal[i] = _vtmp[i];
              }
            else
              {
                _vglobal[i] = 0;
              }
          }

        _numVsamples = _dataContainer->syncV(_vglobal, _numVsamples);
        for (int i = 0; i < 3; i++)
          {
            _vglobal[i] = _vglobal[i] / _numVsamples;
            _vmove[i] += _vglobal[i];
          }
        double vtmp;
        for (mol = _moleculeContainer->begin(); mol
            != _moleculeContainer->end(); mol = _moleculeContainer->next())
          {
            double e = 0;
            for (int i = 0; i < 3; i++)
              {
                vtmp = mol->v(i) - _vglobal[i];
                e += vtmp * vtmp;
              }
            e *= 0.5 * mol->getMass();
            _eglobal += e;
          }
        _dataContainer->syncE(&_eglobal);
        //std::cout << _targetEnergy << " " << _eglobal << std::endl;

      }

    }
  }
}
#endif
