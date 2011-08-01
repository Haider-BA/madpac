#include "tarch/logging/Log.h"
#include "tarch/tests/TestCaseRegistry.h"
#include "tarch/configuration/ConfigurationRegistry.h"
#include "tarch/configuration/TopLevelConfiguration.h"


#include "peano/utils/Loop.h"
#include "peano/UserInterface.h"


#include "main.h"
#include "peano/peano.h"

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif

#include <cstdlib>

tarch::logging::Log _log("");


bool validateProgramArguments(int argc, char** argv) {
  bool plotError = true;
  #ifdef Parallel
  plotError = tarch::parallel::Node::getInstance().isMasterProcess();
  #endif

  bool isValidNumberOfArguments = (argc==2);

  bool writeDummyConfigFile = isValidNumberOfArguments && std::string(argv[1]) == "--example-config";

  if (writeDummyConfigFile) {
    tarch::configuration::ConfigurationRegistry::getInstance().writeDummyConfigFile(std::cout);
    return false;
  }
  else if ( isValidNumberOfArguments ) {
    std::ostringstream message;
    message << "Using configuration file " << argv[1];
    _log.debug( "validateProgramArguments(int,char**)", message.str() );
    return true;
  }
  else  {
    if (plotError) {
      std::string appName = argv[0];

      _log.error( "validateProgramArguments(int,char**)", "Usage: " );
      _log.error( "validateProgramArguments(int,char**)", "    " + appName +  " configurationfile  (runs code with config file)" );
      _log.error( "validateProgramArguments(int,char**)", "    " + appName +  " --example-config   (gives you an example config)" );
    }
    return false;
  }
}


int main(int argc, char** argv) {
  fillLookupTables();

  // TODO enhance to Peano-consistent parallel implementation
  initMolecularDynamicsCoupling(&argc,&argv);

  int parallelSetup = initParallelEnvironment(&argc,&argv);
  if ( parallelSetup!=0 ) {
    #ifdef Parallel
    // I may not use the logging, if MPI doesn't work properly.
    std::cerr << "mpi initialisation wasn't successful. Application shut down" << std::endl;
    #else
    _log.error("main()", "mpi initialisation wasn't successful. Application shut down");
    #endif
    return parallelSetup;
  }

  int sharedMemorySetup = initSharedMemoryEnvironment();
  if (sharedMemorySetup!=0) {
    _log.error("main()", "shared memory initialisation wasn't successful. Application shut down");
    return sharedMemorySetup;
  }

  int programExitCode = 0;

  if ( validateProgramArguments(argc,argv) ) {
    _log.debug( "main(int,char**)", "read configuration file" );
    std::string configFile = argv[1];
    std::list<tarch::configuration::TopLevelConfiguration*> configurations =
      tarch::configuration::ConfigurationRegistry::getInstance().readFile( configFile, "peano-configuration" );

    if (configurations.empty()) {
      _log.error( "main(int,char**)", "configuration file " + configFile + " not found or invalid file" );
      programExitCode = -1;
    }

    int executedRuns = 0;
    for (
      std::list<tarch::configuration::TopLevelConfiguration*>::iterator p = configurations.begin();
      (p != configurations.end()) && (programExitCode==0);
      p++
    ) {
      programExitCode = (*p)->interpreteConfiguration();
      executedRuns++;
    }

    tarch::configuration::ConfigurationRegistry::getInstance().freeConfigurations( configurations );

    if (programExitCode==0) {
      #ifdef Parallel
      if (tarch::parallel::Node::getInstance().isMasterProcess()) {
        _log.info( "main()", "Peano terminates successfully" );
      }
      #else
      _log.info( "main()", "Peano terminates successfully" );
      #endif
    }
    else {
      std::ostringstream msg;
      msg << "quit with error code " << programExitCode;
      _log.info( "main()", msg.str() );
    }
  }
  else {
    programExitCode = -4;
  }

  shutdownParallelEnvironment();
  shutdownSharedMemoryEnvironment();

  return programExitCode;
}
