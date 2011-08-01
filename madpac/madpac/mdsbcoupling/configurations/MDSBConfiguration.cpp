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

#include "MDSBConfiguration.h"

namespace madpac
{

  namespace mdsbcoupling
  {

    const std::string MDSBConfiguration::TAG = "mdsb";

    const std::string MDSBConfiguration::MDSB_CONFIG = "mdsb-config";
    const std::string MDSBConfiguration::ALPHA = "alpha";
    const std::string MDSBConfiguration::DENSITY = "density";

    tarch::logging::Log MDSBConfiguration::_log(
        "madpac::mdsbcoupling::MDSBConfiguration");

    MDSBConfiguration::MDSBConfiguration() :
      _isValid(false)
    {

    }

    MDSBConfiguration::~MDSBConfiguration()
    {
    }

    void
    MDSBConfiguration::parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader)
    {
      _isValid = true;
      //MDSB_CONFIG
      if (xmlReader->getAttributeValue(MDSB_CONFIG.c_str()) == 0)
        {
          _log.error("parseSubtag()", "name 'mdsb-config' not specified!");
          assertion(false);
          _isValid = false;
        }
      else
        {
          _mdsbConfig = xmlReader->getAttributeValue(MDSB_CONFIG.c_str());
          _log.info("parseSubtag()", "'mdsb-config': " + _mdsbConfig);
        }
      //ALPHA
      if (xmlReader->getAttributeValue(ALPHA.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'alpha' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _alpha = xmlReader->getAttributeValueAsDouble(ALPHA.c_str());
          assertion(_alpha > 0);
          logDebug("parseSubtag()", "'alpha': " << (_alpha));
        }

      //DENSITY
      if (xmlReader->getAttributeValue(DENSITY.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'density' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _density = xmlReader->getAttributeValueAsDouble(DENSITY.c_str());
          assertion(_density > 0);
          logDebug("parseSubtag()", "'density': " << (_density));
        }
    }

    bool
    MDSBConfiguration::isValid() const
    {
      return MDSBConfiguration::_isValid;
    }

    std::string
    MDSBConfiguration::toXMLString() const
    {
      return "";
    }

    std::string
    MDSBConfiguration::getTag() const
    {
      return MDSBConfiguration::TAG;
    }

  }

}
