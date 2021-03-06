// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _TARCH_ASSERTIONS_H_
#define _TARCH_ASSERTIONS_H_

#ifdef Asserts
#include <stdio.h>
#include <stdlib.h>
#endif


  /**
   * Define the assert macro. An assertion is given a boolean expression. If
   * the expression isn't true, the program immediatly quits giving the user
   * filename and line of the assertion failed. Assertions should be used to
   * verify preconditions and invariants but may not be used to validate any
   * arguments given by users. If the assertion fails, the program quits with
   * error code ASSERTION_EXIT_CODE.
   *
   * Whenever possible one should use the assertion macro assertMsg instead of
   * the pure assert. This operation is given an additional message
   * describing what the assertion does verify. This enables the programmer to
   * identify failures immediately.
   */
  #define ASSERTION_EXIT_CODE -1

  #define setAssertionOutputFormat { \
    std::cerr.setf( std::ios_base::scientific, std::ios_base::floatfield ); \
    std::cerr.precision(20); \
  }

  #ifdef Asserts
    #include "tarch/logging/Log.h"
    #define assertionTriggersExit { \
      exit(ASSERTION_EXIT_CODE); \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument has to be a boolean expression that has to hold. Otherwise
     * assertion will fail.
     */
    #define assertion(expr) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameter
     * param is plotted to the command line. The parameter has to provide
     * \code operator<< \endcode
     */
    #define assertion1(expr,param) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param << ": " << param << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertion2(expr,param0,param1) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param0 << ": " << param0 << std::endl; \
      std::cerr << "parameter " << #param1 << ": " << param1 << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertion3(expr,param0,param1,param2) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param0 << ": " << param0 << std::endl; \
      std::cerr << "parameter " << #param1 << ": " << param1 << std::endl; \
      std::cerr << "parameter " << #param2 << ": " << param2 << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertion4(expr,param0,param1,param2,param3) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param0 << ": " << param0 << std::endl; \
      std::cerr << "parameter " << #param1 << ": " << param1 << std::endl; \
      std::cerr << "parameter " << #param2 << ": " << param2 << std::endl; \
      std::cerr << "parameter " << #param3 << ": " << param3 << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertion5(expr,param0,param1,param2,param3,param4) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param0 << ": " << param0 << std::endl; \
      std::cerr << "parameter " << #param1 << ": " << param1 << std::endl; \
      std::cerr << "parameter " << #param2 << ": " << param2 << std::endl; \
      std::cerr << "parameter " << #param3 << ": " << param3 << std::endl; \
      std::cerr << "parameter " << #param4 << ": " << param4 << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertion6(expr,param0,param1,param2,param3,param4,param5) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param0 << ": " << param0 << std::endl; \
      std::cerr << "parameter " << #param1 << ": " << param1 << std::endl; \
      std::cerr << "parameter " << #param2 << ": " << param2 << std::endl; \
      std::cerr << "parameter " << #param3 << ": " << param3 << std::endl; \
      std::cerr << "parameter " << #param4 << ": " << param4 << std::endl; \
      std::cerr << "parameter " << #param5 << ": " << param5 << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertion7(expr,param0,param1,param2,param3,param4,param5,param6) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param0 << ": " << param0 << std::endl; \
      std::cerr << "parameter " << #param1 << ": " << param1 << std::endl; \
      std::cerr << "parameter " << #param2 << ": " << param2 << std::endl; \
      std::cerr << "parameter " << #param3 << ": " << param3 << std::endl; \
      std::cerr << "parameter " << #param4 << ": " << param4 << std::endl; \
      std::cerr << "parameter " << #param5 << ": " << param5 << std::endl; \
      std::cerr << "parameter " << #param6 << ": " << param6 << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertion8(expr,param0,param1,param2,param3,param4,param5,param6,param7) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param0 << ": " << param0 << std::endl; \
      std::cerr << "parameter " << #param1 << ": " << param1 << std::endl; \
      std::cerr << "parameter " << #param2 << ": " << param2 << std::endl; \
      std::cerr << "parameter " << #param3 << ": " << param3 << std::endl; \
      std::cerr << "parameter " << #param4 << ": " << param4 << std::endl; \
      std::cerr << "parameter " << #param5 << ": " << param5 << std::endl; \
      std::cerr << "parameter " << #param6 << ": " << param6 << std::endl; \
      std::cerr << "parameter " << #param7 << ": " << param7 << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * First argument has to be a boolean expression that has to hold.
     * Otherwise assertion will fail. If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertion9(expr,param0,param1,param2,param3,param4,param5,param6,param7,param8) if (!(expr)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr <<  std::endl; \
      std::cerr << "parameter " << #param0 << ": " << param0 << std::endl; \
      std::cerr << "parameter " << #param1 << ": " << param1 << std::endl; \
      std::cerr << "parameter " << #param2 << ": " << param2 << std::endl; \
      std::cerr << "parameter " << #param3 << ": " << param3 << std::endl; \
      std::cerr << "parameter " << #param4 << ": " << param4 << std::endl; \
      std::cerr << "parameter " << #param5 << ": " << param5 << std::endl; \
      std::cerr << "parameter " << #param6 << ": " << param6 << std::endl; \
      std::cerr << "parameter " << #param7 << ": " << param7 << std::endl; \
      std::cerr << "parameter " << #param8 << ": " << param8 << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     */
    #define assertionEquals(lhs,rhs) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     */
    #define assertionEqualsMsg(lhs,rhs,msg) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << msg << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     * If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionEquals1(lhs,rhs,larg) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #larg << ": " << larg << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     * If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionEquals2(lhs,rhs,larg,rarg) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "left argument " << #larg << ": " << larg << std::endl; \
      std::cerr << "right argument " << #rarg << ": " << rarg << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     * If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionEquals3(lhs,rhs,larg,rarg,three) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #larg << ": " << larg << std::endl; \
      std::cerr << "2nd argument " << #rarg << ": " << rarg << std::endl; \
      std::cerr << "3rd argument " << #three << ": " << three << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     * If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionEquals4(lhs,rhs,larg,rarg,three,four) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #larg << ": " << larg << std::endl; \
      std::cerr << "2nd argument " << #rarg << ": " << rarg << std::endl; \
      std::cerr << "3rd argument " << #three << ": " << three << std::endl; \
      std::cerr << "4th argument " << #four << ": " << four << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     * If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionEquals5(lhs,rhs,larg,rarg,three,four,five) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #larg << ": " << larg << std::endl; \
      std::cerr << "2nd argument " << #rarg << ": " << rarg << std::endl; \
      std::cerr << "3rd argument " << #three << ": " << three << std::endl; \
      std::cerr << "4th argument " << #four << ": " << four << std::endl; \
      std::cerr << "5th argument " << #five << ": " << five << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     * If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionEquals6(lhs,rhs,larg,rarg,three,four,five,six) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #larg << ": " << larg << std::endl; \
      std::cerr << "2nd argument " << #rarg << ": " << rarg << std::endl; \
      std::cerr << "3rd argument " << #three << ": " << three << std::endl; \
      std::cerr << "4th argument " << #four << ": " << four << std::endl; \
      std::cerr << "5th argument " << #five << ": " << five << std::endl; \
      std::cerr << "6th argument " << #six << ": " << six << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     * If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionEquals7(lhs,rhs,larg,rarg,three,four,five,six,seven) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #larg << ": " << larg << std::endl; \
      std::cerr << "2nd argument " << #rarg << ": " << rarg << std::endl; \
      std::cerr << "3rd argument " << #three << ": " << three << std::endl; \
      std::cerr << "4th argument " << #four << ": " << four << std::endl; \
      std::cerr << "5th argument " << #five << ": " << five << std::endl; \
      std::cerr << "6th argument " << #six << ": " << six << std::endl; \
      std::cerr << "7th argument " << #seven << ": " << seven << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal. Otherwise assertion will fail.
     * To compare them, the operator \code operator== \endcode is used.
     * If the assertion fails, the parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionEquals8(lhs,rhs,larg,rarg,three,four,five,six,seven,eight) if ((lhs)!=(rhs)) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #larg << ": " << larg << std::endl; \
      std::cerr << "2nd argument " << #rarg << ": " << rarg << std::endl; \
      std::cerr << "3rd argument " << #three << ": " << three << std::endl; \
      std::cerr << "4th argument " << #four << ": " << four << std::endl; \
      std::cerr << "5th argument " << #five << ": " << five << std::endl; \
      std::cerr << "6th argument " << #six << ": " << six << std::endl; \
      std::cerr << "7th argument " << #seven << ": " << seven << std::endl; \
      std::cerr << "8th argument " << #eight << ": " << eight << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     */
    #define assertionNumericalEquals(lhs,rhs) if (!tarch::la::equals( (lhs),(rhs) )) { setAssertionOutputFormat; std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; assertionTriggersExit; }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals1(lhs,rhs,a) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "argument " << #a << ": " << a << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals2(lhs,rhs,larg,rarg) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "left argument " << #larg << ": " << larg << std::endl; \
      std::cerr << "right argument " << #rarg << ": " << rarg << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals3(lhs,rhs,a,b,c) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "first argument " << #a << ": " << a << std::endl; \
      std::cerr << "second argument " << #b << ": " << b << std::endl; \
      std::cerr << "third argument " << #c << ": " << c << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals4(lhs,rhs,a,b,c,d) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #a << ": " << a << std::endl; \
      std::cerr << "2nd argument " << #b << ": " << b << std::endl; \
      std::cerr << "3rd argument " << #c << ": " << c << std::endl; \
      std::cerr << "4th argument " << #d << ": " << d << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals5(lhs,rhs,a,b,c,d,e) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #a << ": " << a << std::endl; \
      std::cerr << "2nd argument " << #b << ": " << b << std::endl; \
      std::cerr << "3rd argument " << #c << ": " << c << std::endl; \
      std::cerr << "4th argument " << #d << ": " << d << std::endl; \
      std::cerr << "5th argument " << #e << ": " << e << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals6(lhs,rhs,a,b,c,d,e,f) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #a << ": " << a << std::endl; \
      std::cerr << "2nd argument " << #b << ": " << b << std::endl; \
      std::cerr << "3rd argument " << #c << ": " << c << std::endl; \
      std::cerr << "4th argument " << #d << ": " << d << std::endl; \
      std::cerr << "5th argument " << #e << ": " << e << std::endl; \
      std::cerr << "6th argument " << #f << ": " << f << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals7(lhs,rhs,a,b,c,d,e,f,g) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #a << ": " << a << std::endl; \
      std::cerr << "2nd argument " << #b << ": " << b << std::endl; \
      std::cerr << "3rd argument " << #c << ": " << c << std::endl; \
      std::cerr << "4th argument " << #d << ": " << d << std::endl; \
      std::cerr << "5th argument " << #e << ": " << e << std::endl; \
      std::cerr << "6th argument " << #f << ": " << f << std::endl; \
      std::cerr << "7th argument " << #g << ": " << g << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals8(lhs,rhs,a,b,c,d,e,f,g,h) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #a << ": " << a << std::endl; \
      std::cerr << "2nd argument " << #b << ": " << b << std::endl; \
      std::cerr << "3rd argument " << #c << ": " << c << std::endl; \
      std::cerr << "4th argument " << #d << ": " << d << std::endl; \
      std::cerr << "5th argument " << #e << ": " << e << std::endl; \
      std::cerr << "6th argument " << #f << ": " << f << std::endl; \
      std::cerr << "7th argument " << #g << ": " << g << std::endl; \
      std::cerr << "8th argument " << #h << ": " << h << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     *
     * If the assertion fails, the additional parameters
     * are plotted to the command line. The parameters thus have to provide
     * \code operator<< \endcode
     */
    #define assertionNumericalEquals9(lhs,rhs,a,b,c,d,e,f,g,h,i) if (!tarch::la::equals( (lhs),(rhs) )) { \
      setAssertionOutputFormat; \
      std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #lhs << "==" #rhs << std::endl << #lhs << "=" << lhs << "\t == \t" << #rhs << "=" << rhs << std::endl; \
      std::cerr << "1st argument " << #a << ": " << a << std::endl; \
      std::cerr << "2nd argument " << #b << ": " << b << std::endl; \
      std::cerr << "3rd argument " << #c << ": " << c << std::endl; \
      std::cerr << "4th argument " << #d << ": " << d << std::endl; \
      std::cerr << "5th argument " << #e << ": " << e << std::endl; \
      std::cerr << "6th argument " << #f << ": " << f << std::endl; \
      std::cerr << "7th argument " << #g << ": " << g << std::endl; \
      std::cerr << "8th argument " << #h << ": " << h << std::endl; \
      std::cerr << "9th argument " << #i << ": " << i << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Argument lhs and rhs have to be of type Vector. Their entries have to be
     * equal besides the machine precision.
     * Otherwise assertion will fail. The machine precision is evaluated via
     * equals().
     */
    #define assertionVectorNumericalEquals(lhs,rhs) for (int d=0; d<DIMENSIONS; d++) { assertionNumericalEquals1(lhs(d),rhs(d),d); }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * Equals assertion(). Yet, if the assertion fails, message is written to
     * the terminal. Thus, message should have type string or char.
     */
    #define assertionMsg(expr,message) if (!(expr)) { \
      setAssertionOutputFormat; std::cerr << "assertion in file " << __FILE__ << ", line " << __LINE__ << " failed: " << #expr << std::endl << message << std::endl ; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }

    /**
     * @see ASSERTION_EXIT_CODE
     *
     * This assertion fails always and then prints a message.
     */
    #define assertionFail(message) { \
      setAssertionOutputFormat; std::cerr << "fail-assertion in file " << __FILE__ << ", line " << __LINE__ <<  std::endl << message << std::endl; \
      std::cerr.flush(); \
      assertionTriggersExit; \
    }
  #else
    #define assertion(expr)
    #define assertion1(expr,param)
    #define assertion2(expr,param0,param1)
    #define assertion3(expr,param0,param1,param2)
    #define assertion4(expr,param0,param1,param2,param3)
    #define assertion5(expr,param0,param1,param2,param3,param4)
    #define assertion6(expr,param0,param1,param2,param3,param4,param5)
    #define assertion7(expr,param0,param1,param2,param3,param4,param5,param6)
    #define assertion8(expr,param0,param1,param2,param3,param4,param5,param6,param7)
    #define assertion9(expr,param0,param1,param2,param3,param4,param5,param6,param7,param8)
    #define assertionEquals(lhs,rhs)
    #define assertionEqualsMsg(lhs,rhs,msg)
    #define assertionEquals1(lhs,rhs,a)
    #define assertionEquals2(lhs,rhs,a,b)
    #define assertionEquals3(lhs,rhs,a,b,c)
    #define assertionEquals4(lhs,rhs,larg,rarg,three,four)
    #define assertionEquals5(lhs,rhs,larg,rarg,three,four,five)
    #define assertionEquals6(lhs,rhs,larg,rarg,three,four,five,six)
    #define assertionEquals7(lhs,rhs,larg,rarg,three,four,five,six,seven)
    #define assertionEquals8(lhs,rhs,larg,rarg,three,four,five,six,seven,eight)
    #define assertionNumericalEquals(lhs,rhs)
    #define assertionNumericalEquals1(lhs,rhs,a)
    #define assertionNumericalEquals2(lhs,rhs,a,b)
    #define assertionNumericalEquals3(lhs,rhs,a,b,c)
    #define assertionNumericalEquals4(lhs,rhs,a,b,c,d)
    #define assertionNumericalEquals5(lhs,rhs,a,b,c,d,e)
    #define assertionNumericalEquals6(lhs,rhs,a,b,c,d,e,f)
    #define assertionNumericalEquals7(lhs,rhs,a,b,c,d,e,f,g)
    #define assertionNumericalEquals8(lhs,rhs,a,b,c,d,e,f,g,h)
    #define assertionNumericalEquals9(lhs,rhs,a,b,c,d,e,f,g,h,i)
    #define assertionVectorNumericalEquals(lhs,rhs)
    #define assertionMsg(expr,message)
    #define assertionFail(message)
  #endif

#endif
