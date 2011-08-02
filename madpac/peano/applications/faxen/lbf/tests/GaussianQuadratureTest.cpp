/*
 * GaussianQuadratureTest.cpp
 *
 *  Created on: Jun 5, 2011
 *      Author: denis
 */

#include "peano/applications/faxen/lbf/tests/GaussianQuadratureTest.h"
#include "peano/applications/faxen/lbf/quadrature/GaussianQuadrature.h"

#include "tarch/tests/TestCaseFactory.h"

#include <iostream>
#include <cmath>

registerTest(peano::applications::faxen::lbf::tests::GaussianQuadratureTest)

namespace peano {

	namespace applications {

	namespace faxen {

	namespace lbf {

	namespace tests {

	GaussianQuadratureTest::GaussianQuadratureTest():
		tarch::tests::TestCase("peano::applications::faxen::lbf::tests::GaussianQuadratureTest"){}

	GaussianQuadratureTest::~GaussianQuadratureTest() {
		// TODO Auto-generated destructor stub
	}

	void GaussianQuadratureTest::run(){
		// Gaussian integration with n points
		int n = 6;
		peano::applications::faxen::lbf::quadrature::GaussianQuadrature quadrature(n);

		// values for Ix = S phi*cos(phi) dphi from zero to pi integral
		double* fx = quadrature.getAsinXAbscissas();

		// values for Iy = S phi*sin(phi) dphi from -pi/2 to pi/2 integral
		double* fy = quadrature.getAcosXAbscissas();

		//find Ix
		double Ix = quadrature.integrate(fx);

		//find Iy
		double Iy = quadrature.integrate(fy);

		//	std::cout << "Ix = " << Ix << "; Iy = " << Iy << "\n";

		// check whether the values are approximately correct
		validateWithMessage(tarch::la::smaller(std::fabs(Ix),0.05),
				"Ix differs more than 0.05 from expected value 0.0!");
		validateWithMessage(tarch::la::smaller(std::fabs(Iy-tarch::la::PI),0.05),
				"Iy differs more than 0.05 from expected value PI!");

		// second test
		for(int i=0; i<n; i++){
			fx[i] = -cos(fx[i]+tarch::la::PI) + cos(fx[i]);
			fy[i] = -sin(fy[i]+tarch::la::PI) + sin(fy[i]);
		}

		//find Ix
		Ix = quadrature.integrate(fx);

		//find Iy
		Iy = quadrature.integrate(fy);

		//	std::cout << "Ix = " << Ix << "; Iy = " << Iy << "\n";

		// check whether the values are approximately correct
		validateWithMessage(tarch::la::smaller(std::fabs(Ix-tarch::la::PI),0.05),
				"Ix differs more than 0.05 from expected value PI!");
		validateWithMessage(tarch::la::smaller(std::fabs(Iy-tarch::la::PI),0.05),
				"Iy differs more than 0.05 from expected value PI!");
	}

	}

	}

	}

	}

}
