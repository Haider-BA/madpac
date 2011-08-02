// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_CONFIGURATION_COMPILER_SETTINGS_VALIDATOR_H_
#define _PEANO_KERNEL_CONFIGURATION_COMPILER_SETTINGS_VALIDATOR_H_

#include "tarch/configuration/TopLevelConfiguration.h"
#include "tarch/logging/Log.h"
#include <string.h>

namespace peano {
  namespace kernel {
    namespace configurations {
      class CompilerSettingsValidator;
    }
  }
}


/**
 * The validator is used by the class Configuration to ensure compiler flags
 * were set during compilation. The file corresponds to the xml top-level tag
 * TAG. If you want to provide the opportunity to the user to validate another
 * compiler option, you first of all should create the corresponding checkX(...)
 * operation. Afterwards you've to extend the parseSubtag() operation. A
 * typical compiler validation tag within the xml file looks like
 *
 * \code
 * <assert-compiler-switch state="on"  switch="PackedRecords" />
 * \endcode
 *
 * For a list of compiler switches one can check see the private operations
 * checkXXX().
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.6 $
 */
class peano::kernel::configurations::CompilerSettingsValidator: public tarch::configuration::TopLevelConfiguration {
  private:
    /**
     * Logging interface used.
     */
    static tarch::logging::Log _log;

    /**
     * Class' opinion concerning the configuration file.
     */
    bool _fileIsValid;

    void checkLogOff( bool ifOn );

    /**
     * Check whether Dim2 is sitched on/off.
     *
     * @param ifOn Flag determing whether switch has to be set on or off.
     */
    void checkDim2( bool ifOn );

    /**
     * Check whether Dim3 is sitched on/off.
     *
     * @param ifOn Flag determing whether switch has to be set on or off.
     */
    void checkDim3( bool ifOn );

    /**
     * Check whether Dim4 is sitched on/off.
     *
     * @param ifOn Flag determing whether switch has to be set on or off.
     */
    void checkDim4( bool ifOn );

    /**
     * Check whether Debug compiler setting is sitched on/off.
     *
     * @param ifOn Flag determing whether switch has to be set on or off.
     */
    void checkDebug( bool ifOn );

    /**
     * Check whether Asserts compiler setting is sitched on/off.
     *
     * @param ifOn Flag determing whether switch has to be set on or off.
     */
    void checkAsserts( bool ifOn );

    void checkCCA( bool ifOn );

    void checkMulticore( bool ifOn );
  public:
    /**
     * Constructor.
     */
    CompilerSettingsValidator();

    /**
     * Destructor.
     */
    virtual ~CompilerSettingsValidator();

    virtual std::string getTag() const;

    /**
     * Parse a TAG-tag. The parser reads the tag, validates the context, ensures
     * the corresponding compiler switch is set or not (depending on tag) and
     * returns. The argument may not be 0. If the either the validation or the
     * compiler switch check fails, all successing isValid() calls fail.
     */
    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* _xmlReader );

    /**
     * @returns Whether all compiler switches checked using the parseSubtag()
     *          routine were valid compared to the values specified in the
     *          configuration file.
     */
    virtual bool isValid() const;

    virtual void toXML(std::ostream& out) const;

    /**
     * Clone configuration. Receiver is responsible to destroy the instance himself.
     */
    virtual TopLevelConfiguration* clone() const;

    /**
     * nop
     */
    virtual int interpreteConfiguration();
};

#endif
