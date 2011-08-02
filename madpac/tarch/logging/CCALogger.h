// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#if !defined(_TARCH_LOGGING_CCA_LOGGER_H_) && defined(CCA)
#define _TARCH_LOGGING_CCA_LOGGER_H_


#include "peano/integration/cca/ports/Log.h"

#include "tarch/services/Service.h"


namespace tarch {
  namespace logging {
    class CCALogger;
  }
}



/**
 * CCA Logger
 *
 * Logger for sciCode.
 * This is the logger that is used if you are using Peano within sciCoDE, i.e.
 * if you use the compile flag -DCCA. See the class Log. This class forwards all
 * calls either to CommandLineLogger (without CCA) or to this class.
 *
 * !!! Usage
 *
 * If you wanna use the logging within your CCA component, add the following
 * code snippet to your implementation class before you do something with Peano:
\code

\endcode
 *
 * Please remember that the ports might change from time to time, i.e. it is
 * save to call a disconnect on the CCALogger after each iteration (sequence),
 * i.e. before the sciCoDE routine leaves, and to add this connect statement
 * just in the beginning of every routine that implements a provides port
 * operation. In the puregrid, you find a very simple example of this behaviour.
 *
 * @author Tobias Weinzierl
 */
class tarch::logging::CCALogger: public tarch::services::Service {
  private:
    CCALogger();

    int _indentLevel;

    peano::integration::cca::ports::Log* _log;
  public:
    ~CCALogger();

    static CCALogger& getInstance();

    void debug(      const long int& timestampMS, const std::string& timestampHumanReadable, const std::string& machineName, const std::string& trace, const std::string& message);
    void info(       const long int& timestampMS, const std::string& timestampHumanReadable, const std::string& machineName, const std::string& trace, const std::string& message);
    void warning(    const long int& timestampMS, const std::string& timestampHumanReadable, const std::string& machineName, const std::string& trace, const std::string& message);
    void error(      const long int& timestampMS, const std::string& timestampHumanReadable, const std::string& machineName, const std::string& trace, const std::string& message);

    void indent( bool indent );

    virtual void receiveDanglingMessages();

    void connect(peano::integration::cca::ports::Log* const log);
    void disconnect();
};

#endif
