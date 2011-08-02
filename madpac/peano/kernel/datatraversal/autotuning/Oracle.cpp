#include "peano/kernel/datatraversal/autotuning/Oracle.h"
#include "tarch/Assertions.h"

#include "tarch/multicore/Lock.h"


tarch::logging::Log  peano::kernel::datatraversal::autotuning::Oracle::_log( "peano::kernel::datatraversal::autotuning::Oracle" ) ;


peano::kernel::datatraversal::autotuning::Oracle& peano::kernel::datatraversal::autotuning::Oracle::getInstance() {
  static peano::kernel::datatraversal::autotuning::Oracle singleton;
  return singleton;
}


peano::kernel::datatraversal::autotuning::Oracle::Oracle():
  _oracles(0),
  _currentOracle(-1),
  _booleanSemaphore(),
  _watches(),
  _oraclePrototype(0) {
}


void peano::kernel::datatraversal::autotuning::Oracle::setOracle( OracleForOnePhase* oraclePrototype ) {
  tarch::multicore::Lock scopeLock( _booleanSemaphore );

  assertion( oraclePrototype!=0 );

  if (_oraclePrototype!=0) {
    delete _oraclePrototype;
  }
  _oraclePrototype = oraclePrototype;

  int numberOfOracles = _oracles.size();

  deleteOracles();
  createOracles(numberOfOracles);
}


void peano::kernel::datatraversal::autotuning::Oracle::plotStatistics() {
  logInfo( "plotStatistics()", "used " << _watches.size() << " oracle(s) ");

  const int AdapterStatesReservedForRepostorySteering = 3; // such as terminate, write-checkpoint, etc.
  int i=0;
  for (
    std::vector<OracleForOnePhase*>::const_iterator p = _oracles.begin();
    p != _oracles.end();
    p++
  ) {
    i++;
    if (i>AdapterStatesReservedForRepostorySteering) {
      logInfo( "plotStatistics()", "oracle " << i << ",i.e. for " << i-AdapterStatesReservedForRepostorySteering << "th adapter" );
      (*p)->plotStatistics();
    }
  }
}


peano::kernel::datatraversal::autotuning::Oracle::~Oracle() {
  deleteOracles();
  delete _oraclePrototype;
  _oraclePrototype = 0;
}


void peano::kernel::datatraversal::autotuning::Oracle::setNumberOfOracles(int value) {
  assertion( value>0 );

  tarch::multicore::Lock scopeLock( _booleanSemaphore );
  deleteOracles();
  createOracles(value);
}


void peano::kernel::datatraversal::autotuning::Oracle::createOracles(int numberOfOracles) {
  if (_oraclePrototype==0) {
	  logWarning( "createOracles(int)", "no oracle type configured" );
  }
  else {
	  assertion( _oracles.size()==0 );
	  assertion( _oraclePrototype!=0 );
	  for (int i=0; i<numberOfOracles; i++) {
	    OracleForOnePhase* newOracle = _oraclePrototype->createNewOracle();
	    _oracles.push_back( newOracle );
    }
  }
}


void peano::kernel::datatraversal::autotuning::Oracle::deleteOracles() {
  for (int i=0; i<static_cast<int>(_oracles.size()); i++) {
    if (_oracles[i]!=0) {
      delete _oracles[i];
      _oracles[i] = 0;
    }
  }
  _oracles.clear();
  _oracles.resize(0);
}


void peano::kernel::datatraversal::autotuning::Oracle::switchToOracle(int id) {
  assertion1( id>=0, id );
  assertion2( id<static_cast<int>(_oracles.size()), id, _oracles.size() );

  tarch::multicore::Lock scopeLock( _booleanSemaphore );

  _currentOracle=id;
}


int peano::kernel::datatraversal::autotuning::Oracle::parallelise(int problemSize, MethodTrace askingMethod ) {
  logTraceInWith2Arguments( "parallelise(int,int)", problemSize, askingMethod );

  if (_oraclePrototype==0) {
    logWarning( "parallelise(int,Trace)", "no oracle type configured" );
    return 0;
  }
  else {
    assertion( _currentOracle>=0 );
    assertion( _currentOracle<static_cast<int>(_oracles.size()) );

    tarch::multicore::Lock scopeLock( _booleanSemaphore );

    if ( _watches.count(askingMethod)==0 ) {
      _watches.insert(
        std::pair<MethodTrace, WatchDatabaseValue >(
          askingMethod,
          WatchDatabaseValue(tarch::utils::Watch( "", "", false),0)
        )
      );
    }

    assertion(_watches.at(askingMethod).second>=0);
    _watches.at(askingMethod).second++;

    if (_watches.at(askingMethod).second==1) {
      _watches.at(askingMethod).first.startTimer();
      logDebug( "parallelise(int,int)", "started timer" );
      int result = _oracles[_currentOracle]->parallelise(problemSize,askingMethod);
      logTraceOutWith1Argument( "parallelise(int,int)", result );
      return result;
    }
    else {
      logTraceOutWith1Argument( "parallelise(int,int)", 0 );
      return 0;
    }
  }
}


void peano::kernel::datatraversal::autotuning::Oracle::parallelSectionHasTerminated(MethodTrace askingMethod) {
  if (_oraclePrototype!=0) {
    assertion( _currentOracle>=0 );
    assertion( _currentOracle<static_cast<int>(_oracles.size()) );

    tarch::multicore::Lock scopeLock( _booleanSemaphore );

    assertion( _watches.count(askingMethod)>0 );

    assertion(_watches.at(askingMethod).second>0);
    _watches.at(askingMethod).second--;

    if (_watches.at(askingMethod).second==0) {
      _watches.at(askingMethod).first.stopTimer();
      _oracles[_currentOracle]->parallelSectionHasTerminated(_watches.at(askingMethod).first.getCalendarTime());
    }
  }
}
