/*
 * Assertion.h
 *
 * @Date: 13.10.2010
 * @Author: eckhardw
 */

#ifndef ASSERTION_H_
#define ASSERTION_H_

#include <log4cxx/logger.h>
#include <cstdlib>

/**
 * In DEBUG-Mode, define an assert.
 */
#ifdef DEBUG
/**
 * Assertion with 2 parameters
 */
#define ASSERT(expr, arg1, arg2) { if (!(expr)) {\
	                       LOG4CXX_FATAL(logger, " ASSERTION failed in file: " << __FILE__ << " \t line: " << __LINE__ ) \
                           LOG4CXX_FATAL(logger, "statement: " << #expr ); \
                           LOG4CXX_FATAL(logger, "argument: " << #arg1 << ":" << arg1); \
                           LOG4CXX_FATAL(logger, "argument: " << #arg2 << ":" << arg2); \
                           exit(-1);\
                     } \
}

#define ASSERT3(expr, arg1, arg2, arg3) { if (!(expr)) {\
	                       LOG4CXX_FATAL(logger, " ASSERTION failed in file: " << __FILE__ << " \t line: " << __LINE__ ) \
                           LOG4CXX_FATAL(logger, "statement: " << #expr ); \
                           LOG4CXX_FATAL(logger, "argument: " << #arg1 << ":" << arg1); \
                           LOG4CXX_FATAL(logger, "argument: " << #arg2 << ":" << arg2); \
                           LOG4CXX_FATAL(logger, "argument: " << #arg3 << ":" << arg3); \
                           exit(-1);\
                     } \
}
#else
#define ASSERT(expr, arg1, arg2)

#define ASSERT3(expr, arg1, arg2, arg3)
#endif

#endif /* ASSERTION_H_ */
