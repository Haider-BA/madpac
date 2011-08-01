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


#ifndef MDSBCONFIGURATION_H_
#define MDSBCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"
#include <string>

namespace madpac
{

  namespace mdsbcoupling
  {

    class MDSBConfiguration
    {
    public:
      MDSBConfiguration();
      virtual
      ~MDSBConfiguration();

      void
      parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
      bool
      isValid() const;
      std::string
      toXMLString() const;
      std::string
      getTag() const;

      static const std::string TAG;

      static const std::string MDSB_CONFIG;
      static const std::string ALPHA;
      static const std::string DENSITY;


      double
      getAlpha() const
      {
        return _alpha;
      }

      double
      getDensity() const
      {
        return _density;
      }


      std::string
      getMDSBConfig() const
      {
        return _mdsbConfig;
      }

private:
      static tarch::logging::Log _log;
      bool _isValid;
      std::string _mdsbConfig;
      double _alpha;
      double _density;

    };

  }

}

#endif /* MDSBCONFIGURATION_H_ */
