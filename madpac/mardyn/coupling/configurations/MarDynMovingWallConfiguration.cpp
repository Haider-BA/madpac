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

#include "MarDynMovingWallConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {

      const std::string MarDynMovingWallConfiguration::TAG = "moving-wall";

      const std::string MarDynMovingWallConfiguration::MOVINGWALL = "enabled";
      const std::string MarDynMovingWallConfiguration::MOVEINTERVAL =
          "move-interval";

      tarch::logging::Log
          MarDynMovingWallConfiguration::_log(
              "madpac::mardyncoupling::configurations::MarDynMovingWallConfiguration");

      MarDynMovingWallConfiguration::MarDynMovingWallConfiguration() :
        _isValid(false)
      {

      }

      MarDynMovingWallConfiguration::~MarDynMovingWallConfiguration()
      {
      }

      void
      MarDynMovingWallConfiguration::parseSubtag(
          tarch::irr::io::IrrXMLReader *xmlReader)
      {
        _isValid = true;

        //MOVING WALL
        if (xmlReader->getAttributeValue(MOVINGWALL.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'moving-wall' not defined!");
            _movingWall = true;
          }
        else
          {
            _movingWall
                = xmlReader->getAttributeValueAsBool(MOVINGWALL.c_str());

            logDebug("parseSubtag()", "'moving-wall': " << (_movingWall));
          }

        //MOVEINTERVAL
        if (xmlReader->getAttributeValue(MOVEINTERVAL.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'move-interval' not defined!");
            _moveInterval = 100;
          }
        else
          {
            _moveInterval = xmlReader->getAttributeValueAsInt(
                MOVEINTERVAL.c_str());

            logDebug("parseSubtag()", "'move-interval': " << (_moveInterval));
          }
      }

      bool
      MarDynMovingWallConfiguration::isValid() const
      {
        return MarDynMovingWallConfiguration::_isValid;
      }

      std::string
      MarDynMovingWallConfiguration::toXMLString() const
      {
        return "";
      }

      std::string
      MarDynMovingWallConfiguration::getTag() const
      {
        return MarDynMovingWallConfiguration::TAG;
      }

    }

  }

}
