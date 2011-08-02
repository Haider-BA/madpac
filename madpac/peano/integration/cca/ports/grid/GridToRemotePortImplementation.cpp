#include "peano/integration/cca/ports/grid/GridToRemotePortImplementation.h"

#include <fstream>
#include "sciCode_Utils.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
peano::integration::cca::ports::grid::GridToRemotePortImplementation::GridToRemotePortImplementation(const std::string& path_to_port,const std::string& portIdentifier):
  _path(path_to_port),
  _portIdentifier(portIdentifier){
  
}

peano::integration::cca::ports::grid::GridToRemotePortImplementation::~GridToRemotePortImplementation() {
  
}


void peano::integration::cca::ports::grid::GridToRemotePortImplementation::getNumberOfInnerVertices(double& vertices){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("getNumberOfInnerVertices.sci_method")));
  myfile.open ((_path+std::string("/")+std::string("getNumberOfInnerVertices.sci_method")).c_str());
  myfile << "vertices ";
  myfile << "double ";
  myfile << "out ";
  myfile <<"1 ";
  myfile << vertices<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
  checkForAcks_getNumberOfInnerVertices(vertices);
  // End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::checkForAcks_getNumberOfInnerVertices(double& vertices){
  std::vector<std::string> files;
  while(files.size()==0){
    scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"getNumberOfInnerVertices.sci_ack");
    usleep(100*1000);
  }
  std::string line="";
  for(unsigned int i=0;i<files.size();i++){
    std::ifstream myfile (files[i].c_str());
    if(myfile.is_open()){
      while ( myfile.good() ){
        getline (myfile,line);
        if(line!="" && line!="ack"){
          std::vector<std::string>  tokens;
          scicode::Utilities::Tokenize(line,tokens," ");
          if(tokens[0]=="vertices"){
            for(unsigned int i=4;i<tokens.size();i++)
              vertices=atof(tokens[i].c_str());
            
          }
          //End of if-line
        }
        //End of while-file
      }
      myfile.close();
    remove(files[i].c_str());
  }
}
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::getNumberOfBoundaryVertices(double& vertices){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("getNumberOfBoundaryVertices.sci_method")));
myfile.open ((_path+std::string("/")+std::string("getNumberOfBoundaryVertices.sci_method")).c_str());
myfile << "vertices ";
myfile << "double ";
myfile << "out ";
myfile <<"1 ";
myfile << vertices<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_getNumberOfBoundaryVertices(vertices);
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::checkForAcks_getNumberOfBoundaryVertices(double& vertices){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"getNumberOfBoundaryVertices.sci_ack");
usleep(100*1000);
}
std::string line="";
for(unsigned int i=0;i<files.size();i++){
std::ifstream myfile (files[i].c_str());
if(myfile.is_open()){
  while ( myfile.good() ){
    getline (myfile,line);
    if(line!="" && line!="ack"){
      std::vector<std::string>  tokens;
      scicode::Utilities::Tokenize(line,tokens," ");
      if(tokens[0]=="vertices"){
        for(unsigned int i=4;i<tokens.size();i++)
          vertices=atof(tokens[i].c_str());
        
      }
      //End of if-line
    }
    //End of while-file
  }
  myfile.close();
remove(files[i].c_str());
}
}
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::getNumberOfOuterVertices(double& vertices){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("getNumberOfOuterVertices.sci_method")));
myfile.open ((_path+std::string("/")+std::string("getNumberOfOuterVertices.sci_method")).c_str());
myfile << "vertices ";
myfile << "double ";
myfile << "out ";
myfile <<"1 ";
myfile << vertices<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_getNumberOfOuterVertices(vertices);
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::checkForAcks_getNumberOfOuterVertices(double& vertices){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"getNumberOfOuterVertices.sci_ack");
usleep(100*1000);
}
std::string line="";
for(unsigned int i=0;i<files.size();i++){
std::ifstream myfile (files[i].c_str());
if(myfile.is_open()){
while ( myfile.good() ){
getline (myfile,line);
if(line!="" && line!="ack"){
  std::vector<std::string>  tokens;
  scicode::Utilities::Tokenize(line,tokens," ");
  if(tokens[0]=="vertices"){
    for(unsigned int i=4;i<tokens.size();i++)
      vertices=atof(tokens[i].c_str());
    
  }
  //End of if-line
}
//End of while-file
}
myfile.close();
remove(files[i].c_str());
}
}
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::getNumberOfInnerCells(double& cells){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("getNumberOfInnerCells.sci_method")));
myfile.open ((_path+std::string("/")+std::string("getNumberOfInnerCells.sci_method")).c_str());
myfile << "cells ";
myfile << "double ";
myfile << "out ";
myfile <<"1 ";
myfile << cells<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_getNumberOfInnerCells(cells);
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::checkForAcks_getNumberOfInnerCells(double& cells){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"getNumberOfInnerCells.sci_ack");
usleep(100*1000);
}
std::string line="";
for(unsigned int i=0;i<files.size();i++){
std::ifstream myfile (files[i].c_str());
if(myfile.is_open()){
while ( myfile.good() ){
getline (myfile,line);
if(line!="" && line!="ack"){
std::vector<std::string>  tokens;
scicode::Utilities::Tokenize(line,tokens," ");
if(tokens[0]=="cells"){
for(unsigned int i=4;i<tokens.size();i++)
  cells=atof(tokens[i].c_str());

}
//End of if-line
}
//End of while-file
}
myfile.close();
remove(files[i].c_str());
}
}
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::getNumberOfOuterCells(double& cells){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("getNumberOfOuterCells.sci_method")));
myfile.open ((_path+std::string("/")+std::string("getNumberOfOuterCells.sci_method")).c_str());
myfile << "cells ";
myfile << "double ";
myfile << "out ";
myfile <<"1 ";
myfile << cells<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_getNumberOfOuterCells(cells);
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::checkForAcks_getNumberOfOuterCells(double& cells){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"getNumberOfOuterCells.sci_ack");
usleep(100*1000);
}
std::string line="";
for(unsigned int i=0;i<files.size();i++){
std::ifstream myfile (files[i].c_str());
if(myfile.is_open()){
while ( myfile.good() ){
getline (myfile,line);
if(line!="" && line!="ack"){
std::vector<std::string>  tokens;
scicode::Utilities::Tokenize(line,tokens," ");
if(tokens[0]=="cells"){
for(unsigned int i=4;i<tokens.size();i++)
cells=atof(tokens[i].c_str());

}
//End of if-line
}
//End of while-file
}
myfile.close();
remove(files[i].c_str());
}
}
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::getMaximumMeshWidth(const long long& dimension, double& h){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("getMaximumMeshWidth.sci_method")));
myfile.open ((_path+std::string("/")+std::string("getMaximumMeshWidth.sci_method")).c_str());
myfile << "dimension ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << dimension<<" ";
myfile <<"\n";
myfile << "h ";
myfile << "double ";
myfile << "out ";
myfile <<"1 ";
myfile << h<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_getMaximumMeshWidth(h);
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::checkForAcks_getMaximumMeshWidth(double& h){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"getMaximumMeshWidth.sci_ack");
usleep(100*1000);
}
std::string line="";
for(unsigned int i=0;i<files.size();i++){
std::ifstream myfile (files[i].c_str());
if(myfile.is_open()){
while ( myfile.good() ){
getline (myfile,line);
if(line!="" && line!="ack"){
std::vector<std::string>  tokens;
scicode::Utilities::Tokenize(line,tokens," ");
if(tokens[0]=="h"){
for(unsigned int i=4;i<tokens.size();i++)
h=atof(tokens[i].c_str());

}
//End of if-line
}
//End of while-file
}
myfile.close();
remove(files[i].c_str());
}
}
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::getMinimumMeshWidth(const long long& dimension, double& h){
std::ofstream myfile;
std::string lockFile=scicode::Utilities::lock((_path+std::string("/")+std::string("getMinimumMeshWidth.sci_method")));
myfile.open ((_path+std::string("/")+std::string("getMinimumMeshWidth.sci_method")).c_str());
myfile << "dimension ";
myfile << "long ";
myfile << "in ";
myfile <<"1 ";
myfile << dimension<<" ";
myfile <<"\n";
myfile << "h ";
myfile << "double ";
myfile << "out ";
myfile <<"1 ";
myfile << h<<" ";
myfile <<"\n";
myfile.close();
scicode::Utilities::release(lockFile);
checkForAcks_getMinimumMeshWidth(h);
// End of method
}
void peano::integration::cca::ports::grid::GridToRemotePortImplementation::checkForAcks_getMinimumMeshWidth(double& h){
std::vector<std::string> files;
while(files.size()==0){
scicode::Utilities::getFilesForDirBody(_path+std::string("/"),files,"getMinimumMeshWidth.sci_ack");
usleep(100*1000);
}
std::string line="";
for(unsigned int i=0;i<files.size();i++){
std::ifstream myfile (files[i].c_str());
if(myfile.is_open()){
while ( myfile.good() ){
getline (myfile,line);
if(line!="" && line!="ack"){
std::vector<std::string>  tokens;
scicode::Utilities::Tokenize(line,tokens," ");
if(tokens[0]=="h"){
for(unsigned int i=4;i<tokens.size();i++)
h=atof(tokens[i].c_str());

}
//End of if-line
}
//End of while-file
}
myfile.close();
remove(files[i].c_str());
}
}
// End of method
}
