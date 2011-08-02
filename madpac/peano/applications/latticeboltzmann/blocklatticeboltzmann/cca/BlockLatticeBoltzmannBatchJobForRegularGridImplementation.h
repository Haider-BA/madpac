// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_BlockLatticeBoltzmannBatchJobFOR_REGULAR_GRID_H_ 
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_BlockLatticeBoltzmannBatchJobFOR_REGULAR_GRID_H_

#if defined(CCA)
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/scicode/AbstractBlockLatticeBoltzmannBatchJobForRegularGrid.h"
#endif
 
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/repositories/BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid.h"
#include "peano/geometry/builtin/Sphere.h"
#include "peano/geometry/extensions/GeometryEnlargement.h"
#include "peano/geometry/services/FunctionalGeometryService.h"
#include "peano/integration/partitioncoupling/services/CouplingService.h"
#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"
#include "peano/integration/partitioncoupling/services/SendDataService.h"
#include "scenario/latticeboltzmann/blocklatticeboltzmann/services/ReceiveBoundaryDataService.h"
#include "tarch/logging/Log.h"
namespace peano { 
  namespace applications { 
    namespace latticeboltzmann { 
      namespace blocklatticeboltzmann {
      namespace cca {
        class BlockLatticeBoltzmannBatchJobForRegularGridImplementation;
      }
      namespace configurations {
        class BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid;
      }

}
}
}
}



/**
 * CCA Component of BlockLatticeBoltzmannBatchJob
 *
 * This is the blueprint of BlockLatticeBoltzmannBatchJob acting as 
 * CCA component. 
 */
class peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation
#if defined(CCA)
  : public peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForRegularGrid
#endif
{
  private:
    static tarch::logging::Log _log;
    peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid*            _repository;
    peano::geometry::Geometry *gridEnlargement;
  public:
    BlockLatticeBoltzmannBatchJobForRegularGridImplementation();
    virtual ~BlockLatticeBoltzmannBatchJobForRegularGridImplementation();
    void configure();
    void initServices(const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BlockLatticeBoltzmannBatchJobConfigurationForRegularGrid& configuration);
    int runAsClient(peano::applications::latticeboltzmann::blocklatticeboltzmann::repositories::BlockLatticeBoltzmannBatchJobRepositoryForRegularGrid& repository);
    virtual void getSimulationOutline(long long& dimension, double* boundingBoxOffset,long boundingBoxOffset_len, double* boundingBox,long boundingBox_len);
    virtual void getScopes(long long& numberOfScopes, long long* scopeCardinality,long scopeCardinality_len, std::string* descriptionOfScope,long descriptionOfScope_len);
    virtual void getData(const long long& scope, const double* boundingBoxOffset,long boundingBoxOffset_len, const double* boundingBox,long boundingBox_len, const long long* resolution,long resolution_len, double* data,long data_len);

    virtual void switchToRegularBlockSolverAdapter();
    virtual void switchToBlockVTKOutputAdapter();
    virtual void switchToBlockCCAOutputAdapter();
    virtual void switchToRegularBlockSolverAndVTKOutputAdapter();


    virtual void iterate();

    virtual void getNumberOfInnerVertices(double& vertices);
    virtual void getNumberOfBoundaryVertices(double& vertices);
    virtual void getNumberOfOuterVertices(double& vertices);
    virtual void getNumberOfInnerCells(double& cells);
    virtual void getNumberOfOuterCells(double& cells);
    
    #if defined(CCA)
    /**
     * Operation is protected by include guard as the ISO C++ 1998 standard 
     * does not support long long. However, if you link Peano to Java, you 
     * have to support long long.
     */
    virtual void getMaximumMeshWidth(const long long& dimension, double& h);

    /**
     * Operation is protected by include guard as the ISO C++ 1998 standard 
     * does not support long long. However, if you link Peano to Java, you 
     * have to support long long.
     */
    virtual void getMinimumMeshWidth(const long long& dimension, double& h);
    #endif

    /**
     * Callback Point for CCA Main
     *
     * This operation is called by main if Peano runs as remote job. The 
     * operation sets up Peano, so, usually, there's no need to add any code 
     * here. Nevertheless, you may want to modify the routine. 
     */    
    static int initRemoteJob(int argc, char** argv);
    
    /**
     * Callback Point for CCA Main
     *
     * This operation is called before a remote Peano main terminates. The 
     * operation sets up Peano, so, usually, there's no need to add any code 
     * here. Nevertheless, you may want to modify the routine. 
     */    
    static int shutdownRemoteJob();
};


#endif
