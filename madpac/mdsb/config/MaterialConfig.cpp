/*
 * MaterialConfig.cpp
 *
 * @Date: 01.12.2010
 * @Author: eckhardw
 */

#include "MaterialConfig.h"

MaterialConfig::MaterialConfig(double epsilon, double sigma, double m)
: _epsilon(epsilon), _sigma(sigma), _m(m){
}

MaterialConfig::~MaterialConfig() {
}
