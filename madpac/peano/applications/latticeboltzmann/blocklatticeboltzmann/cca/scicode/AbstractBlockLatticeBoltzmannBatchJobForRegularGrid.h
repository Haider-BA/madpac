#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_ABSTRACTBLOCKLATTICEBOLTZMANNBATCHJOBFORREGULARGRID
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_ABSTRACTBLOCKLATTICEBOLTZMANNBATCHJOBFORREGULARGRID


#include <string.h>
#include <vector>
#include <iostream>
namespace peano {
  namespace applications {
    namespace latticeboltzmann {
      namespace blocklatticeboltzmann {
        namespace cca {
          class AbstractBlockLatticeBoltzmannBatchJobForRegularGrid ;
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
class peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForRegularGrid{
protected:
std::string _path;
peano::integration::cca::ports::Log* Log;

peano::integration::cca::ports::grid::Visualisation* GridVisualisation;

peano::integration::cca::ports::grid::Statistics* GridStatistics;

public:
static void main_loop(int argc, char** argv);
void checkForConnections();
void checkForCalls();
void checkForDispose();
const bool isDisposed(std::string id) const;
void connect(peano::integration::cca::ports::Log*);
void connect(peano::integration::cca::ports::grid::Visualisation*);
void connect(peano::integration::cca::ports::grid::Statistics*);
void disconnect(long long &portid);
virtual void switchToRegularBlockSolverAdapter()=0;

virtual void checkForAcks_switchToRegularBlockSolverAdapter();
virtual void switchToBlockVTKOutputAdapter()=0;

virtual void checkForAcks_switchToBlockVTKOutputAdapter();
virtual void switchToRegularBlockSolverAndVTKOutputAdapter()=0;

virtual void checkForAcks_switchToRegularBlockSolverAndVTKOutputAdapter();
virtual void iterate()=0;

virtual void checkForAcks_iterate();
virtual void getNumberOfInnerVertices(double& vertices)=0;

virtual void checkForAcks_getNumberOfInnerVertices(double& vertices);
virtual void getNumberOfBoundaryVertices(double& vertices)=0;

virtual void checkForAcks_getNumberOfBoundaryVertices(double& vertices);
virtual void getNumberOfOuterVertices(double& vertices)=0;

virtual void checkForAcks_getNumberOfOuterVertices(double& vertices);
virtual void getNumberOfInnerCells(double& cells)=0;

virtual void checkForAcks_getNumberOfInnerCells(double& cells);
virtual void getNumberOfOuterCells(double& cells)=0;

virtual void checkForAcks_getNumberOfOuterCells(double& cells);
virtual void getMaximumMeshWidth(const long long& dimension, double& h)=0;

virtual void checkForAcks_getMaximumMeshWidth(double& h);
virtual void getMinimumMeshWidth(const long long& dimension, double& h)=0;

virtual void checkForAcks_getMinimumMeshWidth(double& h);
virtual void getSimulationOutline(long long& dimension, double* boundingBoxOffset,long boundingBoxOffset_len, double* boundingBox,long boundingBox_len)=0;

virtual void checkForAcks_getSimulationOutline(long long& dimension,double* boundingBoxOffset,long boundingBoxOffset_len,double* boundingBox,long boundingBox_len);
virtual void getScopes(long long& numberOfScopes, long long* scopeCardinality,long scopeCardinality_len, std::string* descriptionOfScope,long descriptionOfScope_len)=0;

virtual void checkForAcks_getScopes(long long& numberOfScopes,long long* scopeCardinality,long scopeCardinality_len,std::string* descriptionOfScope,long descriptionOfScope_len);
virtual void getData(const long long& scope, const double* boundingBoxOffset,long boundingBoxOffset_len, const double* boundingBox,long boundingBox_len, const long long* resolution,long resolution_len, double* data,long data_len)=0;

virtual void checkForAcks_getData(double* data,long data_len);


};
#endif 
