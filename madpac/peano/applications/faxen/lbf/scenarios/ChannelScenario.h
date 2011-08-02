/*
 * ChannelScenario.h
 *
 *  Created on: Jun 22, 2011
 *      Author: denis
 */

#ifndef CHANNELSCENARIO_H_
#define CHANNELSCENARIO_H_

#include "tarch/la/Vector.h"

#include "peano/applications/faxen/lbf/scenarios/NavieStokesScenario.h"
#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace scenarios {

class ChannelScenario: public peano::applications::faxen::lbf::scenarios::NavieStokesScenario {
public:
	ChannelScenario(
			const tarch::la::Vector<DIMENSIONS,double> &domainSize,
			const tarch::la::Vector<DIMENSIONS,double> &offset,
			const double &inletVelocity,
			const bool &useParabolicProfile,
			const double ReynoldsNumber
	);

	virtual ~ChannelScenario();

	void setVelocityBoundaryConditionOnCell(
			peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
			const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
			const tarch::la::Vector<DIMENSIONS,double>&  cellSize);

	void setPressureBoundaryConditionOnCell(
			peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
			peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
			const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
			const tarch::la::Vector<DIMENSIONS,double>&  cellSize);

private:
	/** position X coordinate of left wall */
	const double _leftWall;

	/** position X coordinate of right wall */
	const double _rightWall;

	/** inlet velocity */
	const double _inletVelocity;

	/** flag to use parabolic profile */
	const bool _useParabolicProfile;

	/** scale for parabolic profile */
	const double _scale;

	/** offset in y direction */
	const double _yOffset;

	/** domain size in y direction */
	const double _yDomain;

	/** pressure in the fixed node */
	double _leftPressure;
};

}

}

}

}

}

#endif /* CHANNELSCENARIO_H_ */
