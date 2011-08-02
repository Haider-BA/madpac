#include "peano/integration/cca/ports/grid/VisualisationToRemotePortImplementation.h"

#include <fstream>
#include "sciCode_Utils.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
peano::integration::cca::ports::grid::VisualisationToRemotePortImplementation::VisualisationToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier):
  _path(path_to_port),
  _portIdentifier(portIdentifier){
  
}

peano::integration::cca::ports::grid::VisualisationToRemotePortImplementation::~VisualisationToRemotePortImplementation() {
  
}


void peano::integration::cca::ports::grid::VisualisationToRemotePortImplementation::addGridCell(const long long& dimension, const double* x,long x_len, const double* h,long h_len, const long long& level){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("addGridCell.sci_method")));
  myfile.open ((_path+std::string("/")+std::string("addGridCell.sci_method")).c_str());
  myfile << "dimension ";
  myfile << "long ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << dimension<<" ";
  myfile <<"\n";
  myfile << "x ";
  myfile << "double ";
  myfile << "in ";
  myfile << x_len<<" ";
  for(int i=0;i<x_len;i++)
    myfile << x[i]<<" ";
  myfile <<"\n";
  myfile << "h ";
  myfile << "double ";
  myfile << "in ";
  myfile << h_len<<" ";
  for(int i=0;i<h_len;i++)
    myfile << h[i]<<" ";
  myfile <<"\n";
  myfile << "level ";
  myfile << "long ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << level<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
  checkForAcks_addGridCell();
  // End of method
}
void peano::integration::cca::ports::grid::VisualisationToRemotePortImplementation::checkForAcks_addGridCell(){
  std::vector<std::string> files;
  while(files.size()==0){
    scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"addGridCell.sci_ack");
    usleep(100*1000);
  }
  std::string line="";
  for(unsigned int i=0;i<files.size();i++){
    std::ifstream myfile (files[i].c_str());
    if(myfile.is_open()){
      myfile.close();
    remove(files[i].c_str());
  }
}
// End of method
}
void peano::integration::cca::ports::grid::VisualisationToRemotePortImplementation::addGridVertex(const long long& dimension, const double* x,long x_len, const long long& level){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("addGridVertex.sci_method")));
myfile.open ((_path+std::string("/")+std::string("addGridVertex.sci_method")).c_str());
myfile << "dimension ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << dimension<<" ";
myfile <<"\n";
myfile << "x ";
myfile << "double ";
myfile << "in ";
myfile << x_len<<" ";
for(int i=0;i<x_len;i++)
myfile << x[i]<<" ";
myfile <<"\n";
myfile << "level ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << level<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_addGridVertex();
// End of method
}
void peano::integration::cca::ports::grid::VisualisationToRemotePortImplementation::checkForAcks_addGridVertex(){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"addGridVertex.sci_ack");
usleep(100*1000);
}
std::string line="";
for(unsigned int i=0;i<files.size();i++){
std::ifstream myfile (files[i].c_str());
if(myfile.is_open()){
  myfile.close();
remove(files[i].c_str());
}
}
// End of method
}
