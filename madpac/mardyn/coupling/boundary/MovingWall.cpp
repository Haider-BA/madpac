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

#include "MovingWall.h"
#include "mardyn/coupling/configurations/MarDynCouplingConfiguration.h"
#include "molecules/Molecule.h"

#ifdef MADPAC
#include "madpac/PeanoCouplingService.h"
#endif

namespace madpac
{
  namespace mardyncoupling
  {
    namespace boundary
    {

      MovingWall::MovingWall(ParticleContainer* moleculeContainer,
          thermostat::Thermostat* thermostat, int streamOutDir) :
        Boundary(moleculeContainer), _thermostat(thermostat), _streamOutDir(
            streamOutDir)
      {
#ifdef MADPAC
        _moveInterval
            = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getBoundaryConfig()->getMovingWallConfig()->getMoveInterval();
        _movingWall
            = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getBoundaryConfig()->getMovingWallConfig()->getMovingWall();
        _densityCoupling
            = madpac::PeanoCouplingService::getInstance().getConfig()->getCouplingConfig()->getDensityCoupling();
        //_timestepLength = madpac::PeanoCouplingService::getInstance().getDt();
#endif
      }

      MovingWall::~MovingWall()
      {
      }

      void
      MovingWall::moveParticles(int iteration)
      {
        if (iteration % _moveInterval == 0)
          {
            _thermostat->getVMove(_vmove);
            applyBoundary();
          }
      }

      void
      MovingWall::applyBoundary()
      {
        if (_movingWall && !_densityCoupling
#ifdef MADPAC
            && madpac::PeanoCouplingService::getInstance().bEnabled())
#else
          )
#endif
          {
          //  std::cout << "MOVE " << _vmove[0] << " " << _vmove[1] << " "
          //      << _vmove[2] << std::endl;
            Molecule *mol;
            for (mol = _moleculeContainer->begin(); mol
                != _moleculeContainer->end(); mol = _moleculeContainer->next())
              {
                for (int i = 0; i < 2; i++)
                  mol->move(i, -_vmove[i] * _timestepLength);
              }
          }
       // else
          //	logInfo("applyBoundary()","NOMOVE " << _vmove[0] << " " << _vmove[1] << " " << _vmove[2]);
        //  std::cout << "NOMOVE " << _vmove[0] << " " << _vmove[1] << " "
           //   << _vmove[2] << std::endl;
        for (int i = 0; i < 3; i++)
          _vmove[i] = 0.0;
      }

    }
  }
}
