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
#ifdef MADPAC

#ifndef MADPAC_CELLWISETHERMOSTAT_H_
#define MADPAC_CELLWISETHERMOSTAT_H_

#include "mardyn/coupling/configurations/MarDynCellWiseThermostatConfiguration.h"
#include "Thermostat.h"

//TODO:
#include "madpac/core/utils/Vector.h"
#include "madpac/core/DataContainer.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace thermostat
    {

      class CellWiseThermostat : public DataContainer, public Thermostat
      {
      public:
            CellWiseThermostat(
                int dim,
                ParticleContainer* moleculeContainer,
                Domain* domain,
                ExchangeDataContainer *dataContainer,
                int streamOutDir,
                madpac::mardyncoupling::configurations::MarDynCellWiseThermostatConfiguration* config);
        virtual
        ~CellWiseThermostat();

        /**
         * Applies the thermostat to the md domain.
         */
        virtual void
        applyThermostat(int iteration);

      protected:
        madpac::core::utils::Vector<double, _dataSize> *_vPerCell;
        double *_ePerCell;
        double _targetTemp;
        double _targetEnergyL;
        int _ginterval;

        void
        updateLocalE();
        void
        updateGlobalE();
        void
        saveV();
        void
        adjustTemperature();

      };
    }
  }
}
#endif /* MADPAC_CELLWISETHERMOSTAT_H_ */
#endif
