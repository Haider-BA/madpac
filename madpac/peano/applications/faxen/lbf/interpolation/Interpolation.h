/*
 * Interpolation.h
 *
 *  Created on: Jul 22, 2011
 *      Author: denis
 */

#ifndef INTERPOLATION_H_
#define INTERPOLATION_H_

#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"
#include "peano/utils/Globals.h"

#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace interpolation {

/**
 * Checking if particle is inside the cell;
 * returns in which zone the particle is.
 *       +-----+-----+
 *       | III |  IV |
 *       +-----+-----+
 *       |  I  |  II |
 * +-----+-----+-----+
 * |  V  |
 * +-----+
 */
int getInfoPointZone(
		tarch::la::Vector<DIMENSIONS,double>& infoPoint,
		tarch::la::Vector<DIMENSIONS,double>& zeroVertex,
		tarch::la::Vector<DIMENSIONS,double>& cellSize);

/**********************************\
 *  General interpolation methods *
\**********************************/

/**
 * D - linear interpolation, where D is number of dimensions
 */
double interpolateDLinear(
		tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<TWO_POWER_D,double>& values);

/**
 * Barycectric interpolation
 */
double interpolateBarycentric(
		tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<DIMENSIONS+1,double>& values);

/****************************************************************************\
 *  Interpolation of pressure and velocities on the staggered regular grid  *
\****************************************************************************/

tarch::la::Vector<DIMENSIONS,double> getRelativeCoordinatesPressure(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize);


tarch::la::Vector<DIMENSIONS,double> getBarycentricCoordinatesPressure(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize);

tarch::la::Vector<DIMENSIONS,double> getRelativeCoordinatesU(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize);

tarch::la::Vector<DIMENSIONS,double> getRelativeCoordinatesV(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize);

double interpolatePressure(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell);

double interpolateBarycentricPressure(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell);

double interpolateU(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell);

double interpolateV(
		int zone, tarch::la::Vector<DIMENSIONS,double>& relativePoint,
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell& cell);
}

}

}

}

}

#endif /* INTERPOLATION_H_ */
