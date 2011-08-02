#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_PORTS_BLOCKLATTICEBOLTZMANNBATCHJOB_TO_JNI
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_PORTS_BLOCKLATTICEBOLTZMANNBATCHJOB_TO_JNI

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob.h"
#include <iostream>
#include <jni.h>

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace cca {
          namespace ports {
            class BlockLatticeBoltzmannBatchJobToJNIPortImplementation ;
          }
        }
      }
    }
  }
}

class peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToJNIPortImplementation: public peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJob {
private:
  JavaVM* _jvm;
  jobject _obj;
  std::string _portIdentifier;
  
public:
  BlockLatticeBoltzmannBatchJobToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier);
  
  virtual ~BlockLatticeBoltzmannBatchJobToJNIPortImplementation();
  
  virtual void switchToRegularBlockSolverAdapter();
  virtual void switchToBlockVTKOutputAdapter();
  virtual void switchToRegularBlockSolverAndVTKOutputAdapter();
  virtual void iterate();
  

};
#endif 
