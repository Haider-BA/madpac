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


#include "MDSBGetVelocity.h"

namespace madpac
{
  namespace mdsbcoupling
  {

    MDSBGetVelocity::MDSBGetVelocity(ParticleContainer& container, ExchangeDataContainer *dataContainer, int dim, double alpha) :
      _container(container), _md2ms(157.0), _dataContainer(dataContainer), _dim(dim), _alpha(alpha)
    {

    }

    MDSBGetVelocity::~MDSBGetVelocity()
    {
    }

    void
    MDSBGetVelocity::getV()
    {
      if (_dataContainer->lb2md())
        {
          _container.traverseParticles(*this);
        }

    }

    void
    MDSBGetVelocity::handleParticle(Particle& p)
    {
      double pos[3];
      double data[DataContainer::_dataSize];
      double lbdata[DataContainer::_dataSize];
      for (int i = 0; i < 3; i++)
        pos[i] = p.getX()[i];
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
          if (std::abs(vz) > 10e-300)
            std::cout << lbdata[DataContainer::velocityX] << " "
                << data[DataContainer::velocityX] << " " << vx * _md2ms << " "
                << vy * _md2ms << " " << vz * _md2ms << std::endl;
          p.vadd(vx, vy, vz);

        }

    }
  }
}
