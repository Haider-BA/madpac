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

#ifndef MADPAC_COUPLINGOUTPUTCONFIGURATION_H_
#define MADPAC_COUPLINGOUTPUTCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"


namespace madpac
{
  namespace configurations
  {

    class CouplingOutputConfiguration
    {
    public:
      CouplingOutputConfiguration();
      virtual
      ~CouplingOutputConfiguration();
      void
      parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
      bool
      isValid() const;
      std::string
      toXMLString() const;
      std::string
      getTag() const;

      std::string
      getOutputFile() const
      {
        return _outputFile;
      }

      int
      getOutputRate() const
      {
        return _outputRate;
      }

      bool
      getVOutput() const
      {
        return _voutput;
      }

      static const std::string TAG;

      static const std::string OUTPUT_FILE;
      static const std::string OUTPUT_RATE;
      static const std::string VOUTPUT;

    private:
      static tarch::logging::Log _log;
      bool _isValid;

      std::string _outputFile;
      int _outputRate;
      bool _voutput;
    };
  }
}

#endif /* MADPAC_COUPLINGOUTPUTCONFIGURATION_H_ */
