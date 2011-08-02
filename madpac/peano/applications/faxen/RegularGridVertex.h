// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_faxen_RegularGridVertex_H_
#define _PEANO_APPLICATIONS_faxen_RegularGridVertex_H_


#include "peano/applications/faxen/records/RegularGridVertex.h"
#include "peano/kernel/regulargrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"


namespace peano { 
namespace applications {
namespace faxen {
class RegularGridVertex;
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


class peano::applications::faxen::RegularGridVertex: public peano::kernel::regulargrid::Vertex< peano::applications::faxen::records::RegularGridVertex > {
private:
	typedef class peano::kernel::regulargrid::Vertex< peano::applications::faxen::records::RegularGridVertex >  Base;

public:
	/**
	 * Default Constructor
	 *
	 * This constructor is required by the framework's data container. Do not
	 * remove it.
	 */
	RegularGridVertex();

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
	RegularGridVertex(const Base::PersistentVertex& argument);

	static tarch::la::Vector<TWO_POWER_D,double>  readP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
	static tarch::la::Vector<TWO_POWER_D,double>  readFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);



	static void writeP0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeP1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeF0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeF1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeG0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeG1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeU2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV0(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV1(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeV2(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
	static void writeFlag(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );

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
	  * Proxy for getting pressure on the bottom edge.
	  */
	 double getP1() const;

	 /**
	  * Proxy for setting pressure on the bottom edge.
	  * @param P1 interpolated pressure on the bottom edge.
	  */
	 void setP1(double P1);

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
	  * Proxy for getting horizontal velocity on the left edge.
	  */
	 double getU1() const;

	 /**
	  * Proxy for setting horizontal velocity on the left edge.
	  * @param U1 interpolated horizontal velocity on the left edge.
	  */
	 void setU1(double U1);

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
	  * Proxy for getting vertical velocity in the vertex.
	  */
	 double getV0() const;

	 /**
	  * Proxy for setting vertical velocity in the vertex.
	  * @param V0 interpolated vertical velocity in the vertex.
	  */
	 void setV0(double V0);

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
	  * Proxy for getting vertical velocity on the bottom edge.
	  */
	 double getV2() const;

	 /**
	  * Proxy for setting vertical velocity on the bottom edge.
	  * @param V2 interpolated vertical velocity on the bottom edge.
	  */
	 void setV2(double V2);

	 /**
	  * Proxy for getting boundary type flag of the vertex.
	  */
	 int getFlag() const;

	 /**
	  * Proxy for setting boundary type flag of the vertex.
	  * @param Flag bitwise boundary flag: 0001 - top boundary edge; 0010 - right boundary edge; 0100 - down boundary edge; 1000 -left boundary edge.
	  */
	 void setFlag(int Flag);
};


#endif
