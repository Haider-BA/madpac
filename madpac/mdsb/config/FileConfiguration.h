/*
 * FileConfiguration.h
 *
 * @Date: 07.10.2010
 * @Author: eckhardw
 */

#ifndef FILECONFIGURATION_H_
#define FILECONFIGURATION_H_

#include <string>

class FileConfiguration {

public:

	FileConfiguration(std::string inputFilename);

	virtual ~FileConfiguration();

    std::string getInputFilename() const
    {
        return _inputFilename;
    }

private:

	std::string _inputFilename;
};

#endif /* FILECONFIGURATION_H_ */
