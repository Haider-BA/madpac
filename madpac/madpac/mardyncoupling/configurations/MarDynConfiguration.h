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

#ifndef MADPAC_MARDYNCONFIGURATION_H_
#define MADPAC_MARDYNCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"


#include "MarDynBoundaryConfiguration.h"
#include "MarDynCellWiseThermostatWithOutputConfiguration.h"
#include "MarDynCellWiseThermostatConfiguration.h"
#include "MarDynCouplingConfiguration.h"
#include "MarDynGlobalThermostatConfiguration.h"



namespace madpac
{
  namespace mardyncoupling
  {
    namespace configurations
    {
      class MarDynConfiguration
      {
      public:
        MarDynConfiguration();
        virtual
        ~MarDynConfiguration();
        void
        parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
        bool
        isValid() const;
        std::string
        toXMLString() const;
        std::string
        getTag() const;

        bool
        getConsole() const
        {
          return _console;
        }

        int
        getThermostat() const
        {
          return _thermostat;
        }

        std::string
        getMardynConfig() const
        {
          return _mardynConfig;
        }

        std::string
        getMardynLog() const
        {
          return _mardynLog;
        }

        MarDynBoundaryConfiguration*
        getBoundaryConfig()
        {
          return &_boundaryConfig;
        }

        MarDynCellWiseThermostatConfiguration*
        getCellwiseThermostatConfig()
        {
          return &_cellwiseThermostatConfig;
        }

        MarDynCouplingConfiguration*
        getCouplingConfig()
        {
          return &_couplingConfig;
        }

        MarDynGlobalThermostatConfiguration*
        getGlobalThermostatConfig()
        {
          return &_globalThermostatConfig;
        }

        MarDynCellWiseThermostatWithOutputConfiguration*
         getCellwiseThermostatWithOutputConfig()
         {
           return &_cellwiseThermostatWOConfig;
         }

        static const std::string TAG;

        static const std::string MARDYN_CONFIG;
        static const std::string MARDYN_LOG;
        static const std::string CONSOLE;
        static const std::string THERMOSTAT;

      private:
        static tarch::logging::Log _log;
        bool _isValid;

        std::string _mardynConfig;
        std::string _mardynLog;
        int _thermostat;
        bool _console;

        MarDynBoundaryConfiguration _boundaryConfig;
        MarDynCellWiseThermostatConfiguration _cellwiseThermostatConfig;
        MarDynCouplingConfiguration _couplingConfig;
        MarDynGlobalThermostatConfiguration _globalThermostatConfig;
        MarDynCellWiseThermostatWithOutputConfiguration _cellwiseThermostatWOConfig;

      };
    }
  }
}

#endif /* MADPAC_MARDYNCONFIGURATION_H_ */
