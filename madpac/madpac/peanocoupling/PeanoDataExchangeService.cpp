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

#include "PeanoDataExchangeService.h"
#include "tarch/services/ServiceFactory.h"
#include "madpac/PeanoCouplingService.h"

registerService( madpac::PeanoDataExchangeService)

tarch::logging::Log madpac::PeanoDataExchangeService::_log(
    "madpac::PeanoDataExchangeService");

namespace madpac
{

  PeanoDataExchangeService&
  PeanoDataExchangeService::getInstance()
  {
    static PeanoDataExchangeService singleton;
    return singleton;
  }

  PeanoDataExchangeService::PeanoDataExchangeService()
  {
  }

  void
  PeanoDataExchangeService::init(
      ExchangeDataContainer* dataContainer, double dx, double dt,
      double density, double tau,
      madpac::configurations::CouplingConfiguration *couplingconfig)
  {

    _densityCoupling = couplingconfig->getDensityCoupling();
    _numLbIterations = couplingconfig->getLbIterations();
    _lbinittime = couplingconfig->getLbinittime();
    _dirichtletBoundary = couplingconfig->getDirichletBoundary();

    _dataContainer = dataContainer;
    _dt = dt;
    _densityLB2MD = density;
    _lb2ms = dx / dt;//901.0;
    _tau = tau;//madpac::PeanoCouplingService::getInstance().getTau(); //TODO:check
    std::cout << dx << "  " << dt << " " << _lb2ms << " " << _densityLB2MD
        << std::endl;

    std::cout << " D " << _densityCoupling << " LBI " << _numLbIterations
        << std::endl;

  }

  void
  PeanoDataExchangeService::getAndSetV(
      const tarch::la::Vector<DIMENSIONS, double> &x,
      const tarch::la::Vector<DIMENSIONS, double> &_h,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS * DIMENSIONS, double> &velocity,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS, double>& density,
      tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE, double>& g)
  {
    int _timestep = PeanoCouplingService::getInstance().getTimestep();
    int pos[3];
    for (int i = 0; i < 3; i++)
      {
        pos[i] = 0;
      }
    double data[4];
    for (int i = 0; i < 4; i++)
      {
        data[i] = 0;
      }
    for (int i = 0; i < LB_BLOCKSIZE; i++)
      {
        pos[0] = (x[0] / _h[0]) + i - LB_BLOCKSIZE / 2;
        for (int j = 0; j < LB_BLOCKSIZE; j++)
          {
            pos[1] = (x[1] / _h[1]) + j - LB_BLOCKSIZE / 2;
#ifdef Dim3
            for(int k=0;k<LB_BLOCKSIZE;k++)
              {
                pos[2] = (x[2]/_h[2])+k-LB_BLOCKSIZE/2;
#else
            int k = 0;
            pos[2] = 0;
#endif
            //GET


            if (_timestep % _numLbIterations == 0 && _timestep > _lbinittime)
              {
                if (_dataContainer->md2lb())
                  {

                    if (_dataContainer->getMDData4LB(data, pos))
                      {
                        for (int q = 0; q < DIMENSIONS; q++)
                          {
                            assertion(!isnan(data[q]));
                            if (_dirichtletBoundary)
                              {
                                g[((k * LB_BLOCKSIZE + j) * LB_BLOCKSIZE + i)
                                    * DIMENSIONS + q] = (data[q] / _lb2ms
                                    - velocity[((k * LB_BLOCKSIZE + j)
                                        * LB_BLOCKSIZE + i) * DIMENSIONS + q])
                                    / _dt;
                                velocity[((k * LB_BLOCKSIZE + j) * LB_BLOCKSIZE
                                    + i) * DIMENSIONS + q] += _dt / 2.0 * g[((k
                                    * LB_BLOCKSIZE + j) * LB_BLOCKSIZE + i)
                                    * DIMENSIONS + q];
                              }
                            else
                              velocity[((k * LB_BLOCKSIZE + j) * LB_BLOCKSIZE
                                  + i) * DIMENSIONS + q] = data[q] / _lb2ms;
                          }
                        if (_densityCoupling)
                          {
                            assertion(!isnan(data[DataContainer::rho]));
                            density[(k * LB_BLOCKSIZE + j) * LB_BLOCKSIZE + i]
                                = data[DataContainer::rho];
                          }
                      }
                  }
              }
            //SET
            data[DataContainer::velocityZ] = 0.0;
            for (int q = 0; q < DIMENSIONS; q++)
              {

                data[q] = velocity[((k * LB_BLOCKSIZE + j) * LB_BLOCKSIZE + i)
                    * DIMENSIONS + q] * _lb2ms;

              }

            data[DataContainer::rho] = density[(k * LB_BLOCKSIZE + j)
                * LB_BLOCKSIZE + i] * _densityLB2MD;
            _dataContainer->setLBRegion(data, pos);
#ifdef Dim3
          }
#endif
          }
        //}
      }
  }

  void
  PeanoDataExchangeService::computeGi(double density, double tau,
      tarch::la::Vector<DIMENSIONS, double> velocity, tarch::la::Vector<
          DIMENSIONS, double> g, tarch::la::Vector<LB_CURRENT_DIR, double>& gi) const
  {

    double cu = 0.0;
    for (int i = 0; i < LB_CURRENT_DIR; i++)
      {
        cu
            = tarch::la::dot(
                peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i],
                velocity);
        gi[i]
            = (1.0 - 0.5 / tau)
                * peano::applications::latticeboltzmann::LATTICEWEIGHTS._entries[i]
                * density
                * (1 / (CS_L_SQUARED)
                    * tarch::la::dot(
                        (peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i]
                            - velocity), g)
                    + (cu * cu) / (CS_L_SQUARED * CS_L_SQUARED)
                        * tarch::la::dot(
                            peano::applications::latticeboltzmann::LATTICEVELOCITIES._entries[i],
                            g));
      }
  }

  void
  PeanoDataExchangeService::adjustF(tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS
      * DIMENSIONS, double> &velocity, tarch::la::Vector<
      LB_BLOCK_NUMBER_OF_CELLS, double>& density, tarch::la::Vector<
      LB_DIMENSIONS_BY_BLOCKSIZE, double>& g, tarch::la::Vector<
      LB_BLOCK_NUMBER_OF_CELLS * LB_CURRENT_DIR, double>& pdf, int _level)
  {
    if (madpac::PeanoCouplingService::getInstance().getConfig()->getCouplingConfig()->getDirichletBoundary())
      {

      //  double dt = madpac::PeanoCouplingService::getInstance().getDt();
        tarch::la::Vector<LB_CURRENT_DIR, double> gi = 0.0;
        tarch::la::Vector<DIMENSIONS, double> localVelocity = 0.0;
        tarch::la::Vector<DIMENSIONS, double> localG = 0.0;

        // in all inner cells, get velocity and density and compute equilibrium
        // distribution
        for (int d = 0; d < DIMENSIONS; d++)
          {
            localVelocity(d) = velocity(_level * DIMENSIONS + d);
            localG(d) = g(_level * DIMENSIONS + d);
          }

        computeGi(density(_level), _tau, localVelocity, localG, gi);
        for (int p = 0; p < LB_CURRENT_DIR; p++)
          {
            pdf(_level * LB_CURRENT_DIR + p) += _dt * gi(p);
          }
      }
  }

}
