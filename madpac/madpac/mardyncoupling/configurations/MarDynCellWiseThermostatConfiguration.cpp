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

#include "MarDynCellWiseThermostatConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {

      const std::string MarDynCellWiseThermostatConfiguration::TAG =
          "cell-wise-thermostat";

      const std::string
          MarDynCellWiseThermostatConfiguration::THERMOSTAT_GINTERVAL =
              "global-interval";

      MarDynCellWiseThermostatConfiguration::MarDynCellWiseThermostatConfiguration() :
        MarDynThermostatConfiguration()
      {

      }

      MarDynCellWiseThermostatConfiguration::~MarDynCellWiseThermostatConfiguration()
      {
      }

      void
      MarDynCellWiseThermostatConfiguration::parseSubtag(
          tarch::irr::io::IrrXMLReader *xmlReader)
      {
        MarDynThermostatConfiguration::parseSubtag(xmlReader);

        //THERMOSTAT GINTERVAL
        if (xmlReader->getAttributeValue(THERMOSTAT_GINTERVAL.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'global-interval' not defined!");
            _ginterval = 1;
          }
        else
          {
            _ginterval = xmlReader->getAttributeValueAsInt(
                THERMOSTAT_GINTERVAL.c_str());

            logDebug("parseSubtag()", "'global-interval': " << (_ginterval));
          }

      }

      std::string
      MarDynCellWiseThermostatConfiguration::getTag() const
      {
        return MarDynCellWiseThermostatConfiguration::TAG;
      }

    }

  }

}
