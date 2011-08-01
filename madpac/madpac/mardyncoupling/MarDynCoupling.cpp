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

#include "MarDynCoupling.h"
#include "molecules/Molecule.h"
#include "particleContainer/ParticleContainer.h"
#include "madpac/PeanoCouplingService.h"
#include "madpac/configurations/MDCouplingConfiguration.h"
#include "configurations/MarDynCouplingConfiguration.h"
#include "madpac/configurations/CouplingConfiguration.h"
namespace madpac
{
  namespace mardyncoupling
  {
    MarDynCoupling::MarDynCoupling(double cutoffRadius, Domain* domain,
        ParticleContainer* moleculeContainer,
        ExchangeDataContainerWDCwithOutput *hDataContainer, int streamOutDir) : /*_cutoffRadius(cutoffRadius) ,*/
      _domain(domain), _moleculeContainer(moleculeContainer), _dataContainer(
          hDataContainer), _streamOutDir(streamOutDir)
    {
      srand(time(NULL));
      _dim = _dataContainer->getDim();
      std::cout << "streamdir " << _streamOutDir << std::endl;

      //std::cout << "lbC:DIM " << _dim << std::endl;
      _oldAdjustDensity
          = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getCouplingConfig()->getOldAdjustDensity();

      _usherConnector
          = new madpac::mardyncoupling::usher::UsherConnector(
              _domain,
              _moleculeContainer,
              hDataContainer->getRank(),
              madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getGlobalThermostatConfig()->getTargetTemperature(),
              _dim);
      _rboundary
          = new madpac::mardyncoupling::boundary::ReflectingBoundary(
              _moleculeContainer,
              _domain,
              _streamOutDir,
              madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getBoundaryConfig()->getMovingWallConfig()->getMoveInterval(),
              _dim,
              madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getBoundaryConfig()->getStreamout());
      _fboundary = new madpac::mardyncoupling::boundary::ForceBoundary(
          _moleculeContainer, _domain, cutoffRadius, _streamOutDir, _dim);

      _bthermostat = false;

      if (madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getGlobalThermostatConfig()->isValid())
        {
          _thermostat
              = new madpac::mardyncoupling::thermostat::GlobalThermostat(
                  _moleculeContainer,
                  _domain,
                  _dataContainer,
                  _streamOutDir,
                  madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getGlobalThermostatConfig());
          _bthermostat = true;
        }
      else
        std::cout << "NO GT" << std::endl;
      std::cout << "asdsa" << std::endl;

      if (madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getCellwiseThermostatConfig()->isValid())
        {
          _thermostat
              = new madpac::mardyncoupling::thermostat::CellWiseThermostat(
                  _dim,
                  _moleculeContainer,
                  _domain,
                  _dataContainer,
                  _streamOutDir,
                  madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getCellwiseThermostatConfig());
          _bthermostat = true;
        }
      else
        std::cout << "NO CWT" << std::endl;
      //std::cout << "asdsa" << std::endl;


      if (madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getCellwiseThermostatWithOutputConfig()->isValid())
        {
          _thermostat
              = new madpac::mardyncoupling::thermostat::CellWiseThermostatWithOutput(
                  _dim,
                  _moleculeContainer,
                  _domain,
                  _dataContainer,
                  _streamOutDir,
                  madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getCellwiseThermostatWithOutputConfig());
          _bthermostat = true;
        }
      else
        std::cout << "NO CWTWO" << std::endl;
      //std::cout << "asdsa" << std::endl;


      _vexchange = new madpac::mardyncoupling::VelocityExchange(_domain,
          _moleculeContainer, _dataContainer, _usherConnector, _dim,
          _thermostat, _streamOutDir);
      //std::cout << "NO CWT2" << std::endl;


      _movingwall = new madpac::mardyncoupling::boundary::MovingWall(
          _moleculeContainer, _thermostat, _streamOutDir);

      _bmovingwall
          = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getBoundaryConfig()->getMovingWallConfig()->isValid();
      // std::cout << "NO CWT3" << std::endl;

    }

    MarDynCoupling::~MarDynCoupling()
    {
      delete _movingwall;
      delete _vexchange;
      delete _thermostat;
      delete _fboundary;
      delete _rboundary;
      delete _usherConnector;
    }

    void
    MarDynCoupling::deleteOuterParticle()
    {
      Molecule* mo;
      std::list<Molecule *> mol;
      list<Molecule *>::iterator m;
      _moleculeContainer->getHaloParticles(mol);
      for (m = mol.begin(); m != mol.end(); m++)
        {
          mo = (*m);
          for (int i = 0; i < 3; i++)
            {
              if (mo->r(i) < 0 || mo->r(i) > _domain->getGlobalLength(i))
                _moleculeContainer->deleteMolecule(mo->id(), mo->r(0),
                    mo->r(1), mo->r(2));
            }
        }
      mol.clear();
#ifndef NDEBUG
      assert(mol.empty());
      _moleculeContainer->getHaloParticles(mol);
      for (m = mol.begin(); m != mol.end(); m++)
        {
          mo = (*m);
          for (int i = 0; i < 3; i++)
            {
              assert(mo->r(i) < 0 || mo->r(i) > _domain->getGlobalLength(i));
            }
        }
      mol.clear();
      assert(mol.empty());
#endif
    }

    void
    MarDynCoupling::applyRBoundary()
    {
      _rboundary->applyBoundary();
    }

    void
    MarDynCoupling::applyFBoundary()
    {
      _fboundary->applyBoundary();
    }

    void
    MarDynCoupling::applyThermostat(int iteration)
    {
      if (_bthermostat)
        {
          _thermostat->applyThermostat(iteration);
        }
    }

    void
    MarDynCoupling::moveParticles(int iteration)
    {
      if (_bmovingwall)
        {
          _movingwall->moveParticles(iteration);
        }
    }

    void
    MarDynCoupling::setV()
    {
      _vexchange->setV();
    }

    void
    MarDynCoupling::getV()
    {
      _vexchange->getV();
    }

    void
    MarDynCoupling::adjustRho(DomainDecompBase* ddb, int iteration)
    {
      if (((double) rand() / (double) RAND_MAX) < _oldAdjustDensity)
        {
          _vexchange->adjustRhoOld(ddb, iteration);
          //  std::cout << "OLDR"<< std::endl;
        }
      else
        {
          _vexchange->adjustRho(ddb, iteration);
          // std::cout << "R"<< std::endl;

        }
    }
  }
}
