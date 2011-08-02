/*
 * LidDrivenCavityScenario.cpp
 *
 *  Created on: Jun 18, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/scenarios/LidDrivenCavityScenario.h"
#include "tarch/la/VectorVectorOperations.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace scenarios {

LidDrivenCavityScenario::~LidDrivenCavityScenario() {
	// TODO Auto-generated destructor stub
}

LidDrivenCavityScenario::LidDrivenCavityScenario(
			const tarch::la::Vector<DIMENSIONS,double> &domainSize,
			const tarch::la::Vector<DIMENSIONS,double> &offset,
			const double &lidVelocity
	):
	NavieStokesScenario(),
	_upperWall(domainSize(DIMENSIONS-1)+offset(DIMENSIONS-1)),
	_lidVelocity(lidVelocity){}

void LidDrivenCavityScenario::setVelocityBoundaryConditionOnVertex(
			peano::applications::faxen::lbf::RegularGridBlockVertex&  vertex,
			const tarch::la::Vector<DIMENSIONS,double>&  vertexPosition,
			const tarch::la::Vector<DIMENSIONS,double>&  cellWidth) {

	// node is located on the upper boundary
	if( tarch::la::equals(vertexPosition(DIMENSIONS-1),_upperWall) ){
		vertex.setU0(_lidVelocity);
		vertex.setU1(_lidVelocity);
	}
}

}

}

}

}

}
