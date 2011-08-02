/*
 * FileInitializer.h
 *
 * @Date: 30.09.2010
 * @Author: eckhardw
 */

#ifndef FILEINITIALIZER_H_
#define FILEINITIALIZER_H_

#include "Initializer.h"

#include <string>

/**
 * Add particles to the container which are read from a file.
 */
class FileInitializer: public Initializer {

public:
	FileInitializer(const char* fileName);

	virtual ~FileInitializer();

	void initialize(ParticleContainer& container);

private:
	const std::string _fileName;

	int _typeID;
};

#endif /* FILEINITIALIZER_H_ */
