#ifndef PEANO_INTEGRATION_CCA_PORTS_LOG_TO_JNI
#define PEANO_INTEGRATION_CCA_PORTS_LOG_TO_JNI

#include "peano/integration/cca/ports/Log.h"
#include <iostream>
#include <jni.h>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        class LogToJNIPortImplementation ;
      }
    }
  }
}

class peano::integration::cca::ports::LogToJNIPortImplementation: public peano::integration::cca::ports::Log {
private:
  JavaVM* _jvm;
  jobject _obj;
  std::string _portIdentifier;
  
public:
  LogToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier);
  
  virtual ~LogToJNIPortImplementation();
  
  virtual void debug(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message);
  virtual void info(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message);
  virtual void warning(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message);
  virtual void error(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message);
  

};
#endif 
