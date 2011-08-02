// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_RegularGridVertex_H_
#define _PEANO_APPLICATIONS_POISSON_JACOBI_TUTORIAL_RegularGridVertex_H_


#include "peano/applications/poisson/jacobitutorial/records/RegularGridVertex.h"
#include "peano/kernel/regulargrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace jacobitutorial { 
        class RegularGridVertex;
      }
    }
  }
}


class peano::applications::poisson::jacobitutorial::RegularGridVertex: public peano::kernel::regulargrid::Vertex< peano::applications::poisson::jacobitutorial::records::RegularGridVertex > { 
  private: 
    typedef class peano::kernel::regulargrid::Vertex< peano::applications::poisson::jacobitutorial::records::RegularGridVertex >  Base;

  public:
    /**
     * Create standard vertex. I don't set any special values, as the
     * initialisation is done by the mappings anyway.
     */
    RegularGridVertex();
    RegularGridVertex(const Base::PersistentVertex& argument);
    
    static tarch::la::Vector<TWO_POWER_D,double>  readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);


    static void writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );

    double getResidual() const;
    double getU() const;
    double getRhs() const;

    /**
     * This operation initialises the vertex.
     *
     * It is typically used by the create operations and sets a new value.
     * Depending on the state of the vertex (boundary, inner) this value is
     * either an initial guess for the solution or a Dirichlet boundary value.
     * Furthermore, the right-hand side is set. Besides these values, the
     * operation erases the residual.
     *
     * @param initialValue Initial value of vertex
     * @param rhs          Right-hand side of vertex (point sampling)
     * @param h            Cell width of adjacent cells. According to the FEM
     *                     formulation, we have to scale the right-hand side
     *                     with the right weight resulting from the integral
     *                     (weak) formulation.
     */
    void init(double initialValue, double rhs, const tarch::la::Vector<DIMENSIONS,double>& h);

    /**
     * Sets the residual to zero.
     */
    void clearResidual();

    /**
     * Update residual.
     *
     * Updates the vertex's value according to the rule
     * @f$ u \mapsto u + diag^{-1}(A) res @f$, i.e. this operation should only
     * be called within toucheVertexLastTime() as it needs the matrix-vector
     * part of the residual to be computed already.
     */
    void update( double relaxationFactor );

    #ifdef Parallel
    void mergeWithNeighbour(const RegularGridVertex& neighbour, int fromRank);

    void prepareSendToNeighbour();
    #endif
};


#endif
