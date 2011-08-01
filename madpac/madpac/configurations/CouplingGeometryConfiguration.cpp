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

#include "CouplingGeometryConfiguration.h"

namespace madpac
{
  namespace configurations
  {
    const std::string CouplingGeometryConfiguration::TAG = "geometry";
    const std::string CouplingGeometryConfiguration::SIZE = "size";
    const std::string CouplingGeometryConfiguration::BORDER_SIZE =
        "border-size";
    const std::string CouplingGeometryConfiguration::OFFSET = "offset";
    const std::string CouplingGeometryConfiguration::CELLSIZE = "cell-size";

    const std::string CouplingGeometryConfiguration::lbLowerOffset =
        "lb-lower-offset";
    const std::string CouplingGeometryConfiguration::lbUpperOffset =
        "lb-upper-offset";
    const std::string
        CouplingGeometryConfiguration::outerNoCouplingLowerCorner =
            "outer-no-coupling-lower-corner";
    const std::string
        CouplingGeometryConfiguration::outerNoCouplingUpperCorner =
            "outer-no-coupling-upper-corner";
    const std::string CouplingGeometryConfiguration::lbCouplingLowerCorner =
        "lb-coupling-lower-corner";
    const std::string CouplingGeometryConfiguration::lbCouplingUpperCorner =
        "lb-coupling-upper-corner";
    const std::string CouplingGeometryConfiguration::midNoCouplingLowerCorner =
        "mid-no-coupling-lower-corner";
    const std::string CouplingGeometryConfiguration::midNoCouplingUpperCorner =
        "mid-no-coupling-upper-corner";
    const std::string CouplingGeometryConfiguration::mdCouplingLowerCorner =
        "md-coupling-lower-corner";
    const std::string CouplingGeometryConfiguration::mdCouplingUpperCorner =
        "md-coupling-upper-corner";
    const std::string
        CouplingGeometryConfiguration::innerNoCouplingLowerCorner =
            "inner-no-coupling-lower-corner";
    const std::string
        CouplingGeometryConfiguration::innerNoCouplingUpperCorner =
            "inner-no-coupling-upper-corner";

    tarch::logging::Log CouplingGeometryConfiguration::_log(
        "madpac::configurations::CouplingGeometryConfiguration");

    CouplingGeometryConfiguration::CouplingGeometryConfiguration() :
      _isValid(false)
    {
    }

    CouplingGeometryConfiguration::~CouplingGeometryConfiguration()
    {
    }

