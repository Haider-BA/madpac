#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_STATISTICS_TO_JNI
#define PEANO_INTEGRATION_CCA_PORTS_GRID_STATISTICS_TO_JNI

#include "peano/integration/cca/ports/grid/Statistics.h"
#include <iostream>
#include <jni.h>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class StatisticsToJNIPortImplementation ;
        }
      }
    }
  }
}

class peano::integration::cca::ports::grid::StatisticsToJNIPortImplementation: public peano::integration::cca::ports::grid::Statistics {
private:
  JavaVM* _jvm;
  jobject _obj;
  std::string _portIdentifier;
  
public:
  StatisticsToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier);
  
  virtual ~StatisticsToJNIPortImplementation();
  
  virtual void addAdapterRuntime(const std::string& adapterName, const long long& numberOfAdapterRuns, const double& CPUTime, const double& calendarTime);
  virtual void setMemoryFootprint(const long long& bytesPerCell, const long long& bytesPerVertex, const long long& bytesPerPersistentCell, const long long& bytesPerPersistentVertex, const long long& bytesPerState);
  

};
#endif 
