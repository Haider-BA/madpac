#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_STATISTICS_TO_REMOTE
#define PEANO_INTEGRATION_CCA_PORTS_GRID_STATISTICS_TO_REMOTE

#include "peano/integration/cca/ports/grid/Statistics.h"
#include <iostream>
#include <string.h>
#include <vector>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class StatisticsToRemotePortImplementation ;
        }
      }
    }
  }
}

class peano::integration::cca::ports::grid::StatisticsToRemotePortImplementation: public peano::integration::cca::ports::grid::Statistics {
private:
  std::string _path;
  std::string _portIdentifier;
  
public:
  StatisticsToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier);
  
  virtual ~StatisticsToRemotePortImplementation();
  
  virtual void addAdapterRuntime(const std::string& adapterName, const long long& numberOfAdapterRuns, const double& CPUTime, const double& calendarTime);
  virtual void checkForAcks_addAdapterRuntime();
  virtual void setMemoryFootprint(const long long& bytesPerCell, const long long& bytesPerVertex, const long long& bytesPerPersistentCell, const long long& bytesPerPersistentVertex, const long long& bytesPerState);
  virtual void checkForAcks_setMemoryFootprint();
  

};
#endif 
