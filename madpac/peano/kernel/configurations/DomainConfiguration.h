//// Copyright (C) 2009 Technische Universitaet Muenchen
//// This file is part of the Peano project. For conditions of distribution and
//// use, please see the copyright notice at www5.in.tum.de/peano
//#ifndef _CONFIGURATION_DOMAINCONFIGURATION_H_
//#define _CONFIGURATION_DOMAINCONFIGURATION_H_
//
//#include "irr/XML.h"
//#include "utils/Log.h"
//#include "utils/Globals.h"
//#include "la/Vector.h"
//
//
//#include <string>
//
//namespace tarch {
//  namespace configuration {
//    class DomainConfiguration;
//  }
//}
//
//
///**
// * Represents the configuration for one domain. The semantics of this class
// * equals Configuration. A computational domain is always a rectangle, so the
// * domain configuration is defined by edge lengths and a offset. The syntax of
// * the domain is
// * <pre>
// *   <domain x0="1.0" x1="1.0" h0="..." h1="..."/>
// * </pre>
// *
// * @author Tobias Weinzierl
// * @version $Revision: 1.6 $
// */
//class tarch::configuration::DomainConfiguration {
//  public:
//    /**
//     * XML-Tag corresponding to a domain configuration.
//     */
//    static const std::string TAG;
//  private:
//    /**
//     * Logging device.
//     */
//    static tarch::utils::Log _log;
//
//    /**
//     * Stores size of domain.
//     */
//    tarch::la::Vector<DIMENSIONS,double> _domainSize;
//    /**
//     * Stores the offset of the domain.
//     */
//    tarch::la::Vector<DIMENSIONS,double> _domainOffset;
//
//    /**
//     * Flag determining weather _domainSize is valid.
//     */
//    bool _domainSizeValid;
//    /**
//     * Flag determining weather _domainOffset is valid.
//     */
//    bool _domainOffsetValid;
//
//  public:
//    /**
//     * Constructor.
//     */
//    DomainConfiguration();
//
//    /**
//     * Destructor.
//     */
//    virtual ~DomainConfiguration();
//
//    /**
//     * Parse a tag corresponding to this configuration within the xml file.
//     * The argument passed (the reader) may not be 0 and the reader's state has
//     * to be 'I've just read a tag whose name equals the TAG of this class'. The
//     * operation terminates as soon as the reader passed has read the closing
//     * TAG-Tag. On any syntactic error the operation terminates immediatly.
//     * Any successing isValid() call fails.
//     *
//     * @param xmlReader Reader to be used.
//     */
//    virtual void parseSubtag( irr::io::IrrXMLReader* xmlReader );
//
//    /**
//     * @return An array of cardinality DIMENSIONS representing the domain size.
//     *         The content is valid iff isValid() holds.
//     */
//    virtual tarch::la::Vector<DIMENSIONS,double> getDomainSize() const;
//    /**
//     * @return tarch::la::Vector<DIMENSIONS,double> of offset coordinates for domain box (lower left front
//     * corner).
//     */
//    virtual tarch::la::Vector<DIMENSIONS,double> getOffset() const;
//
//  /**
//   * This method checks all the internal validate-flags.
//   *
//     * @return Whether configuration is valid.
//     */
//    bool isValid() const;
//
//    std::string toXMLString() const;
//};
//
//bool operator==(const tarch::configuration::DomainConfiguration& configA,
//                const tarch::configuration::DomainConfiguration& configB);
//
//#endif //_CONFIGURATION_DOMAINCONFIGURATION_H_
