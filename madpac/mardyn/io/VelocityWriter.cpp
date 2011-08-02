/***************************************************************************
 *   Copyright (C) 2010 by Martin Bernreuther <bernreuther@hlrs.de> et al. *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "io/VelocityWriter.h"

#include "particleContainer/ParticleContainer.h"
#include "parallel/DomainDecompBase.h"
#include "Domain.h"

#include <ctime>

#define NUMAV 100.0

using namespace std;

VelocityWriter::VelocityWriter() : _writeFrequency(NUMAV), _outputPrefix("velocity")
{
	_velocityAccumulated[0] = 0;
	_velocityAccumulated[1] = 0;
	_velocityAccumulated[2] = 0;
}

VelocityWriter::~VelocityWriter(){}

void VelocityWriter::initOutput(ParticleContainer* particleContainer,
			      DomainDecompBase* domainDecomp, Domain* domain){
	 
	// initialize result file
	string resultfile(_outputPrefix+".res");
	time_t now;
	time(&now);
	if(domainDecomp->getRank()==0){
		_resultStream.open(resultfile.c_str());
		_resultStream << "# moldy MD simulation starting at " << ctime(&now) << endl;
		_resultStream << "#\tt\t\tVelocities current \t\t velocities av-" << NUMAV << endl;
	}
}

void VelocityWriter::doOutput( ParticleContainer* particleContainer,
														 DomainDecompBase* domainDecomp, Domain* domain,
			     unsigned long simstep, list<ChemicalPotential>* lmu ) 
{


	Molecule* m = particleContainer->begin();
	double velocities[] = {0, 0, 0};
	while (m != particleContainer->end()) {
		for (int i = 0; i < 3; i++) {
			velocities[i] += m->v(i);
			_velocityAccumulated[i] += m->v(i);
		}
		m = particleContainer->next();
	}

	if ((domainDecomp->getRank() == 0) && simstep % ((int)NUMAV) == 0) {
		std::cout << simstep << "\t" << domain->getCurrentTime() << " vx=" << velocities[0] << " vy=" << velocities[1] << " vz="  << velocities[2]
				<< "\t\t " <<  "vx=" << _velocityAccumulated[0]/ NUMAV<< " vy=" << _velocityAccumulated[1]/ NUMAV << " vz="  << _velocityAccumulated[2]/ NUMAV << endl;

		_resultStream << simstep << "\t" << domain->getCurrentTime() << " vx=" << velocities[0] << " vy=" << velocities[1] << " vz="  << velocities[2]
		<< "\t\t " <<  "vx=" << _velocityAccumulated[0]/ NUMAV<< " vy=" << _velocityAccumulated[1]/ NUMAV << " vz="  << _velocityAccumulated[2]/ NUMAV << endl;

		for (int i = 0; i < 3; i++) {
			_velocityAccumulated[i] = 0;
		}
	}
}

void VelocityWriter::finishOutput(ParticleContainer* particleContainer,
				DomainDecompBase* domainDecomp, Domain* domain){
	_resultStream.close();
}
