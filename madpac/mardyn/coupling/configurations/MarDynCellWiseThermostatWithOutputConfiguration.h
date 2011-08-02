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

#ifndef MARDYNCELLWISETHERMOSTATWITHOUTPUTCONFIGURATION_H_
#define MARDYNCELLWISETHERMOSTATWITHOUTPUTCONFIGURATION_H_

#include "MarDynCellWiseThermostatConfiguration.h"

namespace madpac
{

  namespace mardyncoupling
  {

    namespace configurations
    {

      class MarDynCellWiseThermostatWithOutputConfiguration : public madpac::mardyncoupling::configurations::MarDynCellWiseThermostatConfiguration
      {
      public:
        MarDynCellWiseThermostatWithOutputConfiguration();
        virtual
        ~MarDynCellWiseThermostatWithOutputConfiguration();
        void
        parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
        std::string
        getTag() const;


        static const std::string TAG;


        static const std::string THERMOSTAT_OUTPUT;

        static const std::string THERMOSTAT_OINTERVAL;

        std::string
         getOutputFile() const
         {
           return _outputfile;
         }

        int
         getOutputInterval() const
         {
           return _outputinterval;
         }

      private:
        std::string _outputfile;
        int _outputinterval;

      };

    }

  }

}

#endif /* MARDYNCELLWISETHERMOSTATWITHOUTPUTCONFIGURATION_H_ */
