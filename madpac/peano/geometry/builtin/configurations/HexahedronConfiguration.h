// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
/*
 * HexahedronConfiguration.h
 *
 *  Created on: Aug 11, 2010
 *      Author: liebm
 */

#ifndef HEXAHEDRONCONFIGURATION_H_
#define HEXAHEDRONCONFIGURATION_H_

#include "tarch/irr/XML.h"
#include "tarch/logging/Log.h"
#include "peano/utils/Globals.h"
#include "tarch/la/Vector.h"
#include "peano/geometry/builtin/Hexahedron.h"
#include "peano/geometry/builtin/configurations/BuiltinGeometryObjectConfiguration.h"


namespace peano {
  namespace geometry {
    namespace builtin {
      namespace configurations {
        class HexahedronConfiguration;
      }
    }
  }
}


/** config for a builtin-hexahedron
 *
 * @author Philipp Neumann
 *
 */
class peano::geometry::builtin::configurations::HexahedronConfiguration:
public peano::geometry::builtin::configurations::BuiltinGeometryObjectConfiguration {
public:

  HexahedronConfiguration();

  /**
   * Standard destructor
   */
  virtual ~HexahedronConfiguration();

private:
  /**
   * XML-Tag corresponding to grid configuration.
   */
  static const std::string TAG;

  /**
   * String of attribute name. Now usable externally (e.g. in
   * geometries).
   */
  static const std::string ATTRIBUTE_INVERT;
  /**
   * String of subtag offset. Now usable externally (e.g. in geometries).
   */
  static const std::string ATTRIBUTE_OFFSET;
  /**
   * String of subtag length. Now usable externally (e.g. in geometries).
   */
  static const std::string ATTRIBUTE_WIDTH;

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

  /** width of the box */
  tarch::la::Vector<DIMENSIONS,double> _width;

  /**
   * Flag determining whether the geometry is inverted.
   */
  bool _isInverted;

public:

  /** parses the width, offset and boundary name of the hexahedron */
  void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );

  /**
   *
   * @return Whether configuration is valid.
   */
  bool isValid() const;

  /** writes an example config of this config to an output stream */
  virtual void toXML(std::ostream&) const;

  /** returns the tag */
  virtual std::string getTag() const;

  /** returns a hexahedron geometry */
  virtual peano::geometry::GeometryObject* interpreteConfiguration() const;
};

#endif /* HEXAHEDRONCONFIGURATION_H_ */
