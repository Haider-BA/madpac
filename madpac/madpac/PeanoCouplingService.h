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

#ifndef MADPAC_PEANOCOUPLINGSERVICE_H_
#define MADPAC_PEANOCOUPLINGSERVICE_H_

#include "core/ExchangeDataContainerWDCwithOutput.h"
#include "tarch/services/Service.h"
#include "tarch/logging/Log.h"
#include "configurations/MDCouplingConfiguration.h"
#include "mdcoupling/MDMain.h"
#ifdef MADPAC_MARDYNCOUPLING
#include "mardyncoupling/MarDynSimulation.h"
#include "madpac/mardyncoupling/MarDynMain.h"
#include "parallel/DomainDecompBase.h"

#elif MADPAC_MDSBCOUPLING
#include "madpac/mdsbcoupling/MDSBMain.h"
#include "madpac/mdsbcoupling/configurations/MDSBConfiguration.h"
#endif

namespace madpac
{
  class PeanoCouplingService;
}

class madpac::PeanoCouplingService : public tarch::services::Service
{
public:

  static PeanoCouplingService&
  getInstance();

  /**
   * Initializes MADPAC and MarDyn
   */
  int
  init(int lbtimesteps, double dx, double dt, double density, double tau);

  /**
   * Executes md-iterations MarDyn timesteps.
   */
  void
  runMarDyn();

  /**
   * Deinitializes MADPAC and MarDyn
   */
  void
  shutdown();

  /**
   * Sets the configuration file, which is used by the coupling.
   */
  void
  setConfig(madpac::configurations::MDCouplingConfiguration* cfg);

  /**
   * Return if non-periodic boundaries are used.
   */
  bool
  bEnabled()
  {
    return _bEnabled;
  }

  void
  receiveDanglingMessages()
  {
  }

  bool
  isInit()
  {
    return _isinit;
  }

  /**
   * Return the datacontainer, which is used to exchange the data between peano and MarDyn.
   */
  ExchangeDataContainerWDCwithOutput*
  getDataContainer()
  {
    return _dataContainer;
  }

  /**
   * Returns the dimension of the coupling.
   */
  int
  getDim()
  {
    return DIMENSIONS;
  }

#ifdef MADPAC_MARDYNCOUPLING
  DomainDecompBase*
       getDomainDecomposition() {
         return  &(_mardyn->getSimulation()->domainDecomposition());
       }
#endif
  /**
   * Returns the tau, which is used by the lb simulation.
   */
/*  double
  getTau()
  {
    return _tau;
  }
*/
  /**
   * Returns the length of a lb timestep.
   */
 /* double
  getDt()
  {
    return _dt;
  }
*/
  int
  getTimestep()
  {
    return _timestep;
  }

  /**
   * Return the coupling config.
   */
  madpac::configurations::MDCouplingConfiguration*
  getConfig()
  {
    return config;
  }

private:
  bool _config;
  bool _isinit;
  bool _bEnabled;
  int _timestep;
  double _cellSize;
  ExchangeDataContainerWDCwithOutput* _dataContainer;

#ifdef MADPAC_MARDYNCOUPLING
  madpac::mdcoupling::MDMain<mardyn::MarDynSimulation> *_mardyn;
#elif MADPAC_MDSBCOUPLING
  madpac::mdcoupling::MDMain<madpac::mdsbcoupling::MDSBMain> *_mardyn;
#endif
  int _numMdIterations;
  int _numLbIterations;
  int _streamdir;
  madpac::configurations::MDCouplingConfiguration* config;

  int _lbinittime;
  //double _dt;
  //double _tau;

  PeanoCouplingService();

  static tarch::logging::Log _log;
};

#endif /* _MADPAC_PEANOCOUPLINGSERVICE_H_ */
