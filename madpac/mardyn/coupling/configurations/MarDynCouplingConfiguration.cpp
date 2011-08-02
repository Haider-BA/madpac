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

#include "MarDynCouplingConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {

      const std::string MarDynCouplingConfiguration::TAG = "mardyn-coupling";

      const std::string MarDynCouplingConfiguration::ALPHA = "alpha";
      const std::string MarDynCouplingConfiguration::MD2MS = "md-v-2-ms";
      const std::string MarDynCouplingConfiguration::OLDARHO = "old-adjust-density";

      tarch::logging::Log MarDynCouplingConfiguration::_log(
          "madpac::configurations::MarDynCouplingConfiguration");

      MarDynCouplingConfiguration::MarDynCouplingConfiguration() :
        _isValid(false)
      {
      }

      MarDynCouplingConfiguration::~MarDynCouplingConfiguration()
      {
      }

      void
      MarDynCouplingConfiguration::parseSubtag(
          tarch::irr::io::IrrXMLReader *xmlReader)
      {
        _isValid = true;

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

        //MD2MS
        if (xmlReader->getAttributeValue(MD2MS.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'md-v-2-ms' not defined!");
            _md2ms = 157.0;

          }
        else
          {
            _md2ms = xmlReader->getAttributeValueAsDouble(MD2MS.c_str());
            assertion(_md2ms > 0);
            logDebug("parseSubtag()", "'md-v-2-ms': " << (_md2ms));
          }

        //OLDARHO
          if (xmlReader->getAttributeValue(OLDARHO.c_str()) == 0)
            {
              _log.info("parseSubtag()", "'old-adjust-density' not defined!");
              _oldAdjustDensity = 0.0;
            }
          else
            {
            _oldAdjustDensity = xmlReader->getAttributeValueAsDouble(OLDARHO.c_str());

              logDebug("parseSubtag()", "'old-adjust-density': " << (_oldAdjustDensity));
            }


      }

      bool
      MarDynCouplingConfiguration::isValid() const
      {
        return MarDynCouplingConfiguration::_isValid;
      }

      std::string
      MarDynCouplingConfiguration::toXMLString() const
      {
        return "";
      }

      std::string
      MarDynCouplingConfiguration::getTag() const
      {
        return MarDynCouplingConfiguration::TAG;
      }

    }
  }
}
