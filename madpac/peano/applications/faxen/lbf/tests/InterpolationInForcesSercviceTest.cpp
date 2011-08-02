/*
 * InterpolationInForcesSercviceTest.cpp
 *
 *  Created on: Jun 7, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/tests/InterpolationInForcesSercviceTest.h"
#include "peano/applications/faxen/lbf/services/ForcesService.h"
#include "peano/applications/faxen/lbf/interpolation/Interpolation.h"

#include "peano/applications/faxen/lbf/RegularGridBlockCell.h"
#include "peano/applications/faxen/lbf/RegularGridBlockVertex.h"
#include "peano/applications/faxen/lbf/RegularGridBlockState.h"

#include <vector>
#include "tarch/la/Vector.h"
#include "peano/utils/Dimensions.h"
#include <iostream>
#include <iomanip>

#include "tarch/tests/TestCaseFactory.h"
registerTest(peano::applications::faxen::lbf::tests::InterpolationInForcesSercviceTest)

namespace peano {

	namespace applications {

	namespace faxen {

	namespace lbf {

	namespace tests {

	InterpolationInForcesSercviceTest::InterpolationInForcesSercviceTest() {
		// TODO Auto-generated constructor stub

	}

	InterpolationInForcesSercviceTest::~InterpolationInForcesSercviceTest() {
		// TODO Auto-generated destructor stub
	}

	void InterpolationInForcesSercviceTest::run(){

		peano::applications::faxen::lbf::RegularGridBlockCell cell;
		peano::applications::faxen::lbf::RegularGridBlockVertex* vertices =
				new peano::applications::faxen::lbf::RegularGridBlockVertex[4];

		// setting pressure values
		cell.setP(3);

		vertices[0].setP0(2.5);
		vertices[0].setP1(3);

		vertices[1].setP0(4);
		vertices[1].setP1(6);

		vertices[2].setP0(3.5);
		vertices[2].setP1(3.5);

		vertices[3].setP0(4);
		vertices[3].setP1(3.5);

		// setting U (horizontal velocities)
		cell.setU(8);

		vertices[0].setU1(1.5);
		vertices[0].setU2(-1.5);
		vertices[1].setU1(3.0);
		vertices[2].setU1(3.5);
		vertices[2].setU2(6.0);
		vertices[3].setU1(3.5);

		// setting V (vertical velocities)
		cell.setV(8);

		vertices[0].setV2(1.5);
		vertices[0].setV1(1.0);
		vertices[1].setV2(4.0);
		vertices[1].setV1(6.5);
		vertices[2].setV2(6.0);
		vertices[3].setV2(4.5);

		peano::applications::faxen::lbf::RegularGridBlockVertex** verticesPointers =
				new	peano::applications::faxen::lbf::RegularGridBlockVertex*[4];
		verticesPointers[0] = &vertices[0];
		verticesPointers[1] = &vertices[1];
		verticesPointers[2] = &vertices[2];
		verticesPointers[3] = &vertices[3];

		// Particles Proxy
		peano::applications::faxen::lbf::services::ParticlesProxy proxy;
		proxy.infoPoints.resize(16);

		// setting info points' positions

		proxy.infoPoints[0][0] = 3;
		proxy.infoPoints[0][1] = 3;

		proxy.infoPoints[1][0] = 5;
		proxy.infoPoints[1][1] = 3;

		proxy.infoPoints[2][0] = 3;
		proxy.infoPoints[2][1] = 5;

		proxy.infoPoints[3][0] = 5;
		proxy.infoPoints[3][1] = 5;

		proxy.infoPoints[4][0] = 1;
		proxy.infoPoints[4][1] = 1;

		proxy.infoPoints[5][0] = 3;
		proxy.infoPoints[5][1] = 1;

		proxy.infoPoints[6][0] = 5;
		proxy.infoPoints[6][1] = 1;

		proxy.infoPoints[7][0] = 7;
		proxy.infoPoints[7][1] = 7;

		proxy.infoPoints[8][0] = 1;
		proxy.infoPoints[8][1] = 3;

		proxy.infoPoints[9][0] = 7;
		proxy.infoPoints[9][1] = 3;

		proxy.infoPoints[10][0] = 1;
		proxy.infoPoints[10][1] = 5;

		proxy.infoPoints[11][0] = 7;
		proxy.infoPoints[11][1] = 5;

		proxy.infoPoints[12][0] = 1;
		proxy.infoPoints[12][1] = 7;

		proxy.infoPoints[13][0] = 3;
		proxy.infoPoints[13][1] = 7;

		proxy.infoPoints[14][0] = 5;
		proxy.infoPoints[14][1] = 7;

		proxy.infoPoints[15][0] = 7;
		proxy.infoPoints[15][1] = 7;

		proxy.isFixed = false;
		proxy.radius = 2.0;
		proxy.pressures.resize(16);
		proxy.velocities.resize(16);

		// reference point for the cell
		tarch::la::Vector<DIMENSIONS, double> zeroPoint;
		zeroPoint[0] = 2;
		zeroPoint[1] = 2;

		// cell size
		tarch::la::Vector<DIMENSIONS, double> cellSize;
		cellSize[0] = 4;
		cellSize[1] = 4;

		/*
		 * validation data
		 */

		// zones
		int zones[16];
		zones[0] = 1;
		zones[1] = 2;
		zones[2] = 3;
		zones[3] = 4;
		zones[4] = 5;
		zones[5] = 0;
		zones[6] = 0;
		zones[7] = 0;
		zones[8] = 0;
		zones[9] = 0;
		zones[10] = 0;
		zones[11] = 0;
		zones[12] = 0;
		zones[13] = 0;
		zones[14] = 0;
		zones[15] = 0;

		// relative coordinates for pressure interpolation
		double pRelCoord[4][2];

		pRelCoord[0][0] = 3./4;
		pRelCoord[0][1] = 3./4;

		pRelCoord[1][0] = 1./4;
		pRelCoord[1][1] = 3./4;

		pRelCoord[2][0] = 3./4;
		pRelCoord[2][1] = 1./4;

		pRelCoord[3][0] = 1./4;
		pRelCoord[3][1] = 1./4;

		// interpolated values for pressure
		double p[4];
		p[0] = 55./16;
		p[1] = 61./16;
		p[2] = 57./16;
		p[3] = 39./16;

		// barycentric coordinates for pressure interpolation
		double pBarCoord[2];
		pBarCoord[0] = 1./4;
		pBarCoord[1] = 1./4;

		// barycentrically interpolated value for pressure
		double pbar = 15./4;

		// relative coordinates for horizontal velocities U
		double uRelCoord[4][2];

		uRelCoord[0][0] = 1./4;
		uRelCoord[0][1] = 3./4;

		uRelCoord[1][0] = 3./4;
		uRelCoord[1][1] = 3./4;

		uRelCoord[2][0] = 1./4;
		uRelCoord[2][1] = 1./4;

		uRelCoord[3][0] = 3./4;
		uRelCoord[3][1] = 1./4;

		// horizontal velocities U values
		double u[4];
		u[0] = 55./16;
		u[1] = 77./16;
		u[2] = 68./16;
		u[3] = 84./16;

		// relative coordinates for vertical velocities U
		double vRelCoord[4][2];

		vRelCoord[0][0] = 3./4;
		vRelCoord[0][1] = 1./4;

		vRelCoord[1][0] = 1./4;
		vRelCoord[1][1] = 1./4;

		vRelCoord[2][0] = 3./4;
		vRelCoord[2][1] = 3./4;

		vRelCoord[3][0] = 1./4;
		vRelCoord[3][1] = 3./4;

		// vertical velocities V values
		double v[4];
		v[0] = 67./16;
		v[1] = 79./16;
		v[2] = 97./16;
		v[3] = 93./16;

		std::cout << std::setprecision(4);

		std::cout << "reference point: " << zeroPoint
				<< "; cell size: " << cellSize << std::endl;
		for (int j = 0; j < (int)proxy.infoPoints.size(); j++) {
			tarch::la::Vector<DIMENSIONS, double> infoPoint = proxy.infoPoints[j];
			int zone = peano::applications::faxen::lbf::interpolation::getInfoPointZone(
					infoPoint, zeroPoint, cellSize);

			std::cout << j << ": info point: " << infoPoint << std::endl;
			std::cout << "zone: " << zone << "; correct zone: " << zones[j] << std::endl;
			validate(zone == zones[j]);

			if(zone) {
				tarch::la::Vector<DIMENSIONS,double> relativePoint;

				//----------------------------- test for bilinear pressure interpolation -----------------------------------
				relativePoint = peano::applications::faxen::lbf::services::ForcesService::getInstance().getRelativeCoordinatesPressure(
						zone,infoPoint,zeroPoint,cellSize);

				std::cout << "pressure relative coordinates: " << relativePoint;
				switch(j) {
				case 0:
					std::cout << "; correct relative coordinates: " << pRelCoord[0][0] << ", " << pRelCoord[0][1] << std::endl;
					validate(fabs(relativePoint[0]-pRelCoord[0][0]) < 1.0e-15);
					validate(fabs(relativePoint[1]-pRelCoord[0][1]) < 1.0e-15);
					break;
				case 1:
					std::cout << "; correct relative coordinates: " << pRelCoord[1][0] << ", " << pRelCoord[1][1] << std::endl;
					validate(fabs(relativePoint[0]-pRelCoord[1][0]) < 1.0e-15);
					validate(fabs(relativePoint[1]-pRelCoord[1][1]) < 1.0e-15);
					break;
				case 2:
					std::cout << "; correct relative coordinates: " << pRelCoord[2][0] << ", " << pRelCoord[2][1] << std::endl;
					validate(fabs(relativePoint[0]-pRelCoord[2][0]) < 1.0e-15);
					validate(fabs(relativePoint[1]-pRelCoord[2][1]) < 1.0e-15);
					break;
				case 4:
					std::cout << "; correct relative coordinates: " << pRelCoord[3][0] << ", " << pRelCoord[3][1] << std::endl;
					validate(fabs(relativePoint[0]-pRelCoord[3][0]) < 1.0e-15);
					validate(fabs(relativePoint[1]-pRelCoord[3][1]) < 1.0e-15);
					break;
				default:
					std::cout << "; at this point we don't interpolate!\n";
				}

				proxy.pressures[j] = peano::applications::faxen::lbf::services::ForcesService::getInstance().interpolatePressure(
						zone,relativePoint,verticesPointers,cell);
				std::cout << "interpolated pressure: " << proxy.pressures[j];
				switch(j) {
				case 0:
					std::cout << "; correct pressure: " << p[0] << std::endl;
					validate(fabs(proxy.pressures[j]-p[0]) < 1.0e-15);
					break;
				case 1:
					std::cout << "; correct pressure: " << p[1] << std::endl;
					validate(fabs(proxy.pressures[j]-p[1]) < 1.0e-15);
					break;
				case 2:
					std::cout << "; correct pressure: " << p[2] << std::endl;
					validate(fabs(proxy.pressures[j]-p[2]) < 1.0e-15);
					break;
				case 4:
					std::cout << "; correct pressure: " << p[3] << std::endl;
					validate(fabs(proxy.pressures[j]-p[3]) < 1.0e-15);
					break;
				default:
					std::cout << "; at this point we don't interpolate!\n";
				}
				//----------------------------- end of test for bilinear pressure interpolation -----------------------------------

				if(zone!=5){

					//----------------------------- test for barycentric pressure interpolation -----------------------------------
					relativePoint = peano::applications::faxen::lbf::services::ForcesService::getInstance().getBarycentricCoordinatesPressure(
							zone,infoPoint,zeroPoint,cellSize);

					std::cout << "pressure barycentric coordinates: " << relativePoint;
					std::cout << "; correct barycentric coordinates: " << pBarCoord[0] << ", " << pBarCoord[1] << std::endl;
					validate(fabs(relativePoint[0]-pBarCoord[0]) < 1.0e-15);
					validate(fabs(relativePoint[1]-pBarCoord[1]) < 1.0e-15);

					proxy.pressures[j] = peano::applications::faxen::lbf::services::ForcesService::getInstance().interpolateBarycentricPressure(
							zone,relativePoint,verticesPointers,cell);
					std::cout << "interpolated barycentrically pressure: " << proxy.pressures[j];
					std::cout << "; correct pressure: " << pbar << std::endl;
					validate(fabs(proxy.pressures[j]-pbar) < 1.0e-15);
					//------------------------ end of test for barycentric pressure interpolation -----------------------------------


					//----------------------------- test for bilinear U interpolation -----------------------------------------------
					relativePoint = peano::applications::faxen::lbf::services::ForcesService::getInstance().getRelativeCoordinatesU(
							zone,infoPoint,zeroPoint,cellSize);

					std::cout << "horizontal velocity U relative coordinates: " << relativePoint;
					switch(j) {
					case 0:
						std::cout << "; correct relative coordinates: " << uRelCoord[0][0] << ", " << uRelCoord[0][1] << std::endl;
						validate(fabs(relativePoint[0]-uRelCoord[0][0]) < 1.0e-15);
						validate(fabs(relativePoint[1]-uRelCoord[0][1]) < 1.0e-15);
						break;
					case 1:
						std::cout << "; correct relative coordinates: " << uRelCoord[1][0] << ", " << uRelCoord[1][1] << std::endl;
						validate(fabs(relativePoint[0]-uRelCoord[1][0]) < 1.0e-15);
						validate(fabs(relativePoint[1]-uRelCoord[1][1]) < 1.0e-15);
						break;
					case 2:
						std::cout << "; correct relative coordinates: " << uRelCoord[2][0] << ", " << uRelCoord[2][1] << std::endl;
						validate(fabs(relativePoint[0]-uRelCoord[2][0]) < 1.0e-15);
						validate(fabs(relativePoint[1]-uRelCoord[2][1]) < 1.0e-15);
						break;
					case 3:
						std::cout << "; correct relative coordinates: " << uRelCoord[3][0] << ", " << uRelCoord[3][1] << std::endl;
						validate(fabs(relativePoint[0]-uRelCoord[3][0]) < 1.0e-15);
						validate(fabs(relativePoint[1]-uRelCoord[3][1]) < 1.0e-15);
						break;
					default:
						std::cout << "; at this point we don't interpolate!\n";
					}

					proxy.velocities[j][0] = peano::applications::faxen::lbf::services::ForcesService::getInstance().interpolateU(
							zone,relativePoint,verticesPointers,cell);

					std::cout << "interpolated horizontal velocity: " << proxy.velocities[j][0];
					switch(j) {
					case 0:
						std::cout << "; correct horizontal velocity: " << u[0] << std::endl;
						validate(fabs(proxy.velocities[j][0]-u[0]) < 1.0e-15);
						break;
					case 1:
						std::cout << "; correct horizontal velocity: " << u[1] << std::endl;
						validate(fabs(proxy.velocities[j][0]-u[1]) < 1.0e-15);
						break;
					case 2:
						std::cout << "; correct horizontal velocity: " << u[2] << std::endl;
						validate(fabs(proxy.velocities[j][0]-u[2]) < 1.0e-15);
						break;
					case 3:
						std::cout << "; correct horizontal velocity: " << u[3] << std::endl;
						validate(fabs(proxy.velocities[j][0]-u[3]) < 1.0e-15);
						break;
					default:
						std::cout << "; at this point we don't interpolate!\n";
					}
					//------------------------- end of test for bilinear U interpolation --------------------------------------------

					//----------------------------- test for bilinear V interpolation -----------------------------------------------
					relativePoint = peano::applications::faxen::lbf::services::ForcesService::getInstance().getRelativeCoordinatesV(
							zone,infoPoint,zeroPoint,cellSize);

					std::cout << "vertical velocity V relative coordinates: " << relativePoint;
					switch(j) {
					case 0:
						std::cout << "; correct relative coordinates: " << vRelCoord[0][0] << ", " << vRelCoord[0][1] << std::endl;
						validate(fabs(relativePoint[0]-vRelCoord[0][0]) < 1.0e-15);
						validate(fabs(relativePoint[1]-vRelCoord[0][1]) < 1.0e-15);
						break;
					case 1:
						std::cout << "; correct relative coordinates: " << vRelCoord[1][0] << ", " << vRelCoord[1][1] << std::endl;
						validate(fabs(relativePoint[0]-vRelCoord[1][0]) < 1.0e-15);
						validate(fabs(relativePoint[1]-vRelCoord[1][1]) < 1.0e-15);
						break;
					case 2:
						std::cout << "; correct relative coordinates: " << vRelCoord[2][0] << ", " << vRelCoord[2][1] << std::endl;
						validate(fabs(relativePoint[0]-vRelCoord[2][0]) < 1.0e-15);
						validate(fabs(relativePoint[1]-vRelCoord[2][1]) < 1.0e-15);
						break;
					case 3:
						std::cout << "; correct relative coordinates: " << vRelCoord[3][0] << ", " << vRelCoord[3][1] << std::endl;
						validate(fabs(relativePoint[0]-vRelCoord[3][0]) < 1.0e-15);
						validate(fabs(relativePoint[1]-vRelCoord[3][1]) < 1.0e-15);
						break;
					default:
						std::cout << "; at this point we don't interpolate!\n";
					}

					proxy.velocities[j][1] = peano::applications::faxen::lbf::services::ForcesService::getInstance().interpolateV(
							zone,relativePoint,verticesPointers,cell);

					std::cout << "interpolated vertical velocity: " << proxy.velocities[j][1];
					switch(j) {
					case 0:
						std::cout << "; correct vertical velocity: " << v[0] << std::endl;
						validate(fabs(proxy.velocities[j][1]-v[0]) < 1.0e-15);
						break;
					case 1:
						std::cout << "; correct vertical velocity: " << v[1] << std::endl;
						validate(fabs(proxy.velocities[j][1]-v[1]) < 1.0e-15);
						break;
					case 2:
						std::cout << "; correct vertical velocity: " << v[2] << std::endl;
						validate(fabs(proxy.velocities[j][1]-v[2]) < 1.0e-15);
						break;
					case 3:
						std::cout << "; correct vertical velocity: " << v[3] << std::endl;
						validate(fabs(proxy.velocities[j][1]-v[3]) < 1.0e-15);
						break;
					default:
						std::cout << "; at this point we don't interpolate!\n";

					//----------------------------- end of test for bilinear V interpolation ------------------------------------------
					}
				}
			}
		}


		delete[] vertices;
		delete[] verticesPointers;
	}

	}

	}

	}

	}

}
