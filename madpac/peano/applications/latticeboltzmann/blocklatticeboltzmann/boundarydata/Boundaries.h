// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARIES_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARIES_H_

#include "peano/utils/Dimensions.h"
#include <vector>
#include "tarch/logging/Log.h"
#include "peano/geometry/services/GeometryService.h"
#include "peano/geometry/services/FunctionalGeometryService.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/boundarydata/Boundary.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/configurations/BoundariesConfiguration.h"

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace boundarydata {
          class Boundaries;
        }
      }
    }
  }
}


class peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundaries {
  public:
  Boundaries(
    const peano::applications::latticeboltzmann::blocklatticeboltzmann::configurations::BoundariesConfiguration &boundariesConfig
  );
  ~Boundaries();

  void getBoundaryData(
    const tarch::la::Vector<DIMENSIONS,double> &boundaryNode,
    const tarch::la::Vector<DIMENSIONS,double> &cellSize,
    const unsigned int &pdfDirection,
    peano::applications::latticeboltzmann::BoundaryData& boundaryData
  );

  private:
    /** maps the geometry IDs stored in ids onto their respective boundary ranges and writes them back into the
     *  same vector at the same position
     */
    void translateGeometryIDsToBoundaryIDs(std::vector<int> ids) const;

    /** determines a unique boundary from all available boundaries. If no boundary can be determined,
     *  _ranges.size() is returned.
     */
    int getUniqueBoundary(const std::vector<int> ids,const unsigned int &pdfDirection) const;

  private:
    static tarch::logging::Log _log;
    std::vector<peano::applications::latticeboltzmann::blocklatticeboltzmann::boundarydata::Boundary*> _boundaries;
    std::map<int,int> _geometry2BoundaryMap;
};

#endif // _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_BOUNDARIES_H_
