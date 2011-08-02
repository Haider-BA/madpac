#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_CCA_DEISA_ABSTRACTPEANOSOLVER
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_CCA_DEISA_ABSTRACTPEANOSOLVER


#include <string.h>
#include <vector>
#include <iostream>
namespace peano {
  namespace applications {
    namespace navierstokes {
      namespace prototype1 {
        namespace cca {
          namespace deisa {
            class AbstractPeanoSolver ;
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
      class Log ;
    }
  }
}
}
class peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver{
protected:
std::string _path;
peano::integration::cca::ports::Log* logger;

public:
virtual ~AbstractPeanoSolver();
void checkForConnections();
void checkForCalls();
void checkForDispose();
const bool isDisposed(std::string id) const;
void connect(peano::integration::cca::ports::Log*);
void disconnect(long long &portid);
virtual void getSimulationOutline(long long& dimension, double* boundingBoxOffset,long boundingBoxOffset_len, double* boundingBox,long boundingBox_len)=0;

virtual void checkForAcks_getSimulationOutline(long long& dimension,double* boundingBoxOffset,long boundingBoxOffset_len,double* boundingBox,long boundingBox_len);
virtual void getScopes(long long& numberOfScopes, long long* scopeCardinality,long scopeCardinality_len, std::string* descriptionOfScope,long descriptionOfScope_len)=0;

virtual void checkForAcks_getScopes(long long& numberOfScopes,long long* scopeCardinality,long scopeCardinality_len,std::string* descriptionOfScope,long descriptionOfScope_len);
virtual void getData(const long long& scope, const double* boundingBoxOffset,long boundingBoxOffset_len, const double* boundingBox,long boundingBox_len, const long long* resolution,long resolution_len, double* data,long data_len)=0;

virtual void checkForAcks_getData(double* data,long data_len);


};
#endif 
