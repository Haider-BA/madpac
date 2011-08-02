// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_DIFFUSION_EQUATION_CORNER_POINT_FIELD_CONFIGURATION_H_
#define _PEANO_SCENARIO_DIFFUSION_EQUATION_CORNER_POINT_FIELD_CONFIGURATION_H_

#include "scenario/diffusionequation/CornerPointField.h"
#include "tarch/configuration/Configuration.h"

#include "tarch/la/Vector.h"

#include <vector>

namespace scenario {
  namespace diffusionequation {
    namespace configurations {
      class CornerPointFieldConfiguration;
    }
  }
}


/**
 * Data format.
 *
 * You find some information at http://www.sintef.no/Projectweb/MatMoRA/Downloads/Johansen-geometry-files/.
 * However, the details are tricky.
 *
 * - The z-values always are depth values, i.e. you have to multiply them with -1.
 * - The data always is enumerated lexicographically however descending along x and y.
 */
class scenario::diffusionequation::configurations::CornerPointFieldConfiguration:
  public tarch::configuration::Configuration {
  private:
    static tarch::logging::Log          _log;

    bool                                _isValid;

    std::string                         _permeabilityFileFilename;
    std::string                         _cornerDepthsFileFilename;
    std::string                         _coordinatesFileFilename;

    tarch::la::Vector<3,double>         _boundingBoxMin;
    tarch::la::Vector<3,double>         _boundingBoxMax;

    tarch::la::Vector<2,int>            _fieldDimensions;
    int                                 _layers;
    std::vector<scenario::diffusionequation::CornerPointField::CornerPointPillar>       _entries;

    void parseFiles();

    double getNextDoubleValueFromFile( std::istream& in );
    /**
     * Takes a token from the file. If the token starts with %, the remaining
     * part of the line is removed.
     */
    std::string getNextTokenFromFile(std::istream& in);

    tarch::la::Vector<2,double> getPositionOfPillar(int x, int y) const;
    tarch::la::Vector<2,double> getPillarWidth() const;

    int getCellIndex( int x, int y, int layer ) const;
    int getCellStackIndex( int x, int y ) const;
  public:
    CornerPointFieldConfiguration();
    virtual CornerPointField* interpreteConfiguration() const;
    virtual void parseSubtag( tarch::irr::io::IrrXMLReader* xmlReader );
    virtual std::string getTag() const;
    virtual bool isValid() const;
    virtual void toXML(std::ostream& out) const;
};

#endif
