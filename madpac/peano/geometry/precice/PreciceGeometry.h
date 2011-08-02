// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_GEOMETRY_PRECICE_PRECICEGEOMETRY_H_
#define _PEANO_GEOMETRY_PRECICE_PRECICEGEOMETRY_H_

#include "precice/SolverInterface.hpp"
#include "precice/Constants.hpp"
#include "precice/VoxelPosition.hpp"
#include "precice/ClosestMesh.hpp"
#include "tarch/logging/Log.h"
#include "tarch/la/Vector.h"
#include "tarch/la/VectorCompare.h"

#include "peano/geometry/Geometry.h"
#include <string>
#include <map>
#include <vector>


namespace peano {
  namespace geometry {
    namespace precice {
      class PreciceGeometry;
    }
  }
}


/** precice geometry for peano
 *
 *  @author Philipp Neumann
 */
class peano::geometry::precice::PreciceGeometry: public peano::geometry::Geometry
{
public:

  /**
   * @brief Constructor.
   */
  PreciceGeometry (
    ::precice::SolverInterface &interface,
    const int buffersize
  );


  ~PreciceGeometry();


  /** interface function */
  bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

  /** interface function */
  bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );

  /** interface function */
  bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

  /** returns the vector with mesh IDs that comes from preCICE. In order to use these IDs, they need to be converted to
   *  the peano IDs first. See FunctionalPreciceGeometryService for this; usage via the general FunctionalGeometryService.
   */
  std::vector<int> getMeshIDs(const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &resolution);

private:

  // @brief Logging device.
  static tarch::logging::Log _log;

  // @brief preCICE interface for coupled simulations and geometry mode.
  ::precice::SolverInterface &_interface;

  // @brief size of query buffers
  const int _buffersize;

  const std::set<int> _meshIDsGeometry;


  /** buffers for voxel queries (isCompletelyInside(...),isCompletelyOutside(...) */
  int _counterVolumetricBuffer;
  std::map<tarch::la::Vector<2*DIMENSIONS,double>, int, tarch::la::VectorCompare<2*DIMENSIONS> > _volumetricQueryBuffer;
  std::vector< ::precice::VoxelPosition > _volumetricGeometryInformation;

  /** buffers for point queries (isOutsideClosedDomain(x) */
  int _counterPointBuffer;
  std::map<tarch::la::Vector<DIMENSIONS,double> ,int, tarch::la::VectorCompare<DIMENSIONS> > _pointQueryBuffer;
  std::vector<int> _pointGeometryInformation;


  /** first checks the information in the buffers for relevant geometry information in case of a voxel query
   *  (isCompletelyInside(...), isCompletelyOutside(...)). If the data is not present in the buffer, a query is
   *  sent to preCICE, and the information is obtained and stored in the buffers (strategy for replacement: remove
   *  the oldest entry). The function returns the respective preCICE enum.
   */
  int getGeometryInformationForVolumetricQuery(
    const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &resolution
  );

  /** first checks the information in the buffers for relevant geometry information in case of a voxel query
   *  (isOutsideClosedDomain(x)). If the data is not present in the buffer, a query is
   *  sent to preCICE, and the information is obtained and stored in the buffers (strategy for replacement: remove
   *  the oldest entry). The function returns the respective preCICE enum.
   */
  int getGeometryInformationForPointQuery(
    const tarch::la::Vector<DIMENSIONS,double> &x
  );

};

#endif /* _PEANO_GEOMETRY_PRECICE_PRECICEGEOMETRY_H_ */
