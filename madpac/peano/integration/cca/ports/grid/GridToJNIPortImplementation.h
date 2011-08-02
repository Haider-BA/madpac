#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_GRID_TO_JNI
#define PEANO_INTEGRATION_CCA_PORTS_GRID_GRID_TO_JNI

#include "peano/integration/cca/ports/grid/Grid.h"
#include <iostream>
#include <jni.h>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class GridToJNIPortImplementation ;
        }
      }
    }
  }
}

class peano::integration::cca::ports::grid::GridToJNIPortImplementation: public peano::integration::cca::ports::grid::Grid {
private:
  JavaVM* _jvm;
  jobject _obj;
  std::string _portIdentifier;
  
public:
  GridToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier);
  
  virtual ~GridToJNIPortImplementation();
  
  virtual void getNumberOfInnerVertices(double& vertices);
  virtual void getNumberOfBoundaryVertices(double& vertices);
  virtual void getNumberOfOuterVertices(double& vertices);
  virtual void getNumberOfInnerCells(double& cells);
  virtual void getNumberOfOuterCells(double& cells);
  virtual void getMaximumMeshWidth(const long long& dimension, double& h);
  virtual void getMinimumMeshWidth(const long long& dimension, double& h);
  

};
#endif 
