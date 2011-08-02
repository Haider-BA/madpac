#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_GRID
#define PEANO_INTEGRATION_CCA_PORTS_GRID_GRID

#include <string>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class Grid ;
        }
      }
    }
  }
}
class peano::integration::cca::ports::grid::Grid {
public:
  
  virtual ~Grid() {}
  
  virtual void getNumberOfInnerVertices(double& vertices) = 0
  ;
  virtual void getNumberOfBoundaryVertices(double& vertices) = 0
  ;
  virtual void getNumberOfOuterVertices(double& vertices) = 0
  ;
  virtual void getNumberOfInnerCells(double& cells) = 0
  ;
  virtual void getNumberOfOuterCells(double& cells) = 0
  ;
  virtual void getMaximumMeshWidth(const long long& dimension, double& h) = 0
  ;
  virtual void getMinimumMeshWidth(const long long& dimension, double& h) = 0
  ;
  

};
#endif 
