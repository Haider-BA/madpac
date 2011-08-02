/*
 * Timer.h
 *
 * @Date: 11.01.2011
 * @Author: eckhardw
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "log4cxx/logger.h"

#include <time.h>

namespace utils {

class Timer {

public:
	Timer();

	virtual ~Timer();

	/** start the timer */
	void start();

	/** stops the timer and returns the time elapsed in seconds*/
	double stop();

private:
	struct timespec _startTime;

	static log4cxx::LoggerPtr logger;
};

}
#endif /* TIMER_H_ */
