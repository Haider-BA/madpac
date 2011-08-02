// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_PRECICE_SERVICES_PRECICESOLVERINTERFACEMANAGER_H_
#define _PEANO_GEOMETRY_PRECICE_SERVICES_PRECICESOLVERINTERFACEMANAGER_H_

#include <memory>
#include "tarch/Assertions.h"
#include "tarch/services/Service.h"
#include "peano/geometry/precice/configurations/PreciceConfiguration.h"
#include "peano/integration/partitioncoupling/CouplingManager.h"
#include "precice/SolverInterface.hpp"


namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace precice {
        class PreciceSolverInterfaceManager;
      }
    }
  }
}


/** service providing access to the preCICE solver interface
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::precice::PreciceSolverInterfaceManager:
public peano::integration::partitioncoupling::CouplingManager {
  public:
    PreciceSolverInterfaceManager(const peano::geometry::precice::configurations::PreciceConfiguration& config);
    ~PreciceSolverInterfaceManager();

    virtual void initialize();

    virtual void advance(double timestep);

    /** triggers finalize() of the interface */
    virtual void finalize();

  private:
    ::precice::SolverInterface *_interface;
    double _timestepLimit;
};
#endif // _PEANO_GEOMETRY_PRECICE_SERVICES_PRECICESOLVERINTERFACEMANAGER_H_
