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

#include "MDSBSetVelocity.h"
namespace madpac
{
  namespace mdsbcoupling
  {

    MDSBSetVelocity::MDSBSetVelocity(ParticleContainer& container, ExchangeDataContainerwithOutput *dataContainer) :
      _container(container), _md2ms(157.0), _dataContainer(dataContainer)
    {
      // TODO Auto-generated constructor stub

    }

    MDSBSetVelocity::~MDSBSetVelocity()
    {
      // TODO Auto-generated destructor stub
    }

    void
    MDSBSetVelocity::setV()
    {
       _dataContainer->setMDBorderZero();
      _container.traverseParticles(*this);
    }

    void
    MDSBSetVelocity::handleParticle(Particle& p)
    {



      double pos[3];
      double data[DataContainer::_dataSize];

      for (int i = 0; i < 3; i++)
        {
          pos[i] = p.getX()[i];
          data[i] = p.getV()[i] * _md2ms;
        }
      data[DataContainer::rho] = 1;
      _dataContainer->addMDRegion(data, pos);

    }
  }
}
