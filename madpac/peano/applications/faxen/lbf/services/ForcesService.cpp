/*
 *ForcesService.cpp
 *
 * Created on: May 29, 2011
 *     Author: denis
 */

#include "peano/applications/faxen/lbf/services/ForcesService.h"
#include "peano/applications/faxen/lbf/services/ParticlesService.h"
#include "peano/applications/faxen/lbf/interpolation/Interpolation.h"

#include <iostream>
#include <iomanip>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

ForcesService::ForcesService():
						_log("peano::applications::faxen::lbf::services::ForcesService") {}

void ForcesService::loadDataFromParticlesService(){
	int numberOfParticles =
			ParticlesService::getInstance().getNumberOfParticles();
	_particles.resize(numberOfParticles);
	for (int i = 0; i < numberOfParticles; i++) {
		_particles[i].radius
		= ParticlesService::getInstance().getParticlesRadius(i);
		_particles[i].isFixed = false;
		_particles[i].infoPoints.push_back(
				ParticlesService::getInstance().getParticlesPostion(i));
		logDebug("ForcesService()","particle: " << i << "; radius: " << _particles[i].radius
				<< "; is fixed: " << _particles[i].isFixed << "; position: " << _particles[i].infoPoints[0]);
	}
}

ForcesService& ForcesService::getInstance() {
	static ForcesService singleton;
	return singleton;
}

ForcesService::~ForcesService() {
	// TODO Auto-generated destructor stub
}

void ForcesService::setForceCalculator(forces::ForceCalculator* forceCalculator) {
	_forceCalculator = forceCalculator;
	int numberOfParticles = ParticlesService::getInstance().getNumberOfParticles();
	for (int i = 0; i < numberOfParticles; i++) {
		_forceCalculator->initParticlesProxy(_particles[i]);
	}
}

void ForcesService::update() {
	for (int i = 0; i < (int)_particles.size(); i++) {
		_particles[i].radius
		= ParticlesService::getInstance().getParticlesRadius(i);
		_particles[i].infoPoints[0] = ParticlesService::getInstance().getParticlesPostion(i);
		//		logDebug("ForcesService()","particle: " << i << "; radius: " << _particles[i].radius
		//				<< "; is fixed: " << _particles[i].isFixed  << "; position: " << _particles[i].infoPoints[0]);
		if (!_particles[i].isFixed) {
			_forceCalculator->fillInfoPoints(_particles[i]);
		}
	}
}

void ForcesService::moveParticles(double dt){
	tarch::la::Vector<DIMENSIONS,double> particlesVelocity;
	tarch::la::Vector<DIMENSIONS,double> force;
	for (int i = 0; i < (int)_particles.size(); i++) {
		if(!_particles[i].isFixed) {
			particlesVelocity = ParticlesService::getInstance().getParticlesVelocity(i);
			force = _forceCalculator->computeForces(_particles[i],particlesVelocity);
			ParticlesService::getInstance().moveParticleOneStep(i,dt,force);
		}
	}
}

void ForcesService::checkCell(
		peano::applications::faxen::lbf::RegularGridBlockVertex** vertices,
		peano::applications::faxen::lbf::RegularGridBlockCell&  cell,
		tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize) {
	for (int i = 0; i < (int)_particles.size(); i++) {
		if (!_particles[i].isFixed) {
			for (int j = 0; j < (int)_particles[i].infoPoints.size(); j++) {
				tarch::la::Vector<DIMENSIONS, double> infoPoint =
						_particles[i].infoPoints[j];
				int zone = peano::applications::faxen::lbf::interpolation::
						getInfoPointZone(infoPoint, zeroPoint, cellSize);
				if(zone) {
					tarch::la::Vector<DIMENSIONS,double> relativePoint;
					/*
					 * Bilinear pressure interpolation.
					 */
//					relativePoint = getRelativeCoordinatesPressure(zone,infoPoint,zeroPoint,cellSize);
//					_particles[i].pressures[j] = interpolatePressure(zone,relativePoint,vertices,
//							cell);
					if(zone!=5){
						/*
						 * Barycentric pressure interpolation
						 */
						if(_forceCalculator->usePressureData()){
							relativePoint = getBarycentricCoordinatesPressure(zone,infoPoint,zeroPoint,cellSize);
							_particles[i].pressures[j] = interpolateBarycentricPressure(zone,relativePoint,vertices,cell);
						}

						relativePoint = getRelativeCoordinatesU(zone,infoPoint,zeroPoint,cellSize);
						_particles[i].velocities[j][0] = interpolateU(zone,relativePoint,vertices,
								cell);
						relativePoint = getRelativeCoordinatesV(zone,infoPoint,zeroPoint,cellSize);
						_particles[i].velocities[j][1] = interpolateV(zone,relativePoint,vertices,
								cell);
					}
				}
			}
		}
	}
}

