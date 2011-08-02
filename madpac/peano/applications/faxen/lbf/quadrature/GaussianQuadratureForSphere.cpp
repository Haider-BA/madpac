/*
 * GaussianQuadratureForSphere.cpp
 *
 *  Created on: Jun 25, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/quadrature/GaussianQuadratureForSphere.h"
#include "peano/applications/faxen/lbf/quadrature/GaussianQuadrature.h"
#include "tarch/la/Scalar.h"
#include <cmath>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace quadrature {

GaussianQuadratureForSphere::GaussianQuadratureForSphere() {
	// TODO Auto-generated constructor stub
}

GaussianQuadratureForSphere::GaussianQuadratureForSphere(int n){
	setIntegrationPoints(n);
}

GaussianQuadratureForSphere::~GaussianQuadratureForSphere() {
	// TODO Auto-generated destructor stub
}

void GaussianQuadratureForSphere::setIntegrationPoints(int n) {
	_theta = new double[n];
	_phi   = new double[n];
	_w     = new double[n];

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

		_theta[i]=xm-xl*z;
		_theta[n-1-i]=xm+xl*z;
		_w[i]=2.0*xl/((1.0-z*z)*pp*pp);
		_w[n-1-i]=_w[i];
	}

	for(int i=0; i<n; i++){
		_theta[i] = acos(_theta[i]);
	}

	for(int j=0; j<2*n; j++){
		_phi[j] = j*tarch::la::PI/n;
	}

	_numberOfPoints = n;
}

double GaussianQuadratureForSphere::integrate(double** f){
	double s = 0.0;

	for(int i=0; i<_numberOfPoints; i++){
		for(int j=0; j<2*_numberOfPoints; j++){
			s += _w[i]*f[i][j];
		}
	}

	s *= tarch::la::PI/_numberOfPoints;

	return s;
}

double* GaussianQuadratureForSphere::getTheta(){
	return _theta;
}

double* GaussianQuadratureForSphere::getPhi(){
	return _phi;
}

int GaussianQuadratureForSphere::getNumberOfPoints(){
	return _numberOfPoints;
}

}

}

}

}

}
