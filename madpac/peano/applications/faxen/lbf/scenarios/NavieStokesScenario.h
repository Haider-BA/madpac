/*
 * NavieStokesScenario.h
 *
 *  Created on: Jun 18, 2011
 *      Author: denis
 */

#ifndef NAVIESTOKESSCENARIO_H_
#define NAVIESTOKESSCENARIO_H_

#include "tarch/la/Vector.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"
#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace scenarios {

class NavieStokesScenario {
public:
	NavieStokesScenario();
	virtual ~NavieStokesScenario();

	virtual void setVelocityBoundaryConditionOnVertex(
			peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
			const tarch::la::Vector<DIMENSIONS,double>&  vertexPosition,
			const tarch::la::Vector<DIMENSIONS,double>&  cellWidth){};

	virtual void setVelocityBoundaryConditionOnCell(
			peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
			const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
			const tarch::la::Vector<DIMENSIONS,double>&  cellSize){};

	virtual void setPressureBoundaryConditionOnCell(
			peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
			const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
			const tarch::la::Vector<DIMENSIONS,double>&  cellSize){};
};

}

}

}

}

}

#endif /* NAVIESTOKESSCENARIO_H_ */
