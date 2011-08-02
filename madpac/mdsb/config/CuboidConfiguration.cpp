/*
 * CuboidConfiguration.cpp
 *
 * @Date: 07.10.2010
 * @Author: eckhardw
 */

#include "CuboidConfiguration.h"

CuboidConfiguration::CuboidConfiguration(const utils::Vector<double, 3>& x, const utils::Vector<double, 3>& v, const utils::Vector<int, 3>& n, double h, MaterialConfig materialConfig)
: _x(x), _n(n), _v(v), _h(h), _materialConfig(materialConfig) {
}

CuboidConfiguration::~CuboidConfiguration() {
}
