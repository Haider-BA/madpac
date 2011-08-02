// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONFIGURATIONDATA_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONFIGURATIONDATA_H_

#include "peano/utils/Dimensions.h"
#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/BoundaryData.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundarydata {
          class BoundaryConfigurationData;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::BoundaryConfigurationData {
  public:
    BoundaryConfigurationData();
    ~BoundaryConfigurationData(){}

    void setVelocityL(const tarch::la::Vector<DIMENSIONS,double> &vel);
    tarch::la::Vector<DIMENSIONS,double> getVelocityL() const;

    void setDensityL(const double& densityL);
    double getDensityL() const;

    void setBoundaryType(const unsigned int &type);
    unsigned int getBoundaryType() const;

    void setProfileType(const unsigned int &profile);
    unsigned int getProfileType() const;

    void setGeometryID(const unsigned int &id);
    unsigned int getGeometryID() const;

    /** type of velocity inlet profile. The UNDEFINED_PROFILE should always be kept at the highest enumerated number */
    enum ProfileType{FLAT_PROFILE=0,PARABOLIC_PROFILE=1,UNDEFINED_PROFILE=2};

  private:
    unsigned int _boundaryType;
    unsigned int _geometryID;
    unsigned int _profileType;
    double _density_L;
    tarch::la::Vector<DIMENSIONS,double> _velocity_L;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARYCONFIGURATIONDATA_H_
