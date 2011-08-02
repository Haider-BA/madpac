/*
 * Particle.h
 *
 *  Created on: 23.02.2010
 *      Author: eckhardw
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "utils/Vector.h"
#include "log4cxx/logger.h"

class Particle {

private:

	static log4cxx::LoggerPtr logger;

	/** the position of the particle */
	utils::Vector<double, 3> x;

	/** the old position of the particle, used to calculate diffusion */
	utils::Vector<double, 3> old_x;


	/** the velocity of the particle */
	utils::Vector<double, 3> v;

	/** the force effective on this particle */
	utils::Vector<double, 3> f;

	/** the force wich was effective on this particle */
	utils::Vector<double, 3> old_f;


	double _U;

	/** the mass of this particle */
	double m;

	double epsilon;

	double sigma;

	/** type of the particle. Use it for whatever you want (e.g. to seperate
	 * molecules belonging to different bodies, matters, and so on)
	 */
	int type;

	/** variable s of the finnis sinclair potential */
	double _S;

	/** stress, for the scenario "crack propagation of silver" */
	double _stress;

	// flag for debugging purpose, may be set if some operation has been
	// performed on this molecule.
	bool _flag;

#ifdef DEBUG
	int _id;

	static int numInstances;
#endif

public:
	Particle(int type = 0);

	Particle(const Particle& other);

	Particle(
			// for visualization, we need always 3 coordinates
			// -> in case of 2d, we use only the first and the second
			utils::Vector<double, 3> x_arg,
	        utils::Vector<double, 3> v_arg,
	        double m_arg,
	        double epsilon_arg,
	        double sigma_arg,
	        int type = 0
	);

	virtual ~Particle();

	utils::Vector<double, 3>& getX() {
		return x;
	}

	utils::Vector<double, 3>& getOldX() {
		return old_x;
	}

	utils::Vector<double, 3>& getF() {
		return f;
	}

	double getU() {
		return _U;
	}

	void vadd(double x, double y, double z) {
	  v[0] += x;
	  v[1] += y;
	  v[2] += z;
	}

	utils::Vector<double, 3>& getOldF() {
		return old_f;
	}

	utils::Vector<double, 3>& getV() {
		return v;
	}

	double getM() const {
		return m;
	}

	double getEspilon() const {
		return epsilon;
	}

	double getSigma() const {
		return sigma;
	}

	double getS() const {
		return _S;
	}

	void setS(double s) {
		_S = s;
	}

	void setU(double u) {
			_U = u;
		}


	double getStress() const {
		return _stress;
	}

	void setStress(double stress) {
		_stress = stress;
	}

	int getType() {
		return type;
	}

	bool getFlag() const {
		return _flag;
	}

	void setFlag(bool flag) {
		_flag = flag;
	}

	bool operator==(Particle& other);

	std::string toString();

#ifdef DEBUG
	int getID() const;
#endif
};

std::ostream& operator<<(std::ostream& stream, Particle& p);

#endif /* PARTICLE_H_ */
