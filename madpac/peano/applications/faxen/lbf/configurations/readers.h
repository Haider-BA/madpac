/*
 * readers.h
 *
 *  Created on: May 25, 2011
 *      Author: denis
 */

#ifndef READERS_H_
#define READERS_H_

#include "peano/utils/Dimensions.h"
#include "tarch/logging/Log.h"
#include "tarch/irr/XML.h"
#include "tarch/la/Vector.h"
#include <string>

namespace peano {

namespace applications {

namespace faxen {

namespace lbf {

namespace configurations {

/** read double scalar from configuration file*/
template <typename T> void readScalar(tarch::irr::io::IrrXMLReader *xmlReader,
		const std::string scalarName, T& scalar, bool& isDefinedScalar, tarch::logging::Log& _log) {
	if ( xmlReader->getAttributeValue( scalarName.c_str() ) == 0 ) {
		logDebug("readScalar()", scalarName << " is not specified");
	}
	else {
		std::stringstream getScalar(std::stringstream::in | std::stringstream::out);
		getScalar << (xmlReader->getAttributeValue(scalarName.c_str()));
		if (! getScalar.eof()){
			getScalar >> scalar;
		} else {
			// throw error
			logError("readScalar()", scalarName << " could not be parsed!");
			assertion(false);
		}
		logDebug("readScalar()", scalarName << ": " << scalar );
		isDefinedScalar = true;
	}
}


/** read double vector from configuration file*/
template <typename T> void readVector(tarch::irr::io::IrrXMLReader *xmlReader,
		const std::string vectorName, tarch::la::Vector<DIMENSIONS,T>& vector, bool& isDefinedScalar,
		tarch::logging::Log& _log){
	if ( xmlReader->getAttributeValue( vectorName.c_str() ) == 0 ) {
		logDebug("readVector()",
				vectorName << " is not specified");
	}
	else {
		std::stringstream getVector((xmlReader->getAttributeValue(vectorName.c_str())),
				std::stringstream::in | std::stringstream::out);
		char   semicolon;
		for (int i = 0; i < DIMENSIONS; i++){
			if (! getVector.eof()){
				getVector >> vector[i];
				getVector >> semicolon;
			} else {
				// throw error
				logError("readVector()", vectorName << " could not be parsed!");
				assertion(false);
				break;
			}
		}
		logDebug("readVector()", vectorName << ": " << vector);
		isDefinedScalar = true;
	}
}

}

}

}

}

}


#endif /* READERS_H_ */
