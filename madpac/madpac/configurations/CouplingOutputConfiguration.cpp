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

#include "CouplingOutputConfiguration.h"

namespace madpac
{
  namespace configurations
  {

    const std::string CouplingOutputConfiguration::TAG = "output";
    const std::string CouplingOutputConfiguration::OUTPUT_FILE = "output-file";
    const std::string CouplingOutputConfiguration::OUTPUT_RATE = "output-rate";
    const std::string CouplingOutputConfiguration::VOUTPUT = "voutput";

    tarch::logging::Log CouplingOutputConfiguration::_log(
        "madpac::configurations::CouplingOutputConfiguration");

    CouplingOutputConfiguration::CouplingOutputConfiguration() :
      _isValid(false)
    {
    }

    CouplingOutputConfiguration::~CouplingOutputConfiguration()
    {
    }

    void
    CouplingOutputConfiguration::parseSubtag(
        tarch::irr::io::IrrXMLReader *xmlReader)
    {
      _isValid = true;

      //OUTPUT
      if (xmlReader->getAttributeValue(OUTPUT_FILE.c_str()) == 0)
        {
          _log.error("parseSubtag()", "name 'output-file' not specified!");
          assertion(false);
          _isValid = false;
        }
      else
        {
          _outputFile = xmlReader->getAttributeValue(OUTPUT_FILE.c_str());
          _log.info("parseSubtag()", "'output-file': " + _outputFile);
        }

      //OUTPUT RATE
      if (xmlReader->getAttributeValue(OUTPUT_RATE.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'output-rate' not defined!");
          assertion(false);
          _isValid = false;
        }
      else
        {
          _outputRate = xmlReader->getAttributeValueAsInt(OUTPUT_RATE.c_str());
          logDebug("parseSubtag()", "'output-rate': " << (_outputRate));
        }

      //VOUTPUT
      if (xmlReader->getAttributeValue(VOUTPUT.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'voutput' not defined!");
          _voutput = false;
        }
      else
        {
          _voutput = xmlReader->getAttributeValueAsBool(VOUTPUT.c_str());

          logDebug("parseSubtag()", "'voutput': " << (_voutput));
        }

    }

    bool
    CouplingOutputConfiguration::isValid() const
    {
      return CouplingOutputConfiguration::_isValid;
    }

    std::string
    CouplingOutputConfiguration::toXMLString() const
    {
      return "";
    }

    std::string
    CouplingOutputConfiguration::getTag() const
    {
      return CouplingOutputConfiguration::TAG;
    }

  }
}
