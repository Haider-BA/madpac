#ifndef _PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_COUPLINGSERVICE_H_
#define _PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_COUPLINGSERVICE_H_

#include "tarch/services/Service.h"

#include "peano/integration/partitioncoupling/CouplingManager.h"
#if defined(Precice)
#include "peano/integration/partitioncoupling/precice/PreciceSolverInterfaceManager.h"
#endif
#include "peano/integration/partitioncoupling/builtin/PartitionCoupling4MovingSphere.h"


namespace peano {
  namespace integration {
    namespace partitioncoupling {
      namespace services {
        class CouplingService;
      }
    }
  }
}


class peano::integration::partitioncoupling::services::CouplingService: public tarch::services::Service {
  public:
    CouplingService();
    virtual ~CouplingService(){}

    void receiveDanglingMessages(){}

#if defined(Precice)
    void init(const peano::geometry::precice::configurations::PreciceConfiguration& config);
#endif

    void init(
      peano::geometry::Geometry *basicGeometry,
      tarch::la::Vector<DIMENSIONS,double> domainSize,
      tarch::la::Vector<DIMENSIONS,double> domainOffset,
      tarch::la::Vector<DIMENSIONS,double> position,
      double radius,
      double sphereDensity,
      int timestepsPerPlottingVTK,
      int timestepsPerPlottingPovray,
      std::string filename,
      int initTimestepCounter = 0
    );


    void advance(double timestep);

    void shutdown();

    static peano::integration::partitioncoupling::services::CouplingService& getInstance();

    peano::integration::partitioncoupling::CouplingManager& getCouplingManager(){
      assertion(_couplingManager != NULL);
      return *_couplingManager;
    }

  private:
    peano::integration::partitioncoupling::CouplingManager *_couplingManager;
};

#endif // _PEANO_INTEGRATION_PARTITIONCOUPLING_SERVICES_COUPLINGSERVICE_H_
