/*
 * Usher.cpp
 *
 *  Created on: 24.03.2011
 *      Author: ph
 */

#include "Usher.h"
#include <cmath>
#include <cstdlib>

using namespace std;

//int _n[20];

Usher::Usher(UsherContainer *container, double sigma, int dim) :  _container(container), _sigma(sigma), _dim(dim) {
	_maxInnerIterations = 100;
	_maxOuterIterations = 10000;
//	for(int i=0;i<20;i++)
	//	_n[i] =20;
}

Usher::~Usher() {
}

void Usher::setU0(double u0) {
	_U0 = u0;
}

utils::Vector<double, 3> Usher::getRandPoint(utils::Vector<double, 3>& minX,utils::Vector<double, 3>& maxX) {
	utils::Vector<double, 3> x;
	x[0] = ((double)rand()*maxX[0]/(double)RAND_MAX);
	x[1] = ((double)rand()*maxX[1]/(double)RAND_MAX);
	if(_dim == 2)
		x[2]=0.5;
	else
		x[2] = ((double)rand()*maxX[2]/(double)RAND_MAX);
	x = x + minX;
	return x;
}

bool Usher::addP(Particle& p, utils::Vector<double, 3>& minX,utils::Vector<double, 3>& maxX) {
	double v[] = {0.0,0.0,0.0};



	p.getX() = getRandPoint(minX,maxX);

#ifdef DEBUG
	std::cout << "ADDP: "<< _type_id<<" ";
#endif

	//double U0 = _U0; //c
	double Uovlp = pow(10.0,4.0); //k
	double r_sigma = 1.2*_sigma; //c
	//double rho = 0.4; //c
	double deltaS0 = 0.1*pow(_container->getRho(),-1.5); //c
	double u=pow(10.0,10.0);
	double u_old =u*10;
	double mf=0;
	utils::Vector<double, 3> f = 0.1;
	double deltaS = 0.0;
	bool first = true;

	int n=0;
	int nx=0;
	//int Nmax = 10000;
	double xi0 = 0.03;
	double xi = 0.5;
	int tries =0;
	while(abs(xi)>xi0 && n<_maxOuterIterations) {

		if(u_old <= u || p.getX()[0] < minX[0] || p.getX()[0] > maxX[0] || p.getX()[1] < minX[1]  || p.getX()[1] > maxX[1] ||
				p.getX()[2] < minX[2]  || p.getX()[2] > maxX[2] || nx>_maxInnerIterations) {
			p.getX() = getRandPoint(minX,maxX);

			u_old = 10*u;
			first = true;
			nx=0;
			tries++;
		} else {
			nx++;

			p.getF() = 0;
			p.setU(0);
			_container->calcU(p);
			_container->calcF(p);

			u_old = u;
			u = p.getU();
			xi = (u-_U0)/abs(_U0);
			f = p.getF();
			mf = f.L2Norm();

			if(u<Uovlp || !first)
				deltaS = min(deltaS0,max((p.getU()-_U0)/mf,0.0000001)); //c
			else
				deltaS = r_sigma-pow(4.0/u,1.0/12.0); //deltaSovlp //k

			first = false;
			p.getX() = p.getX()+f*(deltaS/mf);
			if(_dim == 2)
				p.getX()[2] = 0.5;

		}
		n++;
	}
#ifdef DEBUG
	std::cout << "n: "<< n<<" ";
	std::cout << "P: " << p.toString() << std::endl;
#endif

	_container->calcV(p);

	p.getF() = 0;
//	p.setU(0);
//	std::cout <<  "P: "<<p.toString()<< " T: "<<tries<< " N: "<<n << std::endl;

	if(n<_maxOuterIterations) {
	//	LOG4CXX_DEBUG(logger, "P: "<<p.toString()<< "N: "<<n);
		//std::cout <<  "P: "<<p.toString()<< " T: "<<tries<< " N: "<<n << std::endl;
		/*int tmp_n = n;
		for(int i=1;i<20;i++) {
			_n[i-1] =_n[i];
			tmp_n+=_n[i];

		}
		_n[19] = n;*/
		///std::cout << "R: " << getRho() << " N: " << tmp_n/20 <<std::endl;
		//_container->addParticle(p);
		return true;
	}
	else {
		//std::cout << "n>" << std::endl;
	//	LOG4CXX_DEBUG(logger, "n>" << Nmax);
		return false;
	}

}