tarch::la::Vector<DIMENSIONS, double> ForcesService::getRelativeCoordinatesPressure(
		int zone, tarch::la::Vector<DIMENSIONS, double>& infoPoint,
		tarch::la::Vector<DIMENSIONS, double>& zeroPoint,
		tarch::la::Vector<DIMENSIONS, double>& cellSize) {

	tarch::la::Vector<DIMENSIONS, double> relativePoint;
	relativePoint = infoPoint - zeroPoint;

	// implementation for 2D only
	switch (zone) {
	case 1:
	case 5:
		relativePoint[0] = relativePoint[0]/cellSize[0] + 0.5;
		relativePoint[1] = relativePoint[1]/cellSize[1] + 0.5;
		return relativePoint;
	case 2:
		relativePoint[0] = relativePoint[0]/cellSize[0] - 0.5;
		relativePoint[1] = relativePoint[1]/cellSize[1] + 0.5;
		return relativePoint;
	case 3:
		relativePoint[0] = relativePoint[0]/cellSize[0] + 0.5;
		relativePoint[1] = relativePoint[1]/cellSize[1] - 0.5;
		return relativePoint;
	case 4:
		relativePoint[0] = relativePoint[0]/cellSize[0] - 0.5;
		relativePoint[1] = relativePoint[1]/cellSize[1] - 0.5;
		return relativePoint;
	default:
		_log.debug("getRelativeCoordinatesPressure",
				"relative coordinates are computed only for 2D 1,2,3,4,5 zones");
	}

	return relativePoint;
}

tarch::la::Vector<DIMENSIONS,double> ForcesService::getBarycentricCoordinatesPressure(
		int zone, tarch::la::Vector<DIMENSIONS,double>& infoPoint,
		tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize){

	tarch::la::Vector<DIMENSIONS, double> relativePoint;
	relativePoint = infoPoint - zeroPoint;

	// implementation for 2D only
	switch (zone) {
	case 1:
		relativePoint[0] = -relativePoint[0]/cellSize[0] + 0.5;
		relativePoint[1] = -relativePoint[1]/cellSize[1] + 0.5;
		return relativePoint;
	case 2:
		relativePoint[0] = relativePoint[0]/cellSize[0] - 0.5;
		relativePoint[1] = -relativePoint[1]/cellSize[1] + 0.5;
		return relativePoint;
	case 3:
		relativePoint[0] = -relativePoint[0]/cellSize[0] + 0.5;
		relativePoint[1] = relativePoint[1]/cellSize[1] - 0.5;
		return relativePoint;
	case 4:
		relativePoint[0] = relativePoint[0]/cellSize[0] - 0.5;
		relativePoint[1] = relativePoint[1]/cellSize[1] - 0.5;
		return relativePoint;
	default:
		_log.debug("getBarycentricCoordinatesPressure",
				"relative coordinates are computed only for 2D 1,2,3,4 zones");
	}

	return relativePoint;
}

tarch::la::Vector<DIMENSIONS,double> ForcesService::getRelativeCoordinatesU(
		int zone, tarch::la::Vector<DIMENSIONS,double>& infoPoint,
		tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize){
	tarch::la::Vector<DIMENSIONS,double> relativePoint = infoPoint - zeroPoint;

	// implementation for 2D only
	switch (zone) {
	case 1:
	case 2:
		relativePoint[0] = relativePoint[0]/cellSize[0];
		relativePoint[1] = relativePoint[1]/cellSize[1] + 0.5;
		return relativePoint;
	case 3:
	case 4:
		relativePoint[0] = relativePoint[0]/cellSize[0];
		relativePoint[1] = relativePoint[1]/cellSize[1] - 0.5;
		return relativePoint;
	default:
		_log.debug("getRelativeCoordinates2Zones",
				"relative coordinates are computed only for 2D 1,2,3,4 zones");
	}

	return relativePoint;
}

