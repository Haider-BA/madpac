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

#ifndef MADPAC_GLOBALTHERMOSTAT_H_
#define MADPAC_GLOBALTHERMOSTAT_H_
#include "Thermostat.h"
#include "mardyn/coupling/configurations/MarDynGlobalThermostatConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace thermostat
    {

      class GlobalThermostat : public Thermostat
      {
      public:
            GlobalThermostat(
                ParticleContainer* moleculeContainer,
                Domain* domain,
                ExchangeDataContainer *dataContainer,
                int streamOutDir,
                madpac::mardyncoupling::configurations::MarDynGlobalThermostatConfiguration* config);
        virtual
        ~GlobalThermostat();

        /**
         * Applies the thermostat to the md domain.
         */
        virtual void
        applyThermostat(int iteration);
        //	void moveParticles(int iteration);

        /*	void setTimestepLength(double length) {
         std::cout << "length " << length << std::endl;
         _timestepLength = length;
         }
         */





        //bool _movingWall;
        //int _moveInterval;

        //double _timestepLength;

        //	bool _densityCoupling;


      };
    }
  }
}
#endif /* MADPAC_GLOBALTHERMOSTAT_H_ */
