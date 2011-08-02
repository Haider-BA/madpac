#include "peano/kernel/configurations/CompilerSettingsValidator.h"
#include "tarch/Assertions.h"

#include <cstring>


#include "tarch/configuration/TopLevelConfigurationFactory.h"
registerTopLevelConfiguration(peano::kernel::configurations::CompilerSettingsValidator)


tarch::logging::Log peano::kernel::configurations::CompilerSettingsValidator::_log("peano::kernel::configurations::CompilerSettingsValidator");


peano::kernel::configurations::CompilerSettingsValidator::CompilerSettingsValidator():
  _fileIsValid(true) {
}


peano::kernel::configurations::CompilerSettingsValidator::~CompilerSettingsValidator() {
}


void peano::kernel::configurations::CompilerSettingsValidator::toXML(std::ostream& out) const {
  out << "<!--" << std::endl
      << "  This is the configurations tag corresponding to peano::kernel::configurations::CompilerSettingsValidator. " << std::endl
      << "  Each compiler settings validation tag has to contain the following attributes " << std::endl
      << std::endl
      << "    | attribute name | semantics | allowed values " << std::endl
      << "    | state          | Should the compile flag be there or not. | on or off" << std::endl
      << "    | switch         | Which compiler flag. | on or off | Dim2, Dim3, Dim4, Debug, Asserts, LogOff, CCA, SharedTBB||SharedOMP" << std::endl
      << std::endl
      << "  and there might be several of them. They my not have subtgs." << std::endl
      << "  -->" << std::endl;
  out << "<!-- <" + getTag() + " state=\"on|off\" switch =\"compile flag(Asserts|Debug|LogOff)\" /> -->" << std::endl;
}


tarch::configuration::TopLevelConfiguration* peano::kernel::configurations::CompilerSettingsValidator::clone() const {
  CompilerSettingsValidator* result = new CompilerSettingsValidator();
  return result;
}


int peano::kernel::configurations::CompilerSettingsValidator::interpreteConfiguration() {
  return 0;
}


std::string peano::kernel::configurations::CompilerSettingsValidator::getTag() const {
  return "assert-compiler-switch";
}


void peano::kernel::configurations::CompilerSettingsValidator::parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader ) {
  assertion( xmlReader != 0 );

      if (!strcmp("Dim2", xmlReader->getAttributeValue("switch"))) {
        checkDim2(
          !strcmp("on", xmlReader->getAttributeValue("state"))
        );
      }
      else if (!strcmp("Dim3", xmlReader->getAttributeValue("switch"))) {
        checkDim3(
          !strcmp("on", xmlReader->getAttributeValue("state"))
        );
      }
      else if (!strcmp("Dim4", xmlReader->getAttributeValue("switch"))) {
        checkDim4(
          !strcmp("on", xmlReader->getAttributeValue("state"))
        );
      }
      else if (!strcmp("Debug", xmlReader->getAttributeValue("switch"))) {
        checkDebug(
          !strcmp("on", xmlReader->getAttributeValue("state"))
        );
      }
      else if (!strcmp("Asserts", xmlReader->getAttributeValue("switch"))) {
        checkAsserts(
          !strcmp("on", xmlReader->getAttributeValue("state"))
        );
      }
      else if (!strcmp("LogOff", xmlReader->getAttributeValue("switch"))) {
        checkLogOff(
          !strcmp("on", xmlReader->getAttributeValue("state"))
        );
      }
      else if (!strcmp("CCA", xmlReader->getAttributeValue("switch"))) {
    	checkCCA(
          !strcmp("on", xmlReader->getAttributeValue("state"))
        );
      }
      else if (!strcmp("SharedTBB||SharedOMP", xmlReader->getAttributeValue("switch"))) {
    	checkMulticore(
          !strcmp("on", xmlReader->getAttributeValue("state"))
        );
      }
      else {
      	_log.error( "parseSubtag(...)", "unknown switch attribute: " + std::string(xmlReader->getAttributeValue("switch")) );
      	_fileIsValid = false;
      }
}

