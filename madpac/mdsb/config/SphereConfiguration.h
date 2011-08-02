/*
 * SphereConfiguration.h
 *
 * @Date: 18.10.2010
 * @Author: eckhardw
 */

#ifndef SPHERECONFIG_H_
#define SPHERECONFIG_H_

#include "config/MaterialConfig.h"
#include "utils/Vector.h"

class SphereConfiguration {

public:

	SphereConfiguration(const utils::Vector<double, 3>& x, const utils::Vector<double, 3>& v, int n, double h, MaterialConfig materialConfig);

	virtual ~SphereConfiguration();


    double getH() const
    {
        return _h;
    }

    int getN() const
    {
        return _n;
    }

    const utils::Vector<double,3>& getV() const
    {
        return _v;
    }

    const utils::Vector<double,3>& getX() const
    {
        return _x;
    }


    const MaterialConfig& getMaterialConfig() const {
    	return _materialConfig;
    }
private:

	/*
	 * coordinates of the lower left front point
	 */
	utils::Vector<double, 3> _x;

	/**
	 * number of particles along each dimension
	 */
	int _n;

	/**
	 * initial velocity
	 */
	utils::Vector<double, 3> _v;

	/**
	 * spacing of the particles;
	 */
	double _h;

	MaterialConfig _materialConfig;

};

#endif /* SPHERECONFIG_H_ */
