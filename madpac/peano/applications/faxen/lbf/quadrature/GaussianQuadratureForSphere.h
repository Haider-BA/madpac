/*
 * GaussianQuadratureForSphere.h
 *
 *  Created on: Jun 25, 2011
 *      Author: denis
 */

#ifndef GAUSSIANQUADRATUREFORSPHERE_H_
#define GAUSSIANQUADRATUREFORSPHERE_H_

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace quadrature {

class GaussianQuadratureForSphere {
private:
	int _numberOfPoints;
public:
	GaussianQuadratureForSphere();
	GaussianQuadratureForSphere(int n);
	virtual ~GaussianQuadratureForSphere();

	void setIntegrationPoints(int n);
	int getNumberOfPoints();
	double* getTheta();
	double* getPhi();
	double integrate(double** f);

protected:
	double* _theta;				// inclination angle
	double* _phi;				// azimuth angle
	double* _w;					// integration weights
};

}

}

}

}

}

#endif /* GAUSSIANQUADRATUREFORSPHERE_H_ */
