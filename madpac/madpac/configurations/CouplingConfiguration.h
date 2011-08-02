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

#ifndef MADPAC_COUPLINGCONFIGURATION_H_
#define MADPAC_COUPLINGCONFIGURATION_H_
#include "tarch/configuration/Configuration.h"
#include "tarch/logging/Log.h"


namespace madpac
{
  namespace configurations
  {

    class CouplingConfiguration
    {
    public:
      CouplingConfiguration();
      virtual
      ~CouplingConfiguration();
      void
      parseSubtag(tarch::irr::io::IrrXMLReader *xmlReader);
      bool
      isValid() const;
      std::string
      toXMLString() const;
      std::string
      getTag() const;

      bool
      getDensityCoupling() const
      {
        return _densityCoupling;
      }

      bool
      getForceCoupling() const
      {
        return _forceCoupling;
      }

      int
      getLb2md() const
      {
        return _lb2md;
      }

      int
      getLbIterations() const
      {
        return _lbIterations;
      }

      int
      getLbinittime() const
      {
        return _lbinittime;
      }

      int
      getMd2lb() const
      {
        return _md2lb;
      }

      int
      getMdIterations() const
      {
        return _mdIterations;
      }

      bool
      getVelocityCoupling() const
      {
        return _velocityCoupling;
      }

      bool
      getDirichletBoundary() const
      {
        return _dirichletBoundary;
      }

      static const std::string TAG;

      static const std::string LBINITTIME;
      static const std::string MD_ITERATIONS;
      static const std::string LB_ITERATIONS;
      static const std::string DENSITYCOUPLING;
      static const std::string LB2MD;
      static const std::string MD2LB;
      static const std::string VELOCITYCOUPLING;
      static const std::string FORCECOUPLING;
      static const std::string DIRICHLETBOUNDARY;

    private:
      static tarch::logging::Log _log;
      bool _isValid;

      int _mdIterations;
      int _lbinittime;
      bool _velocityCoupling;
      bool _forceCoupling;
      bool _densityCoupling;
      int _lb2md;
      int _md2lb;
      int _lbIterations;
      bool _dirichletBoundary;
    };
  }
}

#endif /* MADPAC_COUPLINGCONFIGURATION_H_ */
