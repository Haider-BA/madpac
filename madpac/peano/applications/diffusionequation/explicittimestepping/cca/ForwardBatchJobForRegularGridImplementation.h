#ifndef PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPING_CCA_FORWARDBATCHJOBFORREGULARGRID_IMPLEMENTATION
#define PEANO_APPLICATIONS_DIFFUSIONEQUATION_EXPLICITTIMESTEPPING_CCA_FORWARDBATCHJOBFORREGULARGRID_IMPLEMENTATION
#include "peano/applications/diffusionequation/explicittimestepping/cca/scicode/AbstractForwardBatchJobForRegularGrid.h"


#include <iostream>
#include <string>


namespace peano {
  namespace applications {
    namespace diffusionequation {
      namespace explicittimestepping {
        namespace cca {
          class ForwardBatchJobForRegularGridImplementation ;
        }
      }
    }
  }
}





class peano::applications::diffusionequation::explicittimestepping::cca::ForwardBatchJobForRegularGridImplementation:public peano::applications::diffusionequation::explicittimestepping::cca::AbstractForwardBatchJobForRegularGrid{
public:
  /**
   * Sets up the application.
   *
   * Initialise OpenMP, TBB, parallel environment, and so forth. Afterwards,
   * return true if all the setups were a complete success. Also, this is the
   * right place to fill lookup tables, e.g., or to configure any static data.
   */
  static bool initRemoteJob(int argc,char** argv);

  /**
   * Shutdown application.
   */
  static bool shutdownRemoteJob();

  void switchToSetupExperiment();
  void switchToSetupExperimentAndPlot();
  void switchToPerformExplitEulerTimeStep();
  void switchToPerformExplitEulerTimeStepAndPlot();
  void switchToPlotSolution();
  void switchToApplyRefineDeleteCriterion();
  void iterate();
  

};


#endif 
