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

#include "madpac/PeanoCouplingService.h"
#ifdef ENABLE_MPI
#include <mpi.h>
#endif
#include "tarch/services/ServiceFactory.h"

#include "peanocoupling/PeanoDataExchangeService.h"

registerService( madpac::PeanoCouplingService)

tarch::logging::Log madpac::PeanoCouplingService::_log(
    "madpac::PeanoCouplingService");

madpac::PeanoCouplingService::PeanoCouplingService() :
  _config(false), _isinit(false)
{
}

madpac::PeanoCouplingService&
madpac::PeanoCouplingService::getInstance()
{
  static PeanoCouplingService singleton;
  return singleton;
}

void
madpac::PeanoCouplingService::setConfig(
    madpac::configurations::MDCouplingConfiguration* cfg)
{
  config = cfg;
  _numMdIterations = config->getCouplingConfig()->getMdIterations();
  _lbinittime = config->getCouplingConfig()->getLbinittime();
#ifdef MADPAC_MARDYNCOUPLING
  _bEnabled = config->getMarDynConfig()->getBoundaryConfig()->getEnabled();
  _streamdir = config->getMarDynConfig()->getBoundaryConfig()->getStreamdir();
#else
  _bEnabled = true;
  _streamdir = 0;
#endif
  _cellSize = config->getGeometryConfig()->getCellSize();

  std::cout << " CELL " << _cellSize << " B " << _bEnabled << " MDI "
      << _numMdIterations << " DIR " << _streamdir << std::endl;
  _config = true;
}

int
madpac::PeanoCouplingService::init(int lbtimesteps, double dx, double dt,
    double density, double tau)
{
  if (!_config)
    {
      std::cout << "NO CONFIG!" << std::endl;
    }
  assertion( _config);
  int _numMdTimesteps = lbtimesteps * _numMdIterations;

  _timestep = -1;
  //_dt = dt;
  // _densityLB2MD = density;
  //_tau = tau;
#ifdef MADPAC_MARDYNCOUPLING

  logInfo("init()", "INIT MARDYN");
  _mardyn = new madpac::mardyncoupling::MarDynMain();
  mardyn::MarDynSimulation* _mdSimulation = _mardyn->init(_numMdTimesteps);

 #endif

  //INIT HYBIRD
  logInfo("init()", "INIT MADPAC");

  _dataContainer = new ExchangeDataContainerWDCwithOutput(DIMENSIONS,
      config->getCouplingConfig()->getLb2md(),
      config->getCouplingConfig()->getMd2lb(),
      config->getCouplingConfig()->getMdIterations(),
      config->getCouplingConfig()->getLbIterations());//_mdSimulation->domainDecomposition();
  //END  INIT HYBIRD
  PeanoDataExchangeService::getInstance().init(_dataContainer, dx, dt, density,
      tau, config->getCouplingConfig());

  _isinit = true;
#ifdef MADPAC_MARDYNCOUPLING

  //INIT MARDYN SIMULATE
  _mdSimulation->simulateStart(_dataContainer, _bEnabled, true, _streamdir);
  //END MARDYN SIMULATE
  return (_mdSimulation->domainDecomposition()).getRank();
#elif MADPAC_MDSBCOUPLING
  logInfo("init()", "INIT MDSB");
  _mardyn = new madpac::mdsbcoupling::MDSBMain(_dataContainer,DIMENSIONS,config->getMDSBConfig());
  _mardyn->init(_numMdTimesteps);
  return 0;
#endif
}

void
madpac::PeanoCouplingService::runMarDyn()
{
  _timestep++;
  if (_timestep >= _lbinittime)
    {
      logInfo("runMarDyn()", "RUN MARDYN TIMESTEP: " << _timestep);

      //std::cout << "RUN MARDYN TIMESTEP: "<< _timestep << std::endl;
      _dataContainer->syncLB();

      if (_timestep > _lbinittime)
        _dataContainer->output(_timestep);
      _mardyn->simStep(_numMdIterations);
      _dataContainer->syncMD();
    }
}

void
madpac::PeanoCouplingService::shutdown()
{

  //MARDYN
  logInfo("shutdown()", "SHUTDOWN MARDYN");
  _mardyn->shutdown();
  delete _mardyn;
  //ENDMARDYN
  // MADPAC
  logInfo("shutdown()", "SHUTDOWN MADPAC");

  delete _dataContainer;
  //ENDPAC

}

