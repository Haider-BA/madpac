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


#ifndef MDSBSETVELOCITY_H_
#define MDSBSETVELOCITY_H_

#include "madpac/mdsb/particleContainer/ParticleHandler.h"
#include "madpac/mdsb/particleContainer/ParticleContainer.h"
#include "madpac/core/ExchangeDataContainerWDCwithOutput.h"

namespace madpac
{
  namespace mdsbcoupling
  {

    class MDSBSetVelocity : public ParticleHandler
    {
    public:
      MDSBSetVelocity(ParticleContainer& container, ExchangeDataContainer *dataContainer);
      virtual
      ~MDSBSetVelocity();

      void
      setV();

      void
      handleParticle(Particle& p);
    private:
      ParticleContainer& _container;

      double _md2ms;
      ExchangeDataContainer *_dataContainer;
    };
  }
}
#endif /* MDSBSETVELOCITY_H_ */
