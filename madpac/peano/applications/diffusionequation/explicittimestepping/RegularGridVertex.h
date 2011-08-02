// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_RegularGridVertex_H_
#define _PEANO_APPLICATIONS_DIFFUSION_EQUATION_EXPLICITTIMESTEPPING_RegularGridVertex_H_


#include "peano/applications/diffusionequation/explicittimestepping/records/RegularGridVertex.h"
#include "peano/kernel/regulargrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"
#include "peano/toolbox/stencil/Stencil.h"


namespace peano { 
  namespace applications { 
    namespace diffusionequation {
      namespace explicittimestepping { 
        class RegularGridVertex;
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
 * @author Tobias Weinzierl
 */
class peano::applications::diffusionequation::explicittimestepping::RegularGridVertex: public peano::kernel::regulargrid::Vertex< peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex > {
  private: 
    typedef class peano::kernel::regulargrid::Vertex< peano::applications::diffusionequation::explicittimestepping::records::RegularGridVertex >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    RegularGridVertex();

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
    RegularGridVertex(const Base::PersistentVertex& argument);
    
    static tarch::la::Vector<TWO_POWER_D,double>  readRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);

    static tarch::la::Vector<TWO_POWER_D_TIMES_D,double> readLinearSurplus(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);


    static tarch::la::Vector<TWO_POWER_D_TIMES_THREE_POWER_D,double> readStencil(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);

    static void writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );

    static void writeLinearSurplus(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D_TIMES_D,double>& values);


    void initialiseInnerVertex( double thermalDiffusivity, double temperature, double rhs, const tarch::la::Vector<DIMENSIONS,double>& h );
    void initialiseBoundaryVertex( double temperature );

    double getTemperature() const;
    double getRhs() const;
    double getResidual() const;
    peano::toolbox::stencil::Stencil getStencil() const;

    void setNewRhs( double rhs );
    void setTemperature( double value );

    void clearResidual();

    #ifdef Parallel
    /**
     * Scaling for explicit Euler
     *
     * For the explicit Euler, the residual describes the update of the
     * unknown. At the domain boundarise, it thus only describes a fraction of
     * the update stemming from the local domain. To resolve this issue, we
     * update the vertices everywhere and send away the updates (=residuals) at
     * the end of the iteration. Before the next iteration starts, we take the
     * received residuals and update the (old) temperature value once more, i.e.
     * the overall update process due to the time stepping is split up into two
     * phases: A local update that takes into account influences from the local
     * cells (at the end of the time step), and an additional update taking
     * into account contributions from remote domains (before the next iteration
     * starts).
     *
     * One problem arises as the residual is not updated directly, but it is
     * scaled with the time step size before. The code is allowed to change the
     * time step size in each iteration, i.e. it might happen that a residual is
     * sent to the neighbours with a time step size @f$ \Delta t_1 @f$, but
     * when the residual is received, the time step size is already changed to
     * @f$ \Delta t_2 @f$. In such a case, the temperature update is performed
     * with @f$ \Delta t_2 @f$, but @f$ \Delta t_1 @f$ would have been the
     * correct scaling. We resolve this issue in mergeWithNeighbour() and
     * prepareSendToNeighbour():
     *
     * - In prepareSendToNeighbour(), we scale the residual with the current
     *   time step size. This is @f$ \Delta _1 @f$ in the example above.
     * - In mergeWithNeighbour(), we scale the residual with the inverse of the
     *   current time step size. This is @f$ \Delta _2 ^{-1} @f$ in the example
     *   above.
     *
     * Both scalings use this operation.
     */
    void scaleResidual(double scaling);
    #endif
};


#endif
