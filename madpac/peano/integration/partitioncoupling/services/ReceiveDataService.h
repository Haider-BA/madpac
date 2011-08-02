// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_RECEIVEDATASERVICE_H_
#define PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_RECEIVEDATASERVICE_H_

#include "tarch/services/Service.h"
#include "peano/integration/partitioncoupling/ReceiveData.h"
#include "peano/integration/partitioncoupling/builtin/ReceiveDataFromMovingSphere.h"

#if defined(Precice)
#include "peano/geometry/precice/configurations/PreciceConfiguration.h"
#include "peano/integration/partitioncoupling/precice/ReceiveDataFromPrecice.h"
#endif

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace services {
        class ReceiveDataService;
      }
    }
  }
}


/** service for receiving data from partition coupling tool/ structural solver
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::services::ReceiveDataService: public tarch::services::Service {

  public:
    ReceiveDataService(): tarch::services::Service(), _receiveData(NULL){}
    virtual ~ReceiveDataService(){}

    /** shuts down the service */
    void shutdown(){
      if (_receiveData != NULL){
        delete _receiveData;
        _receiveData = NULL;
      }
    }

#if defined(Precice)
    /** initialise receiving with precice */
    void init(const peano::geometry::precice::configurations::PreciceConfiguration& config);
#endif

    /** initialize receiving for builtin-moving sphere.
     *  Take care! The initial velocities need to be handed
     *  over as 3-d vectors for consistency.
     *  TODO change this to a more user-friendly system
     *
     */
    void init(
      const tarch::la::Vector<DIMENSIONS,double>& position,
      const double radius,
      const tarch::la::Vector<3,double>& initialTranslationalVelocity,
      const tarch::la::Vector<3,double>& initialAngularVelocity
    );

    static peano::integration::partitioncoupling::services::ReceiveDataService& getInstance();


    peano::integration::partitioncoupling::ReceiveData& getReceiveData();

    void receiveDanglingMessages(){}

  private:
    peano::integration::partitioncoupling::ReceiveData *_receiveData;
};
#endif // PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_RECEIVEDATASERVICE_H_
