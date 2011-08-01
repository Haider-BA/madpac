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

#ifndef MADPAC_MARDYNMOVINGWALLCONFIGURATION_H_
#define MADPAC_MARDYNMOVINGWALLCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {

      class MarDynMovingWallConfiguration
      {
      public:
        MarDynMovingWallConfiguration();
        virtual
        ~MarDynMovingWallConfiguration();
        void
        parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
        bool
        isValid() const;
        std::string
        toXMLString() const;
        std::string
        getTag() const;

        int
        getMoveInterval() const
        {
          return _moveInterval;
        }

        bool
        getMovingWall() const
        {
          return _movingWall;
        }

        static const std::string TAG;

        static const std::string MOVINGWALL;
        static const std::string MOVEINTERVAL;

      private:
        static tarch::logging::Log _log;
        bool _isValid;

        int _moveInterval;
        bool _movingWall;
      };

    }

  }

}

#endif /* MADPAC_MARDYNMOVINGWALLCONFIGURATION_H_ */
