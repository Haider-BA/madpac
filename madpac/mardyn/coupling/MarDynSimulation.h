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

#ifndef MADPAC_MARDYNSIMULATION_H_
#define MADPAC_MARDYNSIMULATION_H_

#include "Simulation.h"
#include "usher/UsherConnector.h"

#include "MarDynCoupling.h"

namespace mardyn
{
  class MarDynSimulation : public Simulation
  {
  public:
    MarDynSimulation();
    virtual
    ~MarDynSimulation();

    MarDynSimulation(int numberOfTimesteps, std::string inputfilename);
    void
    firstMDstep()
    {
      _firstMDStep = true;
    }
    void
    finishFirstStep()
    {
      _firstStep = false;
    }
    void
    thermostatOff()
    {
      _domain->thermostatOff();
    }
    void
    thermostatOn()
    {
      _domain->thermostatOn();
    }
    void
    simulateStart(ExchangeDataContainerWDCwithOutput* hDataContainer,
        bool bEnabled, bool bThermostat, int streamdir);

    virtual void
    simulateFinish();
    virtual void
    simulateStep();
    virtual void
    simulate();

    virtual void
    output(unsigned long simstep);
  private:
    madpac::mardyncoupling::MarDynCoupling* _lbConnector;
    madpac::mardyncoupling::usher::UsherConnector* _usherConnector;
    bool _firstStep;
    Timer* _lbTimer;
    Timer* _hybridTimer;
    bool _firstMDStep;
    bool _bEnabled;
  };
}

#endif /* MADPAC_MARDYNSIMULATION_H_ */
