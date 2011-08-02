// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
/*
 * DriftRatchetConfiguration.h
 *
 *  Created on: Aug 11, 2010
 *      Author: liebm
 */

#ifndef DRIFTRATCHETCONFIGURATION_H_
#define DRIFTRATCHETCONFIGURATION_H_

#include "tarch/irr/XML.h"
#include "tarch/logging/Log.h"
#include "peano/utils/Globals.h"
#include "tarch/la/Vector.h"
#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"
#include "peano/geometry/builtin/DriftRatchet.h"


namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class DriftRatchetConfiguration;
      }
    }
  }
}

class peano::geometry::builtin::configurations::DriftRatchetConfiguration:
public peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration {
public:

  DriftRatchetConfiguration();

  /**
   * Standard destructor
   */
  virtual ~DriftRatchetConfiguration();

  peano::geometry::GeometryObject* interpreteConfiguration() const;

  /**
   * Parse a tag corresponding to this configuration within the xml file.
   */
  void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

  /**
   * This method checks all the internal validate-flags, but it does not
   * examine the mesh width properties. To validate them, you've to call the
   * hasValidMeshWidth() operation.
   *
   * @return Whether configuration is valid.
   */
  bool isValid() const;

  virtual void toXML(std::ostream&) const;

  virtual std::string getTag() const;

private:
  /**
   * XML-Tag corresponding to grid configuration.
   */
  static const std::string TAG;
  /**
   * String of attribute name. Now usable externally (e.g. in
   * geometries).
   */
  static const std::string ATTRIBUTE_NAME;
  /**
   * String of attribute name. Now usable externally (e.g. in
   * geometries).
   */
  static const std::string ATTRIBUTE_INVERT;
  /**
   * String of subtag offset. Now usable externally (e.g. in geometries).
   */
  static const std::string ATTRIBUTE_OFFSET;

  /** minimal pore radius */
  static const std::string ATTRIBUTE_MINIMAL_RADIUS;

  /** maximal pore radius */
  static const std::string ATTRIBUTE_MAXIMAL_RADIUS;

  /** c-pore factor */
  static const std::string ATTRIBUTE_C_PORE;

  /**
   * Logging device.
   */
  static tarch::logging::Log _log;

  /**
   * If a parser error occurs, this flag is set false.
   */
  bool _fileValid;

  /**
   * Defines the offset (i.e. translation of the internal
   * origin of the corresponding geometry object).
   */
  tarch::la::Vector<DIMENSIONS,double> _offset;

  /**
   * Flag determining whether the geometry is inverted.
   */
  bool _isInverted;

  /** min. radius of the pore. This one can either be specified by the user or the default case can be used. Thus,
   *  its definition in the config is optional.
   */
  double _minimalRadius;
  bool _isDefinedMinimalRadius;

  /** max. radius of the pore */
  double _maximalRadius;

  /** true if _cPore is defined. Otherwise, this flag is false and the default CPore setting is used. */
  bool _isDefinedCPore;

  /** c-pore factor */
  double _cPore;

};

#endif /* DRIFTRATCHETCONFIGURATION_H_ */
