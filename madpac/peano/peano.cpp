
#include "tarch/logging/Log.h"
#include "peano/utils/Loop.h"

#include "peano.h"

#ifdef SharedTBB
#include "tarch/multicore/tbb/Core.h"
#endif
#ifdef SharedOMP
#include "tarch/multicore/openMP/Core.h"
#endif


#ifdef Parallel
#include "tarch/parallel/Node.h"
#include "tarch/parallel/NodePool.h"
#endif

#ifdef MADPAC
#ifdef ENABLE_MPI
#include <mpi.h>
#endif
#endif


void fillLookupTables() {
  setupLookupTableForTwoPowI();
  setupLookupTableForThreePowI();
  setupLookupTableForFourPowI();
  setupLookupTableForDPowI();

  peano::utils::setupLookupTableForDLinearised();
  peano::utils::setupLookupTableForDDelinearised();
}


int initParallelEnvironment(int* argc, char*** argv) {
  #ifdef Parallel
  if ( tarch::parallel::Node::getInstance().init(argc,argv) ) {
    tarch::parallel::Node::getInstance().logStatus();
    tarch::parallel::NodePool::getInstance().init();
    return 0;
  }
  else {
    return -2;
  }
  #else
  return 0;
  #endif
}


void shutdownParallelEnvironment() {
  #ifdef Parallel
  tarch::parallel::NodePool::getInstance().shutdown();
  tarch::parallel::Node::getInstance().shutdown();
  #endif
}


int initSharedMemoryEnvironment() {
  #ifdef SharedTBB
  if ( tarch::multicore::tbb::Core::getInstance().isInitialised() ) {
    return 0;
  }
  else {
    return -3;
  }
  #else
  return 0;
  #endif
}


void shutdownSharedMemoryEnvironment() {
  #ifdef SharedTBB
  tarch::multicore::tbb::Core::getInstance().shutDown();
  #endif
}


void initMolecularDynamicsCoupling(int* argc, char*** argv){
#ifdef MADPAC
#ifdef ENABLE_MPI
  MPI_Init(argc,argv);
#endif
#endif
}
