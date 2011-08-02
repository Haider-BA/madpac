/*
 * GaussianQuadratureTest.h
 *
 *  Created on: Jun 5, 2011
 *      Author: denis
 */

#ifndef GAUSSIANQUADRATURETEST_H_
#define GAUSSIANQUADRATURETEST_H_

#include "tarch/tests/TestCase.h"
#include "peano/applications/latticeboltzmann/GaussianRandomNumberGenerator.h"

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace tests {

class GaussianQuadratureTest:  public tarch::tests::TestCase{
public:
	GaussianQuadratureTest();
	virtual ~GaussianQuadratureTest();

	virtual void run();

	virtual void setUp(){}
};

}

}

}

}

}

#endif /* GAUSSIANQUADRATURETEST_H_ */
