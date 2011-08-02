#include "peano/integration/cca/ports/grid/StatisticsToRemotePortImplementation.h"

#include <fstream>
#include "sciCode_Utils.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
peano::integration::cca::ports::grid::StatisticsToRemotePortImplementation::StatisticsToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier):
  _path(path_to_port),
  _portIdentifier(portIdentifier){
  
}

peano::integration::cca::ports::grid::StatisticsToRemotePortImplementation::~StatisticsToRemotePortImplementation() {
  
}


void peano::integration::cca::ports::grid::StatisticsToRemotePortImplementation::addAdapterRuntime(const std::string& adapterName, const long long& numberOfAdapterRuns, const double& CPUTime, const double& calendarTime){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("addAdapterRuntime.sci_method")));
  myfile.open ((_path+std::string("/")+std::string("addAdapterRuntime.sci_method")).c_str());
  myfile << "adapterName ";
  myfile << "string ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << adapterName<<" ";
  myfile <<"\n";
  myfile << "numberOfAdapterRuns ";
  myfile << "long ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << numberOfAdapterRuns<<" ";
  myfile <<"\n";
  myfile << "CPUTime ";
  myfile << "double ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << CPUTime<<" ";
  myfile <<"\n";
  myfile << "calendarTime ";
  myfile << "double ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << calendarTime<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
  checkForAcks_addAdapterRuntime();
  // End of method
}
void peano::integration::cca::ports::grid::StatisticsToRemotePortImplementation::checkForAcks_addAdapterRuntime(){
  std::vector<std::string> files;
  while(files.size()==0){
    scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"addAdapterRuntime.sci_ack");
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
void peano::integration::cca::ports::grid::StatisticsToRemotePortImplementation::setMemoryFootprint(const long long& bytesPerCell, const long long& bytesPerVertex, const long long& bytesPerPersistentCell, const long long& bytesPerPersistentVertex, const long long& bytesPerState){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("setMemoryFootprint.sci_method")));
myfile.open ((_path+std::string("/")+std::string("setMemoryFootprint.sci_method")).c_str());
myfile << "bytesPerCell ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << bytesPerCell<<" ";
myfile <<"\n";
myfile << "bytesPerVertex ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << bytesPerVertex<<" ";
myfile <<"\n";
myfile << "bytesPerPersistentCell ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << bytesPerPersistentCell<<" ";
myfile <<"\n";
myfile << "bytesPerPersistentVertex ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << bytesPerPersistentVertex<<" ";
myfile <<"\n";
myfile << "bytesPerState ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << bytesPerState<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_setMemoryFootprint();
// End of method
}
void peano::integration::cca::ports::grid::StatisticsToRemotePortImplementation::checkForAcks_setMemoryFootprint(){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"setMemoryFootprint.sci_ack");
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
