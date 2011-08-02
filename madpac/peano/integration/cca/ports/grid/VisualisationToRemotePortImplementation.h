#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_VISUALISATION_TO_REMOTE
#define PEANO_INTEGRATION_CCA_PORTS_GRID_VISUALISATION_TO_REMOTE

#include "peano/integration/cca/ports/grid/Visualisation.h"
#include <iostream>
#include <string.h>
#include <vector>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class VisualisationToRemotePortImplementation ;
        }
      }
    }
  }
}

class peano::integration::cca::ports::grid::VisualisationToRemotePortImplementation: public peano::integration::cca::ports::grid::Visualisation {
private:
  std::string _path;
  std::string _portIdentifier;
  
public:
  VisualisationToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier);
  
  virtual ~VisualisationToRemotePortImplementation();
  
  virtual void addGridCell(const long long& dimension, const double* x,long x_len, const double* h,long h_len, const long long& level);
  virtual void checkForAcks_addGridCell();
  virtual void addGridVertex(const long long& dimension, const double* x,long x_len, const long long& level);
  virtual void checkForAcks_addGridVertex();
  

};
#endif 
