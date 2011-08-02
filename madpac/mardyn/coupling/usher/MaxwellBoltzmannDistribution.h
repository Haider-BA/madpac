/*
 * MaxwellBoltzmannDistribution.h
 *
 * @Date: 01.10.2010
 * @Author: eckhardw
 */

#ifndef MADPAC_MAXWELLBOLTZMANNDISTRIBUTION_H_
#define MADPAC_MAXWELLBOLTZMANNDISTRIBUTION_H_

#include "molecules/Molecule.h"

/**
 * add a random velocity according to the Maxwell-Boltzmann distribution to the
 * particles, with a given mean velocity.
 *
 * @p the particle to initialize
 * @meanVelocity the mean velocity of the brownian motion for the particle
 * @dimensions the number of dimensions to initialize (2 or 3)
 */
void MaxwellBoltzmannDistribution(Molecule& p, double* v,double temp);


#endif /* MADPAC_MAXWELLBOLTZMANNDISTRIBUTION_H_ */
