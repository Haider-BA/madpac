// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_PRECICE_RECEIVEDATAFROMPRECICE_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_PRECICE_RECEIVEDATAFROMPRECICE_H_

#include "precice/SolverInterface.hpp"

#include "peano/integration/partitioncoupling/ReceiveData.h"


namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace precice {
        class ReceiveDataFromPrecice;
      }
    }
  }
}


/** receives data from precice */
class peano::integration::partitioncoupling::precice::ReceiveDataFromPrecice:
public peano::integration::partitioncoupling::ReceiveData {
  public:
    ReceiveDataFromPrecice(::precice::SolverInterface *cplInterface);
    ~ReceiveDataFromPrecice(){}

    /** returns the velocity at the given position. As until now, the only
     *  quantity which has been needed for coupling has been the velocity vectors,
     *  this is the only transfer currently supported.
     */
    tarch::la::Vector<DIMENSIONS,double> getVelocity(
      const tarch::la::Vector<DIMENSIONS,double> &position
    );

    tarch::la::Vector<DIMENSIONS,double> getVelocityDelta (
      const tarch::la::Vector<DIMENSIONS,double> &position
    );


    /** always returns true. TODO check interface, if there is some similar functionality available */
    bool reflag(const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h){
      return true;
    }

  private:
    ::precice::SolverInterface * _cplInterface;

    // @brief ID to be used when reading velocities from a geometry
    int _dataIDVelocities;

    // @brief ID to be used when reading velocity deltas from a geometry
    int _dataIDVelocityDeltas;

    int _meshIDWetSurface;
};
#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_PRECICE_RECEIVEDATAFROMPRECICE_H_
