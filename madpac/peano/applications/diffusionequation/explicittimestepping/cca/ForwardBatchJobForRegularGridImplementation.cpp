#include "peano/applications/diffusionequation/explicittimestepping/cca/ForwardBatchJobForRegularGridImplementation.h"

#include "peano/peano.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif



// @todo Insert your includes here



bool peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::initRemoteJob(int argc,char** argv) {
  bool wasSuccessful = true;

  fillLookupTables();

  wasSuccessful &= (initParallelEnvironment(&argc,&argv) == 0);
  wasSuccessful &= (initSharedMemoryEnvironment() == 0);

  // @todo Insert your initialisation code here

  return wasSuccessful;
}



bool peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::shutdownRemoteJob(){
  // @todo Insert your shutdown code here

  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();

  return true;
}


void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToSetupExperiment(){
  //put your code here
}
void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToSetupExperimentAndPlot(){
  //put your code here
}
void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToPerformExplitEulerTimeStep(){
  //put your code here
}
void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToPerformExplitEulerTimeStepAndPlot(){
  //put your code here
}
void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToPlotSolution(){
  //put your code here
}
void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::switchToApplyRefineDeleteCriterion(){
  //put your code here
}
void peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation::iterate(){
  //put your code here
}
