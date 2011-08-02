#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_PORTS_BLOCKLATTICEBOLTZMANNBATCHJOB_TO_REMOTE
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_PORTS_BLOCKLATTICEBOLTZMANNBATCHJOB_TO_REMOTE

#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob.h"
#include <iostream>
#include <string.h>
#include <vector>

namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace cca {
          namespace ports {
            class BlockLatticeBoltzmannBatchJobToRemotePortImplementation ;
          }
        }
      }
    }
  }
}

class peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation: public peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJob {
private:
  std::string _path;
  std::string _portIdentifier;
  
public:
  BlockLatticeBoltzmannBatchJobToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier);
  
  virtual ~BlockLatticeBoltzmannBatchJobToRemotePortImplementation();
  
  virtual void switchToRegularBlockSolverAdapter();
  virtual void checkForAcks_switchToRegularBlockSolverAdapter();
  virtual void switchToBlockVTKOutputAdapter();
  virtual void checkForAcks_switchToBlockVTKOutputAdapter();
  virtual void switchToRegularBlockSolverAndVTKOutputAdapter();
  virtual void checkForAcks_switchToRegularBlockSolverAndVTKOutputAdapter();
  virtual void iterate();
  virtual void checkForAcks_iterate();
  

};
#endif 
