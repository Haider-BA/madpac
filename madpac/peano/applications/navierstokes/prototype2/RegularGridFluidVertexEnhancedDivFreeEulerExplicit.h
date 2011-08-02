// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and 
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_RegularGridFluidVertexEnhancedDivFreeEulerExplicit_H_ 
#define _PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE2_RegularGridFluidVertexEnhancedDivFreeEulerExplicit_H_


#include "peano/applications/navierstokes/prototype2/records/RegularGridFluidVertexEnhancedDivFreeEulerExplicit.h"
#include "peano/kernel/regulargrid/Vertex.h"
#include "peano/kernel/gridinterface/VertexEnumerator.h"
#include "peano/utils/Globals.h"


namespace peano { 
  namespace applications { 
    namespace navierstokes { 
      namespace prototype2 { 
      class RegularGridFluidVertexEnhancedDivFreeEulerExplicit; 
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


class peano::applications::navierstokes::prototype2::RegularGridFluidVertexEnhancedDivFreeEulerExplicit: public peano::kernel::regulargrid::Vertex< peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit > { 
  private: 
    typedef class peano::kernel::regulargrid::Vertex< peano::applications::navierstokes::prototype2::records::RegularGridFluidVertexEnhancedDivFreeEulerExplicit >  Base;

  public:
    /**
     * Default Constructor
     *
     * This constructor is required by the framework's data container. Do not 
     * remove it.
     */
    RegularGridFluidVertexEnhancedDivFreeEulerExplicit();

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
    RegularGridFluidVertexEnhancedDivFreeEulerExplicit(const Base::PersistentVertex& argument);
    




};


#endif
