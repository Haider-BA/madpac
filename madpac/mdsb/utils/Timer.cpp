/*
 * Timer.cpp
 *
 * @Date: 11.01.2011
 * @Author: eckhardw
 */

#include "Timer.h"


log4cxx::LoggerPtr utils::Timer::logger = log4cxx::Logger::getLogger("Timer");

utils::Timer::Timer() {
	struct timespec info;
	if (clock_getres(CLOCK_REALTIME, &info)) {
		LOG4CXX_WARN(logger, "Could not retrieve time resolution!");
	} else {
		LOG4CXX_INFO(logger, "Time resolution is: " << info.tv_sec << " s  " << info.tv_nsec << " ns");
	}
}

utils::Timer::~Timer() {
}

void utils::Timer::start() {
	if (clock_gettime(CLOCK_REALTIME, &_startTime)) {
		LOG4CXX_WARN(logger, "Could not retrieve time!");
	} else {
		LOG4CXX_INFO(logger, "Started timer at " << _startTime.tv_sec << " s  " << _startTime.tv_nsec << " ns");
	}
}


double utils::Timer::stop() {
	struct timespec time;
	if (clock_gettime(CLOCK_REALTIME, &time)) {
		LOG4CXX_WARN(logger, "Could not retrieve time!");
	} else {
		LOG4CXX_INFO(logger, "Stopped timer at " << time.tv_sec << " s  " << time.tv_nsec << " ns");
	}

	double diff = time.tv_sec - _startTime.tv_sec;
	diff += ((double) (time.tv_nsec - _startTime.tv_nsec)) / 1000000000.0;

	return diff;
}
