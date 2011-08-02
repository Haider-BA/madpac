#ifndef VELOCITYWRITER_H_
#define VELOCITYWRITER_H_

#include "io/OutputBase.h"
#include "ensemble/GrandCanonical.h"
#include <string>
#include <fstream>

class ParticleContainer;
class DomainDecompBase; 
class Domain;



class VelocityWriter : public OutputBase {
public:
	VelocityWriter();
	~VelocityWriter();
	//! @todo comment
	void initOutput(ParticleContainer* particleContainer,
			DomainDecompBase* domainDecomp, Domain* domain);
	//! @todo comment
	void doOutput(
			ParticleContainer* particleContainer,
			DomainDecompBase* domainDecomp, Domain* domain,
			unsigned long simstep, std::list<ChemicalPotential>* lmu
	);
	//! @todo comment
	void finishOutput(ParticleContainer* particleContainer,
			DomainDecompBase* domainDecomp, Domain* domain);

private:
	//! prefix for the names of all output files
	std::ofstream _resultStream;
	unsigned long _writeFrequency;
	std::string _outputPrefix;

	double _velocityAccumulated[3];
};

#endif /*RESULTWRITER_H_*/
