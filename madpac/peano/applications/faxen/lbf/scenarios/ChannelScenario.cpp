/*
 * ChannelScenario.cpp
 *
 *  Created on: Jun 22, 2011
 *      Author: denis
 */
#include <iostream>

#include "peano/applications/faxen/lbf/scenarios/ChannelScenario.h"
#include "peano/applications/faxen/Flags.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace scenarios {

ChannelScenario::ChannelScenario(
		const tarch::la::Vector<DIMENSIONS,double> &domainSize,
		const tarch::la::Vector<DIMENSIONS,double> &offset,
		const double &inletVelocity,
		const bool &useParabolicProfile,
		const double ReynoldsNumber
):
NavieStokesScenario(),
_leftWall(offset(0)),
_rightWall(domainSize(0)+offset(0)),
_inletVelocity(inletVelocity),
_useParabolicProfile(useParabolicProfile),
_scale(6*inletVelocity/(domainSize(1)*domainSize(1))), // _scale is set to obtain flux equal to V(inlet)*L(domain size)
_yOffset(offset(1)),
_yDomain(domainSize(1)),
_leftPressure(12*inletVelocity*domainSize(0)/ReynoldsNumber){}

ChannelScenario::~ChannelScenario() {
	// TODO Auto-generated destructor stub
}

void ChannelScenario::setVelocityBoundaryConditionOnCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
		const tarch::la::Vector<DIMENSIONS,double>&  cellSize) {

	// if node is located on the left boundary
	if( tarch::la::equals(zeroPoint(0),_leftWall) ){
		double u_loc = cell.getU();
		double ub_old = 2*vertices[2]->getU2()-u_loc;

		if(!_useParabolicProfile){
			// setting inflow conditions for horizontal velocities
			vertices[0]->updateU0(ub_old,_inletVelocity);
			vertices[2]->updateU0(ub_old,_inletVelocity);
			vertices[2]->updateU2(ub_old,_inletVelocity);
		} else {
			//			double y = (zeroPoint(1)+cellSize(1)/2);
			//			double ub_new = (y-_yOffset)*(_yOffset+_yDomain-y)*_scale;
			//			vertices[0]->updateU0(ub_old,ub_new);
			//			vertices[2]->updateU0(ub_old,ub_new);
			//			vertices[2]->updateU2(ub_old,ub_new);

			// setting outflow conditions for horizontal velocity
			vertices[0]->updateU0(ub_old,u_loc);
			vertices[2]->updateU0(ub_old,u_loc);
			vertices[2]->updateU2(ub_old,u_loc);
		}

		// setting outflow conditions for vertical velocity
		double v_loc = cell.getV();
		double vb_old = 2*vertices[2]->getV2()-v_loc;
		vertices[0]->updateV0(vb_old,v_loc);
		vertices[2]->updateV0(vb_old,v_loc);
		vertices[2]->updateV2(vb_old,v_loc);
	}


	// if node is located on the right boundary
	if( tarch::la::equals(zeroPoint(0)+cellSize(0),_rightWall) ){

		// setting outflow conditions for horizontal velocities
		double u_loc = cell.getU();
		double u_left = 2*vertices[2]->getU2()-u_loc;
		vertices[0]->updateU0(u_loc,u_left);
		vertices[1]->updateU0(u_loc,u_left);
		vertices[1]->updateU1(u_loc,u_left);
		vertices[2]->updateU0(u_loc,u_left);
		vertices[2]->updateU2(u_loc,u_left);
		vertices[3]->updateU0(u_loc,u_left);
		vertices[3]->updateU1(u_loc,u_left);
		vertices[3]->updateU2(u_loc,u_left);
		cell.setU(u_left);

		// setting outflow conditions for vertical velocities
		double v_loc = cell.getV();
		double vb_old = 2*vertices[3]->getV2()-v_loc;
		vertices[1]->updateV0(vb_old,v_loc);
		vertices[3]->updateV0(vb_old,v_loc);
		vertices[3]->updateV2(vb_old,v_loc);
	}
}

void ChannelScenario::setPressureBoundaryConditionOnCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex**  vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		const tarch::la::Vector<DIMENSIONS,double>&  zeroPoint,
		const tarch::la::Vector<DIMENSIONS,double>&  cellSize){

	// if node is located on the left boundary
	if( tarch::la::equals(zeroPoint(0),_leftWall) ){
		vertices[2]->setP1(_leftPressure);
	}

	// if node is located on the right boundary
	if( tarch::la::equals(zeroPoint(0)+cellSize(0),_rightWall) ){
		vertices[3]->setP1(0.0);
	}
}

}

}

}

}
}
