// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_RegularGridBlockVertex_H_
#define _PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_RegularGridBlockVertex_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/records/RegularGridBlockVertex.h"
#include "peano/kernel/regulargrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockDefinitions.h"
#include "peano/applications/latticeboltzmann/LatticeBoltzmannDefinitions.h"
#include "peano/geometry/services/GeometryService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockBoundaryIndex.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/parallel/BlockBoundaryIndex4Pdfs.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/services/GridManagementService.h"

// for FSI
#include "peano/applications/latticeboltzmann/MultiLevelSimData.h"
#include "peano/integration/partitioncoupling/services/ReceiveDataService.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/BlockComputeCellValues.h"


namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
      class RegularGridBlockVertex;
}
}
}
}


/**
 * Blueprint for regular grid vertex.
 *
 * This file has originally been created by RaPeP and may be manually adapted to
 * the needs of your application. We do not recommend to remove anything!
 *
 * \author RaPeP
 */


class peano::applications::latticeboltzmann::blocklatticeboltzmann::RegularGridBlockVertex: public peano::kernel::regulargrid::Vertex< peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex > {
  private:
    static tarch::logging::Log _log;
    typedef class peano::kernel::regulargrid::Vertex< peano::applications::latticeboltzmann::blocklatticeboltzmann::records::RegularGridBlockVertex >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not
     * remove it.
     */
    RegularGridBlockVertex();

    /**
     * Constructor
     *
     * This constructor is required by the framework's data container. Do not
     * remove it. It is kind of a copy constructor that converts an object which
     * comprises solely persistent attributes into a full attribute. This very
     * functionality is implemented within the super type, i.e. this constructor
     * has to invoke the correponsing super type's constructor and not the super
     * type standard constructor.
     */
    RegularGridBlockVertex(const Base::PersistentVertex& argument);

    /** uses the geometry service to check whether a cell became inner/outer/boundary and reflags the respective cells */
    void createVertex(const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h);

    void destroyVertex() const;

    unsigned int getVertexNumber() const;

    #ifdef Parallel
    void resetDensityOnBlockBoundary();

    /** returns the density on a block boundary at index index */
    double getDensityOnBoundary(const int& index) const;

    /** writes the density on the block boundary cells to the parallel buffer */
    void setDensityOnBlockBoundary(bool useDynamicGeometry);
    #endif

    #ifdef Parallel
    double getPdfDiff(const int& index) const;

    /** initialises the difference of the pdf-field on the block boundary with the negative value of the current
     *  pdf (of the respective cell)
     */
    void initPdfDiff();
    /** adds the current pdf value of a block boundary cell to the pdfDiff-field
     *
     */

    void computePdfDiff();

    /** merges the pdf-diff parts */
    void mergePdfDiff(const RegularGridBlockVertex& neighbour);

    /** merges new density values in near-boundary cells */
    void mergeDensityOnBoundary(const RegularGridBlockVertex& neighbour);
    #endif

  private:
    void setVertexNumber(int vertexNumber);
};


#endif
