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

#ifndef MADPAC_MARDYNBOUNDARYCONFIGURATION_H_
#define MADPAC_MARDYNBOUNDARYCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"


#include "MarDynMovingWallConfiguration.h"

namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {

      class MarDynBoundaryConfiguration
      {
      public:
        MarDynBoundaryConfiguration();
        virtual
        ~MarDynBoundaryConfiguration();
        void
        parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
        bool
        isValid() const;
        std::string
        toXMLString() const;
        std::string
        getTag() const;

        int
        getStreamdir() const
        {
          return _streamdir;
        }

        bool
        getEnabled() const
        {
          return _bEnabled;
        }

        double
        getFStreamDamping() const
        {
          return _fStreamDamping;
        }

        bool
        getStreamout() const
        {
          return _streamout;
        }

        MarDynMovingWallConfiguration*
        getMovingWallConfig()
        {
          return &_movingWallConfig;
        }

        static const std::string TAG;

        static const std::string BENABLED;
        static const std::string STREAMDIR;
        static const std::string STREAM_F_DAMPING;
        static const std::string STREAMOUT;

      private:
        static tarch::logging::Log _log;
        bool _isValid;

        bool _bEnabled;
        int _streamdir;
        double _fStreamDamping;
        bool _streamout;
        MarDynMovingWallConfiguration _movingWallConfig;

      };

    }

  }

}

#endif /* MADPAC_MARDYNBOUNDARYCONFIGURATION_H_ */
