#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_PORTS_BLOCKLATTICEBOLTZMANNBATCHJOB
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_PORTS_BLOCKLATTICEBOLTZMANNBATCHJOB

#include <string>

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace cca {
          namespace ports {
            class BlockLatticeBoltzmannBatchJob ;
          }
        }
      }
    }
  }
}
class peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJob {
public:
  
  virtual ~BlockLatticeBoltzmannBatchJob() {}
  
  virtual void switchToRegularBlockSolverAdapter() = 0
  ;
  virtual void switchToBlockVTKOutputAdapter() = 0
  ;
  virtual void switchToRegularBlockSolverAndVTKOutputAdapter() = 0
  ;
  virtual void iterate() = 0
  ;
  

};
#endif 
