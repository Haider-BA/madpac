// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
//TODO remove this line, just a test
#ifndef _PEANO_APPLICATIONS_POISSON_VHHJACOBI_RegularGridVertex_H_ 
#define _PEANO_APPLICATIONS_POISSON_VHHJACOBI_RegularGridVertex_H_


#include "peano/applications/poisson/vhhjacobi/records/RegularGridVertex.h"
#include "peano/kernel/regulargrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace poisson { 
      namespace vhhjacobi { 
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
 * \author PeProt
 */


class peano::applications::poisson::vhhjacobi::RegularGridVertex: public peano::kernel::regulargrid::Vertex< peano::applications::poisson::vhhjacobi::records::RegularGridVertex > { 
  private: 
    typedef class peano::kernel::regulargrid::Vertex< peano::applications::poisson::vhhjacobi::records::RegularGridVertex >  Base;

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
    
    static tarch::la::Vector<TWO_POWER_D,double>  readResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readU(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);
    static tarch::la::Vector<TWO_POWER_D,double>  readRhs(const peano::kernel::gridinterface::VertexEnumerator& enumerator, const RegularGridVertex* const vertices);

    static void writeResidual(const peano::kernel::gridinterface::VertexEnumerator& enumerator, RegularGridVertex* const vertices, const tarch::la::Vector<TWO_POWER_D,double>& values );

    double getResidual() const;
    double getU() const;
    double getRhs() const;

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
};


#endif
