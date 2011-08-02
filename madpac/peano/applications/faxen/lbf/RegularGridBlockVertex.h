// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_FAXEN_LBANDFAXEN_RegularGridBlockVertex_H_ 
#define _PEANO_APPLICATIONS_FAXEN_LBANDFAXEN_RegularGridBlockVertex_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"

#include "peano/applications/faxen/lbf/records/RegularGridBlockVertex.h"
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
namespace faxen {
namespace lbf {
class RegularGridBlockVertex;
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


class peano::applications::faxen::lbf::RegularGridBlockVertex: public peano::kernel::regulargrid::Vertex< peano::applications::faxen::lbf::records::RegularGridBlockVertex > {
private:
	static tarch::logging::Log _log;
	typedef class peano::kernel::regulargrid::Vertex< peano::applications::faxen::lbf::records::RegularGridBlockVertex >  Base;

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

	static tarch::la::Vector<TWO_POWER_D,double>  readP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridBlockVertex* const vertices);



	static void writeP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridBlockVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );

	/**
	 * Initializations and proxies for the Faxen component
	 */

	/**
	 * Initialization of vertex
	 */
	void init();

	/**
	 * Proxy for getting pressure on the left edge.
	 */
	double getP0() const;

	/**
	 * Proxy for setting pressure on the left edge.
	 * @param P0 interpolated pressure on the left edge.
	 */
	void setP0(double P0);

	/**
	 * Proxy for updating pressure on the left edge.
	 * @param P_old old value
	 * @param P_new new value
	 */
	void updateP0(double P_old, double P_new);

	/**
	 * Proxy for getting pressure on the bottom edge.
	 */
	double getP1() const;

	/**
	 * Proxy for setting pressure on the bottom edge.
	 * @param P1 interpolated pressure on the bottom edge.
	 */
	void setP1(double P1);

	/**
	 * Proxy for updating pressure on the left edge.
	 * @param P_old old value
	 * @param P_new new value
	 */
	void updateP1(double P_old, double P_new);

	/**
	 * Proxy for getting F on the left edge.
	 */
	double getF0() const;

	/**
	 * Proxy for setting F on the left edge.
	 * @param F0 interpolated F on the left edge.
	 */
	void setF0(double F0);

	/**
	 * Proxy for getting F on the bottom edge.
	 */
	double getF1() const;
	/**
	 * Proxy for setting F on the bottom edge.
	 * @param F1 interpolated F on the bottom edge.
	 */
	void setF1(double F1);

	/**
	 * Proxy for getting G on the left edge.
	 */
	double getG0() const;

	/**
	 * Proxy for setting G on the left edge.
	 * @param G0 interpolated G on the left edge.
	 */
	void setG0(double G0);

	/**
	 * Proxy for getting G on the bottom edge.
	 */
	double getG1() const;

	/**
	 * Proxy for setting G on the bottom edge.
	 * @param G1 interpolated G on the bottom edge.
	 */
	void setG1(double G1);

	/**
	 * Proxy for getting horizontal velocity in the vertex.
	 */
	double getU0() const;

	/**
	 * Proxy for setting horizontal velocity in the vertex.
	 * @param U0 interpolated horizontal velocity in the vertex.
	 */
	void setU0(double U0);

	/**
	 * Proxy for updating horizontal velocity in the vertex;
	 * @param U_old old velocity in the cell center;
	 * @param U_new new value in the cell center.
	 */
	void updateU0(double U_old, double U_new);

	/**
	 * Proxy for getting horizontal velocity on the left edge.
	 */
	double getU1() const;

	/**
	 * Proxy for setting horizontal velocity on the left edge.
	 * @param U1 interpolated horizontal velocity on the left edge.
	 */
	void setU1(double U1);

	/**
	 * Proxy for updating horizontal velocity in the left edge;
	 * @param U_old old velocity in the cell center;
	 * @param U_new new value in the cell center.
	 */
	void updateU1(double U_old, double U_new);

	/**
	 * Proxy for getting horizontal velocity on the bottom edge.
	 */
	double getU2() const;

	/**
	 * Proxy for setting horizontal velocity on the bottom edge.
	 * @param U2 interpolated horizontal velocity on the bottom edge.
	 */
	void setU2(double U2);

	/**
	 * Proxy for updating horizontal velocity in the bottom edge;
	 * @param U_old old velocity in the cell center;
	 * @param U_new new value in the cell center.
	 */
	void updateU2(double U_old, double U_new);

	/**
	 * Proxy for getting vertical velocity in the vertex.
	 */
	double getV0() const;

	/**
	 * Proxy for setting vertical velocity in the vertex.
	 * @param V0 interpolated vertical velocity in the vertex.
	 */
	void setV0(double V0);

	/**
	 * Proxy for updating vertical velocity in the vertex;
	 * @param V_old old velocity in the cell center;
	 * @param V_new new value in the cell center.
	 */
	void updateV0(double V_old, double V_new);

	/**
	 * Proxy for getting vertical velocity on the left edge.
	 */
	double getV1() const;

	/**
	 * Proxy for setting vertical velocity on the left edge.
	 * @param V1 interpolated vertical velocity on the left edge.
	 */
	void setV1(double V1);

	/**
	 * Proxy for updating vertical velocity on the left edge.
	 * @param V_old old velocity in the cell center;
	 * @param V_new new value in the cell center.
	 */
	void updateV1(double V_old, double V_new);

	/**
	 * Proxy for getting vertical velocity on the bottom edge.
	 */
	double getV2() const;

	/**
	 * Proxy for setting vertical velocity on the bottom edge.
	 * @param V2 interpolated vertical velocity on the bottom edge.
	 */
	void setV2(double V2);

	/**
	 * Proxy for updating vertical velocity on the bottom edge.
	 * @param V_old old velocity in the cell center;
	 * @param V_new new value in the cell center.
	 */
	void updateV2(double V_old, double V_new);

	/**
	 * Proxy for getting boundary type flag of the vertex.
	 */
	int getFlag() const;

	/**
	 * Proxy for setting boundary type flag of the vertex.
	 * @param Flag bitwise boundary flag: 0001 - top boundary edge; 0010 - right boundary edge; 0100 - down boundary edge; 1000 -left boundary edge.
	 */
	void setFlag(int Flag);

	/**
	 * Lattice Boltzmann component's functions
	 */

	/** uses the geometry service to check whether a cell became inner/outer/boundary and reflags the respective cells */
	void createVertex(const tarch::la::Vector<DIMENSIONS,double> &x,const tarch::la::Vector<DIMENSIONS,double> &h);

	void destroyVertex() const;

	unsigned int getVertexNumber() const;

#ifdef Parallel
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
