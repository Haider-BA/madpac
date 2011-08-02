/*
 * BoundaryConfiguration.h
 *
 * @Date: 18.10.2010
 * @Author: eckhardw
 */

#ifndef BOUNDARYCONFIGURATION_H_
#define BOUNDARYCONFIGURATION_H_

#include "boundary/Boundary.h"

class BoundaryConfiguration {

public:

	enum BoundaryType { REFLECTING, HEATING, PERIODIC, OUTFLOW, FORCE};

	BoundaryConfiguration(Boundary::axis_type axis, bool position, BoundaryType boundaryType);

	virtual ~BoundaryConfiguration();

	Boundary::axis_type getAxis();

	bool getPositionUp();

	BoundaryType getBoundaryType();

private:

	bool _positionUp;

	Boundary::axis_type _axis;

	BoundaryType _boundaryType;

};

#endif /* BOUNDARYCONFIGURATION_H_ */
