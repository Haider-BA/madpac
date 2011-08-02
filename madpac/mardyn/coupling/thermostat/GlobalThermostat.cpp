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

#include "GlobalThermostat.h"
#include "molecules/Molecule.h"
#include "mardyn/coupling/configurations/MarDynCouplingConfiguration.h"
#include "madpac/PeanoCouplingService.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace thermostat
    {
      GlobalThermostat::GlobalThermostat(
          ParticleContainer* moleculeContainer,
          Domain* domain,
          ExchangeDataContainer *dataContainer,
          int streamOutDir,
          madpac::mardyncoupling::configurations::MarDynGlobalThermostatConfiguration* config) :
        Thermostat(moleculeContainer, domain, dataContainer, streamOutDir,
            config)
      {

      }

      GlobalThermostat::~GlobalThermostat()
      {
      }

      void
      GlobalThermostat::applyThermostat(int iteration)
      {
        Molecule *mol;
        for (int i = 0; i < 3; i++)
          {
            _vtmp[i] = 0;
          }
        _numVsamples = 0;
        _eglobal = 0;
        for (mol = _moleculeContainer->begin(); mol
            != _moleculeContainer->end(); mol = _moleculeContainer->next())
          {
            for (int i = 0; i < 3; i++)
              {
                _vtmp[i] += mol->v(i);
              }
            _numVsamples++;
          }
        for (int i = 0; i < 3; i++)
          {
            if (_directed[i] != 0)
              {
                _vglobal[i] = _vtmp[i];
              }
            else
              {
                _vglobal[i] = 0.0;
              }
          }
        _numVsamples = _dataContainer->syncV(_vglobal, _numVsamples);
        _domain->setglobalNumMolecules(_numVsamples);
        _domain->setglobalRho(_domain->getglobalNumMolecules()
            / (_domain->getGlobalLength(0) * _domain->getGlobalLength(1)
                * _domain->getGlobalLength(2)));
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
        double beta = sqrt(_targetEnergy / _eglobal);
        for (mol = _moleculeContainer->begin(); mol
            != _moleculeContainer->end(); mol = _moleculeContainer->next())
          {
            mol->vsub(_vglobal[0], _vglobal[1], _vglobal[2]);
            mol->scale_v(1.0 + _gamma * (beta - 1.0));
            mol->vadd(_vglobal[0], _vglobal[1], _vglobal[2]);
          }
      }
    }
  }
}
