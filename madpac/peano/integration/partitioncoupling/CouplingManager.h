// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_COUPLINGMANAGER_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_COUPLINGMANAGER_H_


namespace peano {
  namespace integration {
    namespace partitioncoupling {
      class CouplingManager;
    }
  }
}


/** general coupling manager used to combine timestepping and further functionalities
 *  that are needed in coupled FSI simulations.
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::CouplingManager {
  public:
    CouplingManager(){}
    virtual ~CouplingManager(){}

    /** advance coupled solver in time by a timestep dt */
    virtual void advance(double dt) = 0;

    virtual void initialize() = 0;

    virtual void finalize() = 0;

};
#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_COUPLINGMANAGER_H_
