#ifndef PEANO_INTEGRATION_CCA_PORTS_LOG_TO_REMOTE
#define PEANO_INTEGRATION_CCA_PORTS_LOG_TO_REMOTE

#include "peano/integration/cca/ports/Log.h"
#include <iostream>
#include <string.h>
#include <vector>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        class LogToRemotePortImplementation ;
      }
    }
  }
}

class peano::integration::cca::ports::LogToRemotePortImplementation: public peano::integration::cca::ports::Log {
private:
  std::string _path;
  std::string _portIdentifier;
  
public:
  LogToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier);
  
  virtual ~LogToRemotePortImplementation();
  
  virtual void debug(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message);
  virtual void checkForAcks_debug();
  virtual void info(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message);
  virtual void checkForAcks_info();
  virtual void warning(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message);
  virtual void checkForAcks_warning();
  virtual void error(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message);
  virtual void checkForAcks_error();
  

};
#endif 
