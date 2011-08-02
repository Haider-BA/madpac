// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_POISSON_MULTIGRID_SpacetreeGridVertex_H_ 
#define _PEANO_APPLICATIONS_POISSON_MULTIGRID_SpacetreeGridVertex_H_

#include "tarch/logging/Log.h"
#include "peano/applications/poisson/multigrid/records/SpacetreeGridVertex.h"
#include "peano/kernel/spacetreegrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"
#include "peano/toolbox/stencil/Stencil.h"

namespace peano{ 
  namespace applications{ 
    namespace poisson{ 
      namespace multigrid{ 
        class SpacetreeGridVertex; 
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
 * \author PeProt
 */


class peano::applications::poisson::multigrid::SpacetreeGridVertex: public peano::kernel::spacetreegrid::Vertex< peano::applications::poisson::multigrid::records::SpacetreeGridVertex > { 
  private: 
    typedef class peano::kernel::spacetreegrid::Vertex< peano::applications::poisson::multigrid::records::SpacetreeGridVertex >  Base;
    /**
     * Logging device.
     */
    static tarch::logging::Log _log;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    SpacetreeGridVertex();

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
    SpacetreeGridVertex(const Base::PersistentVertex& argument);
    
    static tarch::la::Vector<TWO_POWER_D,double>  readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);

    static tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> readTempP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);

    static tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double> readTempAP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);

    static tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double> readStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);

    static tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D,double> readR(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);

    static tarch::la::Vector<TWO_POWER_D_TIMES_FIVE_POWER_D,double> readP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const SpacetreeGridVertex* const vertices);

    static void writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );

    static void writeTempP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>& values);

    static void writeTempAP(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_TWO_POWER_D,double>& values);

    static void writeStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, SpacetreeGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double>& values);


    #ifdef Parallel
    void mergeWithNeighbour(const SpacetreeGridVertex& neighbour, int fromRank);

    void prepareSendToNeighbour();
    #endif 
    
        
    /**
     * Set the stencil. Please ensure that the stencil results from an FEM
     * discretisation, i.e. it is scaled with @f$ h^{d-2} @f$.
     *
     * @param stencil New stencil
     */
    void setStencil(const peano::toolbox::stencil::Stencil& stencil);

    /**
     * Set the right-hand side. This is a FEM code, so we have to know the
     * h-environment. The operation internally scales the argument with
     * @f$ h^d @f$.
     */
    void setRhs(double value, const tarch::la::Vector<DIMENSIONS,double>& h);

    /**
     * This operation sets the right-hand side without taking the h-environment
     * into account. It is used by the multigrid solver to set the coarse grid
     * right-hand sides, e.g. Consequently, you may not call this operation for
     * unrefined operations.
     */
    void setRhs(double value);

    void setU(double value);
    void setResidual(double value);

    double getRhs() const;
    double getResidual() const;
    double getU() const;

    tarch::la::Vector<THREE_POWER_D,double> getStencil() const;

    double getStencil(const int index) const;

    double getDiagonalElementOfStencil() const;

    tarch::la::Vector<FIVE_POWER_D,double> getP() const;
    tarch::la::Vector<FIVE_POWER_D,double> getR() const;

    double getP(const int index) const;
    double getR(const int index) const;

    void setP(const peano::toolbox::stencil::ProlongationMatrix& prolongation);
    void setR(const peano::toolbox::stencil::RestrictionMatrix& restriction);

    tarch::la::Vector<TWO_POWER_D,double> getTempP() const;
    tarch::la::Vector<TWO_POWER_D,double> getTempAP() const;

    double getTempP(const int index);
    double getTempAP(const int index);

    void setTempP(const int index, const double value);
    void setTempAP(const int index, const double value);

    void setTempP(const tarch::la::Vector<TWO_POWER_D,double>& values);
    void setTempAP(const tarch::la::Vector<TWO_POWER_D,double>& values);

    void clearTempP();
    void clearTempAP();

    void clearP();
    void clearR();

    void clearStencil();

    void addValueToStencilEntry(const int index, double value);

    void clearResidual();
};


#endif
