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

#include "SimulationTestUsher.h"

namespace madpac
{

  namespace mardyn
  {

#ifdef MADPAC_TESTUSHER
    static const int _INITTIME = 2000;
#endif

    SimulationTestUsher::SimulationTestUsher()
    {
    }

    SimulationTestUsher::~SimulationTestUsher()
    {
    }

#ifndef MADPAC_LBMD_COUPLING
    void SimulationTestUsher::simulate()
      {
#ifdef MADPAC_TESTUSHER

        int uid =0;
        Molecule *mole;

        for(mole=_moleculeContainer->begin();mole != _moleculeContainer->end();mole=_moleculeContainer->next())
          {
            mole->setid(uid);
            uid++;
          }

        lastinsert = 0;
        _usherConnector = new usherConnector(_domain,_moleculeContainer);
        r = _domain->getglobalRho();
        fail = 0;
        numP = _moleculeContainer->getNumberOfParticles();
        unsigned uCAT = _pressureGradient->getUCAT();
        CanonicalEnsemble ensemble(_moleculeContainer, &(_domain->getComponents()));
        simulateStart(ensemble);
        for (_simstep = _initSimulation; _simstep <= _numberOfTimesteps; _simstep++)
          {
            numP = _moleculeContainer->getNumberOfParticles();
            if(_simstep%50==0)
              {
                std::cout << "I: " << _simstep << " ";
                std::cout << "P: "<< numP << " ";
                std::cout << "R: " << r << " ";
                double u= _domain->getAverageGlobalUpot();
                std::cout << "U: " << u << " ";

                //              int tmp[] = {1,1,1};
                //              std::cout << "V: " << container->getV(tmp) << " ";
                //      double e = 0.0;
                //std::cout << "E: " << e << " ";
                //double e2 = 0.0;
                //std::cout << "E2: " << (e2+u) << " ";
                double t = _domain->getGlobalCurrentTemperature();
                std::cout << "T: " << t << " ";
                std::cout << "F: " << fail << std::endl;

              }
            if(_moleculeContainer->getNumberOfParticles()>=1000)
            break;

            simulateStep(uCAT, ensemble);
          }
        simulateFinish();
#endif
      }

#endif

    void
    SimulationTestUsher::simulateStep()
    {
      //      Molecule* tM;


      prepareTimestep();

      // ensure that all Particles are in the right cells and exchange Particles
      //global_log->debug() << "Updating container and decomposition" << endl;
      updateParticleContainerAndDecomposition();

#ifdef MADPAC_TESTUSHER
      if(numP<1000 && (_simstep-lastinsert)>(int)(r/0.01) && _simstep>_INITTIME)
        {
          double minX[3];
          double maxX[3];
          for(int i=0;i<3;i++)
            {
              minX[i] = _moleculeContainer->getBoundingBoxMin(i);
              maxX[i] = _moleculeContainer->getBoundingBoxMax(i);

            }

          _domain->writeCheckpoint("Usher1checkpoint.txt",_moleculeContainer,_domainDecomposition);
          bool b = _usherConnector->addP(minX,maxX);

          r = _domain->getglobalRho();
          if(b)
            {
              lastinsert = _simstep;
              fail = 0;
              _moleculeContainer->update();
              _domain->setglobalNumMolecules(_domain->getglobalNumMolecules()+1);
              _domain->setglobalRho(_domain->getglobalNumMolecules()/(_domain->getGlobalLength(0)*_domain->getGlobalLength(1)*_domain->getGlobalLength(2)));
              _moleculeContainer->updateMoleculeCaches();
              Molecule* x;
              for(x =_moleculeContainer->begin();x != _moleculeContainer->end();x = _moleculeContainer->next())
                {
                  x->checkZero();
                }
              _domain->writeCheckpoint("Usher2checkpoint.txt",_moleculeContainer,_domainDecomposition);

            }
          else
            {
              lastinsert +=10;
              fail++;
            }
          //double temp = _domain->getGlobalCurrentTemperature();
          //std::cout << "asd "<<temp << std::endl;
          //_domain->setGlobalTemperature(temp);

          //      else std::cout << "asdas" << std::endl;
        }
      else if(_simstep==_INITTIME)
        {
          double u = _domain->getAverageGlobalUpot();

          _usherConnector->setU0(u);
          std::cout << "U0:" << u<< std::endl;

        }
      if (_simstep == (_INITTIME/2))
        {
          _domain->thermostatOff();
          std::cout << "thermostatOff()" << std::endl;
        }
#endif

      forceCalculationEtc();

      thermostatEtc();

      finishTimestep();

    }

  }

}
