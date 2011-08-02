// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARY_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARY_H_

#include "peano/utils/Dimensions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoundaryData.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoundaryConfigurationData.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundarydata {
          class Boundary;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundary {
  public:
    Boundary(const peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData &configData):
      _configData(configData){}
    virtual ~Boundary(){}

    virtual void getBoundaryData(
      const tarch::la::Vector<DIMENSIONS,double> &boundaryNode,
      const tarch::la::Vector<DIMENSIONS,double> &cellSize,
      const unsigned int &pdfDirection,
      peano::applications::latticeboltzmann::BoundaryData& boundaryData
    ) = 0;

    unsigned int getBoundaryType() const {
      return _configData.getBoundaryType();
    }

    unsigned int getGeometryID() const {
      return _configData.getGeometryID();
    }

  protected:
    peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData _configData;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARY_H_
