/*
 * LBSB.cpp
 *
 *  Created on: 07.03.2011
 *      Author: ph
 */

#include "LBSB.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

utils::Vector<utils::Vector<double,2> ,9> c;
utils::Vector<double,9> a;

int LBSB::getNumObj() {
	 return _xsize*_ysize;
}

void LBSB::execHyWriter(outputWriter::VTKWriter fileWriter, double cellSize, double xOffset,
		double yOffset, double lb2md, bool drawInner) {
	//int k = 0;
	for(int i=0;i<_xsize;i++)
			for(int j=0;j<_ysize;j++)
				if(drawInner || i < _xsize/2+xOffset+_borderSize || i >= _xsize/2-xOffset-_borderSize || j < _ysize/2+yOffset+_borderSize || j >= _ysize/2-yOffset-_borderSize)
						fileWriter.plotCell(_p,_v,i,j,cellSize,xOffset,yOffset,lb2md);
				/*else {k++;
				std::cout <<"i"<< i<<"j"<<j << std::endl;
				}
	std::cout <<"k"<< k << std::endl;*/
 }

void LBSB::writeOutput(const std::string& filename, int iteration) {
	_fileWriter.initializeOutput(_xsize*_ysize);
	for(int i=0;i<_xsize;i++)
		for(int j=0;j<_ysize;j++)
			_fileWriter.plotCell(_p,_v,i,j,1,0,0,1);
	_fileWriter.writeFile(filename, iteration);
}


LBSB::LBSB(double rho, double t, int xsize, int ysize, bool wave, int border) : _xsize(xsize), _ysize(ysize), tau(1.0), _wave(wave), _borderSize(border), iteration(0) {
	double energy = xsize*ysize * t/901.0;
	double velocity = 2.0 * energy / (double)(2 * xsize*ysize);
	//LOG4CXX_TRACE(logger, "Calculated velocity of " << velocity);
	double meanVelocity = sqrt(velocity);

	int ci[9][2] = {{0,0},{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1}};
	for(int i=0;i<9;i++) {
		c[i][0] = ci[i][0];
		c[i][1] = ci[i][1];
		a[i] = 4.0/9.0;
					if(i>4)
						a[i] = 1.0/36.0;
					else if (i>0)
						a[i] = 1.0/9.0;
	}

	_p = new OffsetArray<double>(_xsize,_ysize);
	_v = new OffsetArray<utils::Vector<double,2> >(_xsize,_ysize);
	_f = new OffsetArray<double>*[9];
	for(int i=0;i<9;i++)
			_f[i] = new OffsetArray<double>(_xsize,_ysize);

	//double Amp2 = 0.1;
	//double Width = 10;
	for(int i=0;i<_xsize;i++)
		for(int j=0;j<_ysize;j++) {
			_p->get(i,j) = rho;//1+Amp2*exp(-(pow(i-_xsize/2,2)+pow(j-_ysize/2,2))/Width);//rho;
			for (int k = 0; k < 2; k++) {
				_v->get(i,j)[k] =  meanVelocity * GaussDeviate();
				//std::cout << _v->get(i,j)[k] << std::endl;
			}
			//_v->get(i,j)[0] = meanVelocity;
			//_v->get(i,j)[1] = 0.1;
			for (int k = 0; k < 9; k++)
				_f[k]->get(i,j) =a[k]*rho;
		}
}

LBSB::~LBSB() {
}

void LBSB::setXV(double v) {
	for(int i=0;i<_xsize;i++)
		for(int j=0;j<_ysize;j++)
			_v->get(i,j)[0] = v;
}


void LBSB::getBoundaryCells(std::vector<utils::Vector<int, 3> >& v, int deltaA, int deltaB) {
	for(int i=deltaA;i<_xsize-deltaA;i++) {
		for(int j=deltaA;j<_ysize-deltaA;j++) {
			if(i <= deltaB || _xsize-deltaB-1 <= i || j <= deltaB || _ysize-deltaB-1 <= j) {
				int tmp[3] = {i,j,0};
				v.push_back(tmp);
			}
		}
	}
	std::sort(v.begin(),v.end());
}

utils::Vector<double, 3> LBSB::getV(utils::Vector<int, 3> cell) {
	utils::Vector<double, 3> ve  = 0.0;
	ve[0] = _v->get(cell[0],cell[1])[0];
	ve[1] = _v->get(cell[0],cell[1])[1];
	double lb2ms = 901.0;
	return ve*lb2ms;
}
	void LBSB::setV(utils::Vector<double, 3> ve, utils::Vector<int, 3> cell) {
		double ms2lb = 1.0/901.0;
		_v->get(cell[0],cell[1])[0] = ve[0]*ms2lb;
		_v->get(cell[0],cell[1])[1] = ve[1]*ms2lb;

	}
void LBSB::calcV() {
	for(int i=0;i<_xsize;i++)
		for(int j=0;j<_ysize;j++) {
			_p->get(i,j) = 0.0;
			_v->get(i,j) = 0.0;
			for(int k=0;k<9;k++) {
				double f_k = _f[k]->get(i,j);
				_p->get(i,j) += f_k;
				_v->get(i,j) = _v->get(i,j) + (c[k]*f_k);
			}
			_v->get(i,j) = _v->get(i,j)* (1.0/_p->get(i,j));
		}


}
void LBSB::clacF() {

	utils::Vector<double, 2> F = 0.0;
	F[0] = 0.000001;
	double cs2 = 1.0/3.0;
	for(int i=0;i<_xsize;i++) {
		for(int j=0;j<_ysize;j++) {
			double vsq = _v->get(i,j)*_v->get(i,j);
			for(int k=0;k<9;k++) {
				double CiV = c[k]*_v->get(i,j);
				double Feq = a[k]*_p->get(i,j)*(1+CiV/cs2+CiV*CiV/(2*cs2*cs2)-vsq/2/cs2);

				_f[k]->get(i,j) = _f[k]->get(i,j) - 1/tau*(_f[k]->get(i,j)-Feq);
				//double Fplus =  a[k]*(c[k]*F/cs2+c[k]*F/(2*cs2*cs2)-F*F/2/cs2);
			//	if(_wave && i==3 && iteration<1)
				//	_f[k]->get(i,j) += Fplus;


				//std::cout << "CiV" << CiV << " " << (ai*_p->get(i,j)) << "F " << Feq << std::endl;
			}
		}
	}
	for(int i=0;i<9;i++)
		_f[i]->modOffset(c[i]);
	if(_wave && iteration<10)
		for(int i=0;i<_xsize;i++) {
			for(int j=0;j<_ysize;j++) {
					if(i==2) {
						std::cout << _f[4]->get(i,j);
						_f[4]->get(i,j) += 300.0;
						std::cout << " "<<_f[4]->get(i,j)<<std::endl;


					}

			}
		}

	iteration++;
}

double LBSB::GaussDeviate() {
	double a1, a2, s, r, b1;
	static int iset = 0;
	static double b2;

	if (!iset) {
		do {
			a1 = 2.0 * rand() / (RAND_MAX + 1.0) - 1.0;
			a2 = 2.0 * rand() / (RAND_MAX + 1.0) - 1.0;
			r = a1 * a1 + a2 * a2;
		} while (r >= 1.0);
		s = sqrt(-2.0 * log(r) / r);
		b1 = a1 * s;
		b2 = a2 * s;
		iset = 1;
		return b1;
	} else {
		iset = 0;
		return b2;
	}
}
