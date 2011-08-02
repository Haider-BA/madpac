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
#ifdef MADPAC
#ifndef MADPAC_MARDYNMAIN_H_
#define MADPAC_MARDYNMAIN_H_
#include "Simulation.h"
#include "configurations/MarDynConfiguration.h"
#include "MarDynSimulation.h"
#include "tarch/services/Service.h"
#include "tarch/logging/Log.h"
#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "madpac/mdcoupling/MDMain.h"


namespace madpac
{
  namespace mardyncoupling
  {
    class MarDynMain : public madpac::mdcoupling::MDMain<mardyn::MarDynSimulation>
    {
    public:
      MarDynMain();
      virtual
      ~MarDynMain();

      mardyn::MarDynSimulation*
      init(int numberOfTimesteps);

      void
      shutdown();

      void
      simStep(int _numMdIterations);

      DomainDecompBase*
      getDomainDecomposition() {
        return  &_mdSimulation->domainDecomposition();
      }

      mardyn::MarDynSimulation*
      getSimulation() {
        return _mdSimulation;
      }

    private:
      madpac::mardyncoupling::configurations::MarDynConfiguration *config;

      tarch::la::Vector<2, double> tmp;
      mardyn::MarDynSimulation *_mdSimulation;
      bool _console;
      std::string logfileName;
      std::string configfileName;
      int _thermostat;

      double _runtime;
    };
  }
}
#endif /* MADPAC_MARDYNMAIN_H_ */
#endif
