/*
 * ParticlesService.cpp
 *
 *  Created on: May 22, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/services/ParticlesService.h"
#include "peano/applications/faxen/lbf/particles/Particle.h"
#include <fstream>
#include <iostream>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace services {

ParticlesService::ParticlesService():
				_particlesData(),
				_log("peano::applications::faxen::lbf::services::ParticlesService")
{}

ParticlesService::~ParticlesService() {
	_particlesData.clear();
}

int ParticlesService::getNumberOfParticles() const
{
	return _particlesData.size();
}

double ParticlesService::getViscosity() const {
	return _viscosity;
}

ParticlesService& ParticlesService::getInstance(){
	static ParticlesService singleton;
	return singleton;
}

void ParticlesService::setViscosity(double viscosity){
	_viscosity = viscosity;
}

int ParticlesService::createParticle(double radius, double density,
		tarch::la::Vector<DIMENSIONS,double> & position,
		tarch::la::Vector<DIMENSIONS,double> & velocity)
{
	peano::applications::faxen::lbf::particle::Particle particle;

	particle.setRadius(radius);
	logDebug("createParticle","Radius of particle "
			<< _particlesData.size()
			<< " is " << particle.getRadius());
	particle.setDensity(density);
	logDebug("createParticle","Density of particle "
			<< _particlesData.size()
			<< " is " << particle.getDensity());
	particle.setPosition(position);
	logDebug("createParticle","Position of particle "
			<< _particlesData.size()
			<< " is " << particle.getPosition());
	particle.setVelocity(velocity);
	logDebug("createParticle","Velocity of particle "
			<< _particlesData.size()
			<< " is " << particle.getVelocity());

	_particlesData.push_back(particle);

	return _particlesData.size();
}

void ParticlesService::destroyAllParticles(){
	_particlesData.clear();
}

double ParticlesService::getParticlesRadius(int particlesIndex) const
{
	return _particlesData[particlesIndex].getRadius();
}

double ParticlesService::getPaticlesDensity(int particlesIndex) const
{
	return _particlesData[particlesIndex].getDensity();
}

tarch::la::Vector<DIMENSIONS,double> ParticlesService::getParticlesVelocity(int particlesIndex)
{
	return _particlesData[particlesIndex].getVelocity();
}

tarch::la::Vector<DIMENSIONS,double> ParticlesService::getParticlesPostion(int particlesIndex)
{
	return _particlesData[particlesIndex].getPosition();
}

void ParticlesService::moveParticleOneStep(int particlesIndex, double dt, tarch::la::Vector<DIMENSIONS,double> & force)
{
	_particlesData[particlesIndex].moveOneStep(dt,force);
}

void ParticlesService::savePositionsIntoFile(std::string fileName){
	static int fileCount = 0;

	std::stringstream getName(std::stringstream::in | std::stringstream::out);
	getName << (fileName) << fileCount << ".vtk";
	fileName = getName.str();

	std::ofstream vtkFile(fileName.c_str(), std::ios::out);
	writeVTKHeader(vtkFile);

	tarch::la::Vector<DIMENSIONS,double> position;
	for(int i=0; i<getNumberOfParticles();i++){
		position = getParticlesPostion(i);
		vtkFile << position[0] << " "
				<< position[1] << " "
				<< "0\n";
	}

	vtkFile.close();
	fileCount++;
}

void ParticlesService::writeVTKHeader(std::ofstream& vtkFile){
	vtkFile << "# vtk DataFile Version 2.0\n";
	vtkFile << "generated by Faxen output\n";
	vtkFile << "ASCII\n";
	vtkFile << "\n";
	vtkFile << "DATASET POLYDATA\n";
	vtkFile << "POINTS " << getNumberOfParticles() << " float\n";
}

}

}

}

}

}