#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJobToRemotePortImplementation.h"

#include <fstream>
#include "sciCode_Utils.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::BlockLatticeBoltzmannBatchJobToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier):
  _path(path_to_port),
  _portIdentifier(portIdentifier){
  
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::~BlockLatticeBoltzmannBatchJobToRemotePortImplementation() {
  
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::switchToRegularBlockSolverAdapter(){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("switchToRegularBlockSolverAdapter.sci_method")));
  myfile.open ((_path+std::string("/")+std::string("switchToRegularBlockSolverAdapter.sci_method")).c_str());
  myfile.close();
  scicode::Utilities::release(lockFile);
  checkForAcks_switchToRegularBlockSolverAdapter();
  // End of method
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::checkForAcks_switchToRegularBlockSolverAdapter(){
  std::vector<std::string> files;
  while(files.size()==0){
    scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"switchToRegularBlockSolverAdapter.sci_ack");
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
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::switchToBlockVTKOutputAdapter(){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("switchToBlockVTKOutputAdapter.sci_method")));
myfile.open ((_path+std::string("/")+std::string("switchToBlockVTKOutputAdapter.sci_method")).c_str());
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_switchToBlockVTKOutputAdapter();
// End of method
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::checkForAcks_switchToBlockVTKOutputAdapter(){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"switchToBlockVTKOutputAdapter.sci_ack");
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
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::switchToRegularBlockSolverAndVTKOutputAdapter(){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("switchToRegularBlockSolverAndVTKOutputAdapter.sci_method")));
myfile.open ((_path+std::string("/")+std::string("switchToRegularBlockSolverAndVTKOutputAdapter.sci_method")).c_str());
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_switchToRegularBlockSolverAndVTKOutputAdapter();
// End of method
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::checkForAcks_switchToRegularBlockSolverAndVTKOutputAdapter(){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"switchToRegularBlockSolverAndVTKOutputAdapter.sci_ack");
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
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::iterate(){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("iterate.sci_method")));
myfile.open ((_path+std::string("/")+std::string("iterate.sci_method")).c_str());
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_iterate();
// End of method
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToRemotePortImplementation::checkForAcks_iterate(){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"iterate.sci_ack");
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
