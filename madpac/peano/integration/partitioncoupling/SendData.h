// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_SENDDATA_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_SENDDATA_H_

#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      class SendData;
    }
  }
}

/** interface for sending data to a coupled source.
 *
 * @author Philipp Neumann
 */
class peano::integration::partitioncoupling::SendData {
  public:
    SendData(){}
    virtual ~SendData(){}

    /** sends the force to the other solver in order to set it at a given position.
     *  As until now, the only quantity which has been needed for coupling has been
     *  the force vectors, this is the only transfer currently supported.
     */
    virtual void sendForce(
      const tarch::la::Vector<DIMENSIONS,double> &position,
      const tarch::la::Vector<DIMENSIONS,double> &force
    ) = 0;

#ifdef Parallel
    /** can be used to synchronize the force values that have been written to the service */
    virtual void synchronizeForces() = 0;
#endif
};

#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_SENDDATA_H_
