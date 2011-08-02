#include <fstream>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "sciCode_Utils.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/scicode/BlockLatticeBoltzmannBatchJobForSpacetreeGridJNIProxyImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/scicode/AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation.h"
#include "peano/integration/cca/ports/LogToJNIPortImplementation.h"
#include "peano/integration/cca/ports/LogToRemotePortImplementation.h"
#include "peano/integration/cca/ports/grid/VisualisationToJNIPortImplementation.h"
#include "peano/integration/cca/ports/grid/VisualisationToRemotePortImplementation.h"
#include "peano/integration/cca/ports/grid/StatisticsToJNIPortImplementation.h"
#include "peano/integration/cca/ports/grid/StatisticsToRemotePortImplementation.h"
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_switchToRegularBlockSolverAdapter(){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/0/")+std::string("switchToRegularBlockSolverAdapter.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/0/")+std::string("switchToRegularBlockSolverAdapter.sci_ack")).c_str());
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_switchToBlockVTKOutputAdapter(){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/0/")+std::string("switchToBlockVTKOutputAdapter.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/0/")+std::string("switchToBlockVTKOutputAdapter.sci_ack")).c_str());
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_switchToRegularBlockSolverAndVTKOutputAdapter(){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/0/")+std::string("switchToRegularBlockSolverAndVTKOutputAdapter.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/0/")+std::string("switchToRegularBlockSolverAndVTKOutputAdapter.sci_ack")).c_str());
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_iterate(){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/0/")+std::string("iterate.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/0/")+std::string("iterate.sci_ack")).c_str());
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_getNumberOfInnerVertices(double& vertices){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/1/")+std::string("getNumberOfInnerVertices.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/1/")+std::string("getNumberOfInnerVertices.sci_ack")).c_str());
  myfile << "vertices ";
  myfile << "double ";
  myfile <<"1 ";
  myfile << vertices<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_getNumberOfBoundaryVertices(double& vertices){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/1/")+std::string("getNumberOfBoundaryVertices.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/1/")+std::string("getNumberOfBoundaryVertices.sci_ack")).c_str());
  myfile << "vertices ";
  myfile << "double ";
  myfile <<"1 ";
  myfile << vertices<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_getNumberOfOuterVertices(double& vertices){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/1/")+std::string("getNumberOfOuterVertices.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/1/")+std::string("getNumberOfOuterVertices.sci_ack")).c_str());
  myfile << "vertices ";
  myfile << "double ";
  myfile <<"1 ";
  myfile << vertices<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_getNumberOfInnerCells(double& cells){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/1/")+std::string("getNumberOfInnerCells.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/1/")+std::string("getNumberOfInnerCells.sci_ack")).c_str());
  myfile << "cells ";
  myfile << "double ";
  myfile <<"1 ";
  myfile << cells<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_getNumberOfOuterCells(double& cells){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/1/")+std::string("getNumberOfOuterCells.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/1/")+std::string("getNumberOfOuterCells.sci_ack")).c_str());
  myfile << "cells ";
  myfile << "double ";
  myfile <<"1 ";
  myfile << cells<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_getMaximumMeshWidth(double& h){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/1/")+std::string("getMaximumMeshWidth.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/1/")+std::string("getMaximumMeshWidth.sci_ack")).c_str());
  myfile << "h ";
  myfile << "double ";
  myfile <<"1 ";
  myfile << h<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForAcks_getMinimumMeshWidth(double& h){
  std::ofstream myfile;
  std::string lockFile=scicode::Utilities::lock((_path+std::string("/provide-ports/1/")+std::string("getMinimumMeshWidth.sci_ack")));
  myfile.open ((_path+std::string("/provide-ports/1/")+std::string("getMinimumMeshWidth.sci_ack")).c_str());
  myfile << "h ";
  myfile << "double ";
  myfile <<"1 ";
  myfile << h<<" ";
  myfile <<"\n";
  myfile.close();
  scicode::Utilities::release(lockFile);
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::main_loop(int argc, char** argv){
  int argc_new=argc-2;
  peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation::initRemoteJob(argc_new,argv);
  peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation *ref=new peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation;
  ref->_path = std::string(argv[1]);
  while(!ref->isDisposed(std::string(argv[2]))){
    ref->checkForConnections();
    ref->checkForCalls();
  }
  delete ref;
  peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation::shutdownRemoteJob();
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForConnections(){
  std::string usePorts=_path+std::string("/use-ports/");
  std::string port0=std::string("0");
  if(scicode::Utilities::isDirIncluded(usePorts,port0))
    connect(new peano::integration::cca::ports::LogToRemotePortImplementation(usePorts+port0,"Log"));
    
  std::string port1=std::string("1");
  if(scicode::Utilities::isDirIncluded(usePorts,port1))
    connect(new peano::integration::cca::ports::grid::VisualisationToRemotePortImplementation(usePorts+port1,"GridVisualisation"));
    
  std::string port2=std::string("2");
  if(scicode::Utilities::isDirIncluded(usePorts,port2))
    connect(new peano::integration::cca::ports::grid::StatisticsToRemotePortImplementation(usePorts+port2,"GridStatistics"));
    
  //End of checkForConnections
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForCalls(){
  std::vector<std::string> files;
  std::string line="";
  files.erase(files.begin(),files.end());
  scicode::Utilities::getFilesForDirBody(_path+std::string("/provide-ports/")+std::string("0"),files,"sci_method");
  for(unsigned int i=0;i<files.size();i++){
    std::ifstream myfile (files[i].c_str());
    if(myfile.is_open()){
      if(std::string(files[i]).find("switchToRegularBlockSolverAdapter")!=std::string::npos){
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            //End of if-line
          }
          //End of while-file
        }
        switchToRegularBlockSolverAdapter();
        checkForAcks_switchToRegularBlockSolverAdapter();
      }
      if(std::string(files[i]).find("switchToBlockVTKOutputAdapter")!=std::string::npos){
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            //End of if-line
          }
          //End of while-file
        }
        switchToBlockVTKOutputAdapter();
        checkForAcks_switchToBlockVTKOutputAdapter();
      }
      if(std::string(files[i]).find("switchToRegularBlockSolverAndVTKOutputAdapter")!=std::string::npos){
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            //End of if-line
          }
          //End of while-file
        }
        switchToRegularBlockSolverAndVTKOutputAdapter();
        checkForAcks_switchToRegularBlockSolverAndVTKOutputAdapter();
      }
      if(std::string(files[i]).find("iterate")!=std::string::npos){
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            //End of if-line
          }
          //End of while-file
        }
        iterate();
        checkForAcks_iterate();
      }
      myfile.close();
    remove(files[i].c_str());
    }
  }
  files.erase(files.begin(),files.end());
  scicode::Utilities::getFilesForDirBody(_path+std::string("/provide-ports/")+std::string("1"),files,"sci_method");
  for(unsigned int i=0;i<files.size();i++){
    std::ifstream myfile (files[i].c_str());
    if(myfile.is_open()){
      if(std::string(files[i]).find("getNumberOfInnerVertices")!=std::string::npos){
        std::vector<double> vertices;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="vertices"){
              vertices=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                vertices[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getNumberOfInnerVertices(vertices[0]);
        checkForAcks_getNumberOfInnerVertices(vertices[0]);
      }
      if(std::string(files[i]).find("getNumberOfBoundaryVertices")!=std::string::npos){
        std::vector<double> vertices;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="vertices"){
              vertices=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                vertices[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getNumberOfBoundaryVertices(vertices[0]);
        checkForAcks_getNumberOfBoundaryVertices(vertices[0]);
      }
      if(std::string(files[i]).find("getNumberOfOuterVertices")!=std::string::npos){
        std::vector<double> vertices;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="vertices"){
              vertices=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                vertices[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getNumberOfOuterVertices(vertices[0]);
        checkForAcks_getNumberOfOuterVertices(vertices[0]);
      }
      if(std::string(files[i]).find("getNumberOfInnerCells")!=std::string::npos){
        std::vector<double> cells;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="cells"){
              cells=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                cells[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getNumberOfInnerCells(cells[0]);
        checkForAcks_getNumberOfInnerCells(cells[0]);
      }
      if(std::string(files[i]).find("getNumberOfOuterCells")!=std::string::npos){
        std::vector<double> cells;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="cells"){
              cells=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                cells[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getNumberOfOuterCells(cells[0]);
        checkForAcks_getNumberOfOuterCells(cells[0]);
      }
      if(std::string(files[i]).find("getMaximumMeshWidth")!=std::string::npos){
        long long dimension;
        std::vector<double> h;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="dimension"){
              for(unsigned int i=4;i<tokens.size();i++)
                dimension=atoll(tokens[i].c_str());
              
            }
            if(tokens[0]=="h"){
              h=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                h[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getMaximumMeshWidth(dimension,h[0]);
        checkForAcks_getMaximumMeshWidth(h[0]);
      }
      if(std::string(files[i]).find("getMinimumMeshWidth")!=std::string::npos){
        long long dimension;
        std::vector<double> h;
        while ( myfile.good() ){
          getline (myfile,line);
          if(line!=""&&line!="call"){
            std::vector<std::string>  tokens;
            scicode::Utilities::Tokenize(line,tokens," ");
            if(tokens[0]=="dimension"){
              for(unsigned int i=4;i<tokens.size();i++)
                dimension=atoll(tokens[i].c_str());
              
            }
            if(tokens[0]=="h"){
              h=std::vector<double>(atoi(tokens[3].c_str()));
              for(unsigned int i=4;i<tokens.size();i++)
                h[i-4]=atof(tokens[i].c_str());
              
            }
            //End of if-line
          }
          //End of while-file
        }
        getMinimumMeshWidth(dimension,h[0]);
        checkForAcks_getMinimumMeshWidth(h[0]);
      }
      myfile.close();
    remove(files[i].c_str());
    }
  }
  //End of checkForCalls
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::checkForDispose(){
  //End of checkForDispose
}
const bool peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::isDisposed(std::string id) const{
  std::vector<std::string> files;
  scicode::Utilities::getFilesForDirBody(_path,files,id+".sci_disp");
  for(unsigned int i=0;i<files.size();i++){
    remove(files[i].c_str());
  }
  return files.size()>0;
  //isDisposed
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::connect(peano::integration::cca::ports::Log* out){
  Log=out;
  
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::connect(peano::integration::cca::ports::grid::Visualisation* out){
  GridVisualisation=out;
  
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::connect(peano::integration::cca::ports::grid::Statistics* out){
  GridStatistics=out;
  
}
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid::disconnect(long long &portid){
  switch(portid){
    case 0: delete Log;
    Log = NULL;
    break;
    case 1: delete GridVisualisation;
    GridVisualisation = NULL;
    break;
    case 2: delete GridStatistics;
    GridStatistics = NULL;
    break;
    
  }
  //End of disconnect
}