    void
    CouplingGeometryConfiguration::parseSubtag(
        tarch::irr::io::IrrXMLReader *xmlReader)
    {
#ifndef MADPAC
      _log.error("parseSubtag()",
          "tag 'mdCoupling' specified, but your binary doesn't support mdCoupling!");
#endif
      _isValid = true;

      //lbLowerOffset
      if (xmlReader->getAttributeValue(lbLowerOffset.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'lbLowerOffset' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _lbLowerOffset
              = xmlReader->getAttributeValueAsIntVector<DIMENSIONS> (
                  lbLowerOffset.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //lbUpperOffset
      if (xmlReader->getAttributeValue(lbUpperOffset.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'lbUpperOffset' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _lbUpperOffset
              = xmlReader->getAttributeValueAsIntVector<DIMENSIONS> (
                  lbUpperOffset.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //outerNoCouplingLowerCorner
      if (xmlReader->getAttributeValue(outerNoCouplingLowerCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()",
              "'outerNoCouplingLowerCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _outerNoCouplingLowerCorner
              = xmlReader->getAttributeValueAsIntVector<DIMENSIONS> (
                  outerNoCouplingLowerCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //outerNoCouplingUpperCorner
      if (xmlReader->getAttributeValue(outerNoCouplingUpperCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()",
              "'outerNoCouplingUpperCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _outerNoCouplingUpperCorner
              = xmlReader->getAttributeValueAsIntVector<DIMENSIONS> (
                  outerNoCouplingUpperCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //lbCouplingLowerCorner
      if (xmlReader->getAttributeValue(lbCouplingLowerCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'lbCouplingLowerCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _lbCouplingLowerCorner = xmlReader->getAttributeValueAsIntVector<
              DIMENSIONS> (lbCouplingLowerCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //lbCouplingUpperCorner
      if (xmlReader->getAttributeValue(lbCouplingUpperCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'lbCouplingUpperCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _lbCouplingUpperCorner = xmlReader->getAttributeValueAsIntVector<
              DIMENSIONS> (lbCouplingUpperCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //midNoCouplingLowerCorner
      if (xmlReader->getAttributeValue(midNoCouplingLowerCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'midNoCouplingLowerCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _midNoCouplingLowerCorner = xmlReader->getAttributeValueAsIntVector<
              DIMENSIONS> (midNoCouplingLowerCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //midNoCouplingUpperCorner
      if (xmlReader->getAttributeValue(midNoCouplingUpperCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'midNoCouplingUpperCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _midNoCouplingUpperCorner = xmlReader->getAttributeValueAsIntVector<
              DIMENSIONS> (midNoCouplingUpperCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //mdCouplingLowerCorner
      if (xmlReader->getAttributeValue(mdCouplingLowerCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'mdCouplingLowerCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _mdCouplingLowerCorner = xmlReader->getAttributeValueAsIntVector<
              DIMENSIONS> (mdCouplingLowerCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //mdCouplingUpperCorner
      if (xmlReader->getAttributeValue(mdCouplingUpperCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'mdCouplingUpperCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _mdCouplingUpperCorner = xmlReader->getAttributeValueAsIntVector<
              DIMENSIONS> (mdCouplingUpperCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //innerNoCouplingLowerCorner
      if (xmlReader->getAttributeValue(innerNoCouplingLowerCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()",
              "'innerNoCouplingLowerCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _innerNoCouplingLowerCorner
              = xmlReader->getAttributeValueAsIntVector<DIMENSIONS> (
                  innerNoCouplingLowerCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      //innerNoCouplingUpperCorner
      if (xmlReader->getAttributeValue(innerNoCouplingUpperCorner.c_str()) == 0)
        {
          _log.info("parseSubtag()",
              "'innerNoCouplingUpperCorner' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _innerNoCouplingUpperCorner
              = xmlReader->getAttributeValueAsIntVector<DIMENSIONS> (
                  innerNoCouplingUpperCorner.c_str());

          // logDebug("parseSubtag()", "'size': " << (_mdIterations));
        }

      /*
       //SIZE
       if (xmlReader->getAttributeValue( SIZE.c_str() ) == 0){
       _log.info("parseSubtag()", "'size' not defined!");
       assertion(false);
       _isValid = false;

       } else {
       _size = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>( SIZE.c_str() );

       // logDebug("parseSubtag()", "'size': " << (_mdIterations));
       }

       //BSIZE
       if (xmlReader->getAttributeValue( BORDER_SIZE.c_str() ) == 0){
       _log.info("parseSubtag()", "'border-size' not defined!");
       assertion(false);
       _isValid = false;

       } else {
       _borderSize = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>( BORDER_SIZE.c_str() );

       // logDebug("parseSubtag()", "'size': " << (_mdIterations));
       }


       //OFFSET
       if (xmlReader->getAttributeValue( OFFSET.c_str() ) == 0){
       _log.info("parseSubtag()", "'offset' not defined!");
       assertion(false);
       _isValid = false;

       } else {
       _offset = xmlReader->getAttributeValueAsIntVector<DIMENSIONS>( OFFSET.c_str() );

       // logDebug("parseSubtag()", "'size': " << (_mdIterations));
       }*/

      //CELLSIZE
      if (xmlReader->getAttributeValue(CELLSIZE.c_str()) == 0)
        {
          _log.info("parseSubtag()", "'cell-size' not defined!");
          assertion(false);
          _isValid = false;

        }
      else
        {
          _cellSize = xmlReader->getAttributeValueAsDouble(CELLSIZE.c_str());
          assertion(_cellSize > 0);
          logDebug("parseSubtag()", "'cell-size': " << (_cellSize));
        }

    }

    bool
    CouplingGeometryConfiguration::isValid() const
    {
      return CouplingGeometryConfiguration::_isValid;
    }

    std::string
    CouplingGeometryConfiguration::toXMLString() const
    {
      return "";
    }

    std::string
    CouplingGeometryConfiguration::getTag() const
    {
      return CouplingGeometryConfiguration::TAG;
    }
  }
}

