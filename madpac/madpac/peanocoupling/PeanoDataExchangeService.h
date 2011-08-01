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

#ifndef MADPAC_PEANODATAEXCHANGESERVICE_H_
#define MADPAC_PEANODATAEXCHANGESERVICE_H_

#include "tarch/services/Service.h"
#include "tarch/logging/Log.h"
#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "madpac/core/ExchangeDataContainer.h"
#include "madpac/configurations/CouplingConfiguration.h"


namespace madpac
{

  class PeanoDataExchangeService : public tarch::services::Service
  {
  public:

    static PeanoDataExchangeService&
    getInstance();

    //virtual ~PeanoDataExchangeService();

    void
    receiveDanglingMessages()
    {
    }

    void
    init(ExchangeDataContainer* dataContainer, double dx,
        double dt, double density, double tau,
        madpac::configurations::CouplingConfiguration *couplingconfig);

    /**
     * Adjust the velocity according to the coupling algorithm
     */

    void
    getAndSetV(const tarch::la::Vector<DIMENSIONS, double> &x,
        const tarch::la::Vector<DIMENSIONS, double> &_h, tarch::la::Vector<
            LB_BLOCK_NUMBER_OF_CELLS * DIMENSIONS, double> &velocity,
        tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS, double>& density,
        tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE, double>& g);

    /**
     * 	Computes the forcing term from the given density and velocity and
     *  stores it in g.
     */
    void
    computeGi(double density, double tau,
        tarch::la::Vector<DIMENSIONS, double> velocity, tarch::la::Vector<
            DIMENSIONS, double> g,
        tarch::la::Vector<LB_CURRENT_DIR, double>& gi) const;

    /**
     * Adjusts the force according to the coupling algorithm
     */
    void
        adjustF(
            tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS * DIMENSIONS, double> &velocity,
            tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS, double>& density,
            tarch::la::Vector<LB_DIMENSIONS_BY_BLOCKSIZE, double>& g,
            tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS * LB_CURRENT_DIR, double>& pdf,
            int _level);

  protected:
    PeanoDataExchangeService();
    static tarch::logging::Log _log;

    ExchangeDataContainer* _dataContainer;
    int _dirichtletBoundary;
    int _numLbIterations;
    int _lbinittime;
    double _lb2ms;
    double _densityLB2MD;
    double _tau;
    double _dt;
    bool _densityCoupling;
  };
}
#endif /* MADPAC_PEANODATAEXCHANGESERVICE_H_ */