bool peano::kernel::configurations::CompilerSettingsValidator::isValid() const {
  return _fileIsValid;
}

void peano::kernel::configurations::CompilerSettingsValidator::checkDim2( bool ifOn ) {
  #ifdef Dim2
    if (ifOn==false) {
      _log.error("checkDim2(bool)","Compiler option Dim2 must not be set" );
      _fileIsValid = false;
    }
  #else
    if (ifOn==true) {
      _log.error("checkDim2(bool)","Compiler option Dim2 has to be set" );
      _fileIsValid = false;
    }
  #endif
}

void peano::kernel::configurations::CompilerSettingsValidator::checkMulticore( bool ifOn ) {
  #if defined(SharedOMP) || defined(SharedTBB)
    if (ifOn==false) {
      _log.error("checkMulticore(bool)","Compiler option SharedTBB or SharedOMP must not be set" );
      _fileIsValid = false;
    }
  #else
    if (ifOn==true) {
      _log.error("v(bool)","Compiler option SharedTBB or SharedOMP has to be set" );
      _fileIsValid = false;
    }
  #endif
}


void peano::kernel::configurations::CompilerSettingsValidator::checkDim3( bool ifOn ) {
  #ifdef Dim3
    if (ifOn==false) {
      _log.error("checkDim3(bool)","Compiler option Dim3 must not be set" );
      _fileIsValid = false;
    }
  #else
    if (ifOn==true) {
      _log.error("checkDim3(bool)","Compiler option Dim3 has to be set" );
      _fileIsValid = false;
    }
  #endif
}

void peano::kernel::configurations::CompilerSettingsValidator::checkDim4( bool ifOn ) {
  #ifdef Dim4
    if (ifOn==false) {
      _log.error("checkDim4(bool)","Compiler option Dim4 must not be set" );
      _fileIsValid = false;
    }
  #else
    if (ifOn==true) {
      _log.error("checkDim4(bool)","Compiler option Dim4 has to be set" );
      _fileIsValid = false;
    }
  #endif
}

void peano::kernel::configurations::CompilerSettingsValidator::checkDebug( bool ifOn ) {
  #ifdef Debug
    if (ifOn==false) {
      _log.error("checkDebug(bool)","Compiler option Debug must not be set" );
      _fileIsValid = false;
    }
  #else
    if (ifOn==true) {
      _log.error("checkDebug(bool)","Compiler option Debug has to be set" );
      _fileIsValid = false;
    }
  #endif
}

void peano::kernel::configurations::CompilerSettingsValidator::checkAsserts( bool ifOn ) {
  #ifdef Asserts
    if (ifOn==false) {
      _log.error("checkAsserts(bool)","Compiler option Asserts must not be set" );
      _fileIsValid = false;
    }
  #else
    if (ifOn==true) {
      _log.error("checkAsserts(bool)","Compiler option Asserts has to be set" );
      _fileIsValid = false;
    }
  #endif
}

void peano::kernel::configurations::CompilerSettingsValidator::checkLogOff( bool ifOn ) {
  #ifdef LogOff
    if (ifOn==false) {
      _log.error("checkLogOff(bool)","Compiler option LogOff must not be set" );
      _fileIsValid = false;
    }
  #else
    if (ifOn==true) {
      _log.error("checkLogOff(bool)","Compiler option LogOff has to be set" );
      _fileIsValid = false;
    }
  #endif
}


void peano::kernel::configurations::CompilerSettingsValidator::checkCCA( bool ifOn ) {
#ifdef CCA
  if (ifOn==false) {
    _log.error("checkCCA(bool)","Compiler option CCA must not be set" );
    _fileIsValid = false;
  }
#else
  if (ifOn==true) {
    _log.error("checkCCA(bool)","Compiler option CCA has to be set" );
    _fileIsValid = false;
  }
#endif
}
