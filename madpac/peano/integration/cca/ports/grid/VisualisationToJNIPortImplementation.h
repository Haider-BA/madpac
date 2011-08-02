#ifndef PEANO_INTEGRATION_CCA_PORTS_GRID_VISUALISATION_TO_JNI
#define PEANO_INTEGRATION_CCA_PORTS_GRID_VISUALISATION_TO_JNI

#include "peano/integration/cca/ports/grid/Visualisation.h"
#include <iostream>
#include <jni.h>

namespace peano {
  namespace integration {
    namespace cca {
      namespace ports {
        namespace grid {
          class VisualisationToJNIPortImplementation ;
        }
      }
    }
  }
}

class peano::integration::cca::ports::grid::VisualisationToJNIPortImplementation: public peano::integration::cca::ports::grid::Visualisation {
private:
  JavaVM* _jvm;
  jobject _obj;
  std::string _portIdentifier;
  
public:
  VisualisationToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier);
  
  virtual ~VisualisationToJNIPortImplementation();
  
  virtual void addGridCell(const long long& dimension, const double* x,long x_len, const double* h,long h_len, const long long& level);
  virtual void addGridVertex(const long long& dimension, const double* x,long x_len, const long long& level);
  

};
#endif 
