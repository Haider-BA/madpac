/*
 * ThermostatConfiguration.h
 *
 * @Date: 12.11.2010
 * @Author: eckhardw
 */

#ifndef THERMOSTATCONFIGURATION_H_
#define THERMOSTATCONFIGURATION_H_

class ThermostatConfiguration {

public:

	ThermostatConfiguration() {}

	virtual ~ThermostatConfiguration() {}
    double getEndTemperature() const
    {
        return _endTemperature;
    }

    double getInitialTemperature() const
    {
        return _initialTemperature;
    }

    unsigned int getEnergySteppingFrequency() const
    {
        return _energySteppingFrequency;
    }

    double getTemperatureStepping() const
    {
        return _temperatureStepping;
    }

    unsigned int getThermostatFrequency() const
    {
        return _thermostatFrequency;
    }

    void setEndTemperature(double _endTemperature)
    {
        this->_endTemperature = _endTemperature;
    }

    void setInitialTemperature(double _initialTemperature)
    {
        this->_initialTemperature = _initialTemperature;
    }

    void setEnergySteppingFrequency(unsigned int _steppingFrequency)
    {
        this->_energySteppingFrequency = _steppingFrequency;
    }

    void setTemperatureStepping(double _temperatureStepping)
    {
        this->_temperatureStepping = _temperatureStepping;
    }

    void setThermostatFrequency(unsigned int _thermostatFrequency)
    {
        this->_thermostatFrequency = _thermostatFrequency;
    }

    /**
     * Note: not completely implemented, the value is set to 1.0 fixed in the
     * configuration.
     */
    double getGamma() const
    {
        return _gamma;
    }

    void setGamma(double _gamma)
    {
        this->_gamma = _gamma;
    }

private:

	double _initialTemperature;

	unsigned int _thermostatFrequency;

	double _endTemperature;

	double _temperatureStepping;

	unsigned int _energySteppingFrequency;

	double _gamma;

};

#endif /* THERMOSTATCONFIGURATION_H_ */
