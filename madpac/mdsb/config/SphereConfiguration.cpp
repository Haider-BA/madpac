/*
 * SphereConfiguration.cpp
 *
 * @Date: 18.10.2010
 * @Author: eckhardw
 */

#include "SphereConfiguration.h"

SphereConfiguration::SphereConfiguration(const utils::Vector<double, 3>& x, const utils::Vector<double, 3>& v, int n, double h, MaterialConfig materialConfig)
: _x(x), _n(n), _v(v), _h(h) , _materialConfig(materialConfig){

}

SphereConfiguration::~SphereConfiguration() {
}
