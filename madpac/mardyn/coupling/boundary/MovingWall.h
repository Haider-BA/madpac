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

#ifndef MADPAC_MOVINGWALL_H_
#define MADPAC_MOVINGWALL_H_
#include "Boundary.h"
#include "particleContainer/ParticleContainer.h"
#include "mardyn/coupling/thermostat/Thermostat.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace boundary
    {

      class MovingWall : public Boundary
      {
      public:
        MovingWall(ParticleContainer* moleculeContainer,
            thermostat::Thermostat* thermostat, int streamOutDir);
        virtual
        ~MovingWall();

        /**
         * Applies the movinfg wall boundary to the md domain.
         */
        void
        applyBoundary();

        /**
         * Moves the particles to simulate a moving wall.
         */
        void
        moveParticles(int iteration);

        /*
         * Sets the md time step length for the moving wall.
         */
        void
        setTimestepLength(double length)
        {
          //	std::cout << "length " << length << std::endl;
          _timestepLength = length;
        }

      private:

        //	ParticleContainer* _moleculeContainer;
        thermostat::Thermostat* _thermostat;
        bool _movingWall;
        int _moveInterval;
        int _streamOutDir;
        bool _densityCoupling;
        double _timestepLength;

        double _vmove[3];

      };
    }
  }
}
#endif /* MADPAC_MOVINGWALL_H_ */
