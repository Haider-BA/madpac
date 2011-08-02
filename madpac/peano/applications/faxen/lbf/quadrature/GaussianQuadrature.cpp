/*
 * GaussianQuadrature.cpp
 *
 *  Created on: Jun 4, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/quadrature/GaussianQuadrature.h"
#include "tarch/la/Scalar.h"
#include <cmath>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace quadrature {

GaussianQuadrature::GaussianQuadrature():
					_numberOfPoints(0)
{ }

GaussianQuadrature::GaussianQuadrature(int n){
	setIntegrationPoints(n);
}

GaussianQuadrature::~GaussianQuadrature() {
	if(!_numberOfPoints){
		delete[] _xcos;
		delete[] _xsin;
		delete[] _w;
	}
}

void GaussianQuadrature::setIntegrationPoints(int n){
	_xcos = new double[n];
	_xsin = new double[n];
	_w = new double[n];

	double x1=-1;
	double x2=1;

	double z1,z,xm,xl,pp,p3,p2,p1;
	int m=(n+1)/2;

	xm=0.5*(x2+x1);
	xl=0.5*(x2-x1);
	for(int i=0; i<m; i++) {
		z=cos(tarch::la::PI*(i+0.75)/(n+0.5));
		do {
			p1=1.0;
			p2=0.0;
			for (int j=0; j<n; j++) {
				p3=p2;
				p2=p1;
				p1=((2.0*j+1.0)*z*p2-j*p3)/(j+1);
			}
			pp=n*(z*p1-p2)/(z*z-1.0);
			z1=z;
			z=z1-p1/pp;
		} while (fabs(z-z1) > EPS);

		_xcos[i]=xm-xl*z;
		_xcos[n-1-i]=xm+xl*z;
		_w[i]=2.0*xl/((1.0-z*z)*pp*pp);
		_w[n-1-i]=_w[i];
	}

	for(int i=0; i<n; i++){
		_xsin[i] = asin(_xcos[i]);
		_xcos[i] = acos(_xcos[i]);
	}

	_numberOfPoints = n;
}

double GaussianQuadrature::integrate(double* f){
	double s = 0.0;

	for (int j=0; j<_numberOfPoints; j++) {
		s += _w[j]*f[j];
	}

	return s;
}

int GaussianQuadrature::getNumberOfPoints(){
	return _numberOfPoints;
}

double* GaussianQuadrature::getAcosXAbscissas(){
	return _xcos;
}

double* GaussianQuadrature::getAsinXAbscissas(){
	return _xsin;
}

}

}

}

}

}
