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

#include "Thermostat.h"
#include "madpac/PeanoCouplingService.h"

namespace madpac
{

  namespace mardyncoupling
  {

    namespace thermostat
    {

      Thermostat::Thermostat(
          ParticleContainer* moleculeContainer,
          Domain* domain,
          ExchangeDataContainer *dataContainer,
          int streamOutDir,
          madpac::mardyncoupling::configurations::MarDynThermostatConfiguration* config) :
        _moleculeContainer(moleculeContainer), _domain(domain), _dataContainer(
            dataContainer), _streamOutDir(streamOutDir)
      {
        _md2ms
            = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getCouplingConfig()->getMd2ms();
        //TODO: ?
        double targetTemp = config->getTargetTemperature();
        _targetEnergy = 1.5 * ((double) _domain->getglobalNumMolecules())
            * targetTemp;
        _gamma = config->getThermostatGamma();
        _interval = config->getThermostatInterval();
        _directed = config->getDirected();
        std::cout << " TARGET TEMP " << targetTemp << " TARGET E "
            << _targetEnergy << " dir " << _directed[0] << " " << _directed[1]
            << " " << _directed[2] << std::endl;

        int
            _moveInterval =
                madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getBoundaryConfig()->getMovingWallConfig()->getMoveInterval();
        //_movingWall = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynCouplingConfig()->getMovingWall();
        //		 _densityCoupling = madpac::PeanoCouplingService::getInstance().getConfig()->getCouplingConfig()->getDensityCoupling();


        //		 std::cout << " GAMMA " << _gamma << " MI " << _moveInterval << std::endl;


        _numVsamples = 0;
        Molecule *mol;
        for (mol = _moleculeContainer->begin(); mol
            != _moleculeContainer->end(); mol = _moleculeContainer->next())
          {
            for (int i = 0; i < 3; i++)
              {
                if (_directed[i] != 0)
                  _vmove[i] += mol->v(i);
              }
            _numVsamples++;
          }
        _numVsamples = _dataContainer->syncV(_vmove, _numVsamples);
        for (int i = 0; i < 3; i++)
          _vmove[i] = _vmove[i] / _numVsamples * (double)_moveInterval/2.0;
        _numVsamples = 0;
        for (int i = 0; i < 3; i++)
          _vglobal[i] = 0;
        _eglobal = 0;

      }

      Thermostat::~Thermostat()
      {
      }

    }

  }

}
