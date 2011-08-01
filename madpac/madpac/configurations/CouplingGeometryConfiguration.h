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

#ifndef MADPAC_COUPLINGGEOMETRYCONFIGURATION_H_
#define MADPAC_COUPLINGGEOMETRYCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"

namespace madpac
{
  namespace configurations
  {

    class CouplingGeometryConfiguration
    {
    public:
      CouplingGeometryConfiguration();
      virtual
      ~CouplingGeometryConfiguration();
      void
      parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
      bool
      isValid() const;
      std::string
      toXMLString() const;
      std::string
      getTag() const;

      static const std::string TAG;
      static const std::string SIZE;
      static const std::string OFFSET;
      static const std::string BORDER_SIZE;
      static const std::string CELLSIZE;

      static const std::string lbLowerOffset;
      static const std::string lbUpperOffset;
      static const std::string outerNoCouplingLowerCorner;
      static const std::string outerNoCouplingUpperCorner;
      static const std::string lbCouplingLowerCorner;
      static const std::string lbCouplingUpperCorner;
      static const std::string midNoCouplingLowerCorner;
      static const std::string midNoCouplingUpperCorner;
      static const std::string mdCouplingLowerCorner;
      static const std::string mdCouplingUpperCorner;
      static const std::string innerNoCouplingLowerCorner;
      static const std::string innerNoCouplingUpperCorner;

      /*
       tarch::la::Vector<DIMENSIONS,int> getOffset() const
       {
       return _offset;
       }


       tarch::la::Vector<DIMENSIONS,int> getSize() const
       {
       return _size;
       }


       tarch::la::Vector<DIMENSIONS,int> getBorderSize() const
       {
       return _borderSize;
       }
       */
      double
      getCellSize() const
      {
        return _cellSize;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getInnerNoCouplingLowerCorner() const
      {
        return _innerNoCouplingLowerCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getInnerNoCouplingUpperCorner() const
      {
        return _innerNoCouplingUpperCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getLbCouplingLowerCorner() const
      {
        return _lbCouplingLowerCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getLbCouplingUpperCorner() const
      {
        return _lbCouplingUpperCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getLbLowerOffset() const
      {
        return _lbLowerOffset;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getLbUpperOffset() const
      {
        return _lbUpperOffset;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getMdCouplingLowerCorner() const
      {
        return _mdCouplingLowerCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getMdCouplingUpperCorner() const
      {
        return _mdCouplingUpperCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getMidNoCouplingLowerCorner() const
      {
        return _midNoCouplingLowerCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getMidNoCouplingUpperCorner() const
      {
        return _midNoCouplingUpperCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getOuterNoCouplingLowerCorner() const
      {
        return _outerNoCouplingLowerCorner;
      }

      tarch::la::Vector<DIMENSIONS, int>
      getOuterNoCouplingUpperCorner() const
      {
        return _outerNoCouplingUpperCorner;
      }

    private:
      static tarch::logging::Log _log;
      bool _isValid;

      double _cellSize;
      tarch::la::Vector<DIMENSIONS, int> _size;
      tarch::la::Vector<DIMENSIONS, int> _offset;
      tarch::la::Vector<DIMENSIONS, int> _borderSize;

      tarch::la::Vector<DIMENSIONS, int> _lbLowerOffset;
      tarch::la::Vector<DIMENSIONS, int> _lbUpperOffset;
      tarch::la::Vector<DIMENSIONS, int> _outerNoCouplingLowerCorner;
      tarch::la::Vector<DIMENSIONS, int> _outerNoCouplingUpperCorner;
      tarch::la::Vector<DIMENSIONS, int> _lbCouplingLowerCorner;
      tarch::la::Vector<DIMENSIONS, int> _lbCouplingUpperCorner;
      tarch::la::Vector<DIMENSIONS, int> _midNoCouplingLowerCorner;
      tarch::la::Vector<DIMENSIONS, int> _midNoCouplingUpperCorner;
      tarch::la::Vector<DIMENSIONS, int> _mdCouplingLowerCorner;
      tarch::la::Vector<DIMENSIONS, int> _mdCouplingUpperCorner;
      tarch::la::Vector<DIMENSIONS, int> _innerNoCouplingLowerCorner;
      tarch::la::Vector<DIMENSIONS, int> _innerNoCouplingUpperCorner;

    };
  }
}

#endif /* MADPAC_COUPLINGGEOMETRYCONFIGURATION_H_ */
