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

#ifndef MADPAC_THERMOSTAT_H_
#define MADPAC_THERMOSTAT_H_
#include "particleContainer/ParticleContainer.h"
#include "madpac/core/ExchangeDataContainer.h"
#include "mardyn/coupling/configurations/MarDynThermostatConfiguration.h"
#include "Domain.h"

namespace madpac
{

  namespace mardyncoupling
  {

    namespace thermostat
    {

      class Thermostat
      {
      public:
            Thermostat(
                ParticleContainer* moleculeContainer,
                Domain* domain,
                ExchangeDataContainer *dataContainer,
                int streamOutDir,
                madpac::mardyncoupling::configurations::MarDynThermostatConfiguration* config);
        virtual
        ~Thermostat();

        /**
         * Applies the thermostat to the md domain.
         */
        virtual void
        applyThermostat(int iteration) = 0;

        /**
         * Returns the average velocity of the whole md domain.
         */
        double
        getVglobal(int i)
        {
          if (i < 3)
            return _vglobal[i] * _md2ms;
          else
            return 0.0;
        }

        /**
         * Returns the velocity by, which the moving wall (boundary) should be moved.
         */
        void
        getVMove(double *vmove)
        {
          for (int i = 0; i < 3; i++)
            {
              vmove[i] = _vmove[i];
              _vmove[i] = 0.0;
            }
        }

      protected:
        ParticleContainer* _moleculeContainer;
        Domain* _domain;
        ExchangeDataContainer *_dataContainer;

        double _md2ms;
        double _vglobal[3];
        double _vmove[3];
        double _vtmp[3];
        int _streamOutDir;
        double _targetEnergy;
        double _gamma;
        unsigned long _numVsamples;
        int _interval;
        double _eglobal;
        tarch::la::Vector<3, int> _directed;

      };

    }

  }

}

#endif /* MADPAC_THERMOSTAT_H_ */
