/*
 * LaplacianBasedForceCalculator.cpp
 *
 *  Created on: Jun 27, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/forces/LaplacianBasedForceCalculator.h"
#include "peano/applications/faxen/lbf/services/ParticlesService.h"

// temporary logging to text file
#include <iostream>
#include <fstream>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace forces {

LaplacianBasedForceCalculator::LaplacianBasedForceCalculator() {
	// TODO Auto-generated constructor stub

}

LaplacianBasedForceCalculator::~LaplacianBasedForceCalculator() {
	// TODO Auto-generated destructor stub
}

void LaplacianBasedForceCalculator::initParticlesProxy(services::ParticlesProxy& particle){
	// first entry in the particle's infoPoints is the position of the particle's center
	tarch::la::Vector<DIMENSIONS, double> center = particle.infoPoints[0];
	// first point - center, next 4 - for derivatives
	particle.infoPoints.resize(5);
	particle.infoPoints[0][0] = center[0];
	particle.infoPoints[0][1] = center[1];
	particle.velocities.resize(5);
}

void LaplacianBasedForceCalculator::fillInfoPoints(services::ParticlesProxy& particle){
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
}

tarch::la::Vector<DIMENSIONS,double> LaplacianBasedForceCalculator::computeForces(
		services::ParticlesProxy& particle,
		tarch::la::Vector<DIMENSIONS,double>& particlesVelocity){
	static std::ofstream flog("forces.log");
	static int count;
	count++;
	double radius = particle.radius;
	double viscosity = services::ParticlesService::getInstance().getViscosity();

	tarch::la::Vector<DIMENSIONS, double> force;

	// first order forces (Faxen correction)
	double* laplacian = getLaplacian(particle);
	force[0] = tarch::la::PI*viscosity*radius
			*(6*(particle.velocities[0][0]-particlesVelocity[0])
					+ /*radius*radius**/laplacian[0]);
	force[1] = tarch::la::PI*viscosity*radius
			*(6*(particle.velocities[0][1]-particlesVelocity[1])
					+ /*radius*radius**/laplacian[1]);

	flog << count << std::endl;
	flog << "PI: " << tarch::la::PI << std::endl;
	flog << "viscosity: " << viscosity << std::endl;
	flog << "radius: " << radius << std::endl;
	flog << "l: " << laplacian[0] << " : " << laplacian[1] << std::endl;
	flog << "f: " << force[0] << " : " << force[1] << std::endl;
	flog << "vp: " << particlesVelocity[0] << " : " << particlesVelocity[1] << std::endl;
	flog << "vf: " << particle.velocities[0][0] << " : " << particle.velocities[0][1] << std::endl;
	flog << "u01234: " << particle.velocities[0][0] << " : " <<particle.velocities[1][0] << " : "
			<< particle.velocities[2][0] << " : " << particle.velocities[3][0] << " : "
			<< particle.velocities[4][0] << std::endl;
	flog << "v01234: " << particle.velocities[0][1] << " : " <<particle.velocities[1][1] << " : "
			<< particle.velocities[2][1] << " : " << particle.velocities[3][1] << " : "
			<< particle.velocities[4][1] << std::endl;

	delete[] laplacian;

	return force;
}

double*  LaplacianBasedForceCalculator::getLaplacian(services::ParticlesProxy& particle){
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
