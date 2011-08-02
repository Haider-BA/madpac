// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_PRECICE_SENDDATATOPRECICE_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_PRECICE_SENDDATATOPRECICE_H_

#include "peano/integration/partitioncoupling/SendData.h"
#include "precice/SolverInterface.hpp"


namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace precice {
        class SendDataToPrecice;
      }
    }
  }
}


/** sends data to precice
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::precice::SendDataToPrecice:
public peano::integration::partitioncoupling::SendData {
  public:
    SendDataToPrecice(::precice::SolverInterface *cplInterface);
    ~SendDataToPrecice(){}

    /** sends the force to the other solver in order to set it at a given position.
     *  As until now, the only quantity which has been needed for coupling has been
     *  the force vectors, this is the only transfer currently supported.
     */
    void sendForce(
      const tarch::la::Vector<DIMENSIONS,double> &position,
      const tarch::la::Vector<DIMENSIONS,double> &force
    );

#ifdef Parallel
    void synchronizeForces(){}
#endif

  private:
    ::precice::SolverInterface *_cplInterface;

    // @brief ID to be used when writing forces to a geometry
    int _dataIDForces;

    int _meshIDWetSurface;
};

#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_PRECICE_SENDDATATOPRECICE_H_
