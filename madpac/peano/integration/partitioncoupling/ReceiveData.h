// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_RECEIVEDATA_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_RECEIVEDATA_H_

#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      class ReceiveData;
    }
  }
}


/** interface for receiving data from a coupled source.
 *
 * @author Philipp Neumann
 */
class peano::integration::partitioncoupling::ReceiveData {
  public:
    ReceiveData(){}
    virtual ~ReceiveData(){}

    /** returns the velocity at the given position. As until now, the only
     *  quantity which has been needed for coupling has been the velocity vectors,
     *  this is the only transfer currently supported.
     */
    virtual tarch::la::Vector<DIMENSIONS,double> getVelocity(
      const tarch::la::Vector<DIMENSIONS,double> &position
    ) = 0;

    /**
     * @brief Reads velocity delta at position x. This is needed in case of accelerated boundaries.
     */
    virtual tarch::la::Vector<DIMENSIONS,double> getVelocityDelta (
      const tarch::la::Vector<DIMENSIONS,double> &position) = 0;


    /** true, if a vertex/cell at position x might have changed its geometrical status
     *  (switched from inside to outside etc.)
     */
    virtual bool reflag(const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h) = 0;
};
#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_RECEIVEDATA_H_
