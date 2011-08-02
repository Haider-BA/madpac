/*
 * CuboidConfiguration.h
 *
 * @Date: 07.10.2010
 * @Author: eckhardw
 */

#ifndef CUBOIDCONFIGURATION_H_
#define CUBOIDCONFIGURATION_H_

#include "config/MaterialConfig.h"
#include <utils/Vector.h>

class CuboidConfiguration {
public:

	CuboidConfiguration(const utils::Vector<double, 3>& x, const utils::Vector<double, 3>& v, const utils::Vector<int, 3>& n, double h, MaterialConfig materialConfig);

	virtual ~CuboidConfiguration();

	double getH() const
    {
        return _h;
    }

    const utils::Vector<int,3>& getN() const
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
	utils::Vector<int, 3> _n;

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

#endif /* CUBOIDCONFIGURATION_H_ */
