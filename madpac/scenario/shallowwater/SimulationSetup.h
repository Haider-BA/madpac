#ifndef _PEANO_SCENARIO_SHALLOWWATER_STARTGRID_H_
#define _PEANO_SCENARIO_SHALLOWWATER_STARTGRID_H_

#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"

namespace scenario {
  namespace shallowwater {
    class SimulationSetup;
  }
}

class scenario::shallowwater::SimulationSetup {
  public:
    virtual tarch::la::Vector<DIMENSIONS, int> getNumberOfGridPoints() const = 0;
    virtual tarch::la::Vector<3, double> getSimulationArea() const = 0;
    virtual tarch::la::Vector<2, double> getDisplacementLocation() const = 0;
    virtual int getNumberOfTimeSteps() const = 0;
    virtual int getGrainSize() const = 0; //TODO: -> Multicore Configuration
};

#endif
