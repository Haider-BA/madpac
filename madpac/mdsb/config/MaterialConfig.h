/*
 * MaterialConfig.h
 *
 * @Date: 01.12.2010
 * @Author: eckhardw
 */

#ifndef MATERIALCONFIG_H_
#define MATERIALCONFIG_H_

/**
 * Configuration class for a material characterized by the
 * Lennard-Jones parameters epsilon and sigma and the mass m of
 * a particle.
 */
class MaterialConfig {

public:

	MaterialConfig(double epsilon, double sigma, double m);

	virtual ~MaterialConfig();

	double getEpsilon() const
    {
        return _epsilon;
    }

    double getM() const
    {
        return _m;
    }

    double getSigma() const
    {
        return _sigma;
    }

private:

	double _epsilon;

	double _sigma;

	double _m;

};

#endif /* MATERIALCONFIG_H_ */
