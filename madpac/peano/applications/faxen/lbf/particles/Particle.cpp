/*
 * Particle.cpp
 *
 *  Created on: May 20, 2011
 *      Author: denis
 */

#include "peano/utils/Dimensions.h"
#include "peano/applications/faxen/lbf/particles/Particle.h"
#include <iostream>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace particle {

Particle::Particle():
		_density(0.0),
		_radius(0.0),
		_mass(0.0)
{}

Particle::~Particle() {
	_trajectory.clear();
}

double Particle::getDensity() const
{
	return _density;
}

void Particle::setDensity(double _density)
{
	this->_density = _density;
	this->updateMass();
}

double Particle::getRadius() const
{
	return _radius;
}

void Particle::setRadius(double _radius)
{
	this->_radius = _radius;
	this->updateMass();
}

tarch::la::Vector<DIMENSIONS,double>& Particle::getVelocity()
{
	return _velocity;
}

void Particle::setVelocity(tarch::la::Vector<DIMENSIONS,double> &velocity)
{
	for(int i=0; i<DIMENSIONS; i++){
		this->_velocity(i) = velocity(i);
	}
}

tarch::la::Vector<DIMENSIONS,double>& Particle::getPosition()
{
	return _position;
}

void Particle::setPosition(tarch::la::Vector<DIMENSIONS,double> &position)
{
	for(int i=0; i<DIMENSIONS; i++){
		this->_position(i) = position(i);
	}
//	_trajectory.push_back(_position);
}

std::vector<tarch::la::Vector<DIMENSIONS,double> >& Particle::getTrajectory()
{
	return _trajectory;
}


void Particle::updateMass(){
	_mass = tarch::la::PI*_radius*_radius*_density;
}

void Particle::moveOneStep(double dt, tarch::la::Vector<DIMENSIONS,double> &force){
	/** Explicit Euler scheme */
//	std::cout << "Particle: force\n";
	std::cout << "force[0] = " << force[0] << "\n";
	std::cout << "force[1] = " << force[1] << "\n";

	for(int i=0; i<DIMENSIONS; i++){
		_velocity(i) += dt*force(i)/_mass;
		_position(i) += dt*_velocity(i);
	}

//	_trajectory.push_back(_position);
}

bool Particle::isPointInside(tarch::la::Vector<DIMENSIONS,double>& point){
	tarch::la::Vector<DIMENSIONS,double> distance = _position - point;
	double distance2 = 0;
	for(int d=0; d<DIMENSIONS; d++){
		distance2 += distance[d]*distance[d];
	}
	return (distance2<_radius*_radius) ? true : false;
}

}

}

}

}

}
