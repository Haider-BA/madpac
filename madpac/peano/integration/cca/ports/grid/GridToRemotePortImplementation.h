#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_GRID_TO_REMOTE
#define PEANO_INTEGRATION_CCA_PORTS_GRID_GRID_TO_REMOTE

#include "peano/integration/cca/ports/grid/Grid.h"
#include <iostream>
#include <string.h>
#include <vector>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class GridToRemotePortImplementation ;
        }
      }
    }
  }
}

class peano::integration::cca::ports::grid::GridToRemotePortImplementation: public peano::integration::cca::ports::grid::Grid {
private:
  std::string _path;
  std::string _portIdentifier;
  
public:
  GridToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier);
  
  virtual ~GridToRemotePortImplementation();
  
  virtual void getNumberOfInnerVertices(double& vertices);
  virtual void checkForAcks_getNumberOfInnerVertices(double& vertices);
  virtual void getNumberOfBoundaryVertices(double& vertices);
  virtual void checkForAcks_getNumberOfBoundaryVertices(double& vertices);
  virtual void getNumberOfOuterVertices(double& vertices);
  virtual void checkForAcks_getNumberOfOuterVertices(double& vertices);
  virtual void getNumberOfInnerCells(double& cells);
  virtual void checkForAcks_getNumberOfInnerCells(double& cells);
  virtual void getNumberOfOuterCells(double& cells);
  virtual void checkForAcks_getNumberOfOuterCells(double& cells);
  virtual void getMaximumMeshWidth(const long long& dimension, double& h);
  virtual void checkForAcks_getMaximumMeshWidth(double& h);
  virtual void getMinimumMeshWidth(const long long& dimension, double& h);
  virtual void checkForAcks_getMinimumMeshWidth(double& h);
  

};
#endif 
