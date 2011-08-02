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

#include "MarDynSimulation.h"
#include "utils/Timer.h"
#include "madpac/PeanoCouplingService.h"

namespace mardyn
{

  MarDynSimulation::MarDynSimulation(int numberOfTimesteps,
      std::string inputfilename) :
    Simulation()
  {
    _numberOfTimesteps = numberOfTimesteps;
    global_log->info() << "Simulating " << _numberOfTimesteps << " steps."
        << endl;
    initConfigFile(inputfilename);
    std::string op("output/mardyn");
    _outputPrefix = op;
  }

  MarDynSimulation::~MarDynSimulation()
  {
  }

  void
  MarDynSimulation::simulateFinish()
  {
    Simulation::simulateFinish();

    global_log->info() << "hybrid loop  took:         "
        << _hybridTimer->get_etime() << " sec" << endl;
    global_log->info() << "lb IO took:                 "
        << _lbTimer->get_etime() << " sec" << endl;
    delete _lbConnector;
    delete _hybridTimer;
    delete _lbTimer;

  }

  void
  MarDynSimulation::simulateStep()
  {
    //      Molecule* tM;

    prepareTimestep();

    if (madpac::PeanoCouplingService::getInstance().bEnabled())
      {
        _hybridTimer->start();

        _moleculeContainer->update();
        _moleculeContainer->updateMoleculeCaches();
        global_log->debug() << "rboundary" << endl;
        _lbConnector->applyRBoundary();

        //global_log->debug() << "boundary" << endl;
#ifdef MADPAC_HDEBUG
        std::list<Molecule *> mol;
        list<Molecule *>::iterator m;
        _moleculeContainer->getHaloParticles(mol);
        for( m=mol.begin();m != mol.end(); m++)
          {
            for(int i=0;i<3;i++)
            if((*m)->r(i) < 0.0 || (*m)->r(i) > _domain->getGlobalLength(i) )
              {
                std::cout<< "RBOUND CHECKING "<< i << " "<< (*m)->id()<< " " <<(*m)->r(i) << std::endl;
              }
          }
#endif

        _lbConnector->moveParticles(_simstep);


        global_log->debug() << "Updating container and decomposition" << endl;
        updateParticleContainerAndDecomposition();



        if (!_firstMDStep)
          _lbConnector->adjustRho(_domainDecomposition, _simstep);
        else
          _firstMDStep = false;


        _moleculeContainer->deleteOuterParticles();
        updateParticleContainerAndDecomposition();

#ifdef MADPAC_HDEBUG
        //std::list<Molecule *> mol;
        //list<Molecule *>::iterator m;
        _moleculeContainer->getHaloParticles(mol);
        for( m=mol.begin();m != mol.end(); m++)
          {
            for(int i=0;i<3;i++)
            if((*m)->r(i) < 0.0 || (*m)->r(i) > _domain->getGlobalLength(i) )
              {
                std::cout<< "QRBOUND CHECKING "<< i << " "<< (*m)->id()<< " " <<(*m)->r(i) << std::endl;
              }
          }
#endif



        _hybridTimer->stop();
      }
    else
      {
        //std::cout << "pb " <<_simstep<< std::endl;
        _lbConnector->moveParticles(_simstep);
        // ensure that all Particles are in the right cells and exchange Particles
        global_log->debug() << "Updating container and decomposition" << endl;
        updateParticleContainerAndDecomposition();
      }

    forceCalculationEtc();

    if (madpac::PeanoCouplingService::getInstance().bEnabled())
      {
        _hybridTimer->start();
        global_log->debug() << "fboundary" << endl;
        _lbConnector->applyFBoundary();
        _hybridTimer->stop();
      }

    thermostatEtc();

    _hybridTimer->start();
    _lbConnector->applyThermostat(_simstep);

    _lbConnector->setV();
    if (!_firstStep)
      _lbConnector->getV();
    //std::cout << _simstep << std::endl;

    _hybridTimer->stop();

    finishTimestep();

  }

  void
  MarDynSimulation::simulateStart(
      ExchangeDataContainerWDCwithOutput* hDataContainer, bool bEnabled,
      bool bThermostat, int streamdir)
  {
    _firstStep = true;
    _lbTimer = new Timer;
    _hybridTimer = new Timer;
    //_firstMDStep = true;
    _initSimulation = (unsigned long) (_domain->getCurrentTime()
        / _integrator->getTimestepLength());
    _bEnabled = bEnabled;
    _simstep = _initSimulation;
    std::cout << "Simstep = " << _simstep << std::endl;
    if (!bThermostat)
      _domain->thermostatOff();
    _lbConnector = new madpac::mardyncoupling::MarDynCoupling(
        _moleculeContainer->getCutoff(), _domain, _moleculeContainer,
        hDataContainer, streamdir);
    _lbConnector->setTimestepLength(_integrator->getTimestepLength());
    Simulation::simulateStart();
  }

  void
  MarDynSimulation::simulate()
  {
    std::cerr << "MarDynSimulation::simulate(): -.-" << std::endl;
  }

  void
  MarDynSimulation::output(unsigned long simstep)
  {
    Simulation::output(simstep);

    Log::global_log->info() << "\trho = " << _domain->getglobalRho()
        << "\tv_x = " << _lbConnector->getVglobal(0) << "\tv_y = "
        << _lbConnector->getVglobal(1) << endl;
  }
}

