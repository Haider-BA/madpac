// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit_H_ 
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit_H_


#include "peano/applications/navierstokes/prototype2/records/SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/kernel/spacetreegrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype2 { 
      class SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit; 
}
}
}
}


/**
 * Blueprint for regular grid vertex.
 * 
 * This file has originally been created by RaPeP and may be manually adapted to 
 * the needs of your application. We do not recommend to remove anything!
 * 
 * \author RaPeP
 */


class peano::applications::navierstokes::prototype2::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit: public peano::kernel::spacetreegrid::Vertex< peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit > { 
  private: 
    typedef class peano::kernel::spacetreegrid::Vertex< peano::applications::navierstokes::prototype2::records::SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit();

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
    SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit(const Base::PersistentVertex& argument);
    




    #ifdef Parallel
    void mergeWithNeighbour(const SpacetreeGridFluidVertexEnhancedDivFreeEulerExplicit& neighbour, int fromRank);

    void prepareSendToNeighbour();
    #endif 
};


#endif
