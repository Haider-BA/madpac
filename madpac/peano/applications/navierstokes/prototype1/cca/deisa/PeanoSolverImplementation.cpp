#include "peano/applications/navierstokes/prototype1/cca/deisa/PeanoSolverImplementation.h"

#include "tarch/la/Vector.h"
#include "peano/peano.h"
#include "peano/utils/Dimensions.h"
#include "tarch/plotter/griddata/regular/cca/CCAGridArrayWriter.h"
#include "peano/integration/dataqueries/QueryServer.h"
#include "peano/applications/navierstokes/prototype1/mappings/RegularGrid2PlotRegularSolutionVTK.h"


#ifdef CCA
void peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation::main_loop(int argc, char** argv){
#if defined(Parallel)
          peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation *ref=new peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation;

          std::cout<<"starting main loop with:"<<std::string(argv[1])<<std::endl;
          if (tarch::parallel::Node::getInstance().isMasterProcess()){
                  ref->_path = std::string(argv[1]);

                  while(!ref->isDisposed(argv[2])){
                          ref->checkForConnections();
                          ref->checkForCalls();
                          ref->checkForDispose();
                          clock_t goal = 10 + clock();
                          while (goal > clock());

                  }
          }
          delete ref;
          //shutdownParallelEnvironment();
  #else
          peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation *ref=new peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation;

          ref->_path = std::string(argv[1]);

                           while(!ref->isDisposed(argv[2])){
                                   ref->checkForConnections();
                                   ref->checkForCalls();
                                   ref->checkForDispose();
                                   clock_t goal = 10 + clock();
                                   while (goal > clock());

                           }

  #endif

  delete ref;
}

peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation::PeanoSolverImplementation(){

  _queryid=0;

  runner.init();

}

peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation::~PeanoSolverImplementation(){

}
void peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation::getScopes(long long& numberOfScopes, long long*  scopeDimension,long scopeDimension_len, std::string*  descriptionOfScope,long descriptionOfScope_len){
  //put your code here
}
void peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation::getSimulationOutline(long long& dimension, double* offset,long offset_len, double*  boundingBox,long boundingBox_len){
  //put your code here
  tarch::la::Vector<DIMENSIONS,double> width(2.46,0.41);
  tarch::la::Vector<DIMENSIONS,double> offsetV(0.0);
  for(int i=0;i<DIMENSIONS;i++){
      boundingBox[i]=width[i];
      offset[i]=offsetV[i];
  }
}
void peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation::getData(const long long& scope, const double* offsets,long offsets_len, const double* boundingBox,long boundingBox_len, const long long* resolution,long resolution_len, double*  data,long data_len){

  tarch::la::Vector<2,double> qOffset(0.0);
  tarch::la::Vector<2,double> qSize(0.0);
  tarch::la::Vector<2,int> dims(0.0);
  qOffset[0]=offsets[0];
  qOffset[1]=offsets[1];
  qSize[0]=boundingBox[0];
  qSize[1]=boundingBox[1];
  dims[0]=(int)resolution[0];
  dims[1]=(int)resolution[1];
  int records_per_entry=2;
  peano::integration::dataqueries::DataQuery query;
  _queryid++;
  query.setId(_queryid);
  query.setBoundingBoxOffset(qOffset);
  query.setBoundingBox(qSize);
  query.setResolution(dims);
  if (scope==0) {

      query.setRecordsPerEntry(2);
      query.setScope( peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::Velocity);
  }
  else if (scope==1) {
      query.setRecordsPerEntry(1);
      query.setScope( peano::applications::navierstokes::prototype1::mappings::RegularGrid2PlotRegularSolutionVTK::Pressure);
      records_per_entry=1;
  }
  else {

      return;
  }

  tarch::plotter::griddata::regular::cca::CCAGridArrayWriter writer(
      query.getResolution(),
      query.getBoundingBox(),
      query.getBoundingBoxOffset()
  );

  peano::integration::dataqueries::QueryServer::getInstance().addQuery(
      "query",records_per_entry ,query, writer
  );

  //std::cout<<"starting cAdapter"<<std::endl;

  runner.runCartesianGridAdapter();
  writer.writeToVertexArray(data,data_len);
//  writer.writeToFile(
//      "/home_local/atanasoa/query.vtk");
  if (scope==1){
      if(_queryid<=3)
        for(int i=0;i<10;i++)
          runner.runOneStep();
      else
        runner.runOneStep();
  }

 //(data,data_len);

}
#endif
