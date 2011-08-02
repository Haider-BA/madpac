// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_GRIDMANAGEMENTSERVICE_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_GRIDMANAGEMENTSERVICE_H_

#include "peano/utils/Globals.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/geometry/services/GeometryService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"
#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"
#include <bitset>
#include "tarch/la/Vector.h"
#include "tarch/logging/Log.h"
#include "tarch/services/Service.h"
#include <vector>
#include <map>

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace services {
          class GridManagementService;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::services::GridManagementService:
public tarch::services::Service {

  public:

    static GridManagementService& getInstance();

    /** clears all vertex data, initialises temporary vertices (2^D vertex data) and resets all counter values */
    void init();

    void loadVertex(unsigned int vertexNumber);

    unsigned int createVertex(const tarch::la::Vector<DIMENSIONS,double>&x, const tarch::la::Vector<DIMENSIONS,double> &h);
    unsigned int destroyVertex(unsigned int vertexNumber);


    /** does the same as setBoundaryFlags, but additionally uses the density values of this vertex and velocity values from
     *  the ReceiveDataService to initialise the pdf field in cells that became inner fluid cells.
     *  Make sure, that dynamic-geometry is switched on for this purpose and that the respective partitioncoupling-
     *  environment is initialised as well!
     */
    void setBoundaryFlagsAndInitialiseUnknownPdfs(
      const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &h,
      const int level,
      const peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData
    );

    unsigned int getVertexNumber() const;

    void resetNonLocalStreamingFinished();
    std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& getBoundary();
    std::bitset<LB_BLOCK_NUMBER_OF_CELLS>& getInner();
    std::bitset<TWO_POWER_D>& getNonLocalStreamingFinished();
    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double>& getVelocity();
    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double>& getDensity();
    tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double>& getPdf();


    void receiveDanglingMessages(){}

  private:
    struct VertexData {
      std::bitset<LB_BLOCK_NUMBER_OF_CELLS> _boundary;
      std::bitset<LB_BLOCK_NUMBER_OF_CELLS> _inner;
      std::bitset<TWO_POWER_D> _isNonLocalStreamingFinished;
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> _velocity;
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> _density;
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> _pdf;
    };

    GridManagementService();
    ~GridManagementService();

    std::map<unsigned int, VertexData> _vertexData;
    std::map<unsigned int, VertexData>::iterator _vertexDataBuffer;
    unsigned int _vertexCounter;
    unsigned int _tmpVertexIndex;

    tarch::logging::Log _log;
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_SERVICES_GRIDMANAGEMENTSERVICE_H_
