/*
 * LidDrivenCavityScenario.h
 *
 *  Created on: Jun 18, 2011
 *      Author: denis
 */

#ifndef LIDDRIVENCAVITYSCENARIO_H_
#define LIDDRIVENCAVITYSCENARIO_H_

#include "tarch/la/Vector.h"

#include "peano/applications/faxen/lbf/scenarios/NavieStokesScenario.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"
#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace scenarios {

class LidDrivenCavityScenario: public peano::applications::faxen::lbf::scenarios::NavieStokesScenario {
public:
	LidDrivenCavityScenario(
			const tarch::la::Vector<DIMENSIONS,double> &domainSize,
			const tarch::la::Vector<DIMENSIONS,double> &offset,
			const double &lidVelocity
	);

	virtual ~LidDrivenCavityScenario();

	void setVelocityBoundaryConditionOnVertex(
			peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
			const tarch::la::Vector<DIMENSIONS,double>&  vertexPosition,
			const tarch::la::Vector<DIMENSIONS,double>&  cellWidth);

private:
	/** position coordinate no. DIMENSIONS-1 of upper wall */
	const double _upperWall;

	/** lid velocity */
	const double _lidVelocity;

};

}

}

}

}

}

#endif /* LIDDRIVENCAVITYSCENARIO_H_ */
