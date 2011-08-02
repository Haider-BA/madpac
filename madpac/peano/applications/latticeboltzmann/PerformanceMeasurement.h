// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _LATTICEBOLTZMANN_PERFORMANCEMEASUREMENT_H_
#define _LATTICEBOLTZMANN_PERFORMANCEMEASUREMENT_H_

#include "peano/utils/Dimensions.h"
#include "tarch/utils/Watch.h"
#include "tarch/logging/Log.h"
#include "tarch/Assertions.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif

namespace peano {
  namespace applications {
    namespace latticeboltzmann {

      class PerformanceMeasurement;
    }
  }
}


/** measures the performance using the utils::Watch
 *
 *  @author Philipp Neumann
 */
class peano::applications::latticeboltzmann::PerformanceMeasurement {

  public:
    /** constructor gets parameters:
     *  @param simulationToBeMeasured - name of the simulation that shall be measured
     *  @param measureMLUPS - true if mega lattice updates shall be measured
     *  @param numberOfCells - number of lattice cells (necessary for MLUP-computation)
     *  @param totalNumberOfCells - in case of parallel computations, this is the number of all fluid cells in the whole fluid domain
     */
    PerformanceMeasurement(bool measureMLUPS);

    /** destructor */
    ~PerformanceMeasurement();

    /** set the number of cells to the respective values */
    void setNumberOfCells(int localCells,int globalCells);

    /** sets the global cpu time (important for parallel computations) */
    void setGlobalCpuTime(double globalTime);

    /** resets/ initialises watch for measurement */
    void startPerformanceMeasurement();

    /** stops measurement and stores the local cpu time */
    void stopPerformanceMeasurement();

    /** returns the local cpu time */
    double getLocalCpuTime() const { return _localCpuTime; }

    /** computes the MLUPS according to the current time information */
    void computeMLUPS();

  private:
    /** number of cells; in case of using the parallel component, this corresponds to the number of fluid cells on this process
     */
    int _localNumberOfCells;
    /** number of cells in the whole fluid domain. This is only needed for parallel computations
     */
    int _globalNumberOfCells;


    /** true, if the MLUPS shall be measured */
    bool _measureMLUPS;


    /** maximum time over all processes */
    double _globalCpuTime;
    /** time on this process */
    double _localCpuTime;


    /** stores a value for the MLUPS (in case of using the parallel component, this is the performance of this process) */
    double _localMlups;
    /** stores a value for the global MLUPS (MLUPS over all processes) */
    double _globalMlups;


    /** for measuring the time */
    tarch::utils::Watch _watch;

    /** for logging */
    static tarch::logging::Log _log;
};

#endif
