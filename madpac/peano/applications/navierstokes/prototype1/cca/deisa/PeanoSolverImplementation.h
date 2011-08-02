#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_CCA_DEISA_PEANOSOLVER_IMPLEMENTATION
#define PEANO_APPLICATIONS_NAVIERSTOKES_CCA_DEISA_PEANOSOLVER_IMPLEMENTATION
#include "peano/applications/navierstokes/prototype1/cca/deisa/scicode/AbstractPeanoSolver.h"
#include "peano/applications/navierstokes/prototype1/runners/DeisaPrototypeRunnerForRegularGrid.h"

#include <iostream>
#include <string>
namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace cca {
          namespace deisa {
            class PeanoSolverImplementation ;
          }
        }
      }
    }
  }
}
namespace peano {
namespace integration {
  namespace cca {
    namespace ports {
      namespace logging {
        class Log ;
      }
    }
  }
}
}
#ifdef CCA
class peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation:public peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver{
private:
	peano::applications::navierstokes::prototype1::runners::DeisaPrototypeRunnerForRegularGrid runner;
	int _queryid;
public:
PeanoSolverImplementation();
virtual ~PeanoSolverImplementation();
static void main_loop(int argc, char** argv);
void getScopes(long long& numberOfScopes, long long* scopeDimension,long scopeDimension_len, std::string* descriptionOfScope,long descriptionOfScope_len);
void getSimulationOutline(long long& dimension, double* offset,long offset_len, double* boundingBox,long boundingBox_len);
void getData(const long long& scope, const double* offsets,long offsets_len, const double* boundingBox,long boundingBox_len, const long long* resolution,long resolution_len, double* data,long data_len);


};
#endif
#endif 
