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

#ifndef MADPAC_VELOCITYEXCHANGE_H_
#define MADPAC_VELOCITYEXCHANGE_H_
#include "madpac/core/ExchangeDataContainerWDCwithOutput.h"
#include "particleContainer/ParticleContainer.h"
#include "Domain.h"
#include "parallel/DomainDecompBase.h"
#include "thermostat/Thermostat.h"
#include "madpac/mardyncoupling/usher/UsherConnector.h"

namespace madpac
{
  namespace mardyncoupling
  {
    class VelocityExchange
    {
    public:
      VelocityExchange(Domain* domain, ParticleContainer* moleculeContainer,
          ExchangeDataContainerWDCwithOutput *dataContainer,
          madpac::mardyncoupling::usher::UsherConnector *usherConnector, int dim,
          thermostat::Thermostat *thermostat, int streamoutdir);
      virtual
      ~VelocityExchange();

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
       * Adjust the density in the md domain.
       */
      void
      adjustRho(DomainDecompBase* ddb, int iteration);

      /**
       * TODO: remove
       */
      void
      adjustRhoOld(DomainDecompBase* ddb, int iteration);
    private:

      Domain* _domain;
      ParticleContainer* _moleculeContainer;
      ExchangeDataContainerWDCwithOutput *_dataContainer;
      usher::UsherConnector *_usherConnector;

      double _alpha;
      int _dim;
      double _md2ms;
      bool _movingWall;
      bool _densityCoupling;
      double _bordersize;
      thermostat::Thermostat* _thermostat;

      int _streamOutDir;
    };
  }
}
#endif /* MADPAC_VELOCITYEXCHANGE_H_ */
