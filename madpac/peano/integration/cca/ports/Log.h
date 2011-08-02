#ifndef PEANO_INTEGRATION_CCA_PORTS_LOG
#define PEANO_INTEGRATION_CCA_PORTS_LOG

#include <string>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        class Log ;
      }
    }
  }
}
class peano::integration::cca::ports::Log {
public:
  
  virtual ~Log() {}
  
  virtual void debug(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message) = 0
  ;
  virtual void info(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message) = 0
  ;
  virtual void warning(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message) = 0
  ;
  virtual void error(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message) = 0
  ;
  

};
#endif 
