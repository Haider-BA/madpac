#include "tarch/parallel/configuration/ParallelConfiguration.h"

#include "tarch/parallel/Node.h"


const std::string tarch::parallel::configuration::ParallelConfiguration::WaitWarningTime  = "time-out-warning";
const std::string tarch::parallel::configuration::ParallelConfiguration::DeadlockTimeout  = "deadlock-time-out";
const std::string tarch::parallel::configuration::ParallelConfiguration::Communicator     = "communicator";


tarch::logging::Log tarch::parallel::configuration::ParallelConfiguration::_log( "tarch::parallel::configuration::ParallelConfiguration" );


tarch::parallel::configuration::ParallelConfiguration::ParallelConfiguration():
  _timeoutWarning(-1),
  _deadlockTimeOut(-1),
  _communicator(-2) {
}


tarch::parallel::configuration::ParallelConfiguration::~ParallelConfiguration() {
}


bool tarch::parallel::configuration::ParallelConfiguration::writeWarning() const {
  return Node::getInstance().getRank()==0;
}


void tarch::parallel::configuration::ParallelConfiguration::parseSubtag( irr::io::IrrXMLReader* _xmlReader ) {
  assertion( _xmlReader != 0 );

  _timeoutWarning = _xmlReader->getAttributeValueAsInt( WaitWarningTime.c_str() );
  if ( _timeoutWarning==0 ) {
	if ( writeWarning() ) {
      _log.warning(
        "parseSubtag(...)",
        "switched off time-out warnings. Use attribute \"" + WaitWarningTime +
        "\" within tag <" + getTag() + "> to set time-out"
      );
    }
  }
  else if (_timeoutWarning*CLOCKS_PER_SEC < 1 ) {
	  if ( writeWarning() )
      _log.error(
        "parseSubgetTag()(...)", "attribute \"" + WaitWarningTime + "\" within getTag() <" + getTag() +
        "> has to have int value greater than 0 and must not create an overflow"
      );
    _timeoutWarning = -1;
  }

  _deadlockTimeOut = _xmlReader->getAttributeValueAsInt( DeadlockTimeout.c_str() );
  if ( _deadlockTimeOut==0 ) {
	if ( writeWarning() ) {
      _log.warning(
        "parseSubgetTag()(...)", "switched off deadlock time-out. Use attribute \"" + DeadlockTimeout +
        "\" within getTag() <" + getTag() + "> to set time-out"
      );
    }
  }
  else if (_deadlockTimeOut*CLOCKS_PER_SEC < 1 ) {
	  if ( writeWarning() )
      _log.error(
        "parseSubgetTag()(...)", "attribute \"" + DeadlockTimeout + "\" within getTag() <" + getTag() +
        "> has to have int value greater than 0 and must not create an overflow"
      );
    _deadlockTimeOut = -1;
  }


  if (_deadlockTimeOut<_timeoutWarning && _deadlockTimeOut>0) {
	if ( writeWarning() )
      _log.error(
        "parseSubgetTag()(...)", "attribute \"" + DeadlockTimeout +"\" within getTag() <" + getTag() +
        "> has to be greater/equal value of attribute timeout-warning"
      );
    _deadlockTimeOut = -1;
  }

  if ( _xmlReader->getAttributeValue(Communicator.c_str())==0 ) {
    if ( writeWarning() ) {
        _log.error(
          "parseSubgetTag()(...)", "attribute \"" + Communicator +"\" within getTag() <" + getTag() +
          "> is missing"
        );
      _communicator = -2;
    }
  }
  else if ("default" == std::string(_xmlReader->getAttributeValue(Communicator.c_str()))) {
    _communicator = -1;
  }
  else {
    _communicator = _xmlReader->getAttributeValueAsInt( Communicator.c_str() );
  }

  if (_communicator<0) {
    if ( writeWarning() )
      _log.error(
        "parseSubgetTag()(...)", "attribute \"" + Communicator +"\" within getTag() <" + getTag() +
        "> has to be greater/equal zero or has to have the value \"default\""
      );
    _communicator = -2;
  }
}


bool tarch::parallel::configuration::ParallelConfiguration::isValid() const {
  return (_timeoutWarning>=0) &&
         (_deadlockTimeOut>=0) &&
         (_communicator>=-1);
}


std::string tarch::parallel::configuration::ParallelConfiguration::getTag() const {
  return "parallel";
}


void tarch::parallel::configuration::ParallelConfiguration::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  Configures the parallel node. " << std::endl
      << std::endl
      << "    | attribute name | semantics | allowed values " << std::endl
      << "    | time-out-warning  | After what time (ms) shall code write a warning. | Any possitive number of zero to switch off." << std::endl
      << "    | deadlock-time-out | After what time (ms) shall code stop with a time-out if no MPI message arrives. | Any possitive number of zero to switch off. " << std::endl
      << "    | communicator      | Which communicator shall the code use. | Any positive number or 'default'. " << std::endl
      << std::endl
      << "  -->" << std::endl;
  std::ostringstream result;
  result << "<" << getTag() << " "
         << WaitWarningTime             << "=\"" << _timeoutWarning << "\" "
         << DeadlockTimeout             << "=\"" << _deadlockTimeOut << "\" "
         << Communicator                << "=\"" << _communicator << "\" />";
}


void tarch::parallel::configuration::ParallelConfiguration::interpreteConfiguration() {
  assertion(isValid());
  tarch::parallel::Node::getInstance().setTimeOutWarning(_timeoutWarning);
  tarch::parallel::Node::getInstance().setDeadlockTimeOut(_deadlockTimeOut);
  if (_communicator!=-1) {
    tarch::parallel::Node::getInstance().setCommunicator( _communicator );
  }
}
