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

#include "VelocityExchange.h"
#include "molecules/Molecule.h"
#include "madpac/PeanoCouplingService.h"
#include "configurations/MarDynCouplingConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    VelocityExchange::VelocityExchange(Domain* domain,
        ParticleContainer* moleculeContainer,
        ExchangeDataContainerWDCwithOutput *dataContainer,
        madpac::mardyncoupling::usher::UsherConnector *usherConnector, int dim,
        thermostat::Thermostat* thermostat, int streamoutdir) :
      _domain(domain), _moleculeContainer(moleculeContainer), _dataContainer(
          dataContainer), _usherConnector(usherConnector), _dim(dim),
          _thermostat(thermostat), _streamOutDir(streamoutdir)
    {
      _md2ms
          = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getCouplingConfig()->getMd2ms();

      _alpha
          = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getCouplingConfig()->getAlpha();
      _movingWall
          = madpac::PeanoCouplingService::getInstance().getConfig()->getMarDynConfig()->getBoundaryConfig()->getMovingWallConfig()->getMovingWall();
      _densityCoupling
          = madpac::PeanoCouplingService::getInstance().getConfig()->getCouplingConfig()->getDensityCoupling();
      if (_streamOutDir < _dim)
        _bordersize
            = madpac::PeanoCouplingService::getInstance().getConfig()->getGeometryConfig()->getMidNoCouplingLowerCorner()[_streamOutDir];
      else
        _bordersize
            = madpac::PeanoCouplingService::getInstance().getConfig()->getGeometryConfig()->getMidNoCouplingLowerCorner()[0];
      std::cout << "md2ms " << _md2ms << std::endl;

      std::cout << "alpha " << _alpha << std::endl;

    }

    VelocityExchange::~VelocityExchange()
    {
    }

    void
    VelocityExchange::setV()
    {
      _dataContainer->setMDBorderZero();
      Molecule *mol;
      double pos[3];
      double data[DataContainer::_dataSize];
      for (mol = _moleculeContainer->begin(); mol != _moleculeContainer->end(); mol
          = _moleculeContainer->next())
        {
          for (int i = 0; i < 3; i++)
            {
              pos[i] = mol->r(i);
              data[i] = mol->v(i) * _md2ms;
            }
          data[DataContainer::rho] = 1;
          _dataContainer->addMDRegion(data, pos);
        }
    }

    void
    VelocityExchange::getV()
    {
      if (_dataContainer->lb2md())
        {
       //   std::cout << "MD: getV" << std::endl;
          Molecule *mol;
          double pos[3];
          //int index=0;
          //	double alpha = 0.01;
          double data[DataContainer::_dataSize];
          double lbdata[DataContainer::_dataSize];
          //	std::cout << "setV2" << std::endl;

          for (mol = _moleculeContainer->begin(); mol
              != _moleculeContainer->end(); mol = _moleculeContainer->next())
            {
              for (int i = 0; i < 3; i++)
                pos[i] = mol->r(i);
              //index = _dataContainer->calcIndex(pos,true);

              if (_dataContainer->getLBData4MD(lbdata, pos))
                {
                  _dataContainer->getMDData4MD(data, pos);
                  //_dataContainer->getLBData4MD(lbdata,pos);

                  double vx = _alpha * (lbdata[DataContainer::velocityX]
                      - data[DataContainer::velocityX]) / _md2ms;
                  double vy = _alpha * (lbdata[DataContainer::velocityY]
                      - data[DataContainer::velocityY]) / _md2ms;
                  double vz = _alpha * (lbdata[DataContainer::velocityZ]
                      - data[DataContainer::velocityZ]) / _md2ms;
                  if (_dim == 2)
                    vz = 0;
                  if (abs(vz) > 10e-300)
                    std::cout << lbdata[DataContainer::velocityX] << " "
                        << data[DataContainer::velocityX] << " " << vx * _md2ms
                        << " " << vy * _md2ms << " " << vz * _md2ms
                        << std::endl;
                  mol->vadd(vx, vy, vz);

                }

            }
        }
    }

    void
    VelocityExchange::adjustRhoOld(DomainDecompBase* ddb, int iteration)
    {

      if (_dataContainer->getNumInsertMolecules() < 1)
        {
          return;
        }
      double u = std::min(_domain->getAverageGlobalUpot(), -2.0);
      if (u > 0)
        return;

      _moleculeContainer->update();
      _moleculeContainer->updateMoleculeCaches();

      _usherConnector->setU0(u);
      //std::cout << "USHER U0 " << u << " I " << _dataContainer->getNumInsertMoleculesWOC() <<  std::endl;

#ifdef MADPAC_UDEBUG
      _domain->writeCheckpoint("Usher1checkpoint.txt",_moleculeContainer,ddb);
#endif

      double cornerA[3];
      double cornerB[3];
      cornerA[0] = _moleculeContainer->getBoundingBoxMin(0);
      cornerA[1] = _moleculeContainer->getBoundingBoxMin(1);
      cornerA[2] = _moleculeContainer->getBoundingBoxMin(2);
      cornerB[0] = _moleculeContainer->getBoundingBoxMax(0);
      cornerB[1] = _moleculeContainer->getBoundingBoxMax(1);
      cornerB[2] = _moleculeContainer->getBoundingBoxMax(2);
      bool insert = false;
      if (cornerA[_streamOutDir] < _bordersize)
        {
          insert = true;
        }

      cornerB[_streamOutDir] = std::min(cornerB[_streamOutDir], _bordersize);
      double vtmp[3]; //todo: check

      for (int i = 0; i < 3; i++)
        vtmp[i] = _thermostat->getVglobal(i) / _md2ms;

      for (int i = 0; i < 100 && _dataContainer->getNumInsertMolecules() > 0; i++)
        {
          if (insert)
            if (_usherConnector->addP(cornerA, cornerB, vtmp))
              {

                _dataContainer->decNumInsertMolecules();
                _domain->setglobalNumMolecules(_domain->getglobalNumMolecules()
                    + 1);
                _domain->setglobalRho(_domain->getglobalNumMolecules()
                    / (_domain->getGlobalLength(0)
                        * _domain->getGlobalLength(1)
                        * _domain->getGlobalLength(2)));
                _moleculeContainer->update();
                _moleculeContainer->updateMoleculeCaches();
              }
        }
#ifdef MADPAC_UDEBUG
      Molecule* x;
      for(x =_moleculeContainer->begin();x != _moleculeContainer->end();x = _moleculeContainer->next())
        {
          x->checkZero();
        }
      _domain->writeCheckpoint("Usher2checkpoint.txt",_moleculeContainer,ddb);
#endif
      //	assert(_insertMolecules == 0);
    }

    void
    VelocityExchange::adjustRho(DomainDecompBase* ddb, int iteration)
    {

      if (!_densityCoupling)
        {
          if (_dataContainer->getNumInsertMolecules() < 1)
            {
              return;
            }
          double u = std::min(_domain->getAverageGlobalUpot(), -2.0);
          if (u > 0)
            return;

          _moleculeContainer->update();
          _moleculeContainer->updateMoleculeCaches();

          _usherConnector->setU0(u);
          //std::cout << "USHER U0 " << u << " I " << _dataContainer->getNumInsertMoleculesWOC() <<  std::endl;

#ifdef MADPAC_UDEBUG
          _domain->writeCheckpoint("Usher1checkpoint.txt",_moleculeContainer,ddb);
#endif
          double vtmp[3];
          for (int i = 0; i < 3; i++)
            vtmp[i] = _thermostat->getVglobal(i) / _md2ms;

          double BBMin[3];
          double BBMax[3];

          for(int i=0;i<3;i++) {
            BBMin[i] = _moleculeContainer->getBoundingBoxMin(i);
            BBMax[i] = _moleculeContainer->getBoundingBoxMax(i);
          }

          for (int i = 0; i < 100 && _dataContainer->getNumInsertMolecules()
              > 0; i++)
            {
              if (_dataContainer->addPminLBrho(_usherConnector, iteration,
                  _md2ms, BBMin, BBMax, vtmp))
                {
                  _dataContainer->decNumInsertMolecules();
                  if (!_movingWall)
                    {
                      _domain->setglobalNumMolecules(
                          _domain->getglobalNumMolecules() + 1);
                      _domain->setglobalRho(_domain->getglobalNumMolecules()
                          / (_domain->getGlobalLength(0)
                              * _domain->getGlobalLength(1)
                              * _domain->getGlobalLength(2)));
                    }
                  _moleculeContainer->update();
                  _moleculeContainer->updateMoleculeCaches();
                }
              //std::cout << _insertMolecules << std::endl;
            }
#ifdef MADPAC_UDEBUG
          Molecule* x;
          for(x =_moleculeContainer->begin();x != _moleculeContainer->end();x = _moleculeContainer->next())
            {
              x->checkZero();
            }
          _domain->writeCheckpoint("Usher2checkpoint.txt",_moleculeContainer,ddb);
#endif
          if (_dataContainer->getNumInsertMolecules() != 0)
            std::cout << "MarDynCoupling::adjustRho(): proc = "
                << _dataContainer->getRank() << " insertParticles = "
                << _dataContainer->getNumInsertMolecules() << std::endl;
        }
      else
        {
          _dataContainer->adjustMDRho(_usherConnector, iteration, _md2ms);
        }

    }
  }
}
