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

#include "MarDynCellWiseThermostatWithOutputConfiguration.h"

namespace madpac
{

  namespace mardyncoupling
  {

    namespace configurations
    {

      const std::string MarDynCellWiseThermostatWithOutputConfiguration::TAG =
          "cell-wise-thermostat-wo";

      const std::string
      MarDynCellWiseThermostatWithOutputConfiguration::THERMOSTAT_OUTPUT =
              "output-file";

      const std::string
      MarDynCellWiseThermostatWithOutputConfiguration::THERMOSTAT_OINTERVAL =
              "output-interval";

      MarDynCellWiseThermostatWithOutputConfiguration::MarDynCellWiseThermostatWithOutputConfiguration() :
        MarDynCellWiseThermostatConfiguration()
      {
      }

      MarDynCellWiseThermostatWithOutputConfiguration::~MarDynCellWiseThermostatWithOutputConfiguration()
      {
      }

      void
      MarDynCellWiseThermostatWithOutputConfiguration::parseSubtag(
          tarch::irr::io::IrrXMLReader *xmlReader)
      {
        MarDynCellWiseThermostatConfiguration::parseSubtag(xmlReader);

        //OUTPUT
        if (xmlReader->getAttributeValue(THERMOSTAT_OUTPUT.c_str()) == 0)
          {
            _log.error("parseSubtag()", "name 'output-file' not specified!");
            assertion(false);
            _isValid = false;
          }
        else
          {
            _outputfile = xmlReader->getAttributeValue(THERMOSTAT_OUTPUT.c_str());
            _log.info("parseSubtag()", "'output-file': " + _outputfile);
          }

        //THERMOSTAT OINTERVAL
        if (xmlReader->getAttributeValue(THERMOSTAT_OINTERVAL.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'output-interval' not defined!");
            _outputinterval = 1;
          }
        else
          {
          _outputinterval = xmlReader->getAttributeValueAsInt(
                THERMOSTAT_OINTERVAL.c_str());

            logDebug("parseSubtag()", "'output-interval': " << (_outputinterval));
          }

      }

      std::string
      MarDynCellWiseThermostatWithOutputConfiguration::getTag() const
      {
        return MarDynCellWiseThermostatWithOutputConfiguration::TAG;
      }

    }

  }

}
