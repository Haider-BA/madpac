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

#ifndef MADPAC_MARDYNTHERMOSTATCONFIGURATION_H_
#define MADPAC_MARDYNTHERMOSTATCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {

      class MarDynThermostatConfiguration
      {
      public:
        MarDynThermostatConfiguration();
        virtual
        ~MarDynThermostatConfiguration();
        virtual void
        parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
        bool
        isValid() const;
        std::string
        toXMLString() const;

        double
        getTargetTemperature() const
        {
          return _targetTemperature;
        }

        double
        getThermostatGamma() const
        {
          return _thermostatGamma;
        }

        int
        getThermostatInterval() const
        {
          return _interval;
        }

        tarch::la::Vector<3, int>
        getDirected() const
        {
          return _directed;
        };

        static const std::string TEMPERATURE;

        static const std::string THERMOSTAT_GAMMA;

        static const std::string THERMOSTAT_INTERVAL;

        static const std::string THERMOSTAT_DIRECTED;

      protected:
        static tarch::logging::Log _log;
        double _targetTemperature;
        double _thermostatGamma;
        bool _isValid;
        int _interval;
        tarch::la::Vector<3, int> _directed;

      };

    }

  }

}

#endif /* MADPAC_MARDYNTHERMOSTATCONFIGURATION_H_ */
