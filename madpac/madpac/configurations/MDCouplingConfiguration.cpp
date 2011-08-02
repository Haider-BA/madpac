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

#include "MDCouplingConfiguration.h"

#ifdef MADPAC_PEANOCOUPLING
#include "madpac/PeanoCouplingService.h"
#endif

namespace madpac
{
  namespace configurations
  {

    const std::string MDCouplingConfiguration::TAG = "md-coupling";

    tarch::logging::Log MDCouplingConfiguration::_log(
        "madpac::configurations::mdCouplingConfiguration");

    MDCouplingConfiguration::MDCouplingConfiguration() :
      _isValid(false)
    {

    }

    MDCouplingConfiguration::~MDCouplingConfiguration()
    {
    }

    void
    MDCouplingConfiguration::parseSubtag(
        tarch::irr::io::IrrXMLReader *xmlReader)
    {
#ifndef MADPAC
      _log.error("parseSubtag()",
          "tag 'mdCoupling' specified, but your binary doesn't support mdCoupling!");
#endif
      _isValid = true;

      while (xmlReader->read())
        {
          if (xmlReader->getNodeType() == tarch::irr::io::EXN_ELEMENT)
            {

              if (xmlReader->getNodeName()
                  == madpac::configurations::CouplingOutputConfiguration::TAG)
                {
                  logInfo(
                      "parseSubtag()",
                      "Parse "
                          << madpac::configurations::CouplingOutputConfiguration::TAG);
                  _outputConfig.parseSubtag(xmlReader);
                }
              else if (xmlReader->getNodeName()
                  == madpac::configurations::CouplingGeometryConfiguration::TAG)
                {
                  logInfo(
                      "parseSubtag()",
                      "Parse "
                          << madpac::configurations::CouplingGeometryConfiguration::TAG);
                  _geometryConfig.parseSubtag(xmlReader);
                }
#ifdef MADPAC_MARDYNCOUPLING
              else if (xmlReader->getNodeName()
                  == madpac::mardyncoupling::configurations::MarDynConfiguration::TAG)
                {
                  logInfo(
                      "parseSubtag()",
                      "Parse "
                          << madpac::mardyncoupling::configurations::MarDynConfiguration::TAG);
                  _mardynConfig.parseSubtag(xmlReader);
                }
#endif

#ifdef MADPAC_MDSBCOUPLING
              else if (xmlReader->getNodeName()
                  == madpac::mdsbcoupling::MDSBConfiguration::TAG)
                {
                  logInfo(
                      "parseSubtag()",
                      "Parse "
                          << madpac::mdsbcoupling::MDSBConfiguration::TAG);
                  _mdsbConfig.parseSubtag(xmlReader);
                }
#endif
              else if (xmlReader->getNodeName()
                  == madpac::configurations::CouplingConfiguration::TAG)
                {
                  logInfo("parseSubtag()", "Parse "
                      << madpac::configurations::CouplingConfiguration::TAG);
                  _couplingConfig.parseSubtag(xmlReader);
                }
              else
                {
                  logError("parseSubtag()", "Unknown Subtag "
                      << xmlReader->getNodeName() << " in config");
                  assertion(false);
                }
            }
          else if (xmlReader->getNodeType() == tarch::irr::io::EXN_ELEMENT_END)
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
    MDCouplingConfiguration::isValid() const
    {
      return madpac::configurations::MDCouplingConfiguration::_isValid;
    }

    std::string
    MDCouplingConfiguration::toXMLString() const
    {
      return "";
    }

    std::string
    MDCouplingConfiguration::getTag() const
    {
      return madpac::configurations::MDCouplingConfiguration::TAG;
    }

    void
    MDCouplingConfiguration::initCoupling()
    {

      assertion(_isValid);
#ifdef MADPAC_PEANOCOUPLING
      madpac::PeanoCouplingService::getInstance().setConfig(this);
#endif

    }
  }
}
