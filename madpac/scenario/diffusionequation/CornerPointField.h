// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_SCENARIO_HEAT_EQUATION_CORNER_POINT_FIELD_H_
#define _PEANO_SCENARIO_HEAT_EQUATION_CORNER_POINT_FIELD_H_

#include "peano/geometry/builtin/Hexahedron.h"
#include "scenario/diffusionequation/DiffusionEquationScenario.h"


#include <vector>


namespace scenario {
  namespace diffusionequation {
    class CornerPointField;
  }
}


class scenario::diffusionequation::CornerPointField: public scenario::diffusionequation::DiffusionEquationScenario {
  public:
    class CornerPointPillar {
      private:
        friend class scenario::diffusionequation::CornerPointField;

        struct Cell {
          double  _permeability;
          double  _cellsUpperLayer;
          double  _cellsLowerLayer;
        };

        std::vector<Cell>   _cells;
      public:
        CornerPointPillar();

        /**
         * !!! Logging
         *
         * This operation has some trace commands. However, these are switched
         * off (hardcoded) by CornerPointFieldConfiguration. The reason for
         * this is simple: The configuration typically parses the input file
         * (and adds layer data) before the log filter is interpreted, i.e.
         * even though you've specified a log filter lots of data would appear
         * on the terminal from this function. Thus, I hard-wired the switch
         * off.
         */
        void addLayerData( double permeability, double cellsUpperLayer, double cellsLowerLayer, bool sortLayersIfNecessary);

        double getPermeability( double depth ) const;

        std::string toString() const;
    };
  private:
    static tarch::logging::Log  _log;

    peano::geometry::builtin::Hexahedron    _hexahedron;
    tarch::la::Vector<2,int>                _pillars;
    std::vector<CornerPointPillar>          _entries;

    double getPorosityFromDataSet(const tarch::la::Vector<3,double>& x) const;
    tarch::la::Vector<2,double> getCornerPointPillarWidth() const;

  public:
    CornerPointField(
      const tarch::la::Vector<DIMENSIONS,double>&     fieldBoundingBox,
      const tarch::la::Vector<DIMENSIONS,double>&     fieldOffset,
      tarch::la::Vector<2,int>                        pillars,
      const std::vector<CornerPointPillar>&           entries
    );

    /**
     * Gives a cubic bounding box, i.e. not the real bounding box
     */
    virtual tarch::la::Vector<DIMENSIONS,double>   getDomainSize() const;
    virtual tarch::la::Vector<DIMENSIONS,double>   getRealBoundingBox() const;
    virtual tarch::la::Vector<DIMENSIONS,double>   getComputationalDomainOffset() const;

    virtual double       getRhs(const tarch::la::Vector<1,double>& x);
    virtual double       getInitialValue(const tarch::la::Vector<1,double>& x) const;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<1,double>& x) const;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<1,double>& x);

    virtual double       getRhs(const tarch::la::Vector<2,double>& x);
    virtual double       getInitialValue(const tarch::la::Vector<2,double>& x) const;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<2,double>& x) const;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<2,double>& x);

    virtual double       getRhs(const tarch::la::Vector<3,double>& x);
    virtual double       getInitialValue(const tarch::la::Vector<3,double>& x) const;
    virtual BoundaryType getBoundaryType(const tarch::la::Vector<3,double>& x) const;
    virtual double       getThermalDiffusivity(const tarch::la::Vector<3,double>& x);

    virtual bool isCompletelyOutside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );
    virtual bool isCompletelyInside( const tarch::la::Vector<DIMENSIONS,double>& x, const tarch::la::Vector<DIMENSIONS,double> &resolution );
    virtual bool isOutsideClosedDomain( const tarch::la::Vector<DIMENSIONS,double>& x );

    virtual double       getMaximalSamplingWidth() const;
    virtual void         setTime( double t );
    virtual void         plotInputDataToVTKFile(const std::string& data) const;
};



#endif
