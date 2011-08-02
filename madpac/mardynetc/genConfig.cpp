/*
 * genConfig.cpp
 *
 *  Created on: 06.06.2011
 *      Author: ph
 */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

static double GaussDeviate() {
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


int main(int argc, char** argv) {
	double rho;
	double t;
	double xSize,ySize,zSize;
	double v1, v2,v3;
	double numP;
	double xNum, yNum,zNum;
	double cutoff;
	srand(time(NULL));
	//cin >> rho;
	cin >> cutoff;
	cin >> t;
	cin >> xSize >> ySize >> zSize;
	cin >> xNum >> yNum >> zNum;
	cin >> v1 >> v2 >> v3;
	numP = xNum*yNum*zNum;
	cout << "mardyn trunk 20090731" << endl;
	cout << "currentTime	0.0" << endl;
	cout << "#rho	0.0438273" << endl;
	cout << "Temperature	"<<t<<endl;
	cout << "Length	"<<xSize<<"	"<<ySize<<"	"<<zSize<<endl;
	cout <<"NumberOfComponents	1"<<endl;
	cout <<"1 0 0 0 0"<<endl;
	cout<< "0. 0. 0.	1.	1. 1. "<<cutoff<<" 0.0"<<endl;
	cout<<"0. 0. 0."<<endl;
	cout<<"1.0e+10"<<endl;
	cout <<"NumberOfMolecules	"<<numP<<endl;
	cout<<"MoleculeFormat	ICRV"<<endl;
	double mass = 1;
	double dimensions = 3;
	double velocity = 2.0 * t / (double)(dimensions * numP * mass);
	double meanVelocity = sqrt(velocity);
	float xSpace = xSize/xNum;
	float ySpace = ySize/yNum;
	float zSpace = zSize/zNum;
	int index =0;
	for(int i=0;i<xNum;i++) {
		for(int j=0;j<yNum;j++) {
			for(int k=0;k<zNum;k++) {
				
				double v1tmp  = v1 + ((v1+meanVelocity) * GaussDeviate());
				double v2tmp  = v2 + ((v2+meanVelocity) * GaussDeviate());
				double v3tmp  = v3 + ((v3+meanVelocity) * GaussDeviate());
				index++;
				cout << index<<"	1	"<<(xSpace/2.0+xSpace*i)<<" "<<(ySpace/2.0+ySpace*j)<<" "<<(zSpace/2.0+zSpace*k)<<"	"<<v1tmp<<" "<<v2tmp<<" "<<v3tmp<<" "<<endl;
			}
		}
	}
}
