// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_PLANEBOUNDARY_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_PLANEBOUNDARY_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include <cstdlib>
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/Boundary.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoundaryConfigurationData.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundarydata {
          class PlaneBoundary;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::PlaneBoundary:
public peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundary {
  public:
    PlaneBoundary(
      const tarch::la::Vector<DIMENSIONS,double> &width,
      const tarch::la::Vector<DIMENSIONS,double> &offset,
      const tarch::la::Vector<DIMENSIONS,double> &normal,
      const tarch::la::Vector<2*DIMENSIONS,bool> &isOpen,
      const peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData &configData
      );
    ~PlaneBoundary(){}

    void getBoundaryData(
      const tarch::la::Vector<DIMENSIONS,double> &boundaryNode,
      const tarch::la::Vector<DIMENSIONS,double> &cellSize,
      const unsigned int &pdfDirection,
      peano::applications::latticeboltzmann::BoundaryData& boundaryData
    );

  private:
    tarch::la::Vector<DIMENSIONS,double> getChannelInletVelocity(
      const tarch::la::Vector<DIMENSIONS,double> &x
    );

    int getNormalComponent(const tarch::la::Vector<DIMENSIONS,double> &normal) const;

    static tarch::logging::Log _log;

    tarch::la::Vector<DIMENSIONS,double> _width;
    tarch::la::Vector<DIMENSIONS,double> _offset;
    tarch::la::Vector<DIMENSIONS,double> _normal;
    int _normalComponent;
    tarch::la::Vector<2*DIMENSIONS,bool> _isOpen;
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_PLANEBOUNDARY_H_
