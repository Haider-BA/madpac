#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_BLOCKLATTICEBOLTZMANNBATCHJOBFORSPACETREEGRID_IMPLEMENTATION
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_BLOCKLATTICEBOLTZMANNBATCHJOBFORSPACETREEGRID_IMPLEMENTATION
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/scicode/AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid.h"


#include <iostream>
#include <string>
namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace cca {
          class BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation ;
        }
      }
    }
  }
}
namespace peano {
namespace integration {
  namespace cca {
    namespace ports {
      class Log ;
    }
  }
}
}
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
class peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation:public peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid{
public:
static void initRemoteJob(int argc,char** argv);
static void shutdownRemoteJob();
void switchToRegularBlockSolverAdapter();
void switchToBlockVTKOutputAdapter();
void switchToRegularBlockSolverAndVTKOutputAdapter();
void iterate();
void getNumberOfInnerVertices(double& vertices);
void getNumberOfBoundaryVertices(double& vertices);
void getNumberOfOuterVertices(double& vertices);
void getNumberOfInnerCells(double& cells);
void getNumberOfOuterCells(double& cells);
void getMaximumMeshWidth(const long long& dimension, double& h);
void getMinimumMeshWidth(const long long& dimension, double& h);


};
#endif 
