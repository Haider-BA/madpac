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

#ifndef MADPAC_MARDYNCOUPLING_H_
#define MADPAC_MARDYNCOUPLING_H_

#include <iostream>
#include <iomanip>
#include <ctime>

#include "utils/OptionParser.h"
#include "utils/Logger.h"
#include "utils/Testing.h"
#include "madpac/core/ExchangeDataContainerWDCwithOutput.h"
#include "particleContainer/ParticleContainer.h"
#include "Domain.h"
#include "parallel/DomainDecompBase.h"
#include "madpac/mardyncoupling/usher/UsherConnector.h"

#include "boundary/ForceBoundary.h"
#include "boundary/ReflectingBoundary.h"
#include "boundary/MovingWall.h"
#include "thermostat/Thermostat.h"
#include "thermostat/GlobalThermostat.h"
#include "thermostat/CellWiseThermostat.h"
#include "thermostat/CellWiseThermostatWithOutput.h"

#include "VelocityExchange.h"

using Log::global_log;
using optparse::OptionParser;
using optparse::OptionGroup;
using optparse::Values;
using namespace std;

namespace madpac
{
  namespace mardyncoupling
  {

    class MarDynCoupling
    {
    public:
      MarDynCoupling(double cutoffRadius, Domain* domain,
          ParticleContainer* moleculeContainer,
          ExchangeDataContainerWDCwithOutput *hDataContainer, int streamOutDir);
      virtual
      ~MarDynCoupling();

      //void runMD(MDSB &myMD, int iterations, int mdIterations, int lbIterations, std::vector<utils::Vector<double, 3> > &mdV, std::vector<utils::Vector<double, 3> > &lbV,std::vector<utils::Vector<int, 3> >  &MD_MDLBregion, std::vector<utils::Vector<int, 3> >  &MD_LBMDregion);

      /**
       * Applies the reflecting boundary to the md domain.
       */
      void
      applyRBoundary();

      /**
       * Applies the force boundary to the md domain.
       */
      void
      applyFBoundary();

      /**
       * Gets the velocity from the coupling and sets the velocity of the molecuels in MarDyn.
       */
      void
      getV();

      /**
       * Gathers the velocity of the molecules in MarDyn and sets them in the coupling.
       */
      void
      setV();

      /**
       * todo: remove
       */
      void
      deleteOuterParticle();

      /**
       * Applies the thermostat to the md domain.
       */
      void
      applyThermostat(int iteration);

      /**
       * Adjust the density in the md domain.
       */
      void
      adjustRho(DomainDecompBase* ddb, int iteration);

      /*
       * Sets the md time step length for the moving wall.
       */
      void
      setTimestepLength(double length)
      {
        if (_bmovingwall)
          {
            _movingwall->setTimestepLength(length);
          }
      }

      /**
       * Returns the average velocity of the whole md domain.
       */
      double
      getVglobal(int i)
      {
        if (_bthermostat)
          {
            return _thermostat->getVglobal(i);
          }
        return 0.0;
      }


      void
      addNumInsertMolecules(int i)
      {
    	  _dataContainer->addNumInsertMolecules(i);
      }

      /**
       * Moves the particles to simulate a moving wall.
       */
      void
      moveParticles(int iteration);

    private:

      madpac::mardyncoupling::boundary::ReflectingBoundary *_rboundary;
      madpac::mardyncoupling::boundary::ForceBoundary *_fboundary;
      madpac::mardyncoupling::boundary::MovingWall *_movingwall;
      madpac::mardyncoupling::thermostat::Thermostat *_thermostat;
      madpac::mardyncoupling::VelocityExchange *_vexchange;

      bool _bfboundary;
      bool _brboundary;
      bool _bmovingwall;
      bool _bthermostat;

      Domain* _domain;
      ParticleContainer* _moleculeContainer;
      ExchangeDataContainerWDCwithOutput *_dataContainer;
      usher::UsherConnector *_usherConnector;

      int _streamOutDir;
      int _dim;

      double _oldAdjustDensity;
      //! maximum distance at which the forces between two molecules still have to be calculated.
      //double _cutoffRadius;
    };
  }
}
#endif /* MADPAC_MARDYNCOUPLING_H_ */
