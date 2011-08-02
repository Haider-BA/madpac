#if defined(CCA)
#include "tarch/logging/CCALogger.h"
#include "tarch/Assertions.h"


#include <iostream>


tarch::logging::CCALogger::CCALogger():
  _indentLevel(0),
  _log(0) {
}


tarch::logging::CCALogger::~CCALogger() {
  if (_log!=0) {
    std::cerr << std::endl << "warning: CCALogger is destroyed although component is still connected to a logging component" << std::endl;
  }
}


tarch::logging::CCALogger& tarch::logging::CCALogger::getInstance() {
  static tarch::logging::CCALogger singleton;
  return singleton;
}


void tarch::logging::CCALogger::debug(const long int& timestampMS, const std::string& timestampHumanReadable, const std::string& machineName, const std::string& trace, const std::string& message) {
  if (_log != 0) {
    _log->debug(_indentLevel,timestampMS,timestampHumanReadable,machineName,trace,message);
  }
}


void tarch::logging::CCALogger::info(const long int& timestampMS, const std::string& timestampHumanReadable, const std::string& machineName, const std::string& trace, const std::string& message) {
  if (_log != 0) {
    _log->info(_indentLevel,timestampMS,timestampHumanReadable,machineName,trace,message);
  }
}


void tarch::logging::CCALogger::warning(const long int& timestampMS, const std::string& timestampHumanReadable, const std::string& machineName, const std::string& trace, const std::string& message) {
  if (_log != 0) {
    _log->warning(_indentLevel,timestampMS,timestampHumanReadable,machineName,trace,message);
  }
}


void tarch::logging::CCALogger::error(const long int& timestampMS, const std::string& timestampHumanReadable, const std::string& machineName, const std::string& trace, const std::string& message) {
  if (_log != 0) {
    _log->error(_indentLevel,timestampMS,timestampHumanReadable,machineName,trace,message);
  }
}


void tarch::logging::CCALogger::indent( bool indent ) {
  if (indent) {
    _indentLevel++;
  }
  else {
    _indentLevel--;
    assertion( _indentLevel>=0 );
  }
}


void tarch::logging::CCALogger::receiveDanglingMessages() {
  assertionMsg( false, "not implemented yet" );
}


void tarch::logging::CCALogger::connect(peano::integration::cca::ports::Log* const log) {
  assertion( _log == 0 );
  assertion( log != 0 );
  _log = log;
}


void tarch::logging::CCALogger::disconnect() {
  _log = 0;
}


#endif
