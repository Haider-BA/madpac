#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_VISUALISATION
#define PEANO_INTEGRATION_CCA_PORTS_GRID_VISUALISATION

#include <string>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class Visualisation ;
        }
      }
    }
  }
}
class peano::integration::cca::ports::grid::Visualisation {
public:
  
  virtual ~Visualisation() {}
  
  virtual void addGridCell(const long long& dimension, const double* x,long x_len, const double* h,long h_len, const long long& level) = 0
  ;
  virtual void addGridVertex(const long long& dimension, const double* x,long x_len, const long long& level) = 0
  ;
  

};
#endif 
