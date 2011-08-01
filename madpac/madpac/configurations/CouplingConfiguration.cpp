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

#include "CouplingConfiguration.h"

namespace madpac
{
  namespace configurations
  {

    const std::string CouplingConfiguration::TAG = "coupling";

    const std::string CouplingConfiguration::LB2MD = "lb2md";
    const std::string CouplingConfiguration::MD2LB = "md2lb";
    const std::string CouplingConfiguration::MD_ITERATIONS = "md-iterations";
    const std::string CouplingConfiguration::LB_ITERATIONS = "lb-iterations";
    const std::string CouplingConfiguration::DENSITYCOUPLING =
        "density-coupling";
    const std::string CouplingConfiguration::LBINITTIME = "lb-init-time";
    const std::string CouplingConfiguration::VELOCITYCOUPLING =
        "velocity-coupling";
    const std::string CouplingConfiguration::FORCECOUPLING = "force-coupling";
    const std::string CouplingConfiguration::DIRICHLETBOUNDARY =
        "dirichlet-boundary";

    tarch::logging::Log CouplingConfiguration::_log(
        "madpac::configurations::CouplingConfiguration");

    CouplingConfiguration::CouplingConfiguration() :
      _isValid(false)
    {
    }

    CouplingConfiguration::~CouplingConfiguration()
    {
    }

    void
    CouplingConfiguration::parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader)
    {
      _isValid = true;
      //MD ITERATIONS
      if (xmlReader->getAttributeValue(MD_ITERATIONS.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'md-iterations' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _mdIterations = xmlReader->getAttributeValueAsInt(
              MD_ITERATIONS.c_str());
          assertion(_mdIterations > 0);
          logDebug("parseSubtag()", "'md-iterations': " << (_mdIterations));
        }

      //LB ITERATIONS
      if (xmlReader->getAttributeValue(LB_ITERATIONS.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'lb-iterations' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _lbIterations = xmlReader->getAttributeValueAsInt(
              LB_ITERATIONS.c_str());
          assertion(_lbIterations > 0);
          logDebug("parseSubtag()", "'lb-iterations': " << (_lbIterations));
        }

      //LB INITTIME
      if (xmlReader->getAttributeValue(LBINITTIME.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'lb-init-time' not defined!");
          _lbinittime = 0;
        }
      else
        {
          _lbinittime = xmlReader->getAttributeValueAsInt(LBINITTIME.c_str());
          assertion(_lbinittime >= 0);
          logDebug("parseSubtag()", "'lb-init-time': " << (_lbinittime));
        }

      //DENSITY COUPLING
      if (xmlReader->getAttributeValue(DENSITYCOUPLING.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'density-coupling' not defined!");
          _densityCoupling = false;
        }
      else
        {
          _densityCoupling = xmlReader->getAttributeValueAsBool(
              DENSITYCOUPLING.c_str());

          logDebug("parseSubtag()", "'density-coupling': "
              << (_densityCoupling));
        }

      //VELOCITY COUPLING
      if (xmlReader->getAttributeValue(VELOCITYCOUPLING.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'velocity-coupling' not defined!");
          _velocityCoupling = true;
        }
      else
        {
          _velocityCoupling = xmlReader->getAttributeValueAsBool(
              VELOCITYCOUPLING.c_str());

          logDebug("parseSubtag()", "'velocity-coupling': "
              << (_velocityCoupling));
        }

      //FORCE COUPLING
      if (xmlReader->getAttributeValue(FORCECOUPLING.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'force-coupling' not defined!");
          _forceCoupling = false;
        }
      else
        {
          _forceCoupling = xmlReader->getAttributeValueAsBool(
              FORCECOUPLING.c_str());

          logDebug("parseSubtag()", "'force-coupling': " << (_forceCoupling));
        }

      //DIRICHLETBOUNDARY
      if (xmlReader->getAttributeValue(DIRICHLETBOUNDARY.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'dirichlet-boundary' not defined!");
          _dirichletBoundary = true;
        }
      else
        {
          _dirichletBoundary = xmlReader->getAttributeValueAsBool(
              DIRICHLETBOUNDARY.c_str());

          logDebug("parseSubtag()", "'dirichlet-boundary': "
              << (_dirichletBoundary));
        }

      //LB2MD
      if (xmlReader->getAttributeValue(LB2MD.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'lb2md' not defined!");
          _lb2md = true;
        }
      else
        {
          _lb2md = xmlReader->getAttributeValueAsBool(LB2MD.c_str());

          logDebug("parseSubtag()", "'lb2md': " << (_lb2md));
        }

      //MD2LB
      if (xmlReader->getAttributeValue(MD2LB.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'md2lb' not defined!");
          _md2lb = true;
        }
      else
        {
          _md2lb = xmlReader->getAttributeValueAsBool(MD2LB.c_str());

          logDebug("parseSubtag()", "'md2lb': " << (_md2lb));
        }

    }

    bool
    CouplingConfiguration::isValid() const
    {
      return CouplingConfiguration::_isValid;
    }

    std::string
    CouplingConfiguration::toXMLString() const
    {
      return "";
    }

    std::string
    CouplingConfiguration::getTag() const
    {
      return CouplingConfiguration::TAG;
    }

  }
}
