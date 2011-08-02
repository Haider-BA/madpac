// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_SENDDATASERVICE_H_
#define PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_SENDDATASERVICE_H_

#include "tarch/services/Service.h"
#include "peano/integration/partitioncoupling/SendData.h"

#if defined(Precice)
#include "peano/geometry/precice/configurations/PreciceConfiguration.h"
#include "peano/integration/partitioncoupling/precice/SendDataToPrecice.h"
#endif

#include "peano/integration/partitioncoupling/builtin/SendDataToMovingSphere.h"

namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace services {
        class SendDataService;
      }
    }
  }
}


/** service for sending data to a partition coupling tool/ structural solver
 *
 *  @author Philipp Neumann
 */
class peano::integration::partitioncoupling::services::SendDataService: public tarch::services::Service {

  public:
    SendDataService(): tarch::services::Service(), _sendData(NULL){}
    virtual ~SendDataService(){}

    /** shuts down the service */
    void shutdown(){
      if (_sendData != NULL){
        delete _sendData;
        _sendData = NULL;
      }
    }

#if defined(Precice)
    /** initialise sending service for precice coupling */
    void init(const peano::geometry::precice::configurations::PreciceConfiguration& config);
#endif

    /** initialise sending service for moving-sphere builtin-experiment */
    void init(const tarch::la::Vector<DIMENSIONS,double>& position);

    peano::integration::partitioncoupling::SendData& getSendData();

    static peano::integration::partitioncoupling::services::SendDataService& getInstance();

    void receiveDanglingMessages(){}

#ifdef Parallel
    void synchronizeForces(){
      assertion(_sendData != NULL);
      _sendData->synchronizeForces();
    }
#endif

  private:
    peano::integration::partitioncoupling::SendData *_sendData;
};
#endif // PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_SENDDATASERVICE_H_