tarch::la::Vector<DIMENSIONS,double> ForcesService::getRelativeCoordinatesV(
		int zone, tarch::la::Vector<DIMENSIONS,double>& infoPoint,
		tarch::la::Vector<DIMENSIONS,double>& zeroPoint,
		tarch::la::Vector<DIMENSIONS,double>& cellSize){
	tarch::la::Vector<DIMENSIONS,double> relativePoint = infoPoint - zeroPoint;

	// implementation for 2D only
	switch (zone) {
	case 1:
	case 3:
		relativePoint[0] = relativePoint[0]/cellSize[0] + 0.5;
		relativePoint[1] = relativePoint[1]/cellSize[1];
		return relativePoint;
	case 2:
	case 4:
		relativePoint[0] = relativePoint[0]/cellSize[0] - 0.5;
		relativePoint[1] = relativePoint[1]/cellSize[1];
		return relativePoint;
	default:
		_log.debug("getRelativeCoordinates2Zones",
				"relative coordinates are computed only for 2D 1,2,3,4 zones");
	}

	return relativePoint;
}

double ForcesService::interpolatePressure(
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
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,P);
	case 2:
		P[2] = cell.getP();
		P[0] = 2*vertices[1]->getP0()-P[2];
		P[3] = 2*vertices[3]->getP1()-P[2];
		P[1] = 2*vertices[1]->getP1()-P[0];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,P);
	case 3:
		P[1] = cell.getP();
		P[0] = 2*vertices[2]->getP1()-P[1];
		P[3] = 2*vertices[3]->getP0()-P[1];
		P[2] = 2*vertices[2]->getP0()-P[0];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,P);
	case 4:
		_log.debug("interpolatePressure","zone 4 is not served!");
		return 0;
	default:
		_log.debug("interpolatePressure","unknown zone!");
		return 0;
	}
}

double ForcesService::interpolateBarycentricPressure(
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
		return peano::applications::faxen::lbf::interpolation::interpolateBarycentric(relativePoint,P);
	case 2:
		P[0] = cell.getP();
		P[1] = 2*vertices[3]->getP1()-P[0];
		P[2] = 2*vertices[1]->getP0()-P[0];
		return peano::applications::faxen::lbf::interpolation::interpolateBarycentric(relativePoint,P);
	case 3:
		P[0] = cell.getP();
		P[1] = 2*vertices[2]->getP1()-P[0];
		P[2] = 2*vertices[3]->getP0()-P[0];
		return peano::applications::faxen::lbf::interpolation::interpolateBarycentric(relativePoint,P);
	case 4:
		P[0] = cell.getP();
		P[1] = 2*vertices[3]->getP1()-P[0];
		P[2] = 2*vertices[3]->getP0()-P[0];
		return peano::applications::faxen::lbf::interpolation::interpolateBarycentric(relativePoint,P);
	default:
		_log.debug("interpolateBarycentricPressure()","unknown zone!");
		return 0;
	}
}

double ForcesService::interpolateU(
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
		U[0] = 2*vertices[0]->getU1()-U[2];
		// or (check during tests!)
		// U[0] = 2*vertices[0]->getU2()-U[1];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,U);
	case 3:
	case 4:
		U[1] = cell.getU();
		U[0] = 2*vertices[2]->getU2()-U[1];
		U[3] = 2*vertices[3]->getU1()-U[1];
		U[2] = 2*vertices[2]->getU1()-U[0];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,U);
	case 5:
		_log.debug("interpolateU","zone 5 is not served!");
		return 0;
	default:
		_log.debug("interpolateU","unknown zone!");
		return 0;
	}

}

double ForcesService::interpolateV(
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
		V[0] = 2*vertices[0]->getV1()-V[2];
		// or (check during tests!)
		// V[0] = 2*vertices[0]->getV2()-V[1];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,V);
	case 2:
	case 4:
		V[2] = cell.getV();
		V[0] = 2*vertices[1]->getV1()-V[2];
		V[3] = 2*vertices[3]->getV2()-V[2];
		V[1] = 2*vertices[1]->getV2()-V[0];
		return peano::applications::faxen::lbf::interpolation::interpolateDLinear(relativePoint,V);
	case 5:
		_log.debug("interpolateV","zone 5 is not served!");
		return 0;
	default:
		_log.debug("interpolateV","unknown zone!");
		return 0;
	}

}

}

}

}

}

}
