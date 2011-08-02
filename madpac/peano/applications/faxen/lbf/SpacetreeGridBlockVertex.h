// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_FAXEN_LBF_SpacetreeGridBlockVertex_H_ 
#define _PEANO_APPLICATIONS_FAXEN_LBF_SpacetreeGridBlockVertex_H_


#include "peano/applications/faxen/lbf/records/SpacetreeGridBlockVertex.h"
#include "peano/kernel/spacetreegrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"

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
namespace faxen {
namespace lbf {
class SpacetreeGridBlockVertex;
}
}
}
}


/**
 * Blueprint for regular grid vertex.
 * 
 * This file has originally been created by PeProt and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author PeProt
 */


class peano::applications::faxen::lbf::SpacetreeGridBlockVertex: public peano::kernel::spacetreegrid::Vertex< peano::applications::faxen::lbf::records::SpacetreeGridBlockVertex > { 
private:
    static tarch::logging::Log _log;
	typedef class peano::kernel::spacetreegrid::Vertex< peano::applications::faxen::lbf::records::SpacetreeGridBlockVertex >  Base;

public:
	/**
	 * Default Constructor
	 *
	 * This constructor is required by the framework's data container. Do not
	 * remove it.
	 */
	SpacetreeGridBlockVertex();

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
	SpacetreeGridBlockVertex(const Base::PersistentVertex& argument);

	static tarch::la::Vector<TWO_POWER_D,double>  readP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridBlockVertex* const vertices);



	static void writeP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );

	/**
	 *  Lattice Boltzmann component functions
	 */
	 void createVertex(const tarch::la::Vector<DIMENSIONS,double> &x, const tarch::la::Vector<DIMENSIONS,double> &h);
	 void createHangingVertex();
	 void destroyVertex() const;

	 unsigned int getVertexNumber() const;

	 /** get/set LB specific refinement flags */
	 void switchToDefault();
	 void switchToHasNewPersistentSubVertices();
	 void switchToNewPersistentVertex();
	 void switchToCoarsenedVertex();

	 bool hasNewPersistentSubVertices() const;
	 bool isDefaultVertex() const;
	 bool isNewPersistentVertex() const;
	 bool isCoarsenedVertex() const;


#ifdef Parallel
	 void mergeWithNeighbour(const SpacetreeGridBlockVertex& neighbour, int fromRank);

	 void prepareSendToNeighbour();
#endif

	 /** resets the density in all cells on block boundary that are marked as !inner and boundary,
	  *  that is cells which are outside the comp. domain, but close to the boundary.
	  *  This is necessary in the parallel case: The block-boundary cells which need to obtain
	  *  an interpolation for the density are treated in the enterElement()-callbacks. However,
	  *  with the domain split in the parallel case, it is only a part of the boundary cells which are
	  *  interpolated correctly; the rest (which is handled by other processes) remains untouched.
	  *  In order to successfully merge these values after the iteration, the values need to be reset
	  *  at the very beginning of the iteration (in touchVertexFirstTime()). When the merging starts,
	  *  the density values from all respective block representations (of all processes) only need to
	  *  be added up.
	  */
#ifdef Parallel
	 void resetDensityOnOuterBoundaryCellsOfBlockBoundary();

	 double getDensityOnBoundary(const int& index) const;
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
	 void mergePdfDiff(const SpacetreeGridBlockVertex& neighbour, int fromRank);

	 /** merges new density values in near-boundary cells */
	 void mergeDensityOnBoundary(const SpacetreeGridBlockVertex& neighbour, int fromRank);
#endif

private:
	 void setVertexNumber(int vertexNumber);
};


#endif
