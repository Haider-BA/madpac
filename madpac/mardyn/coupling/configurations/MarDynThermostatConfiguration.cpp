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

#include "MarDynThermostatConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {

    namespace configurations
    {

      const std::string MarDynThermostatConfiguration::TEMPERATURE =
          "temperature";

      const std::string MarDynThermostatConfiguration::THERMOSTAT_GAMMA =
          "gamma";

      const std::string MarDynThermostatConfiguration::THERMOSTAT_INTERVAL =
          "interval";

      const std::string MarDynThermostatConfiguration::THERMOSTAT_DIRECTED =
                "directed-in";


      tarch::logging::Log
          MarDynThermostatConfiguration::_log(
              "madpac::mardyncoupling::configurations::MarDynThermostatConfiguration");

      MarDynThermostatConfiguration::MarDynThermostatConfiguration() :
        _isValid(false)
      {

      }

      MarDynThermostatConfiguration::~MarDynThermostatConfiguration()
      {
      }

      void
      MarDynThermostatConfiguration::parseSubtag(
          tarch::irr::io::IrrXMLReader *xmlReader)
      {
        _isValid = true;
        //TEMPERATURE
        if (xmlReader->getAttributeValue(TEMPERATURE.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'temperature' not defined!");
            assertion(false);
            _isValid = false;
            _targetTemperature = 1.8;

          }
        else
          {
            _targetTemperature = xmlReader->getAttributeValueAsDouble(
                TEMPERATURE.c_str());
            assertion(_targetTemperature > 0);
            logDebug("parseSubtag()", "'temperature': " << (_targetTemperature));
          }

        //THERMOSTAT_GAMMA
        if (xmlReader->getAttributeValue(THERMOSTAT_GAMMA.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'gamma' not defined!");
            _thermostatGamma = 1.0;

          }
        else
          {
            _thermostatGamma = xmlReader->getAttributeValueAsDouble(
                THERMOSTAT_GAMMA.c_str());
            assertion(_thermostatGamma > 0);
            logDebug("parseSubtag()", "'gamma': " << (_thermostatGamma));
          }

        //THERMOSTAT INTERVAL
        if (xmlReader->getAttributeValue(THERMOSTAT_INTERVAL.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'interval' not defined!");
            _interval = 1;
          }
        else
          {
            _interval = xmlReader->getAttributeValueAsInt(
                THERMOSTAT_INTERVAL.c_str());

            logDebug("parseSubtag()", "'interval': " << (_interval));
          }

        //midNoCouplingLowerCorner
           if (xmlReader->getAttributeValue(THERMOSTAT_DIRECTED.c_str()) == 0)
             {
               _log.info("parseSubtag()", "'directed-in' not defined!");
               assertion(false);
               _isValid = false;

             }
           else
             {
               _directed = xmlReader->getAttributeValueAsIntVector<
                   3> (THERMOSTAT_DIRECTED.c_str());

               // logDebug("parseSubtag()", "'size': " << (_mdIterations));
             }

      }

      bool
      MarDynThermostatConfiguration::isValid() const
      {
        return MarDynThermostatConfiguration::_isValid;
      }

      std::string
      MarDynThermostatConfiguration::toXMLString() const
      {
        return "";
      }

    }

  }

}
