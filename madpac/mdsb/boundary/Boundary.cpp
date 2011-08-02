/*
 * Boundary.cpp
 *
 * @Date: 16.11.2010
 * @Author: eckhardw
 */

#include "Boundary.h"

log4cxx::LoggerPtr Boundary::logger = log4cxx::Logger::getLogger("Boundary");

Boundary::Boundary(ParticleContainer& container, axis_type axis, bool up)
: _axis(axis), _up(up), _container(container)
{ }

Boundary::~Boundary() { }
