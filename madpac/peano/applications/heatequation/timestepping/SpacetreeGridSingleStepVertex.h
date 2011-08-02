// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_SpacetreeGridSingleStepVertex_H_ 
#define _PEANO_APPLICATIONS_HEATEQUATION_TIMESTEPPING_SpacetreeGridSingleStepVertex_H_


#include "peano/applications/heatequation/timestepping/records/SpacetreeGridSingleStepVertex.h"
#include "peano/kernel/spacetreegrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"
#include "peano/toolbox/stencil/Stencil.h"


namespace peano { 
  namespace applications { 
    namespace heatequation { 
      namespace timestepping { 
        class SpacetreeGridSingleStepVertex;
      }
    }
  }
}


/**
 * Blueprint for regular grid vertex.
 * 
 * This file has originally been created by PeProt and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author Tobias Weinzierl
 */
class peano::applications::heatequation::timestepping::SpacetreeGridSingleStepVertex: public peano::kernel::spacetreegrid::Vertex< peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex > { 
  private: 
    typedef class peano::kernel::spacetreegrid::Vertex< peano::applications::heatequation::timestepping::records::SpacetreeGridSingleStepVertex >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    SpacetreeGridSingleStepVertex();

    /**
     * Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it. It is kind of a copy constructor that converts an object which 
     * comprises solely persistent attributes into a full attribute. This very 
     * functionality is implemented within the super type, i.e. this constructor 
     * has to invoke the correponsing super type's constructor and not the super 
     * type standard constructor.
     */
    SpacetreeGridSingleStepVertex(const Base::PersistentVertex& argument);
    
    void initialiseInnerVertex( double thermalDiffusivity, double temperature, double rhs, const tarch::la::Vector<DIMENSIONS,double>& h );
    void initialiseInnerVertex( double thermalDiffusivity, double rhs, const tarch::la::Vector<DIMENSIONS,double>& h );
    void initialiseBoundaryVertex( double temperature );
    void initialiseHangingNode();

    double getTemperature() const;
    double getOldTemperature() const;
    double getRhs() const;
    double getResidual() const;
    peano::toolbox::stencil::Stencil getStencil() const;

    void setNewRhs( double rhs );

    void clearResidual();

    void setTemperature( double value );
    void setNewOldTemperature( double value );
    void copyTemperatureToOldTemperature();

    tarch::la::Vector<DIMENSIONS,double> getLinearSurplus() const;

    tarch::la::Vector<FIVE_POWER_D,double> getProlongationStencil() const;
    tarch::la::Vector<FIVE_POWER_D,double> getRestrictionStencil() const;

    void clearSurplusMeasurements();

    static tarch::la::Vector<TWO_POWER_D,double>  readRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readOldU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices);


    static tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> readTempP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices);

    static tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double> readStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices);

    static void writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );
    static void writeRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );

    static void writeTempAP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>& values);

    static void writeStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>& values);

    static tarch::la::Vector<TWO_POWER_D_TIMES_D,double> readLinearSurplus(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridSingleStepVertex* const vertices);
    static void writeLinearSurplus(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridSingleStepVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_D,double>& values);
};


#endif
