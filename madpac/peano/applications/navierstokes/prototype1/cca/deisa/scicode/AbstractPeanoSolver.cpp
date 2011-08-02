#include <fstream>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "sciCode_Utils.h"
#include "peano/applications/navierstokes/prototype1/cca/deisa/scicode/PeanoSolverJNIProxyImplementation.h"
#include "peano/applications/navierstokes/prototype1/cca/deisa/scicode/AbstractPeanoSolver.h"
#include "peano/integration/cca/ports/LogToJNIPortImplementation.h"
#include "peano/integration/cca/ports/LogToRemotePortImplementation.h"

peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::~AbstractPeanoSolver(){

}
void peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::checkForAcks_getSimulationOutline(long long& dimension,double* boundingBoxOffset,long boundingBoxOffset_len,double* boundingBox,long boundingBox_len){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/0/")+std::string("getSimulationOutline.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/0/")+std::string("getSimulationOutline.sci_ack")).c_str());
  myfile << "dimension ";
  myfile << "long ";
  myfile <<"1 ";
  myfile << dimension<<" ";
  myfile <<"\n";
  myfile << "boundingBoxOffset ";
  myfile << "double ";
  myfile << boundingBoxOffset_len<<" ";
  for(int i=0;i<boundingBoxOffset_len;i++)
    myfile << boundingBoxOffset[i]<<" ";
  myfile <<"\n";
  myfile << "boundingBox ";
  myfile << "double ";
  myfile << boundingBox_len<<" ";
  for(int i=0;i<boundingBox_len;i++)
    myfile << boundingBox[i]<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::checkForAcks_getScopes(long long& numberOfScopes,long long* scopeCardinality,long scopeCardinality_len,std::string* descriptionOfScope,long descriptionOfScope_len){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/0/")+std::string("getScopes.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/0/")+std::string("getScopes.sci_ack")).c_str());
  myfile << "numberOfScopes ";
  myfile << "long ";
  myfile <<"1 ";
  myfile << numberOfScopes<<" ";
  myfile <<"\n";
  myfile << "scopeCardinality ";
  myfile << "long ";
  myfile << scopeCardinality_len<<" ";
  for(int i=0;i<scopeCardinality_len;i++)
    myfile << scopeCardinality[i]<<" ";
  myfile <<"\n";
  myfile << "descriptionOfScope ";
  myfile << "string ";
  myfile << descriptionOfScope_len<<" ";
  for(int i=0;i<descriptionOfScope_len;i++)
    myfile << descriptionOfScope[i]<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::checkForAcks_getData(double* data,long data_len){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/0/")+std::string("getData.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/0/")+std::string("getData.sci_ack")).c_str());
  myfile << "data ";
  myfile << "double ";
  myfile << data_len<<" ";
  for(int i=0;i<data_len;i++)
    myfile << data[i]<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::checkForConnections(){
  std::string usePorts=_path+std::string("/use-ports/");
  std::string port0=std::string("0");
  if(scicode::Utilities::isDirIncluded(usePorts,port0))
    connect(new peano::integration::cca::ports::LogToRemotePortImplementation(usePorts+port0,"logger"));
    
  //End of checkForConnections
}
void peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::checkForCalls(){
  std::vector<std::string> files;
  files.erase(files.begin(),files.end());
  scicode::Utilities::getFilesForDirBody(_path+std::string("/provide-ports/")+std::string("0"),files,"sci_method");
  std::string line="";
  for(unsigned int i=0;i<files.size();i++){
    std::cout<<files[i]<<std::endl;

     std::ifstream myfile (files[i].c_str());
    if(myfile.is_open()){
      if(std::string(files[i]).find("getSimulationOutline")!=std::string::npos){
        std::vector<long long> dimension;
        std::vector<double> boundingBoxOffset;
        std::vector<double> boundingBox;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="dimension"){
              dimension=std::vector<long long>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                dimension[i-4]=atoll(tokens[i].c_str());
              
            }
            if(tokens[0]=="boundingBoxOffset"){
              boundingBoxOffset=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                boundingBoxOffset[i-4]=atof(tokens[i].c_str());
              
            }
            if(tokens[0]=="boundingBox"){
              boundingBox=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                boundingBox[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getSimulationOutline(dimension[0],&boundingBoxOffset[0],boundingBoxOffset.size(),&boundingBox[0],boundingBox.size());
        checkForAcks_getSimulationOutline(dimension[0],&boundingBoxOffset[0],boundingBoxOffset.size(),&boundingBox[0],boundingBox.size());
      }
      if(std::string(files[i]).find("getScopes")!=std::string::npos){
        std::vector<long long> numberOfScopes;
        std::vector<long long> scopeCardinality;
        std::vector<std::string> descriptionOfScope;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="numberOfScopes"){
              numberOfScopes=std::vector<long long>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                numberOfScopes[i-4]=atoll(tokens[i].c_str());
              
            }
            if(tokens[0]=="scopeCardinality"){
              scopeCardinality=std::vector<long long>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                scopeCardinality[i-4]=atoll(tokens[i].c_str());
              
            }
            if(tokens[0]=="descriptionOfScope"){
              descriptionOfScope=std::vector<std::string>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                descriptionOfScope[i-4]=(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getScopes(numberOfScopes[0],&scopeCardinality[0],scopeCardinality.size(),&descriptionOfScope[0],descriptionOfScope.size());
        checkForAcks_getScopes(numberOfScopes[0],&scopeCardinality[0],scopeCardinality.size(),&descriptionOfScope[0],descriptionOfScope.size());
      }
      if(std::string(files[i]).find("getData")!=std::string::npos){
        long long scope;
        std::vector<double> boundingBoxOffset;
        std::vector<double> boundingBox;
        std::vector<long long> resolution;
        std::vector<double> data;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="scope"){
              for(unsigned int i=4;i<tokens.size();i++)
                scope=atoll(tokens[i].c_str());
              
            }
            if(tokens[0]=="boundingBoxOffset"){
              boundingBoxOffset=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                boundingBoxOffset[i-4]=atof(tokens[i].c_str());
              
            }
            if(tokens[0]=="boundingBox"){
              boundingBox=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                boundingBox[i-4]=atof(tokens[i].c_str());
              
            }
            if(tokens[0]=="resolution"){
              resolution=std::vector<long long>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                resolution[i-4]=atoll(tokens[i].c_str());
              
            }
            if(tokens[0]=="data"){
              data=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                data[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getData(scope,&boundingBoxOffset[0],boundingBoxOffset.size(),&boundingBox[0],boundingBox.size(),&resolution[0],resolution.size(),&data[0],data.size());
        checkForAcks_getData(&data[0],data.size());
      }
      myfile.close();
    remove(files[i].c_str());
    }
  }
  //End of checkForCalls
}
void peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::checkForDispose(){
  //End of checkForDispose
}
const bool peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::isDisposed(std::string id) const{
  std::vector<std::string> files;
  scicode::Utilities::getFilesForDirBody(_path,files,id+".sci_disp");
  for(unsigned int i=0;i<files.size();i++){
    remove(files[i].c_str());
  }
  return files.size()>0;
  //isDisposed
}
void peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::connect(peano::integration::cca::ports::Log* out){
  logger=out;
  
}
void peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver::disconnect(long long &portid){
  switch(portid){
    case 0: delete logger;
    logger = NULL;
    break;
    
  }
  //End of disconnect
}
