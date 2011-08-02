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

#include "MarDynBoundaryConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {

      const std::string MarDynBoundaryConfiguration::TAG = "boundary";

      const std::string MarDynBoundaryConfiguration::BENABLED = "benabled";
      const std::string MarDynBoundaryConfiguration::STREAMDIR = "streamdir";
      const std::string MarDynBoundaryConfiguration::STREAM_F_DAMPING =
          "stream-f-damping";
      const std::string MarDynBoundaryConfiguration::STREAMOUT = "streamout";

      tarch::logging::Log
          MarDynBoundaryConfiguration::_log(
              "madpac::mardyncoupling::configurations::MarDynBoundaryConfiguration");

      MarDynBoundaryConfiguration::MarDynBoundaryConfiguration() :
        _isValid(false), _bEnabled(false)
      {

      }

      MarDynBoundaryConfiguration::~MarDynBoundaryConfiguration()
      {
      }

      void
      MarDynBoundaryConfiguration::parseSubtag(
          tarch::irr::io::IrrXMLReader *xmlReader)
      {
        _isValid = true;

        //STREAMDIR
        if (xmlReader->getAttributeValue(STREAMDIR.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'streamdir' not defined!");

            _streamdir = 3;
          }
        else
          {
            _streamdir = xmlReader->getAttributeValueAsInt(STREAMDIR.c_str());
            assertion(_streamdir >= 0);
            logDebug("parseSubtag()", "'streamdir': " << (_streamdir));
          }

        //STREAM_F_DAMPING
        if (xmlReader->getAttributeValue(STREAM_F_DAMPING.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'stream-f-reduction' not defined!");
            _fStreamDamping = 1.0;

          }
        else
          {
            _fStreamDamping = xmlReader->getAttributeValueAsDouble(
                STREAM_F_DAMPING.c_str());
            assertion(_fStreamDamping > 0);
            logDebug("parseSubtag()", "'stream-f-reduction': "
                << (_fStreamDamping));
          }

        //BENABLED
        if (xmlReader->getAttributeValue(BENABLED.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'benabled' not defined!");
            _bEnabled = true;
          }
        else
          {
            _bEnabled = xmlReader->getAttributeValueAsBool(BENABLED.c_str());

            logDebug("parseSubtag()", "'benabled': " << (_bEnabled));
          }

        //STREAMOUT
        if (xmlReader->getAttributeValue(STREAMOUT.c_str()) == 0)
          {
            _log.info("parseSubtag()", "'streamout' not defined!");
            _streamout = true;
          }
        else
          {
            _streamout = xmlReader->getAttributeValueAsBool(STREAMOUT.c_str());

            logDebug("parseSubtag()", "'streamout': " << (_streamout));
          }

        while (xmlReader->read())
          {
            if (xmlReader->getNodeType() == tarch::irr::io::EXN_ELEMENT)
              {
                if (xmlReader->getNodeName()
                    == MarDynMovingWallConfiguration::TAG)
                  {
                    logInfo("parseSubtag()", "Parse "
                        << MarDynMovingWallConfiguration::TAG);
                    _movingWallConfig.parseSubtag(xmlReader);
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
      MarDynBoundaryConfiguration::isValid() const
      {
        return MarDynBoundaryConfiguration::_isValid;
      }

      std::string
      MarDynBoundaryConfiguration::toXMLString() const
      {
        return "";
      }

      std::string
      MarDynBoundaryConfiguration::getTag() const
      {
        return MarDynBoundaryConfiguration::TAG;
      }

    }

  }

}
