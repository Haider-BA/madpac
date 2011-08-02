// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_VERTEXREFLAGGING_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_VERTEXREFLAGGING_H_

#include "peano/utils/Dimensions.h"
#include "tarch/Assertions.h"
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "peano/geometry/Geometry.h"
#include <bitset>
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/BoundaryData.h"
#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"



namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        class VertexReflagging;
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::VertexReflagging {
  public:
    VertexReflagging(
      peano::geometry::Geometry& geometry,
      peano::applications::latticeboltzmann::MultiLevelSimData& multiLevelSimData
    );
    ~VertexReflagging();

    /** does actually the same as initBoundaryVertex(x,h), but uses the inner and boundary bitsets to set the respective
     *  flags. The function degenerates to nop, if the reflagging is deactivated (however: one more if-statement :-( ).
     */
    void reflagVertex(
      const tarch::la::Vector<DIMENSIONS,double> &x,
      const tarch::la::Vector<DIMENSIONS,double> &h,
      std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &inner,
      std::bitset<LB_BLOCK_NUMBER_OF_CELLS> &boundary,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity,
      // for regular grid, use level 0 and remove the passive-flag
      const int level = 0,
      const bool isPassive = false
    );

    void nonLocalDensityInterpolation(
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> &pdf,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density
    );

  private:
    /** initialises the values inside a newly created fluid cell using the locally available boundary data */
    void initialiseCell(
      const int cellIndex,
      const std::vector<peano::applications::latticeboltzmann::BoundaryData> &boundaryData,
      const std::vector<tarch::la::Vector<2,int> > &boundaryDataIndex,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*LB_CURRENT_DIR,double> &pdf,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS,double> &density,
      tarch::la::Vector<LB_BLOCK_NUMBER_OF_CELLS*DIMENSIONS,double> &velocity
    );

    static tarch::logging::Log _log;
    peano::geometry::Geometry &_geometry;
    peano::applications::latticeboltzmann::MultiLevelSimData& _multiLevelSimData;
};
#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_VERTEXREFLAGGING_H_
