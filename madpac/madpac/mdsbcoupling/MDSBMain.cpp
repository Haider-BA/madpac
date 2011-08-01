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

#include "MDSBMain.h"
namespace madpac
{
  namespace mdsbcoupling
  {

    MDSBMain::MDSBMain(ExchangeDataContainerWDCwithOutput* dc, int dim, MDSBConfiguration *mdsbConfig) : _dc(dc)
    {


      _mdsb = new MDSB(mdsbConfig->getMDSBConfig().c_str(), mdsbConfig->getDensity());
     double alpha = mdsbConfig->getAlpha();

     ParticleContainer* tmp = _mdsb->getParticleContainer();
      _setV = new MDSBSetVelocity(*tmp,dc);
      _getV = new MDSBGetVelocity(*tmp,dc,dim,alpha);
    }

    MDSBMain::~MDSBMain()
    {
    }

    MDSBMain*
    MDSBMain::init(int numberOfTimesteps)
    {
      iteration = 0;
      return this;
    }

    void
    MDSBMain::shutdown()
    {

    }

    void
    MDSBMain::simStep(int _numMdIterations)
    {
      for (int i = 0; i < _numMdIterations; i++)
        {
          _mdsb->moveParticles();
          _mdsb->calcFnV();
          iteration++;
          _mdsb->applyThermostat(iteration);
          _mdsb->writeOutput(iteration);
          //_mdsb->current_time += _mdsb->delta_t;
          _getV->getV();
          _setV->setV();
          _mdsb->deleteP();
          _mdsb->insertP();

        }
    }

    MDSBMain*
    MDSBMain::getSimulation()
    {
      return this;
    }

  }
}
