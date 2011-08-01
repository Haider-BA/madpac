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

#ifndef MADPAC_MDCOUPLINGCONFIGURATION_H_
#define MADPAC_MDCOUPLINGCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"

#include <string>
#include "CouplingOutputConfiguration.h"
#include "CouplingGeometryConfiguration.h"
#include "CouplingConfiguration.h"
#ifdef MADPAC_MARDYNCOUPLING
#include "madpac/mardyncoupling/configurations/MarDynConfiguration.h"
#endif
#ifdef MADPAC_MDSBCOUPLING
#include "madpac/mdsbcoupling/configurations/MDSBConfiguration.h"
#endif


namespace madpac
{
  namespace configurations
  {

    class MDCouplingConfiguration
    {
    public:
      MDCouplingConfiguration();
      virtual
      ~MDCouplingConfiguration();
      void
      parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
      bool
      isValid() const;
      std::string
      toXMLString() const;
      std::string
      getTag() const;
      void
      initCoupling();

      madpac::configurations::CouplingOutputConfiguration*
      getOutputConfig()
      {
        return &_outputConfig;
      }
      madpac::configurations::CouplingGeometryConfiguration*
      getGeometryConfig()
      {
        return &_geometryConfig;
      }

#ifdef MADPAC_MARDYNCOUPLING
      madpac::mardyncoupling::configurations::MarDynConfiguration*
      getMarDynConfig()
      {
        return &_mardynConfig;
      }
#endif

#ifdef MADPAC_MDSBCOUPLING
      madpac::mdsbcoupling::MDSBConfiguration*
      getMDSBConfig()
      {
        return &_mdsbConfig;
      }
#endif

      madpac::configurations::CouplingConfiguration*
      getCouplingConfig()
      {
        return &_couplingConfig;
      }

      bool
      getMovingWall()
      {
#ifdef MADPAC_MARDYNCOUPLING

        return _mardynConfig.getBoundaryConfig()->getMovingWallConfig()->getMovingWall();
#else
        return false;
#endif
      }

      static const std::string TAG;

    private:
      static tarch::logging::Log _log;
      bool _isValid;

      madpac::configurations::CouplingOutputConfiguration _outputConfig;
      madpac::configurations::CouplingGeometryConfiguration _geometryConfig;
#ifdef MADPAC_MARDYNCOUPLING
      madpac::mardyncoupling::configurations::MarDynConfiguration _mardynConfig;
#endif
#ifdef MADPAC_MDSBCOUPLING
      madpac::mdsbcoupling::MDSBConfiguration _mdsbConfig;
#endif
      madpac::configurations::CouplingConfiguration _couplingConfig;
    };

  }
}

#endif /* MADPAC_MDCOUPLINGCONFIGURATION_H_ */
