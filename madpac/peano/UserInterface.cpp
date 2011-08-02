#include "peano/UserInterface.h"
#include "peano/utils/Globals.h"
#include "peano/utils/PeanoOptimisations.h"


#include "tarch/compiler/CompilerSpecificSettings.h"
#include "tarch/services/ServiceRepository.h"
//#include "tarch/la/Utilities.h"

#ifdef SharedTBB
#include "tarch/multicore/tbb/Core.h"
#endif

#ifdef Parallel
#include "tarch/parallel/Node.h"
#endif



#include "utils/Globals.h"

#include <sstream>
//#include <sys/resource.h>
#include <unistd.h>
#include <bitset>
#include <cstdlib>
#include <cstring>
#include <stdio.h>


tarch::logging::Log peano::UserInterface::_log("peano::UserInterface");


const std::string peano::UserInterface::_PeanoHeader("peano - release P2");
const std::string peano::UserInterface::_PeanoVersion("$Revision: 1.88 $");
const std::string peano::UserInterface::_PeanoAuthors("2005 - 2010 Technische Universitat Munchen, Informatik V");

const int peano::UserInterface::_WidthOfSolverIterationColumn(22);
const int peano::UserInterface::_WidthOfGridIterationColumn(12);
const int peano::UserInterface::_WidthOfIntegerColumn(5);


peano::UserInterface::UserInterface() {
}


peano::UserInterface::~UserInterface() {
}


void peano::UserInterface::reportRegisteredServices() {
  _log.info("reportRegisteredServices()", "services registered: " + tarch::services::ServiceRepository::getInstance().getListOfRegisteredServices() );
}


std::string peano::UserInterface::format( int SpacesPerColumn, const std::string& text ) const {
  int leadingSpaces = SpacesPerColumn - text.length();
  leadingSpaces /= 2;

  std::ostringstream result;

  for (int i=0; i<leadingSpaces; i++ ) {
    result << " ";
  }
  result << text;
  while (static_cast<int>(result.str().length()) < SpacesPerColumn) {
    result << " ";
  }

  return result.str();
}


std::string peano::UserInterface::format( int SpacesPerColumn, int value ) const {
  std::ostringstream result;

  int leadingSpaces = SpacesPerColumn-1;
  int valueCopy = value;
  while (valueCopy >= 10) {
	leadingSpaces --;
    valueCopy /= 10;
  }

  for (int i=0; i<leadingSpaces; i++) {
	result << " ";
  }
  result << value;

  return result.str();
}


std::string peano::UserInterface::format( int SpacesPerColumn, double value ) const {
  std::ostringstream result;

  result << value;

  return format( SpacesPerColumn, result.str() );
}


std::size_t peano::UserInterface::getMemoryUsage() const {
  #if defined(CompilerHasProcStat)
  char   work[4096];
  FILE*  f;
  char*  pCh;
  char* checkFgets;

  pid_t pid = getpid();

  sprintf(work, "/proc/%d/stat", (int)pid);
  f = fopen(work, "r");

  if (f == NULL) {
    std::ostringstream msg;
    msg << "can't open file " << work;
    _log.error("getMemoryUsage()", msg.str() );
    return(0);
  }

  checkFgets = fgets(work, sizeof(work), f);
  fclose(f);
  strtok(work, " ");

  for (int i = 1; i < 23; i++) {
    pCh = strtok(NULL, " ");
  }

  return(atol(pCh));
  #else
  return 0;
  #endif
}


int peano::UserInterface::getMemoryUsageKB() const {
  long u = getMemoryUsage();
  int kilo = 1024;
  int usageKB = ((u + (kilo/2)) / kilo );

  return usageKB;
}


int peano::UserInterface::getMemoryUsageMB() const {
  long u = getMemoryUsage();
  int mega = 1024 * 1024;
  int usageMB ((u + (mega/2)) / mega );

  return usageMB;
}


void peano::UserInterface::writeHeader() {
  _log.info("writeHeader()", _PeanoHeader );
  #ifdef Parallel
  int numberOfProcesses = tarch::parallel::Node::getInstance().getNumberOfNodes();
  #else
  int numberOfProcesses = 1;
  #endif

  #ifdef SharedTBB
  int numberOfThreads = tarch::multicore::tbb::Core::getInstance().getNumberOfThreads();
  #elif SharedOMP
  // @todo Das muss noch angepasst werden
  int numberOfThreads = 1;
  #else
  int numberOfThreads = 1;
  #endif

  std::ostringstream buildString;
  buildString << "build: ";
  #ifdef TBB
  buildString << "multicore=tbb ";
  #endif
  buildString << "dim=" << DIMENSIONS;

  std::ostringstream optimisationString;
  optimisationString << "optimisations: ";
  #ifdef DloopOptimiseAggressive
  optimisationString << "d-loop ";
  #endif
  #ifdef StoreOnlyPersistentAttributes
  optimisationString << "persistent-attributes ";
  #endif
  #ifdef PackedRecords
  optimisationString << "packed ";
  #endif


  _log.info("writeHeader()", buildString.str() );
  _log.info("writeHeader()", optimisationString.str() );
  _log.info("writeHeader()", _PeanoVersion );
  _log.info("writeHeader()", _PeanoAuthors );
  std::ostringstream msg;
  if (numberOfProcesses>0) {
    msg << "processes: " << numberOfProcesses << " ";
  }
  if (numberOfThreads>0) {
    msg << "threads: " << numberOfThreads;
  }

  #ifdef Parallel
  msg << " (per node)";
  #endif

  if (numberOfProcesses>0 || numberOfThreads>0) {
    _log.info("writeHeader()",msg.str());
  }
}


void peano::UserInterface::writeDatatypeStatisticsHeader() {
  _log.info( "writeDatatypeStatisticsHeader()", " --- Statistics ---" );

  std::ostringstream generalNotes;
  generalNotes << "dimensions:" << DIMENSIONS;
  _log.info( "writeDatatypeStatisticsHeader()", generalNotes.str() );

  std::ostringstream numericalEquality;
  numericalEquality << "numerical equality epsilon: " << tarch::la::NUMERICAL_ZERO_DIFFERENCE;
  _log.info( "writeDatatypeStatisticsHeader()", numericalEquality.str() );

  std::ostringstream sizeOfPrimitiveTypes;
  sizeOfPrimitiveTypes << sizeof(char) << " byte(s) per char, "
                       << sizeof(int) << " byte(s) per int, "
                       << sizeof(long int) << " byte(s) per long int, "
                       << sizeof(double) << " byte(s) per double, "
                       << sizeof(bool) << " byte(s) per bool, and "
                       << sizeof(std::bitset<DIMENSIONS>) << " byte(s) per bitset<DIM>";
  _log.info( "writeDatatypeStatisticsHeader()", sizeOfPrimitiveTypes.str() );

  #ifdef ComponentGrid
#error Does not work
  std::ostringstream sizeOfTraversionAutomatonState;
  sizeOfTraversionAutomatonState << sizeof(grid::TraversalAutomatonState)
                                << " byte(s) per grid::TraversalAutomatonState";
  _log.info( "writeDatatypeStatisticsHeader()", sizeOfTraversionAutomatonState.str() );
  #endif
}


void peano::UserInterface::writeDatatypeStatisticsTrailer() {
  _log.info( "writeDatatypeStatisticsTrailer()", " ---            ---" );
}
