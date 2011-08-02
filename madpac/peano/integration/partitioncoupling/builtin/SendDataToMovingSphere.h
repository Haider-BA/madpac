// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_SENDDATATOMOVINGSPHERE_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_SENDDATATOMOVINGSPHERE_H_

#include "peano/integration/partitioncoupling/SendData.h"
#include "peano/integration/partitioncoupling/builtin/Utils.h"
#include "tarch/la/VectorVectorOperations.h"
#include "tarch/la/ScalarOperations.h"
#include "tarch/la/Matrix.h"
#include "peano/integration/partitioncoupling/builtin/records/ForceTorque.h"
#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#endif

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace builtin {
        class SendDataToMovingSphere;
      }
    }
  }
}


/** implements the sendForce() functionality for the builtin PartitionCoupling4MovingSphere setup.
 *
 * @author Philipp Neumann
 */
class peano::integration::partitioncoupling::builtin::SendDataToMovingSphere:
public peano::integration::partitioncoupling::SendData {
  public:
    SendDataToMovingSphere(const tarch::la::Vector<DIMENSIONS,double>& position);
    ~SendDataToMovingSphere();

#ifdef Parallel
    /** synchronizes the forces between different processes */
    void synchronizeForces();
#endif

    /** sends a force to this sphere */
    void sendForce(
      const tarch::la::Vector<DIMENSIONS,double> &position,
      const tarch::la::Vector<DIMENSIONS,double> &force
    );

    /** resets the translational force and the torque */
    void resetForces();

    /** returns the translational force */
    tarch::la::Vector<3,double> getTranslationalForce() const;

    /** returns the torque */
    tarch::la::Vector<3,double> getTorque() const;

    /** returns the position of the sphere */
    void setPosition(const tarch::la::Vector<DIMENSIONS,double>& pos);

  private:
    /** adds translationalForce to _translationalForce */
    void addTranslationalForce(
      const tarch::la::Vector<DIMENSIONS,double> &translationalForce
    );

    /** adds the force angularForce (acting only in tangential direction)
     *  to the torque
     */
    void addTorque(
      const tarch::la::Vector<DIMENSIONS,double> &position,
      const tarch::la::Vector<DIMENSIONS,double> &angularForce
    );


    /** position of sphere */
    tarch::la::Vector<DIMENSIONS,double> _position;

    /** forces causing rotation and translation */
    peano::integration::partitioncoupling::builtin::records::ForceTorque _forceTorque;
#ifdef Parallel
    /** needed for send-recv operations of forces */
    static int _managementTag;
    static int _init;
#endif
};

#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_BUILTIN_SENDDATATOMOVINGSPHERE_H_
