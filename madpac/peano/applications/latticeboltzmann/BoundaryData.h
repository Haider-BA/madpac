// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BOUNDARYDATA_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BOUNDARYDATA_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      class BoundaryData;
    }
  }
}


/** data needed at the boundary as input for LBM simulations. This class is
 *  used for data transfer from the ReceiveBoundaryDataService to the
 *  solver mapping and the respective solver implementations.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::BoundaryData {
  public:
    BoundaryData();
    ~BoundaryData(){}

    /** deal with velocity on the lattice */
    void setVelocityL(const tarch::la::Vector<DIMENSIONS,double> &vel);
    tarch::la::Vector<DIMENSIONS,double> getVelocityL() const;

    /** deal with the density on the lattice */
    void setDensityL(const double& density);
    double getDensityL() const;

    /** sets the boundary type */
    void setBoundaryType(const unsigned int &boundaryType);
    unsigned int getBoundaryType() const;

  public:
    /** boundary types allowed in the simulations */
    enum BoundaryType{
      // halfway-bounceback
      HW_BB=0,
      // moving wall with halfway-bounceback
      MOVING_WALL_HW_BB=1,
      // pressure outlet with halfway-bounceback
      PRESSURE_OUTLET_HW_BB=2,
      // pressure inlet with halfway-bounceback
      PRESSURE_INLET_HW_BB=3,
      // sets equilibrium distribution at a velocity inlet
      VELOCITY_INLET_EQUILIBRIUM_DISTRIBUTION=4,
      // moving obstacle with halfway-bounceback (w.r.t. the obstacle's velocity)
      MOVING_OBSTACLE_HW_BB=5,
      // undefined boundary type
      UNDEFINED=6,
      // total number of boundary types
      NUMBER_BOUNDARY_TYPES=6
    };

  private:
    unsigned int _boundaryType;
    tarch::la::Vector<DIMENSIONS,double> _velocityL;
    double _densityL;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BOUNDARYDATA_H_
