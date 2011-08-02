#include "peano/integration/cca/ports/LogToRemotePortImplementation.h"

#include <fstream>
#include "sciCode_Utils.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
peano::integration::cca::ports::LogToRemotePortImplementation::LogToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier):
  _path(path_to_port),
  _portIdentifier(portIdentifier){
  
}

peano::integration::cca::ports::LogToRemotePortImplementation::~LogToRemotePortImplementation() {
  
}


void peano::integration::cca::ports::LogToRemotePortImplementation::debug(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("debug.sci_method")));
  myfile.open ((_path+std::string("/")+std::string("debug.sci_method")).c_str());
  myfile << "indentLevel ";
  myfile << "long ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << indentLevel<<" ";
  myfile <<"\n";
  myfile << "timeStamp ";
  myfile << "long ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << timeStamp<<" ";
  myfile <<"\n";
  myfile << "timeStampHumanReadable ";
  myfile << "string ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << timeStampHumanReadable<<" ";
  myfile <<"\n";
  myfile << "machine ";
  myfile << "string ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << machine<<" ";
  myfile <<"\n";
  myfile << "trace ";
  myfile << "string ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << trace<<" ";
  myfile <<"\n";
  myfile << "message ";
  myfile << "string ";
  myfile << "in ";
  myfile <<"1 ";
  myfile << message<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
  checkForAcks_debug();
  // End of method
}
void peano::integration::cca::ports::LogToRemotePortImplementation::checkForAcks_debug(){
  std::vector<std::string> files;
  while(files.size()==0){
    scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"debug.sci_ack");
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
void peano::integration::cca::ports::LogToRemotePortImplementation::info(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("info.sci_method")));
myfile.open ((_path+std::string("/")+std::string("info.sci_method")).c_str());
myfile << "indentLevel ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << indentLevel<<" ";
myfile <<"\n";
myfile << "timeStamp ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << timeStamp<<" ";
myfile <<"\n";
myfile << "timeStampHumanReadable ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << timeStampHumanReadable<<" ";
myfile <<"\n";
myfile << "machine ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << machine<<" ";
myfile <<"\n";
myfile << "trace ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << trace<<" ";
myfile <<"\n";
myfile << "message ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << message<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_info();
// End of method
}
void peano::integration::cca::ports::LogToRemotePortImplementation::checkForAcks_info(){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"info.sci_ack");
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
void peano::integration::cca::ports::LogToRemotePortImplementation::warning(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("warning.sci_method")));
myfile.open ((_path+std::string("/")+std::string("warning.sci_method")).c_str());
myfile << "indentLevel ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << indentLevel<<" ";
myfile <<"\n";
myfile << "timeStamp ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << timeStamp<<" ";
myfile <<"\n";
myfile << "timeStampHumanReadable ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << timeStampHumanReadable<<" ";
myfile <<"\n";
myfile << "machine ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << machine<<" ";
myfile <<"\n";
myfile << "trace ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << trace<<" ";
myfile <<"\n";
myfile << "message ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << message<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_warning();
// End of method
}
void peano::integration::cca::ports::LogToRemotePortImplementation::checkForAcks_warning(){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"warning.sci_ack");
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
void peano::integration::cca::ports::LogToRemotePortImplementation::error(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("error.sci_method")));
myfile.open ((_path+std::string("/")+std::string("error.sci_method")).c_str());
myfile << "indentLevel ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << indentLevel<<" ";
myfile <<"\n";
myfile << "timeStamp ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << timeStamp<<" ";
myfile <<"\n";
myfile << "timeStampHumanReadable ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << timeStampHumanReadable<<" ";
myfile <<"\n";
myfile << "machine ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << machine<<" ";
myfile <<"\n";
myfile << "trace ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << trace<<" ";
myfile <<"\n";
myfile << "message ";
myfile << "string ";
myfile << "in ";
myfile <<"1 ";
myfile << message<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_error();
// End of method
}
void peano::integration::cca::ports::LogToRemotePortImplementation::checkForAcks_error(){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"error.sci_ack");
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
