/*
 * BoundaryConfiguration.cpp
 *
 * @Date: 18.10.2010
 * @Author: eckhardw
 */

#include "BoundaryConfiguration.h"

BoundaryConfiguration::BoundaryConfiguration(Boundary::axis_type axis, bool positionUp, BoundaryType boundaryType)
: _positionUp(positionUp), _axis(axis), _boundaryType(boundaryType) {
}

BoundaryConfiguration::~BoundaryConfiguration() {
}

Boundary::axis_type BoundaryConfiguration::getAxis() {
	return _axis;
}

bool BoundaryConfiguration::getPositionUp() {
	return _positionUp;
}

BoundaryConfiguration::BoundaryType BoundaryConfiguration::getBoundaryType() {
	return _boundaryType;
}
