/*
 * Interpolation.cpp
 *
 *  Created on: Jul 22, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/interpolation/Interpolation.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace interpolation {

int getInfoPointZone(
		tarch::la::Vector<DIMENSIONS, double>& infoPoint,
		tarch::la::Vector<DIMENSIONS, double>& zeroVertex,
		tarch::la::Vector<DIMENSIONS, double>& cellSize) {
	// check if info point is inside the cell
	bool outside = false;
	for (int d = 0; d < DIMENSIONS; d++) {
		if ((infoPoint[d] < zeroVertex[d]) || (infoPoint[d] >
		(zeroVertex[d] + cellSize[d]))) {
			outside = true;
			break;
		}
	}
	if (outside) {
		if (((zeroVertex[0] - cellSize[0]/2) < infoPoint[0]) && (infoPoint[0] <= zeroVertex[0])
				&& ((zeroVertex[1] - cellSize[1]/2) < infoPoint[1]) && (infoPoint[1] <= zeroVertex[1])) {
			return 5;
		}
		return 0;
	}

	int zone = 0;
	// find the zone with info point
	// only for 2D
	if (infoPoint[0] <= (zeroVertex[0] + cellSize[0]/2)) {
		if (infoPoint[1] <= (zeroVertex[1] + cellSize[1]/2)) {
			zone = 1;
		} else {
			zone = 3;
		}
	} else {
		if (infoPoint[1] <= (zeroVertex[1] + cellSize[1]/2)) {
			zone = 2;
		} else {
			zone = 4;
		}
	}

	return zone;
}

double interpolateDLinear(
		tarch::la::Vector<DIMENSIONS, double>& rc,
		tarch::la::Vector<TWO_POWER_D,double>& values) {
	tarch::la::Vector<TWO_POWER_D, double> W;
	switch (DIMENSIONS) {
	case 2:
		W[0] = (1 - rc[0])*(1 - rc[1]);
		W[1] = rc[0]*(1 - rc[1]);
		W[2] = (1 - rc[0])*rc[1];
		W[3] = rc[0]*rc[1];
		break;
	case 3:
		W[0] = (1 - rc[0])*(1 - rc[1])*(1 - rc[2]);
		W[1] = rc[0]*(1 - rc[1])*(1 - rc[2]);
		W[2] = (1 - rc[0])*rc[1]*(1 - rc[2]);
		W[3] = rc[0]*rc[1]*(1 - rc[2]);
		W[4] = (1 - rc[0])*(1 - rc[1])*rc[2];
		W[5] = rc[0]*(1 - rc[1])*rc[2];
		W[6] = (1 - rc[0])*rc[1]*rc[2];
		W[7] = rc[0]*rc[1]*rc[2];
		break;
	default:
		return 0;
	}

	double d = 0;
	for (int i = 0; i < TWO_POWER_D; i++) {
		d += W[i]*values[i];
	}

	return d;
}

double interpolateBarycentric(
		tarch::la::Vector<DIMENSIONS,double>& rc,
		tarch::la::Vector<DIMENSIONS+1,double>& values){
	tarch::la::Vector<DIMENSIONS+1, double> W;
	switch (DIMENSIONS) {
	case 2:
		W[0] = 1 - rc[0] - rc[1];
		W[1] = rc[0];
		W[2] = rc[1];
		break;
	case 3:
		W[0] = 1 - rc[0] - rc[1] - rc[2];
		W[1] = rc[0];
		W[2] = rc[1];
		W[3] = rc[2];
		break;
	default:
		return 0;
	}

	double d = 0;
	for (int i = 0; i < DIMENSIONS+1; i++) {
		d += W[i]*values[i];
	}

	return d;
}

tarch::la::Vector<DIMENSIONS, double> getRelativeCoordinatesPressure(
		int zone, tarch::la::Vector<DIMENSIONS, double>& relativePoint,
		tarch::la::Vector<DIMENSIONS, double>& cellSize) {

	tarch::la::Vector<DIMENSIONS, double> rc;

	// implementation for 2D only
	switch (zone) {
	case 1:
	case 5:
		rc[0] = relativePoint[0]/cellSize[0] + 0.5;
		rc[1] = relativePoint[1]/cellSize[1] + 0.5;
		return rc;
	case 2:
		rc[0] = relativePoint[0]/cellSize[0] - 0.5;
		rc[1] = relativePoint[1]/cellSize[1] + 0.5;
		return rc;
	case 3:
		rc[0] = relativePoint[0]/cellSize[0] + 0.5;
		rc[1] = relativePoint[1]/cellSize[1] - 0.5;
		return rc;
	case 4:
		rc[0] = relativePoint[0]/cellSize[0] - 0.5;
		rc[1] = relativePoint[1]/cellSize[1] - 0.5;
		return rc;
	}

	return rc;
}

tarch::la::Vector<DIMENSIONS,double> getBarycentricCoordinatesPressure(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize){

	tarch::la::Vector<DIMENSIONS, double> rc;

	// implementation for 2D only
	switch (zone) {
	case 1:
		rc[0] = -relativePoint[0]/cellSize[0] + 0.5;
		rc[1] = -relativePoint[1]/cellSize[1] + 0.5;
		return rc;
	case 2:
		rc[0] = relativePoint[0]/cellSize[0] - 0.5;
		rc[1] = -relativePoint[1]/cellSize[1] + 0.5;
		return rc;
	case 3:
		rc[0] = -relativePoint[0]/cellSize[0] + 0.5;
		rc[1] = relativePoint[1]/cellSize[1] - 0.5;
		return rc;
	case 4:
		rc[0] = relativePoint[0]/cellSize[0] - 0.5;
		rc[1] = relativePoint[1]/cellSize[1] - 0.5;
		return rc;
	}

	return rc;
}

tarch::la::Vector<DIMENSIONS,double> getRelativeCoordinatesU(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize){
	tarch::la::Vector<DIMENSIONS,double> rc;

	// implementation for 2D only
	switch (zone) {
	case 1:
	case 2:
		rc[0] = relativePoint[0]/cellSize[0];
		rc[1] = relativePoint[1]/cellSize[1] + 0.5;
		return rc;
	case 3:
	case 4:
		rc[0] = relativePoint[0]/cellSize[0];
		rc[1] = relativePoint[1]/cellSize[1] - 0.5;
		return rc;
	}

	return rc;
}

tarch::la::Vector<DIMENSIONS,double> getRelativeCoordinatesV(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize){
	tarch::la::Vector<DIMENSIONS,double> rc;

	// implementation for 2D only
	switch (zone) {
	case 1:
	case 3:
		rc[0] = relativePoint[0]/cellSize[0] + 0.5;
		rc[1] = relativePoint[1]/cellSize[1];
		return rc;
	case 2:
	case 4:
		rc[0] = relativePoint[0]/cellSize[0] - 0.5;
		rc[1] = relativePoint[1]/cellSize[1];
		return rc;
	}

	return rc;
}

double interpolatePressure(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell){
	tarch::la::Vector<TWO_POWER_D,double> P;

	// Only 2D implementation.
	switch(zone){
	case 1:
	case 5:
		P[3] = cell.getP();
		P[2] = 2*vertices[2]->getP1()-P[3];
		P[1] = 2*vertices[1]->getP0()-P[3];
		P[0] = 2*vertices[0]->getP1()-P[1];
		// or (compare while testing!)
		//P[0] = 2*vertices[0]->getP0()-P[2];
		return interpolateDLinear(relativePoint,P);
	case 2:
		P[2] = cell.getP();
		P[0] = 2*vertices[1]->getP0()-P[2];
		P[3] = 2*vertices[3]->getP1()-P[2];
		P[1] = 2*vertices[1]->getP1()-P[0];
		return interpolateDLinear(relativePoint,P);
	case 3:
		P[1] = cell.getP();
		P[0] = 2*vertices[2]->getP1()-P[1];
		P[3] = 2*vertices[3]->getP0()-P[1];
		P[2] = 2*vertices[2]->getP0()-P[0];
		return interpolateDLinear(relativePoint,P);
	default:
		return 0;
	}
}

double interpolateBarycentricPressure(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell){

	tarch::la::Vector<DIMENSIONS+1,double> P;

	// Only 2D implementation.
	switch(zone){
	case 1:
		P[0] = cell.getP();
		P[1] = 2*vertices[2]->getP1()-P[0];
		P[2] = 2*vertices[1]->getP0()-P[0];
		return interpolateBarycentric(relativePoint,P);
	case 2:
		P[0] = cell.getP();
		P[1] = 2*vertices[3]->getP1()-P[0];
		P[2] = 2*vertices[1]->getP0()-P[0];
		return interpolateBarycentric(relativePoint,P);
	case 3:
		P[0] = cell.getP();
		P[1] = 2*vertices[2]->getP1()-P[0];
		P[2] = 2*vertices[3]->getP0()-P[0];
		return interpolateBarycentric(relativePoint,P);
	case 4:
		P[0] = cell.getP();
		P[1] = 2*vertices[3]->getP1()-P[0];
		P[2] = 2*vertices[3]->getP0()-P[0];
		return interpolateBarycentric(relativePoint,P);
	default:
		return 0;
	}
}

double interpolateU(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell){

	tarch::la::Vector<TWO_POWER_D,double> U;

	// Only 2D implementation.
	switch(zone){
	case 1:
	case 2:
		U[3] = cell.getU();
		U[2] = 2*vertices[2]->getU2()-U[3];
		U[1] = 2*vertices[1]->getU1()-U[3];
		U[0] = 4*vertices[0]->getU0()-U[1]-U[2]-U[3];
		/*
		 * less save variants!
		 * U[0] = 2*vertices[0]->getU1()-U[2];
		 * or (check during tests!)
		 * U[0] = 2*vertices[0]->getU2()-U[1];
		 */

		return interpolateDLinear(relativePoint,U);
	case 3:
	case 4:
		U[1] = cell.getU();
		U[0] = 2*vertices[2]->getU2()-U[1];
		U[3] = 2*vertices[3]->getU1()-U[1];
		U[2] = 4*vertices[2]->getU0()-U[0]-U[1]-U[3];
		/*
		 * less save variant
		 * U[2] = 2*vertices[2]->getU1()-U[0];
		 */
		return interpolateDLinear(relativePoint,U);
	default:
		return 0;
	}

}

double interpolateV(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell){

	tarch::la::Vector<TWO_POWER_D,double> V;

	// Only 2D implementation.
	switch(zone){
	case 1:
	case 3:
		V[3] = cell.getV();
		V[2] = 2*vertices[2]->getV2()-V[3];
		V[1] = 2*vertices[1]->getV1()-V[3];
		V[0] = 4*vertices[0]->getV0()-V[1]-V[2]-V[3];
		/*
		 * less save variants!
		 * V[0] = 2*vertices[0]->getV1()-V[2];
		 * or (check during tests!)
		 * V[0] = 2*vertices[0]->getV2()-V[1];
		 */
		return interpolateDLinear(relativePoint,V);
	case 2:
	case 4:
		V[2] = cell.getV();
		V[0] = 2*vertices[1]->getV1()-V[2];
		V[3] = 2*vertices[3]->getV2()-V[2];
		V[1] = 4*vertices[1]->getV0()-V[0]-V[2]-V[3];
		/*
		 * less save variant!
		 * V[1] = 2*vertices[1]->getV2()-V[0];
		 */
		return interpolateDLinear(relativePoint,V);
	default:
		return 0;
	}

}


}

}

}

}

}
