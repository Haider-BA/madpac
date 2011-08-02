/*
 * LegacyForceCalculator.cpp
 *
 *  Created on: Jun 27, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/forces/LegacyForceCalculator.h"
#include "peano/applications/faxen/lbf/services/ParticlesService.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace forces {

LegacyForceCalculator::LegacyForceCalculator() {
	_usePressureData = true;
	_integrator = new quadrature::GaussianQuadrature(POINTS);
}

LegacyForceCalculator::~LegacyForceCalculator() {
	// TODO Auto-generated destructor stub
}

void LegacyForceCalculator::initParticlesProxy(services::ParticlesProxy& particle){
	// first entry in the particle's infoPoints is the position of the particle's center
	tarch::la::Vector<DIMENSIONS, double> center = particle.infoPoints[0];
	// first point - center, next 4 - for derivatives, 4*POINTS - for integration
	particle.infoPoints.resize(5+4*POINTS);
	particle.infoPoints[0][0] = center[0];
	particle.infoPoints[0][1] = center[1];
	particle.pressures.resize(5+4*POINTS);
	particle.velocities.resize(5+4*POINTS);
}

void LegacyForceCalculator::fillInfoPoints(services::ParticlesProxy& particle){
	double* angle4Fx = _integrator->getAsinXAbscissas();
	double* angle4Fy = _integrator->getAcosXAbscissas();
	double radius = particle.radius;
	// first entry in the particle's infoPoints is the position of the particle's center
	tarch::la::Vector<DIMENSIONS, double> center = particle.infoPoints[0];

	// 4 points for derivatives computations
	particle.infoPoints[1][0] = center[0] - radius;
	particle.infoPoints[1][1] = center[1];

	particle.infoPoints[2][0] = center[0] + radius;
	particle.infoPoints[2][1] = center[1];

	particle.infoPoints[3][0] = center[0];
	particle.infoPoints[3][1] = center[1] - radius;

	particle.infoPoints[4][0] = center[0];
	particle.infoPoints[4][1] = center[1] + radius;

	int count = 5;
	for(int i=0; i<POINTS; i++, count+=2){
		particle.infoPoints[count][0] = center[0] + radius*cos(angle4Fx[i]);
		particle.infoPoints[count][1] = center[1] + radius*sin(angle4Fx[i]);
		particle.infoPoints[count+1][0] = center[0] + radius*cos(angle4Fx[i]+tarch::la::PI);
		particle.infoPoints[count+1][1] = center[1] + radius*sin(angle4Fx[i]+tarch::la::PI);
	}
	for(int i=0; i<POINTS; i++, count+=2){
		particle.infoPoints[count][0] = center[0] + radius*cos(angle4Fy[i]);
		particle.infoPoints[count][1] = center[1] + radius*sin(angle4Fy[i]);
		particle.infoPoints[count+1][0] = center[0] + radius*cos(angle4Fy[i]+tarch::la::PI);
		particle.infoPoints[count+1][1] = center[1] + radius*sin(angle4Fy[i]+tarch::la::PI);
	}
}

tarch::la::Vector<DIMENSIONS,double> LegacyForceCalculator::computeForces(
		services::ParticlesProxy& particle,
		tarch::la::Vector<DIMENSIONS,double>& particlesVelocity){
	// pressure values for Fx and Fy zero order forces integration
	double* px = new double[POINTS];
	double* py = new double[POINTS];
	double radius = particle.radius;
	double viscosity = services::ParticlesService::getInstance().getViscosity();

	int count = 5;
	for(int i=0; i<POINTS; i++, count+=2){
		px[i] = particle.pressures[count+1] - particle.pressures[count];
	}
	for(int i=0; i<POINTS; i++, count+=2){
		py[i] = particle.pressures[count+1] - particle.pressures[count];
	}

	tarch::la::Vector<DIMENSIONS, double> force;

	// zero order forces (due to pressure)
	force[0] = radius*_integrator->integrate(px);
	force[1] = radius*_integrator->integrate(py);

	delete[] px;
	delete[] py;

	// first order forces (considering drag)
	double* laplacian = getLaplacian(particle);
	force[0] += tarch::la::PI*viscosity*radius
			*(-6*(particlesVelocity[0] - particle.velocities[0][0])
					+ /*radius*radius**/laplacian[0]);
	force[1] += tarch::la::PI*viscosity*radius
			*(-6*(particlesVelocity[1] - particle.velocities[0][1])
					+ /*radius*radius**/laplacian[1]);

	delete[] laplacian;

	return force;
}

double*  LegacyForceCalculator::getLaplacian(services::ParticlesProxy& particle){
	//	double radius = particle.radius;
	double* laplacian = new double[DIMENSIONS];

	laplacian[0] =
			(particle.velocities[1][0] + particle.velocities[2][0] +
					particle.velocities[3][0] + particle.velocities[4][0] - 4*particle.velocities[0][0]);
	//					(radius*radius);

	laplacian[1] =
			(particle.velocities[1][1] + particle.velocities[2][1] +
					particle.velocities[3][1] + particle.velocities[4][1] - 4*particle.velocities[0][1]);
	//					(radius*radius);

	return laplacian;
}

}

}

}

}

}
