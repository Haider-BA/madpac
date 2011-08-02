#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_STATISTICS
#define PEANO_INTEGRATION_CCA_PORTS_GRID_STATISTICS

#include <string>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class Statistics ;
        }
      }
    }
  }
}
class peano::integration::cca::ports::grid::Statistics {
public:
  
  virtual ~Statistics() {}
  
  virtual void addAdapterRuntime(const std::string& adapterName, const long long& numberOfAdapterRuns, const double& CPUTime, const double& calendarTime) = 0
  ;
  virtual void setMemoryFootprint(const long long& bytesPerCell, const long long& bytesPerVertex, const long long& bytesPerPersistentCell, const long long& bytesPerPersistentVertex, const long long& bytesPerState) = 0
  ;
  

};
#endif 
