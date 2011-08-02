// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_PERFORMANCEMEASUREMENTSERVICE_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_PERFORMANCEMEASUREMENTSERVICE_H_

#include "tarch/services/Service.h"
#include "peano/applications/latticeboltzmann/PerformanceMeasurement.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace services {
          class PerformanceMeasurementService;
        }
      }
    }
  }
}


/** service for performance measurements.
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::
services::PerformanceMeasurementService: public tarch::services::Service {

  public:
    /** starts the performance measurement. 'measureMlups' is true, if the
     *  MLUPS shall be measured during the simulation.
     */
    void startPerformanceMeasurement(bool measureMlups);

    /** stops the performance measurement */
    void stopPerformanceMeasurement();

    /** evaluates the MLUPS if needed. Therefore, the local/global number of fluid cells
     *  and the overall time of the last timestep are required.
     */
    void evaluatePerformance(int localNumberOfCells,int globalNumberOfCells, double globalCpuTime);

    /** returns the time that the local cpu needed for the simulation of the last timestep */
    double getLocalCpuTime() const {
      assertion(_performanceMeasurement != NULL);
      return _performanceMeasurement->getLocalCpuTime();
    }

    static PerformanceMeasurementService& getInstance();

    void receiveDanglingMessages(){}

  private:
    PerformanceMeasurementService(): _performanceMeasurement(NULL){}
    ~PerformanceMeasurementService(){
      if (_performanceMeasurement != NULL){
        delete _performanceMeasurement;
        _performanceMeasurement = NULL;
      }
    }


    PerformanceMeasurement *_performanceMeasurement;
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_PERFORMANCEMEASUREMENTSERVICE_H_
