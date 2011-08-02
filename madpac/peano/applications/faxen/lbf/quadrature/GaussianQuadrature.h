/*
 * GaussianQuadrature.h
 *
 *  Created on: Jun 4, 2011
 *      Author: denis
 */

#ifndef GAUSSIANQUADRATURE_H_
#define GAUSSIANQUADRATURE_H_

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace quadrature {

// EPS is the relative precision for Newton method
#define EPS 1e-14

class GaussianQuadrature {
private:
	int _numberOfPoints;
public:
	GaussianQuadrature();
	GaussianQuadrature(int n);
	virtual ~GaussianQuadrature();

	void setIntegrationPoints(int n);
	int getNumberOfPoints();
	double* getAcosXAbscissas();
	double* getAsinXAbscissas();
	double integrate(double* f);
protected:
	double* _xcos;				// abscissas for Fy integration
	double* _xsin;				// abscissas for Fy integration
	double* _w;					// integration weights
};

}

}

}

}

}

#endif /* GAUSSIANQUADRATURE_H_ */
