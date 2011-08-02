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

#include "MarDynConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {

      const std::string MarDynConfiguration::TAG = "mardyn";

      const std::string MarDynConfiguration::MARDYN_CONFIG = "mardyn-config";
      const std::string MarDynConfiguration::MARDYN_LOG = "mardyn-log";
      const std::string MarDynConfiguration::THERMOSTAT = "thermostat";
      const std::string MarDynConfiguration::CONSOLE = "mardyn-console";

      tarch::logging::Log MarDynConfiguration::_log(
          "madpac::configurations::MarDynConfiguration");

      MarDynConfiguration::MarDynConfiguration() :
        _isValid(false)
      {
      }

      MarDynConfiguration::~MarDynConfiguration()
      {
      }

      void
      MarDynConfiguration::parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader)
      {
        _isValid = true;
        //CONFIG
        if (xmlReader->getAttributeValue(MARDYN_CONFIG.c_str()) == 0)
          {
            _log.error("parseSubtag()", "name 'mardyn-config' not specified!");
            assertion(false);
            _isValid = false;
          }
        else
          {
            _mardynConfig = xmlReader->getAttributeValue(MARDYN_CONFIG.c_str());
            _log.info("parseSubtag()", "'mardyn-config': " + _mardynConfig);
          }
        //LOG
        if (xmlReader->getAttributeValue(MARDYN_LOG.c_str()) == 0)
          {
            _log.error("parseSubtag()", "name 'mardyn-log' not specified!");
            assertion(false);
            _isValid = false;
          }
        else
          {
            _mardynLog = xmlReader->getAttributeValue(MARDYN_LOG.c_str());
            _log.info("parseSubtag()", "'mardyn-log': " + _mardynLog);
          }

        //CONSOLE
        if (xmlReader->getAttributeValue(CONSOLE.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'mardyn-console' not defined!");
            _console = false;
          }
        else
          {
            _console = xmlReader->getAttributeValueAsBool(CONSOLE.c_str());

            logDebug("parseSubtag()", "'mardyn-console': " << (_console));
          }

        //THERMOSTAT
        if (xmlReader->getAttributeValue(THERMOSTAT.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'thermostat' not defined!");
            _thermostat = 0;
          }
        else
          {
            _thermostat = xmlReader->getAttributeValueAsInt(THERMOSTAT.c_str());

            logDebug("parseSubtag()", "'thermostat': " << (_thermostat));
          }

        while (xmlReader->read())
          {
            if (xmlReader->getNodeType() == tarch::irr::io::EXN_ELEMENT)
              {
                if (xmlReader->getNodeName()
                    == MarDynBoundaryConfiguration::TAG)
                  {
                    logInfo("parseSubtag()", "Parse "
                        << MarDynBoundaryConfiguration::TAG);
                    _boundaryConfig.parseSubtag(xmlReader);
                  }
                else if (xmlReader->getNodeName()
                    == MarDynCellWiseThermostatConfiguration::TAG)
                  {
                    logInfo("parseSubtag()", "Parse "
                        << MarDynCellWiseThermostatConfiguration::TAG);
                    _cellwiseThermostatConfig.parseSubtag(xmlReader);
                  }

                else if (xmlReader->getNodeName()
                    == MarDynCellWiseThermostatWithOutputConfiguration::TAG)
                  {
                    logInfo("parseSubtag()", "Parse "
                        << MarDynCellWiseThermostatWithOutputConfiguration::TAG);
                    _cellwiseThermostatWOConfig.parseSubtag(xmlReader);
                  }
                else if (xmlReader->getNodeName()
                    == MarDynCouplingConfiguration::TAG)
                  {
                    logInfo("parseSubtag()", "Parse "
                        << MarDynCouplingConfiguration::TAG);
                    _couplingConfig.parseSubtag(xmlReader);
                  }
                else if (xmlReader->getNodeName()
                    == MarDynGlobalThermostatConfiguration::TAG)
                  {
                    logInfo("parseSubtag()", "Parse "
                        << MarDynGlobalThermostatConfiguration::TAG);
                    _globalThermostatConfig.parseSubtag(xmlReader);
                  }
                else
                  {
                    logError("parseSubtag()", "Unknown Subtag "
                        << xmlReader->getNodeName() << " in config");
                    assertion(false);
                  }
              }
            else if (xmlReader->getNodeType()
                == tarch::irr::io::EXN_ELEMENT_END)
              {
                // end was found
                if (getTag() == xmlReader->getNodeName())
                  {
                    return;
                  }
              }
          }

      }

      bool
      MarDynConfiguration::isValid() const
      {
        return MarDynConfiguration::_isValid;
      }

      std::string
      MarDynConfiguration::toXMLString() const
      {
        return "";
      }

      std::string
      MarDynConfiguration::getTag() const
      {
        return MarDynConfiguration::TAG;
      }

    }
  }
}
